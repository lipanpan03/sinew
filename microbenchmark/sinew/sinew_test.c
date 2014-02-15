#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "document.h"
#include "schema.h"
#include "../json.h"

char dbname[] = "sinew_test.db";
char schemafname[] = "sinew_test.schema";
const char projected_keyname[] = "sparse_987";
const char projected_typename[] = STRING_TYPE;

int test_serialize(FILE* infile);
int test_deserialize(FILE *outfile);
int test_projection(FILE *outfile);

int main(int argc, char** argv) {
    char *infilename, *outfilename, *extract_outfilename;
    FILE *infile, *outfile, *extract_outfile;
    clock_t start, diff;
    int msec;

    infilename = argv[1];
    infile = fopen(infilename, "r");
    outfilename = argv[2];
    outfile = fopen(outfilename, "w");
    extract_outfilename = argv[3];
    extract_outfile = fopen(extract_outfilename, "w");

    // Measures CPU Time
    // TODO: DRY
    start = clock();
    if (test_serialize(infile)) {
        exit(EXIT_FAILURE);
    }
    diff = clock() - start;
    msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Serialize: %d ms", msec);

    start = clock();
    if (test_deserialize(outfile)) {
        exit(EXIT_FAILURE);
    }
    diff = clock() - start;
    msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Deserialize: %d ms", msec);

    start = clock();
    if (test_projection(extract_outfile)) {
        exit(EXIT_FAILURE);
    }
    diff = clock() - start;
    msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Extract: %d ms", msec);

    fclose(infile);
    fclose(outfile);
    fclose(extract_outfile);
}

/* Read all the records and print them */
int test_deserialize(FILE *outfile) {
    FILE *dbfile, *schemafile;
    int bsize;
    char *binary, *json;

    dbfile = fopen(dbname, "r");
    schemafile = fopen(schemafname, "r");

    read_schema(schemafile);

    fread(&bsize, sizeof(int), 1, dbfile);
    while (!feof(dbfile)) {
        binary = malloc(bsize);
        fread(binary, bsize, 1, dbfile);

        json = binary_document_to_string(binary);
        fprintf(outfile, "%s\n", json);

        free(json);
        free(binary);
        fread(&bsize, sizeof(int), 1, dbfile);
    }

    fclose(schemafile);

    return 1;
}

int test_projection(FILE *outfile) {
    FILE *dbfile, *schemafile;
    int attr_id, bsize;
    char *binary, *value;
    char *attr_listing;
    int natts, buffpos, pos, len;
    int offstart, offend;

    dbfile = fopen(dbname, "r");
    schemafile = fopen(schemafname, "r");

    read_schema(schemafile);

    fread(&bsize, sizeof(int), 1, dbfile);
    while (!feof(dbfile)) {
        binary = malloc(bsize);
        fread(binary, bsize, 1, dbfile);

        // NOTE: Hardcoded because I'm just testing one extraction
        attr_id = get_attribute_id(projected_keyname, projected_typename);

        memcpy(&natts, binary, sizeof(int));
        buffpos = sizeof(int);
        attr_listing = NULL;
        attr_listing = bsearch(&attr_id,
                               binary + buffpos,
                               natts,
                               sizeof(int),
                               int_comparator);
        pos = (attr_listing - buffpos - binary) / sizeof(int);
        buffpos += natts * sizeof(int);
        memcpy(&offstart, binary + buffpos + pos * sizeof(int), sizeof(int));
        memcpy(&offend, binary + buffpos + (pos + 1) * sizeof(int), sizeof(int));
        len = offend - offstart;

        value = malloc(len + 1);
        memcpy(value, binary + offstart, len);
        value[len] = '\0';

        fprintf(outfile, "%s\n", value);

        free(value);
        free(binary);
        fread(&bsize, sizeof(int), 1, dbfile);
    }

    fclose(schemafile);

    return 1;
}

// NOTE: File must be \n terminated
int test_serialize(FILE* infile) {
    char *buffer, *binary;
    size_t len, read;
    size_t binsize;
    FILE *dbfile, *schemafile;

    dbfile = fopen(dbname, "w");
    schemafile = fopen(schemafname, "w");

    buffer = NULL;
    len = 0;
    while ((read = getline(&buffer, &len, infile)) != -1) {
        binsize = document_to_binary(buffer, &binary);
        fwrite(&binsize, sizeof(binsize), 1, dbfile);
        fwrite(binary, binsize, 1, dbfile);

        // Cleanup
        free(buffer);
        free(binary);
        buffer = NULL;
        len = 0;
    }

    dump_schema(schemafile);

    fclose(dbfile);

    return 1;
}
