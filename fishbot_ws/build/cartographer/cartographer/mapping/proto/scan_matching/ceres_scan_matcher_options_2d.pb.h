// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_2d.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto

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
#include "cartographer/common/proto/ceres_solver_options.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto;
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {
class CeresScanMatcherOptions2D;
class CeresScanMatcherOptions2DDefaultTypeInternal;
extern CeresScanMatcherOptions2DDefaultTypeInternal _CeresScanMatcherOptions2D_default_instance_;
}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* Arena::CreateMaybeMessage<::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {

// ===================================================================

class CeresScanMatcherOptions2D PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D) */ {
 public:
  inline CeresScanMatcherOptions2D() : CeresScanMatcherOptions2D(nullptr) {};
  virtual ~CeresScanMatcherOptions2D();

  CeresScanMatcherOptions2D(const CeresScanMatcherOptions2D& from);
  CeresScanMatcherOptions2D(CeresScanMatcherOptions2D&& from) noexcept
    : CeresScanMatcherOptions2D() {
    *this = ::std::move(from);
  }

  inline CeresScanMatcherOptions2D& operator=(const CeresScanMatcherOptions2D& from) {
    CopyFrom(from);
    return *this;
  }
  inline CeresScanMatcherOptions2D& operator=(CeresScanMatcherOptions2D&& from) noexcept {
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
  static const CeresScanMatcherOptions2D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CeresScanMatcherOptions2D* internal_default_instance() {
    return reinterpret_cast<const CeresScanMatcherOptions2D*>(
               &_CeresScanMatcherOptions2D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CeresScanMatcherOptions2D& a, CeresScanMatcherOptions2D& b) {
    a.Swap(&b);
  }
  inline void Swap(CeresScanMatcherOptions2D* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CeresScanMatcherOptions2D* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CeresScanMatcherOptions2D* New() const final {
    return CreateMaybeMessage<CeresScanMatcherOptions2D>(nullptr);
  }

  CeresScanMatcherOptions2D* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CeresScanMatcherOptions2D>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CeresScanMatcherOptions2D& from);
  void MergeFrom(const CeresScanMatcherOptions2D& from);
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
  void InternalSwap(CeresScanMatcherOptions2D* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D";
  }
  protected:
  explicit CeresScanMatcherOptions2D(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto);
    return ::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCeresSolverOptionsFieldNumber = 9,
    kOccupiedSpaceWeightFieldNumber = 1,
    kTranslationWeightFieldNumber = 2,
    kRotationWeightFieldNumber = 3,
  };
  // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
  bool has_ceres_solver_options() const;
  private:
  bool _internal_has_ceres_solver_options() const;
  public:
  void clear_ceres_solver_options();
  const ::cartographer::common::proto::CeresSolverOptions& ceres_solver_options() const;
  ::cartographer::common::proto::CeresSolverOptions* release_ceres_solver_options();
  ::cartographer::common::proto::CeresSolverOptions* mutable_ceres_solver_options();
  void set_allocated_ceres_solver_options(::cartographer::common::proto::CeresSolverOptions* ceres_solver_options);
  private:
  const ::cartographer::common::proto::CeresSolverOptions& _internal_ceres_solver_options() const;
  ::cartographer::common::proto::CeresSolverOptions* _internal_mutable_ceres_solver_options();
  public:
  void unsafe_arena_set_allocated_ceres_solver_options(
      ::cartographer::common::proto::CeresSolverOptions* ceres_solver_options);
  ::cartographer::common::proto::CeresSolverOptions* unsafe_arena_release_ceres_solver_options();

  // double occupied_space_weight = 1;
  void clear_occupied_space_weight();
  double occupied_space_weight() const;
  void set_occupied_space_weight(double value);
  private:
  double _internal_occupied_space_weight() const;
  void _internal_set_occupied_space_weight(double value);
  public:

  // double translation_weight = 2;
  void clear_translation_weight();
  double translation_weight() const;
  void set_translation_weight(double value);
  private:
  double _internal_translation_weight() const;
  void _internal_set_translation_weight(double value);
  public:

  // double rotation_weight = 3;
  void clear_rotation_weight();
  double rotation_weight() const;
  void set_rotation_weight(double value);
  private:
  double _internal_rotation_weight() const;
  void _internal_set_rotation_weight(double value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::cartographer::common::proto::CeresSolverOptions* ceres_solver_options_;
  double occupied_space_weight_;
  double translation_weight_;
  double rotation_weight_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CeresScanMatcherOptions2D

// double occupied_space_weight = 1;
inline void CeresScanMatcherOptions2D::clear_occupied_space_weight() {
  occupied_space_weight_ = 0;
}
inline double CeresScanMatcherOptions2D::_internal_occupied_space_weight() const {
  return occupied_space_weight_;
}
inline double CeresScanMatcherOptions2D::occupied_space_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.occupied_space_weight)
  return _internal_occupied_space_weight();
}
inline void CeresScanMatcherOptions2D::_internal_set_occupied_space_weight(double value) {
  
  occupied_space_weight_ = value;
}
inline void CeresScanMatcherOptions2D::set_occupied_space_weight(double value) {
  _internal_set_occupied_space_weight(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.occupied_space_weight)
}

// double translation_weight = 2;
inline void CeresScanMatcherOptions2D::clear_translation_weight() {
  translation_weight_ = 0;
}
inline double CeresScanMatcherOptions2D::_internal_translation_weight() const {
  return translation_weight_;
}
inline double CeresScanMatcherOptions2D::translation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.translation_weight)
  return _internal_translation_weight();
}
inline void CeresScanMatcherOptions2D::_internal_set_translation_weight(double value) {
  
  translation_weight_ = value;
}
inline void CeresScanMatcherOptions2D::set_translation_weight(double value) {
  _internal_set_translation_weight(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.translation_weight)
}

// double rotation_weight = 3;
inline void CeresScanMatcherOptions2D::clear_rotation_weight() {
  rotation_weight_ = 0;
}
inline double CeresScanMatcherOptions2D::_internal_rotation_weight() const {
  return rotation_weight_;
}
inline double CeresScanMatcherOptions2D::rotation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.rotation_weight)
  return _internal_rotation_weight();
}
inline void CeresScanMatcherOptions2D::_internal_set_rotation_weight(double value) {
  
  rotation_weight_ = value;
}
inline void CeresScanMatcherOptions2D::set_rotation_weight(double value) {
  _internal_set_rotation_weight(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.rotation_weight)
}

// .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
inline bool CeresScanMatcherOptions2D::_internal_has_ceres_solver_options() const {
  return this != internal_default_instance() && ceres_solver_options_ != nullptr;
}
inline bool CeresScanMatcherOptions2D::has_ceres_solver_options() const {
  return _internal_has_ceres_solver_options();
}
inline const ::cartographer::common::proto::CeresSolverOptions& CeresScanMatcherOptions2D::_internal_ceres_solver_options() const {
  const ::cartographer::common::proto::CeresSolverOptions* p = ceres_solver_options_;
  return p != nullptr ? *p : *reinterpret_cast<const ::cartographer::common::proto::CeresSolverOptions*>(
      &::cartographer::common::proto::_CeresSolverOptions_default_instance_);
}
inline const ::cartographer::common::proto::CeresSolverOptions& CeresScanMatcherOptions2D::ceres_solver_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.ceres_solver_options)
  return _internal_ceres_solver_options();
}
inline void CeresScanMatcherOptions2D::unsafe_arena_set_allocated_ceres_solver_options(
    ::cartographer::common::proto::CeresSolverOptions* ceres_solver_options) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(ceres_solver_options_);
  }
  ceres_solver_options_ = ceres_solver_options;
  if (ceres_solver_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.ceres_solver_options)
}
inline ::cartographer::common::proto::CeresSolverOptions* CeresScanMatcherOptions2D::release_ceres_solver_options() {
  auto temp = unsafe_arena_release_ceres_solver_options();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::cartographer::common::proto::CeresSolverOptions* CeresScanMatcherOptions2D::unsafe_arena_release_ceres_solver_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.ceres_solver_options)
  
  ::cartographer::common::proto::CeresSolverOptions* temp = ceres_solver_options_;
  ceres_solver_options_ = nullptr;
  return temp;
}
inline ::cartographer::common::proto::CeresSolverOptions* CeresScanMatcherOptions2D::_internal_mutable_ceres_solver_options() {
  
  if (ceres_solver_options_ == nullptr) {
    auto* p = CreateMaybeMessage<::cartographer::common::proto::CeresSolverOptions>(GetArena());
    ceres_solver_options_ = p;
  }
  return ceres_solver_options_;
}
inline ::cartographer::common::proto::CeresSolverOptions* CeresScanMatcherOptions2D::mutable_ceres_solver_options() {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.ceres_solver_options)
  return _internal_mutable_ceres_solver_options();
}
inline void CeresScanMatcherOptions2D::set_allocated_ceres_solver_options(::cartographer::common::proto::CeresSolverOptions* ceres_solver_options) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(ceres_solver_options_);
  }
  if (ceres_solver_options) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(ceres_solver_options)->GetArena();
    if (message_arena != submessage_arena) {
      ceres_solver_options = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ceres_solver_options, submessage_arena);
    }
    
  } else {
    
  }
  ceres_solver_options_ = ceres_solver_options;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D.ceres_solver_options)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto
