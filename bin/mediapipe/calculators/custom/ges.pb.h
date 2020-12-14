// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/custom/ges.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fcustom_2fges_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fcustom_2fges_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "mediapipe/framework/calculator.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2fcustom_2fges_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2fcustom_2fges_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2fcustom_2fges_2eproto;
namespace mediapipe {
class GesOptions;
class GesOptionsDefaultTypeInternal;
extern GesOptionsDefaultTypeInternal _GesOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::GesOptions* Arena::CreateMaybeMessage<::mediapipe::GesOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class GesOptions :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.GesOptions) */ {
 public:
  GesOptions();
  virtual ~GesOptions();

  GesOptions(const GesOptions& from);
  GesOptions(GesOptions&& from) noexcept
    : GesOptions() {
    *this = ::std::move(from);
  }

  inline GesOptions& operator=(const GesOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline GesOptions& operator=(GesOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const GesOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GesOptions* internal_default_instance() {
    return reinterpret_cast<const GesOptions*>(
               &_GesOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GesOptions& a, GesOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(GesOptions* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GesOptions* New() const final {
    return CreateMaybeMessage<GesOptions>(nullptr);
  }

  GesOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GesOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GesOptions& from);
  void MergeFrom(const GesOptions& from);
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
  void InternalSwap(GesOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.GesOptions";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mediapipe_2fcalculators_2fcustom_2fges_2eproto);
    return ::descriptor_table_mediapipe_2fcalculators_2fcustom_2fges_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVerboseFieldNumber = 2,
    kShowTextFieldNumber = 1,
    kShowFpsFieldNumber = 3,
  };
  // optional bool verbose = 2 [default = false];
  bool has_verbose() const;
  private:
  bool _internal_has_verbose() const;
  public:
  void clear_verbose();
  bool verbose() const;
  void set_verbose(bool value);
  private:
  bool _internal_verbose() const;
  void _internal_set_verbose(bool value);
  public:

  // optional bool show_text = 1 [default = true];
  bool has_show_text() const;
  private:
  bool _internal_has_show_text() const;
  public:
  void clear_show_text();
  bool show_text() const;
  void set_show_text(bool value);
  private:
  bool _internal_show_text() const;
  void _internal_set_show_text(bool value);
  public:

  // optional bool show_fps = 3 [default = true];
  bool has_show_fps() const;
  private:
  bool _internal_has_show_fps() const;
  public:
  void clear_show_fps();
  bool show_fps() const;
  void set_show_fps(bool value);
  private:
  bool _internal_show_fps() const;
  void _internal_set_show_fps(bool value);
  public:

  static const int kExtFieldNumber = 261845731;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::GesOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.GesOptions)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  bool verbose_;
  bool show_text_;
  bool show_fps_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2fcustom_2fges_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GesOptions

// optional bool show_text = 1 [default = true];
inline bool GesOptions::_internal_has_show_text() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool GesOptions::has_show_text() const {
  return _internal_has_show_text();
}
inline void GesOptions::clear_show_text() {
  show_text_ = true;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool GesOptions::_internal_show_text() const {
  return show_text_;
}
inline bool GesOptions::show_text() const {
  // @@protoc_insertion_point(field_get:mediapipe.GesOptions.show_text)
  return _internal_show_text();
}
inline void GesOptions::_internal_set_show_text(bool value) {
  _has_bits_[0] |= 0x00000002u;
  show_text_ = value;
}
inline void GesOptions::set_show_text(bool value) {
  _internal_set_show_text(value);
  // @@protoc_insertion_point(field_set:mediapipe.GesOptions.show_text)
}

// optional bool verbose = 2 [default = false];
inline bool GesOptions::_internal_has_verbose() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool GesOptions::has_verbose() const {
  return _internal_has_verbose();
}
inline void GesOptions::clear_verbose() {
  verbose_ = false;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool GesOptions::_internal_verbose() const {
  return verbose_;
}
inline bool GesOptions::verbose() const {
  // @@protoc_insertion_point(field_get:mediapipe.GesOptions.verbose)
  return _internal_verbose();
}
inline void GesOptions::_internal_set_verbose(bool value) {
  _has_bits_[0] |= 0x00000001u;
  verbose_ = value;
}
inline void GesOptions::set_verbose(bool value) {
  _internal_set_verbose(value);
  // @@protoc_insertion_point(field_set:mediapipe.GesOptions.verbose)
}

// optional bool show_fps = 3 [default = true];
inline bool GesOptions::_internal_has_show_fps() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool GesOptions::has_show_fps() const {
  return _internal_has_show_fps();
}
inline void GesOptions::clear_show_fps() {
  show_fps_ = true;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool GesOptions::_internal_show_fps() const {
  return show_fps_;
}
inline bool GesOptions::show_fps() const {
  // @@protoc_insertion_point(field_get:mediapipe.GesOptions.show_fps)
  return _internal_show_fps();
}
inline void GesOptions::_internal_set_show_fps(bool value) {
  _has_bits_[0] |= 0x00000004u;
  show_fps_ = value;
}
inline void GesOptions::set_show_fps(bool value) {
  _internal_set_show_fps(value);
  // @@protoc_insertion_point(field_set:mediapipe.GesOptions.show_fps)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fcustom_2fges_2eproto