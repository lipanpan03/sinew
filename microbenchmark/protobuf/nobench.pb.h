// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nobench.proto

#ifndef PROTOBUF_nobench_2eproto__INCLUDED
#define PROTOBUF_nobench_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_nobench_2eproto();
void protobuf_AssignDesc_nobench_2eproto();
void protobuf_ShutdownFile_nobench_2eproto();

class NoBench;
class NoBench_NestedObj;

// ===================================================================

class NoBench_NestedObj : public ::google::protobuf::Message {
 public:
  NoBench_NestedObj();
  virtual ~NoBench_NestedObj();

  NoBench_NestedObj(const NoBench_NestedObj& from);

  inline NoBench_NestedObj& operator=(const NoBench_NestedObj& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NoBench_NestedObj& default_instance();

  void Swap(NoBench_NestedObj* other);

  // implements Message ----------------------------------------------

  NoBench_NestedObj* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NoBench_NestedObj& from);
  void MergeFrom(const NoBench_NestedObj& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string str_str = 1;
  inline bool has_str_str() const;
  inline void clear_str_str();
  static const int kStrStrFieldNumber = 1;
  inline const ::std::string& str_str() const;
  inline void set_str_str(const ::std::string& value);
  inline void set_str_str(const char* value);
  inline void set_str_str(const char* value, size_t size);
  inline ::std::string* mutable_str_str();
  inline ::std::string* release_str_str();
  inline void set_allocated_str_str(::std::string* str_str);

  // optional int64 num_int = 2;
  inline bool has_num_int() const;
  inline void clear_num_int();
  static const int kNumIntFieldNumber = 2;
  inline ::google::protobuf::int64 num_int() const;
  inline void set_num_int(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:NoBench.NestedObj)
 private:
  inline void set_has_str_str();
  inline void clear_has_str_str();
  inline void set_has_num_int();
  inline void clear_has_num_int();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* str_str_;
  ::google::protobuf::int64 num_int_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_nobench_2eproto();
  friend void protobuf_AssignDesc_nobench_2eproto();
  friend void protobuf_ShutdownFile_nobench_2eproto();

  void InitAsDefaultInstance();
  static NoBench_NestedObj* default_instance_;
};
// -------------------------------------------------------------------

class NoBench : public ::google::protobuf::Message {
 public:
  NoBench();
  virtual ~NoBench();

  NoBench(const NoBench& from);

  inline NoBench& operator=(const NoBench& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NoBench& default_instance();

  void Swap(NoBench* other);

  // implements Message ----------------------------------------------

  NoBench* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NoBench& from);
  void MergeFrom(const NoBench& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef NoBench_NestedObj NestedObj;

  // accessors -------------------------------------------------------

  // optional string str1_str = 1;
  inline bool has_str1_str() const;
  inline void clear_str1_str();
  static const int kStr1StrFieldNumber = 1;
  inline const ::std::string& str1_str() const;
  inline void set_str1_str(const ::std::string& value);
  inline void set_str1_str(const char* value);
  inline void set_str1_str(const char* value, size_t size);
  inline ::std::string* mutable_str1_str();
  inline ::std::string* release_str1_str();
  inline void set_allocated_str1_str(::std::string* str1_str);

  // optional string str2_str = 2;
  inline bool has_str2_str() const;
  inline void clear_str2_str();
  static const int kStr2StrFieldNumber = 2;
  inline const ::std::string& str2_str() const;
  inline void set_str2_str(const ::std::string& value);
  inline void set_str2_str(const char* value);
  inline void set_str2_str(const char* value, size_t size);
  inline ::std::string* mutable_str2_str();
  inline ::std::string* release_str2_str();
  inline void set_allocated_str2_str(::std::string* str2_str);

  // optional int64 num_int = 3;
  inline bool has_num_int() const;
  inline void clear_num_int();
  static const int kNumIntFieldNumber = 3;
  inline ::google::protobuf::int64 num_int() const;
  inline void set_num_int(::google::protobuf::int64 value);

  // optional bool bool_bool = 4;
  inline bool has_bool_bool() const;
  inline void clear_bool_bool();
  static const int kBoolBoolFieldNumber = 4;
  inline bool bool_bool() const;
  inline void set_bool_bool(bool value);

  // optional int64 dyn1_int = 5;
  inline bool has_dyn1_int() const;
  inline void clear_dyn1_int();
  static const int kDyn1IntFieldNumber = 5;
  inline ::google::protobuf::int64 dyn1_int() const;
  inline void set_dyn1_int(::google::protobuf::int64 value);

  // optional string dyn1_str = 6;
  inline bool has_dyn1_str() const;
  inline void clear_dyn1_str();
  static const int kDyn1StrFieldNumber = 6;
  inline const ::std::string& dyn1_str() const;
  inline void set_dyn1_str(const ::std::string& value);
  inline void set_dyn1_str(const char* value);
  inline void set_dyn1_str(const char* value, size_t size);
  inline ::std::string* mutable_dyn1_str();
  inline ::std::string* release_dyn1_str();
  inline void set_allocated_dyn1_str(::std::string* dyn1_str);

  // optional int64 dyn2_int = 7;
  inline bool has_dyn2_int() const;
  inline void clear_dyn2_int();
  static const int kDyn2IntFieldNumber = 7;
  inline ::google::protobuf::int64 dyn2_int() const;
  inline void set_dyn2_int(::google::protobuf::int64 value);

  // optional string dyn2_str = 8;
  inline bool has_dyn2_str() const;
  inline void clear_dyn2_str();
  static const int kDyn2StrFieldNumber = 8;
  inline const ::std::string& dyn2_str() const;
  inline void set_dyn2_str(const ::std::string& value);
  inline void set_dyn2_str(const char* value);
  inline void set_dyn2_str(const char* value, size_t size);
  inline ::std::string* mutable_dyn2_str();
  inline ::std::string* release_dyn2_str();
  inline void set_allocated_dyn2_str(::std::string* dyn2_str);

  // optional bool dyn2_bool = 9;
  inline bool has_dyn2_bool() const;
  inline void clear_dyn2_bool();
  static const int kDyn2BoolFieldNumber = 9;
  inline bool dyn2_bool() const;
  inline void set_dyn2_bool(bool value);

  // repeated string nested_arr_str = 10;
  inline int nested_arr_str_size() const;
  inline void clear_nested_arr_str();
  static const int kNestedArrStrFieldNumber = 10;
  inline const ::std::string& nested_arr_str(int index) const;
  inline ::std::string* mutable_nested_arr_str(int index);
  inline void set_nested_arr_str(int index, const ::std::string& value);
  inline void set_nested_arr_str(int index, const char* value);
  inline void set_nested_arr_str(int index, const char* value, size_t size);
  inline ::std::string* add_nested_arr_str();
  inline void add_nested_arr_str(const ::std::string& value);
  inline void add_nested_arr_str(const char* value);
  inline void add_nested_arr_str(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& nested_arr_str() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_nested_arr_str();

  // optional .NoBench.NestedObj nested_obj_obj = 11;
  inline bool has_nested_obj_obj() const;
  inline void clear_nested_obj_obj();
  static const int kNestedObjObjFieldNumber = 11;
  inline const ::NoBench_NestedObj& nested_obj_obj() const;
  inline ::NoBench_NestedObj* mutable_nested_obj_obj();
  inline ::NoBench_NestedObj* release_nested_obj_obj();
  inline void set_allocated_nested_obj_obj(::NoBench_NestedObj* nested_obj_obj);

  // repeated string sparse_str = 12;
  inline int sparse_str_size() const;
  inline void clear_sparse_str();
  static const int kSparseStrFieldNumber = 12;
  inline const ::std::string& sparse_str(int index) const;
  inline ::std::string* mutable_sparse_str(int index);
  inline void set_sparse_str(int index, const ::std::string& value);
  inline void set_sparse_str(int index, const char* value);
  inline void set_sparse_str(int index, const char* value, size_t size);
  inline ::std::string* add_sparse_str();
  inline void add_sparse_str(const ::std::string& value);
  inline void add_sparse_str(const char* value);
  inline void add_sparse_str(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& sparse_str() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_sparse_str();

  // optional string sparse_987_str = 13;
  inline bool has_sparse_987_str() const;
  inline void clear_sparse_987_str();
  static const int kSparse987StrFieldNumber = 13;
  inline const ::std::string& sparse_987_str() const;
  inline void set_sparse_987_str(const ::std::string& value);
  inline void set_sparse_987_str(const char* value);
  inline void set_sparse_987_str(const char* value, size_t size);
  inline ::std::string* mutable_sparse_987_str();
  inline ::std::string* release_sparse_987_str();
  inline void set_allocated_sparse_987_str(::std::string* sparse_987_str);

  // optional int64 thousandth = 1012;
  inline bool has_thousandth() const;
  inline void clear_thousandth();
  static const int kThousandthFieldNumber = 1012;
  inline ::google::protobuf::int64 thousandth() const;
  inline void set_thousandth(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:NoBench)
 private:
  inline void set_has_str1_str();
  inline void clear_has_str1_str();
  inline void set_has_str2_str();
  inline void clear_has_str2_str();
  inline void set_has_num_int();
  inline void clear_has_num_int();
  inline void set_has_bool_bool();
  inline void clear_has_bool_bool();
  inline void set_has_dyn1_int();
  inline void clear_has_dyn1_int();
  inline void set_has_dyn1_str();
  inline void clear_has_dyn1_str();
  inline void set_has_dyn2_int();
  inline void clear_has_dyn2_int();
  inline void set_has_dyn2_str();
  inline void clear_has_dyn2_str();
  inline void set_has_dyn2_bool();
  inline void clear_has_dyn2_bool();
  inline void set_has_nested_obj_obj();
  inline void clear_has_nested_obj_obj();
  inline void set_has_sparse_987_str();
  inline void clear_has_sparse_987_str();
  inline void set_has_thousandth();
  inline void clear_has_thousandth();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* str1_str_;
  ::std::string* str2_str_;
  ::google::protobuf::int64 num_int_;
  ::google::protobuf::int64 dyn1_int_;
  ::std::string* dyn1_str_;
  ::google::protobuf::int64 dyn2_int_;
  ::std::string* dyn2_str_;
  ::google::protobuf::RepeatedPtrField< ::std::string> nested_arr_str_;
  ::NoBench_NestedObj* nested_obj_obj_;
  ::google::protobuf::RepeatedPtrField< ::std::string> sparse_str_;
  ::std::string* sparse_987_str_;
  ::google::protobuf::int64 thousandth_;
  bool bool_bool_;
  bool dyn2_bool_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(14 + 31) / 32];

  friend void  protobuf_AddDesc_nobench_2eproto();
  friend void protobuf_AssignDesc_nobench_2eproto();
  friend void protobuf_ShutdownFile_nobench_2eproto();

  void InitAsDefaultInstance();
  static NoBench* default_instance_;
};
// ===================================================================


// ===================================================================

// NoBench_NestedObj

// optional string str_str = 1;
inline bool NoBench_NestedObj::has_str_str() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NoBench_NestedObj::set_has_str_str() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NoBench_NestedObj::clear_has_str_str() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NoBench_NestedObj::clear_str_str() {
  if (str_str_ != &::google::protobuf::internal::kEmptyString) {
    str_str_->clear();
  }
  clear_has_str_str();
}
inline const ::std::string& NoBench_NestedObj::str_str() const {
  return *str_str_;
}
inline void NoBench_NestedObj::set_str_str(const ::std::string& value) {
  set_has_str_str();
  if (str_str_ == &::google::protobuf::internal::kEmptyString) {
    str_str_ = new ::std::string;
  }
  str_str_->assign(value);
}
inline void NoBench_NestedObj::set_str_str(const char* value) {
  set_has_str_str();
  if (str_str_ == &::google::protobuf::internal::kEmptyString) {
    str_str_ = new ::std::string;
  }
  str_str_->assign(value);
}
inline void NoBench_NestedObj::set_str_str(const char* value, size_t size) {
  set_has_str_str();
  if (str_str_ == &::google::protobuf::internal::kEmptyString) {
    str_str_ = new ::std::string;
  }
  str_str_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NoBench_NestedObj::mutable_str_str() {
  set_has_str_str();
  if (str_str_ == &::google::protobuf::internal::kEmptyString) {
    str_str_ = new ::std::string;
  }
  return str_str_;
}
inline ::std::string* NoBench_NestedObj::release_str_str() {
  clear_has_str_str();
  if (str_str_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = str_str_;
    str_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NoBench_NestedObj::set_allocated_str_str(::std::string* str_str) {
  if (str_str_ != &::google::protobuf::internal::kEmptyString) {
    delete str_str_;
  }
  if (str_str) {
    set_has_str_str();
    str_str_ = str_str;
  } else {
    clear_has_str_str();
    str_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 num_int = 2;
inline bool NoBench_NestedObj::has_num_int() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NoBench_NestedObj::set_has_num_int() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NoBench_NestedObj::clear_has_num_int() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NoBench_NestedObj::clear_num_int() {
  num_int_ = GOOGLE_LONGLONG(0);
  clear_has_num_int();
}
inline ::google::protobuf::int64 NoBench_NestedObj::num_int() const {
  return num_int_;
}
inline void NoBench_NestedObj::set_num_int(::google::protobuf::int64 value) {
  set_has_num_int();
  num_int_ = value;
}

// -------------------------------------------------------------------

// NoBench

// optional string str1_str = 1;
inline bool NoBench::has_str1_str() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NoBench::set_has_str1_str() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NoBench::clear_has_str1_str() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NoBench::clear_str1_str() {
  if (str1_str_ != &::google::protobuf::internal::kEmptyString) {
    str1_str_->clear();
  }
  clear_has_str1_str();
}
inline const ::std::string& NoBench::str1_str() const {
  return *str1_str_;
}
inline void NoBench::set_str1_str(const ::std::string& value) {
  set_has_str1_str();
  if (str1_str_ == &::google::protobuf::internal::kEmptyString) {
    str1_str_ = new ::std::string;
  }
  str1_str_->assign(value);
}
inline void NoBench::set_str1_str(const char* value) {
  set_has_str1_str();
  if (str1_str_ == &::google::protobuf::internal::kEmptyString) {
    str1_str_ = new ::std::string;
  }
  str1_str_->assign(value);
}
inline void NoBench::set_str1_str(const char* value, size_t size) {
  set_has_str1_str();
  if (str1_str_ == &::google::protobuf::internal::kEmptyString) {
    str1_str_ = new ::std::string;
  }
  str1_str_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NoBench::mutable_str1_str() {
  set_has_str1_str();
  if (str1_str_ == &::google::protobuf::internal::kEmptyString) {
    str1_str_ = new ::std::string;
  }
  return str1_str_;
}
inline ::std::string* NoBench::release_str1_str() {
  clear_has_str1_str();
  if (str1_str_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = str1_str_;
    str1_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NoBench::set_allocated_str1_str(::std::string* str1_str) {
  if (str1_str_ != &::google::protobuf::internal::kEmptyString) {
    delete str1_str_;
  }
  if (str1_str) {
    set_has_str1_str();
    str1_str_ = str1_str;
  } else {
    clear_has_str1_str();
    str1_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string str2_str = 2;
inline bool NoBench::has_str2_str() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NoBench::set_has_str2_str() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NoBench::clear_has_str2_str() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NoBench::clear_str2_str() {
  if (str2_str_ != &::google::protobuf::internal::kEmptyString) {
    str2_str_->clear();
  }
  clear_has_str2_str();
}
inline const ::std::string& NoBench::str2_str() const {
  return *str2_str_;
}
inline void NoBench::set_str2_str(const ::std::string& value) {
  set_has_str2_str();
  if (str2_str_ == &::google::protobuf::internal::kEmptyString) {
    str2_str_ = new ::std::string;
  }
  str2_str_->assign(value);
}
inline void NoBench::set_str2_str(const char* value) {
  set_has_str2_str();
  if (str2_str_ == &::google::protobuf::internal::kEmptyString) {
    str2_str_ = new ::std::string;
  }
  str2_str_->assign(value);
}
inline void NoBench::set_str2_str(const char* value, size_t size) {
  set_has_str2_str();
  if (str2_str_ == &::google::protobuf::internal::kEmptyString) {
    str2_str_ = new ::std::string;
  }
  str2_str_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NoBench::mutable_str2_str() {
  set_has_str2_str();
  if (str2_str_ == &::google::protobuf::internal::kEmptyString) {
    str2_str_ = new ::std::string;
  }
  return str2_str_;
}
inline ::std::string* NoBench::release_str2_str() {
  clear_has_str2_str();
  if (str2_str_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = str2_str_;
    str2_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NoBench::set_allocated_str2_str(::std::string* str2_str) {
  if (str2_str_ != &::google::protobuf::internal::kEmptyString) {
    delete str2_str_;
  }
  if (str2_str) {
    set_has_str2_str();
    str2_str_ = str2_str;
  } else {
    clear_has_str2_str();
    str2_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 num_int = 3;
inline bool NoBench::has_num_int() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NoBench::set_has_num_int() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NoBench::clear_has_num_int() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NoBench::clear_num_int() {
  num_int_ = GOOGLE_LONGLONG(0);
  clear_has_num_int();
}
inline ::google::protobuf::int64 NoBench::num_int() const {
  return num_int_;
}
inline void NoBench::set_num_int(::google::protobuf::int64 value) {
  set_has_num_int();
  num_int_ = value;
}

// optional bool bool_bool = 4;
inline bool NoBench::has_bool_bool() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NoBench::set_has_bool_bool() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NoBench::clear_has_bool_bool() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NoBench::clear_bool_bool() {
  bool_bool_ = false;
  clear_has_bool_bool();
}
inline bool NoBench::bool_bool() const {
  return bool_bool_;
}
inline void NoBench::set_bool_bool(bool value) {
  set_has_bool_bool();
  bool_bool_ = value;
}

// optional int64 dyn1_int = 5;
inline bool NoBench::has_dyn1_int() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NoBench::set_has_dyn1_int() {
  _has_bits_[0] |= 0x00000010u;
}
inline void NoBench::clear_has_dyn1_int() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void NoBench::clear_dyn1_int() {
  dyn1_int_ = GOOGLE_LONGLONG(0);
  clear_has_dyn1_int();
}
inline ::google::protobuf::int64 NoBench::dyn1_int() const {
  return dyn1_int_;
}
inline void NoBench::set_dyn1_int(::google::protobuf::int64 value) {
  set_has_dyn1_int();
  dyn1_int_ = value;
}

// optional string dyn1_str = 6;
inline bool NoBench::has_dyn1_str() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void NoBench::set_has_dyn1_str() {
  _has_bits_[0] |= 0x00000020u;
}
inline void NoBench::clear_has_dyn1_str() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void NoBench::clear_dyn1_str() {
  if (dyn1_str_ != &::google::protobuf::internal::kEmptyString) {
    dyn1_str_->clear();
  }
  clear_has_dyn1_str();
}
inline const ::std::string& NoBench::dyn1_str() const {
  return *dyn1_str_;
}
inline void NoBench::set_dyn1_str(const ::std::string& value) {
  set_has_dyn1_str();
  if (dyn1_str_ == &::google::protobuf::internal::kEmptyString) {
    dyn1_str_ = new ::std::string;
  }
  dyn1_str_->assign(value);
}
inline void NoBench::set_dyn1_str(const char* value) {
  set_has_dyn1_str();
  if (dyn1_str_ == &::google::protobuf::internal::kEmptyString) {
    dyn1_str_ = new ::std::string;
  }
  dyn1_str_->assign(value);
}
inline void NoBench::set_dyn1_str(const char* value, size_t size) {
  set_has_dyn1_str();
  if (dyn1_str_ == &::google::protobuf::internal::kEmptyString) {
    dyn1_str_ = new ::std::string;
  }
  dyn1_str_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NoBench::mutable_dyn1_str() {
  set_has_dyn1_str();
  if (dyn1_str_ == &::google::protobuf::internal::kEmptyString) {
    dyn1_str_ = new ::std::string;
  }
  return dyn1_str_;
}
inline ::std::string* NoBench::release_dyn1_str() {
  clear_has_dyn1_str();
  if (dyn1_str_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = dyn1_str_;
    dyn1_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NoBench::set_allocated_dyn1_str(::std::string* dyn1_str) {
  if (dyn1_str_ != &::google::protobuf::internal::kEmptyString) {
    delete dyn1_str_;
  }
  if (dyn1_str) {
    set_has_dyn1_str();
    dyn1_str_ = dyn1_str;
  } else {
    clear_has_dyn1_str();
    dyn1_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 dyn2_int = 7;
inline bool NoBench::has_dyn2_int() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void NoBench::set_has_dyn2_int() {
  _has_bits_[0] |= 0x00000040u;
}
inline void NoBench::clear_has_dyn2_int() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void NoBench::clear_dyn2_int() {
  dyn2_int_ = GOOGLE_LONGLONG(0);
  clear_has_dyn2_int();
}
inline ::google::protobuf::int64 NoBench::dyn2_int() const {
  return dyn2_int_;
}
inline void NoBench::set_dyn2_int(::google::protobuf::int64 value) {
  set_has_dyn2_int();
  dyn2_int_ = value;
}

// optional string dyn2_str = 8;
inline bool NoBench::has_dyn2_str() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void NoBench::set_has_dyn2_str() {
  _has_bits_[0] |= 0x00000080u;
}
inline void NoBench::clear_has_dyn2_str() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void NoBench::clear_dyn2_str() {
  if (dyn2_str_ != &::google::protobuf::internal::kEmptyString) {
    dyn2_str_->clear();
  }
  clear_has_dyn2_str();
}
inline const ::std::string& NoBench::dyn2_str() const {
  return *dyn2_str_;
}
inline void NoBench::set_dyn2_str(const ::std::string& value) {
  set_has_dyn2_str();
  if (dyn2_str_ == &::google::protobuf::internal::kEmptyString) {
    dyn2_str_ = new ::std::string;
  }
  dyn2_str_->assign(value);
}
inline void NoBench::set_dyn2_str(const char* value) {
  set_has_dyn2_str();
  if (dyn2_str_ == &::google::protobuf::internal::kEmptyString) {
    dyn2_str_ = new ::std::string;
  }
  dyn2_str_->assign(value);
}
inline void NoBench::set_dyn2_str(const char* value, size_t size) {
  set_has_dyn2_str();
  if (dyn2_str_ == &::google::protobuf::internal::kEmptyString) {
    dyn2_str_ = new ::std::string;
  }
  dyn2_str_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NoBench::mutable_dyn2_str() {
  set_has_dyn2_str();
  if (dyn2_str_ == &::google::protobuf::internal::kEmptyString) {
    dyn2_str_ = new ::std::string;
  }
  return dyn2_str_;
}
inline ::std::string* NoBench::release_dyn2_str() {
  clear_has_dyn2_str();
  if (dyn2_str_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = dyn2_str_;
    dyn2_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NoBench::set_allocated_dyn2_str(::std::string* dyn2_str) {
  if (dyn2_str_ != &::google::protobuf::internal::kEmptyString) {
    delete dyn2_str_;
  }
  if (dyn2_str) {
    set_has_dyn2_str();
    dyn2_str_ = dyn2_str;
  } else {
    clear_has_dyn2_str();
    dyn2_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bool dyn2_bool = 9;
inline bool NoBench::has_dyn2_bool() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void NoBench::set_has_dyn2_bool() {
  _has_bits_[0] |= 0x00000100u;
}
inline void NoBench::clear_has_dyn2_bool() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void NoBench::clear_dyn2_bool() {
  dyn2_bool_ = false;
  clear_has_dyn2_bool();
}
inline bool NoBench::dyn2_bool() const {
  return dyn2_bool_;
}
inline void NoBench::set_dyn2_bool(bool value) {
  set_has_dyn2_bool();
  dyn2_bool_ = value;
}

// repeated string nested_arr_str = 10;
inline int NoBench::nested_arr_str_size() const {
  return nested_arr_str_.size();
}
inline void NoBench::clear_nested_arr_str() {
  nested_arr_str_.Clear();
}
inline const ::std::string& NoBench::nested_arr_str(int index) const {
  return nested_arr_str_.Get(index);
}
inline ::std::string* NoBench::mutable_nested_arr_str(int index) {
  return nested_arr_str_.Mutable(index);
}
inline void NoBench::set_nested_arr_str(int index, const ::std::string& value) {
  nested_arr_str_.Mutable(index)->assign(value);
}
inline void NoBench::set_nested_arr_str(int index, const char* value) {
  nested_arr_str_.Mutable(index)->assign(value);
}
inline void NoBench::set_nested_arr_str(int index, const char* value, size_t size) {
  nested_arr_str_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NoBench::add_nested_arr_str() {
  return nested_arr_str_.Add();
}
inline void NoBench::add_nested_arr_str(const ::std::string& value) {
  nested_arr_str_.Add()->assign(value);
}
inline void NoBench::add_nested_arr_str(const char* value) {
  nested_arr_str_.Add()->assign(value);
}
inline void NoBench::add_nested_arr_str(const char* value, size_t size) {
  nested_arr_str_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
NoBench::nested_arr_str() const {
  return nested_arr_str_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
NoBench::mutable_nested_arr_str() {
  return &nested_arr_str_;
}

// optional .NoBench.NestedObj nested_obj_obj = 11;
inline bool NoBench::has_nested_obj_obj() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void NoBench::set_has_nested_obj_obj() {
  _has_bits_[0] |= 0x00000400u;
}
inline void NoBench::clear_has_nested_obj_obj() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void NoBench::clear_nested_obj_obj() {
  if (nested_obj_obj_ != NULL) nested_obj_obj_->::NoBench_NestedObj::Clear();
  clear_has_nested_obj_obj();
}
inline const ::NoBench_NestedObj& NoBench::nested_obj_obj() const {
  return nested_obj_obj_ != NULL ? *nested_obj_obj_ : *default_instance_->nested_obj_obj_;
}
inline ::NoBench_NestedObj* NoBench::mutable_nested_obj_obj() {
  set_has_nested_obj_obj();
  if (nested_obj_obj_ == NULL) nested_obj_obj_ = new ::NoBench_NestedObj;
  return nested_obj_obj_;
}
inline ::NoBench_NestedObj* NoBench::release_nested_obj_obj() {
  clear_has_nested_obj_obj();
  ::NoBench_NestedObj* temp = nested_obj_obj_;
  nested_obj_obj_ = NULL;
  return temp;
}
inline void NoBench::set_allocated_nested_obj_obj(::NoBench_NestedObj* nested_obj_obj) {
  delete nested_obj_obj_;
  nested_obj_obj_ = nested_obj_obj;
  if (nested_obj_obj) {
    set_has_nested_obj_obj();
  } else {
    clear_has_nested_obj_obj();
  }
}

// repeated string sparse_str = 12;
inline int NoBench::sparse_str_size() const {
  return sparse_str_.size();
}
inline void NoBench::clear_sparse_str() {
  sparse_str_.Clear();
}
inline const ::std::string& NoBench::sparse_str(int index) const {
  return sparse_str_.Get(index);
}
inline ::std::string* NoBench::mutable_sparse_str(int index) {
  return sparse_str_.Mutable(index);
}
inline void NoBench::set_sparse_str(int index, const ::std::string& value) {
  sparse_str_.Mutable(index)->assign(value);
}
inline void NoBench::set_sparse_str(int index, const char* value) {
  sparse_str_.Mutable(index)->assign(value);
}
inline void NoBench::set_sparse_str(int index, const char* value, size_t size) {
  sparse_str_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NoBench::add_sparse_str() {
  return sparse_str_.Add();
}
inline void NoBench::add_sparse_str(const ::std::string& value) {
  sparse_str_.Add()->assign(value);
}
inline void NoBench::add_sparse_str(const char* value) {
  sparse_str_.Add()->assign(value);
}
inline void NoBench::add_sparse_str(const char* value, size_t size) {
  sparse_str_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
NoBench::sparse_str() const {
  return sparse_str_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
NoBench::mutable_sparse_str() {
  return &sparse_str_;
}

// optional string sparse_987_str = 13;
inline bool NoBench::has_sparse_987_str() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void NoBench::set_has_sparse_987_str() {
  _has_bits_[0] |= 0x00001000u;
}
inline void NoBench::clear_has_sparse_987_str() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void NoBench::clear_sparse_987_str() {
  if (sparse_987_str_ != &::google::protobuf::internal::kEmptyString) {
    sparse_987_str_->clear();
  }
  clear_has_sparse_987_str();
}
inline const ::std::string& NoBench::sparse_987_str() const {
  return *sparse_987_str_;
}
inline void NoBench::set_sparse_987_str(const ::std::string& value) {
  set_has_sparse_987_str();
  if (sparse_987_str_ == &::google::protobuf::internal::kEmptyString) {
    sparse_987_str_ = new ::std::string;
  }
  sparse_987_str_->assign(value);
}
inline void NoBench::set_sparse_987_str(const char* value) {
  set_has_sparse_987_str();
  if (sparse_987_str_ == &::google::protobuf::internal::kEmptyString) {
    sparse_987_str_ = new ::std::string;
  }
  sparse_987_str_->assign(value);
}
inline void NoBench::set_sparse_987_str(const char* value, size_t size) {
  set_has_sparse_987_str();
  if (sparse_987_str_ == &::google::protobuf::internal::kEmptyString) {
    sparse_987_str_ = new ::std::string;
  }
  sparse_987_str_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NoBench::mutable_sparse_987_str() {
  set_has_sparse_987_str();
  if (sparse_987_str_ == &::google::protobuf::internal::kEmptyString) {
    sparse_987_str_ = new ::std::string;
  }
  return sparse_987_str_;
}
inline ::std::string* NoBench::release_sparse_987_str() {
  clear_has_sparse_987_str();
  if (sparse_987_str_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sparse_987_str_;
    sparse_987_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NoBench::set_allocated_sparse_987_str(::std::string* sparse_987_str) {
  if (sparse_987_str_ != &::google::protobuf::internal::kEmptyString) {
    delete sparse_987_str_;
  }
  if (sparse_987_str) {
    set_has_sparse_987_str();
    sparse_987_str_ = sparse_987_str;
  } else {
    clear_has_sparse_987_str();
    sparse_987_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 thousandth = 1012;
inline bool NoBench::has_thousandth() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void NoBench::set_has_thousandth() {
  _has_bits_[0] |= 0x00002000u;
}
inline void NoBench::clear_has_thousandth() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void NoBench::clear_thousandth() {
  thousandth_ = GOOGLE_LONGLONG(0);
  clear_has_thousandth();
}
inline ::google::protobuf::int64 NoBench::thousandth() const {
  return thousandth_;
}
inline void NoBench::set_thousandth(::google::protobuf::int64 value) {
  set_has_thousandth();
  thousandth_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_nobench_2eproto__INCLUDED
