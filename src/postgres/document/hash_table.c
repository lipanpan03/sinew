#include <postgres.h> /* This include must precede all other postgres
                         dependencies */
#include <access/xact.h>
#include <utils/memutils.h>

#include <assert.h>

#include "hash_table.h"

/* Hash Table with Chaining
 *
 * Parts of this implementation provided by James Aspnes:
 * http://pine.cs.yale.edu/pinewiki/C/HashTables
 */

static void *(*xact_palloc0)(MemoryContext, Size) = MemoryContextAllocZero;

struct element {
    char* key;
    int value;
    struct element* next;
};

struct table {
    size_t num_elem;
    size_t size;
    element_t** entries;
};

//internal helper methods
#define MULTIPLIER (37)

static size_t
hash(const char* key)
{
    unsigned const char *uKey;
    size_t val;

    uKey = (unsigned const char*)key;
    val = 0;

    while (*uKey) {
        val = val * MULTIPLIER + *uKey;
        ++uKey;
    }

    return val;
}

#define MAX_LOAD (1)
// Similar syntax to realloc
static table_t *
resize(table_t* ht, size_t new_size)
{
    element_t **new_entries, **old_entries;
    size_t old_size;
    size_t i;

    new_entries = xact_palloc0(CurTransactionContext, new_size * sizeof(element_t*));

    old_entries = ht->entries;
    ht->entries = new_entries; // Swap out the underlying array

    // Iterate over each element in old entries. Insert into new entries, by
    // putting the elements into a hash table with new entries as the underlying
    // storage.
    old_size = ht->size;
    for (i = 0; i < old_size; i++) {
        element_t *cur_elem, *temp;

        cur_elem = old_entries[i];
        while (cur_elem) {
            temp = cur_elem;
            put(ht, cur_elem->key, cur_elem->value);
            cur_elem = cur_elem->next;
            pfree(temp);
        }
    }
    pfree(old_entries);

    return ht;
}

static element_t *
make_elem(const char* key, const int val)
{
    element_t *new_elem;
    size_t keylen;

    new_elem = xact_palloc0(CurTransactionContext, sizeof(element_t));

    keylen = strlen(key);
    new_elem->key = xact_palloc0(CurTransactionContext, keylen + 1);
    strcpy(new_elem->key, key);

    new_elem->value = val;

    return new_elem;
}

#define INIT_SIZE (128)
//Macro to return index
#define index(ht, key) (hash(key) % ht->size)

table_t *
make_table()
{
    table_t* new_table;

    new_table = xact_palloc0(CurTransactionContext, sizeof(table_t));
    new_table->entries = xact_palloc0(CurTransactionContext,
                                      INIT_SIZE * sizeof(element_t*));
    new_table->size = INIT_SIZE;
    new_table->num_elem = 0;

    return new_table;
}

const int
get(table_t* ht, char* key)
{
    size_t pos;
    element_t *cur_elem;

    pos = index(ht, key);
    cur_elem = ht->entries[pos];

    while (cur_elem != NULL) {
        // elog(WARNING, "key: %s, curelemkey: %s", key, cur_elem->key);
        if (!strcmp(cur_elem->key, key)) {
            return cur_elem->value;
        }
        cur_elem = cur_elem->next;
    }

    //no entry; whether because index was empty or not in chain
    return -1;
}

const element_t* put(table_t* ht, char* key, int val)
{
    size_t pos;
    element_t *head, *cur_elem;
    element_t *new_elem;

    pos = index(ht, key);
    head = ht->entries[pos];
    cur_elem = head;

    while (cur_elem != NULL) {
        if (!strcmp(cur_elem->key, key)) {
            cur_elem->value = val;
            return cur_elem;
        }
    }

    new_elem = make_elem(key, val); /* Will elog(ERROR) on failure */
    new_elem->next = head;
    ht->entries[pos] = new_elem;
    ++(ht->num_elem);

    if (ht->num_elem == ht->size * MAX_LOAD) {
        resize(ht, ht->size * 2);
    }

    return head;
}
