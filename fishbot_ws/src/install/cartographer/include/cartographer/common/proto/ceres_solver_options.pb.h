// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/common/proto/ceres_solver_options.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto;
namespace cartographer {
namespace common {
namespace proto {
class CeresSolverOptions;
class CeresSolverOptionsDefaultTypeInternal;
extern CeresSolverOptionsDefaultTypeInternal _CeresSolverOptions_default_instance_;
}  // namespace proto
}  // namespace common
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::common::proto::CeresSolverOptions* Arena::CreateMaybeMessage<::cartographer::common::proto::CeresSolverOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace common {
namespace proto {

// ===================================================================

class CeresSolverOptions PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.common.proto.CeresSolverOptions) */ {
 public:
  inline CeresSolverOptions() : CeresSolverOptions(nullptr) {};
  virtual ~CeresSolverOptions();

  CeresSolverOptions(const CeresSolverOptions& from);
  CeresSolverOptions(CeresSolverOptions&& from) noexcept
    : CeresSolverOptions() {
    *this = ::std::move(from);
  }

  inline CeresSolverOptions& operator=(const CeresSolverOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline CeresSolverOptions& operator=(CeresSolverOptions&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CeresSolverOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CeresSolverOptions* internal_default_instance() {
    return reinterpret_cast<const CeresSolverOptions*>(
               &_CeresSolverOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CeresSolverOptions& a, CeresSolverOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(CeresSolverOptions* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CeresSolverOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CeresSolverOptions* New() const final {
    return CreateMaybeMessage<CeresSolverOptions>(nullptr);
  }

  CeresSolverOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CeresSolverOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CeresSolverOptions& from);
  void MergeFrom(const CeresSolverOptions& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CeresSolverOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.common.proto.CeresSolverOptions";
  }
  protected:
  explicit CeresSolverOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto);
    return ::descriptor_table_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUseNonmonotonicStepsFieldNumber = 1,
    kMaxNumIterationsFieldNumber = 2,
    kNumThreadsFieldNumber = 3,
  };
  // bool use_nonmonotonic_steps = 1;
  void clear_use_nonmonotonic_steps();
  bool use_nonmonotonic_steps() const;
  void set_use_nonmonotonic_steps(bool value);
  private:
  bool _internal_use_nonmonotonic_steps() const;
  void _internal_set_use_nonmonotonic_steps(bool value);
  public:

  // int32 max_num_iterations = 2;
  void clear_max_num_iterations();
  ::PROTOBUF_NAMESPACE_ID::int32 max_num_iterations() const;
  void set_max_num_iterations(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_max_num_iterations() const;
  void _internal_set_max_num_iterations(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 num_threads = 3;
  void clear_num_threads();
  ::PROTOBUF_NAMESPACE_ID::int32 num_threads() const;
  void set_num_threads(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_num_threads() const;
  void _internal_set_num_threads(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.common.proto.CeresSolverOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool use_nonmonotonic_steps_;
  ::PROTOBUF_NAMESPACE_ID::int32 max_num_iterations_;
  ::PROTOBUF_NAMESPACE_ID::int32 num_threads_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CeresSolverOptions

// bool use_nonmonotonic_steps = 1;
inline void CeresSolverOptions::clear_use_nonmonotonic_steps() {
  use_nonmonotonic_steps_ = false;
}
inline bool CeresSolverOptions::_internal_use_nonmonotonic_steps() const {
  return use_nonmonotonic_steps_;
}
inline bool CeresSolverOptions::use_nonmonotonic_steps() const {
  // @@protoc_insertion_point(field_get:cartographer.common.proto.CeresSolverOptions.use_nonmonotonic_steps)
  return _internal_use_nonmonotonic_steps();
}
inline void CeresSolverOptions::_internal_set_use_nonmonotonic_steps(bool value) {
  
  use_nonmonotonic_steps_ = value;
}
inline void CeresSolverOptions::set_use_nonmonotonic_steps(bool value) {
  _internal_set_use_nonmonotonic_steps(value);
  // @@protoc_insertion_point(field_set:cartographer.common.proto.CeresSolverOptions.use_nonmonotonic_steps)
}

// int32 max_num_iterations = 2;
inline void CeresSolverOptions::clear_max_num_iterations() {
  max_num_iterations_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CeresSolverOptions::_internal_max_num_iterations() const {
  return max_num_iterations_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CeresSolverOptions::max_num_iterations() const {
  // @@protoc_insertion_point(field_get:cartographer.common.proto.CeresSolverOptions.max_num_iterations)
  return _internal_max_num_iterations();
}
inline void CeresSolverOptions::_internal_set_max_num_iterations(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  max_num_iterations_ = value;
}
inline void CeresSolverOptions::set_max_num_iterations(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_max_num_iterations(value);
  // @@protoc_insertion_point(field_set:cartographer.common.proto.CeresSolverOptions.max_num_iterations)
}

// int32 num_threads = 3;
inline void CeresSolverOptions::clear_num_threads() {
  num_threads_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CeresSolverOptions::_internal_num_threads() const {
  return num_threads_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CeresSolverOptions::num_threads() const {
  // @@protoc_insertion_point(field_get:cartographer.common.proto.CeresSolverOptions.num_threads)
  return _internal_num_threads();
}
inline void CeresSolverOptions::_internal_set_num_threads(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  num_threads_ = value;
}
inline void CeresSolverOptions::set_num_threads(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_num_threads(value);
  // @@protoc_insertion_point(field_set:cartographer.common.proto.CeresSolverOptions.num_threads)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace common
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto
