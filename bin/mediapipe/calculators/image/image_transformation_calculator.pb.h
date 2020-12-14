// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/image/image_transformation_calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "mediapipe/framework/calculator.pb.h"
#include "mediapipe/gpu/scale_mode.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto;
namespace mediapipe {
class ImageTransformationCalculatorOptions;
class ImageTransformationCalculatorOptionsDefaultTypeInternal;
extern ImageTransformationCalculatorOptionsDefaultTypeInternal _ImageTransformationCalculatorOptions_default_instance_;
class RotationMode;
class RotationModeDefaultTypeInternal;
extern RotationModeDefaultTypeInternal _RotationMode_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::ImageTransformationCalculatorOptions* Arena::CreateMaybeMessage<::mediapipe::ImageTransformationCalculatorOptions>(Arena*);
template<> ::mediapipe::RotationMode* Arena::CreateMaybeMessage<::mediapipe::RotationMode>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

enum RotationMode_Mode : int {
  RotationMode_Mode_UNKNOWN = 0,
  RotationMode_Mode_ROTATION_0 = 1,
  RotationMode_Mode_ROTATION_90 = 2,
  RotationMode_Mode_ROTATION_180 = 3,
  RotationMode_Mode_ROTATION_270 = 4
};
bool RotationMode_Mode_IsValid(int value);
constexpr RotationMode_Mode RotationMode_Mode_Mode_MIN = RotationMode_Mode_UNKNOWN;
constexpr RotationMode_Mode RotationMode_Mode_Mode_MAX = RotationMode_Mode_ROTATION_270;
constexpr int RotationMode_Mode_Mode_ARRAYSIZE = RotationMode_Mode_Mode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RotationMode_Mode_descriptor();
template<typename T>
inline const std::string& RotationMode_Mode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RotationMode_Mode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RotationMode_Mode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RotationMode_Mode_descriptor(), enum_t_value);
}
inline bool RotationMode_Mode_Parse(
    const std::string& name, RotationMode_Mode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RotationMode_Mode>(
    RotationMode_Mode_descriptor(), name, value);
}
// ===================================================================

class RotationMode :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.RotationMode) */ {
 public:
  RotationMode();
  virtual ~RotationMode();

  RotationMode(const RotationMode& from);
  RotationMode(RotationMode&& from) noexcept
    : RotationMode() {
    *this = ::std::move(from);
  }

  inline RotationMode& operator=(const RotationMode& from) {
    CopyFrom(from);
    return *this;
  }
  inline RotationMode& operator=(RotationMode&& from) noexcept {
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
  static const RotationMode& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RotationMode* internal_default_instance() {
    return reinterpret_cast<const RotationMode*>(
               &_RotationMode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RotationMode& a, RotationMode& b) {
    a.Swap(&b);
  }
  inline void Swap(RotationMode* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RotationMode* New() const final {
    return CreateMaybeMessage<RotationMode>(nullptr);
  }

  RotationMode* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RotationMode>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RotationMode& from);
  void MergeFrom(const RotationMode& from);
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
  void InternalSwap(RotationMode* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.RotationMode";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto);
    return ::descriptor_table_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef RotationMode_Mode Mode;
  static constexpr Mode UNKNOWN =
    RotationMode_Mode_UNKNOWN;
  static constexpr Mode ROTATION_0 =
    RotationMode_Mode_ROTATION_0;
  static constexpr Mode ROTATION_90 =
    RotationMode_Mode_ROTATION_90;
  static constexpr Mode ROTATION_180 =
    RotationMode_Mode_ROTATION_180;
  static constexpr Mode ROTATION_270 =
    RotationMode_Mode_ROTATION_270;
  static inline bool Mode_IsValid(int value) {
    return RotationMode_Mode_IsValid(value);
  }
  static constexpr Mode Mode_MIN =
    RotationMode_Mode_Mode_MIN;
  static constexpr Mode Mode_MAX =
    RotationMode_Mode_Mode_MAX;
  static constexpr int Mode_ARRAYSIZE =
    RotationMode_Mode_Mode_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Mode_descriptor() {
    return RotationMode_Mode_descriptor();
  }
  template<typename T>
  static inline const std::string& Mode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Mode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Mode_Name.");
    return RotationMode_Mode_Name(enum_t_value);
  }
  static inline bool Mode_Parse(const std::string& name,
      Mode* value) {
    return RotationMode_Mode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:mediapipe.RotationMode)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto;
};
// -------------------------------------------------------------------

class ImageTransformationCalculatorOptions :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.ImageTransformationCalculatorOptions) */ {
 public:
  ImageTransformationCalculatorOptions();
  virtual ~ImageTransformationCalculatorOptions();

  ImageTransformationCalculatorOptions(const ImageTransformationCalculatorOptions& from);
  ImageTransformationCalculatorOptions(ImageTransformationCalculatorOptions&& from) noexcept
    : ImageTransformationCalculatorOptions() {
    *this = ::std::move(from);
  }

  inline ImageTransformationCalculatorOptions& operator=(const ImageTransformationCalculatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImageTransformationCalculatorOptions& operator=(ImageTransformationCalculatorOptions&& from) noexcept {
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
  static const ImageTransformationCalculatorOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ImageTransformationCalculatorOptions* internal_default_instance() {
    return reinterpret_cast<const ImageTransformationCalculatorOptions*>(
               &_ImageTransformationCalculatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ImageTransformationCalculatorOptions& a, ImageTransformationCalculatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(ImageTransformationCalculatorOptions* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ImageTransformationCalculatorOptions* New() const final {
    return CreateMaybeMessage<ImageTransformationCalculatorOptions>(nullptr);
  }

  ImageTransformationCalculatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ImageTransformationCalculatorOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ImageTransformationCalculatorOptions& from);
  void MergeFrom(const ImageTransformationCalculatorOptions& from);
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
  void InternalSwap(ImageTransformationCalculatorOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.ImageTransformationCalculatorOptions";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto);
    return ::descriptor_table_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOutputWidthFieldNumber = 1,
    kOutputHeightFieldNumber = 2,
    kRotationModeFieldNumber = 3,
    kFlipVerticallyFieldNumber = 4,
    kFlipHorizontallyFieldNumber = 5,
    kScaleModeFieldNumber = 6,
    kConstantPaddingFieldNumber = 7,
  };
  // optional int32 output_width = 1 [default = 0];
  bool has_output_width() const;
  private:
  bool _internal_has_output_width() const;
  public:
  void clear_output_width();
  ::PROTOBUF_NAMESPACE_ID::int32 output_width() const;
  void set_output_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_output_width() const;
  void _internal_set_output_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional int32 output_height = 2 [default = 0];
  bool has_output_height() const;
  private:
  bool _internal_has_output_height() const;
  public:
  void clear_output_height();
  ::PROTOBUF_NAMESPACE_ID::int32 output_height() const;
  void set_output_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_output_height() const;
  void _internal_set_output_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional .mediapipe.RotationMode.Mode rotation_mode = 3;
  bool has_rotation_mode() const;
  private:
  bool _internal_has_rotation_mode() const;
  public:
  void clear_rotation_mode();
  ::mediapipe::RotationMode_Mode rotation_mode() const;
  void set_rotation_mode(::mediapipe::RotationMode_Mode value);
  private:
  ::mediapipe::RotationMode_Mode _internal_rotation_mode() const;
  void _internal_set_rotation_mode(::mediapipe::RotationMode_Mode value);
  public:

  // optional bool flip_vertically = 4 [default = false];
  bool has_flip_vertically() const;
  private:
  bool _internal_has_flip_vertically() const;
  public:
  void clear_flip_vertically();
  bool flip_vertically() const;
  void set_flip_vertically(bool value);
  private:
  bool _internal_flip_vertically() const;
  void _internal_set_flip_vertically(bool value);
  public:

  // optional bool flip_horizontally = 5 [default = false];
  bool has_flip_horizontally() const;
  private:
  bool _internal_has_flip_horizontally() const;
  public:
  void clear_flip_horizontally();
  bool flip_horizontally() const;
  void set_flip_horizontally(bool value);
  private:
  bool _internal_flip_horizontally() const;
  void _internal_set_flip_horizontally(bool value);
  public:

  // optional .mediapipe.ScaleMode.Mode scale_mode = 6;
  bool has_scale_mode() const;
  private:
  bool _internal_has_scale_mode() const;
  public:
  void clear_scale_mode();
  ::mediapipe::ScaleMode_Mode scale_mode() const;
  void set_scale_mode(::mediapipe::ScaleMode_Mode value);
  private:
  ::mediapipe::ScaleMode_Mode _internal_scale_mode() const;
  void _internal_set_scale_mode(::mediapipe::ScaleMode_Mode value);
  public:

  // optional bool constant_padding = 7 [default = true];
  bool has_constant_padding() const;
  private:
  bool _internal_has_constant_padding() const;
  public:
  void clear_constant_padding();
  bool constant_padding() const;
  void set_constant_padding(bool value);
  private:
  bool _internal_constant_padding() const;
  void _internal_set_constant_padding(bool value);
  public:

  static const int kExtFieldNumber = 251952830;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::ImageTransformationCalculatorOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.ImageTransformationCalculatorOptions)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 output_width_;
  ::PROTOBUF_NAMESPACE_ID::int32 output_height_;
  int rotation_mode_;
  bool flip_vertically_;
  bool flip_horizontally_;
  int scale_mode_;
  bool constant_padding_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RotationMode

// -------------------------------------------------------------------

// ImageTransformationCalculatorOptions

// optional int32 output_width = 1 [default = 0];
inline bool ImageTransformationCalculatorOptions::_internal_has_output_width() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ImageTransformationCalculatorOptions::has_output_width() const {
  return _internal_has_output_width();
}
inline void ImageTransformationCalculatorOptions::clear_output_width() {
  output_width_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ImageTransformationCalculatorOptions::_internal_output_width() const {
  return output_width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ImageTransformationCalculatorOptions::output_width() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageTransformationCalculatorOptions.output_width)
  return _internal_output_width();
}
inline void ImageTransformationCalculatorOptions::_internal_set_output_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  output_width_ = value;
}
inline void ImageTransformationCalculatorOptions::set_output_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_output_width(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageTransformationCalculatorOptions.output_width)
}

// optional int32 output_height = 2 [default = 0];
inline bool ImageTransformationCalculatorOptions::_internal_has_output_height() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ImageTransformationCalculatorOptions::has_output_height() const {
  return _internal_has_output_height();
}
inline void ImageTransformationCalculatorOptions::clear_output_height() {
  output_height_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ImageTransformationCalculatorOptions::_internal_output_height() const {
  return output_height_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ImageTransformationCalculatorOptions::output_height() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageTransformationCalculatorOptions.output_height)
  return _internal_output_height();
}
inline void ImageTransformationCalculatorOptions::_internal_set_output_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  output_height_ = value;
}
inline void ImageTransformationCalculatorOptions::set_output_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_output_height(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageTransformationCalculatorOptions.output_height)
}

// optional .mediapipe.RotationMode.Mode rotation_mode = 3;
inline bool ImageTransformationCalculatorOptions::_internal_has_rotation_mode() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ImageTransformationCalculatorOptions::has_rotation_mode() const {
  return _internal_has_rotation_mode();
}
inline void ImageTransformationCalculatorOptions::clear_rotation_mode() {
  rotation_mode_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::mediapipe::RotationMode_Mode ImageTransformationCalculatorOptions::_internal_rotation_mode() const {
  return static_cast< ::mediapipe::RotationMode_Mode >(rotation_mode_);
}
inline ::mediapipe::RotationMode_Mode ImageTransformationCalculatorOptions::rotation_mode() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageTransformationCalculatorOptions.rotation_mode)
  return _internal_rotation_mode();
}
inline void ImageTransformationCalculatorOptions::_internal_set_rotation_mode(::mediapipe::RotationMode_Mode value) {
  assert(::mediapipe::RotationMode_Mode_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  rotation_mode_ = value;
}
inline void ImageTransformationCalculatorOptions::set_rotation_mode(::mediapipe::RotationMode_Mode value) {
  _internal_set_rotation_mode(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageTransformationCalculatorOptions.rotation_mode)
}

// optional bool flip_vertically = 4 [default = false];
inline bool ImageTransformationCalculatorOptions::_internal_has_flip_vertically() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ImageTransformationCalculatorOptions::has_flip_vertically() const {
  return _internal_has_flip_vertically();
}
inline void ImageTransformationCalculatorOptions::clear_flip_vertically() {
  flip_vertically_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool ImageTransformationCalculatorOptions::_internal_flip_vertically() const {
  return flip_vertically_;
}
inline bool ImageTransformationCalculatorOptions::flip_vertically() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageTransformationCalculatorOptions.flip_vertically)
  return _internal_flip_vertically();
}
inline void ImageTransformationCalculatorOptions::_internal_set_flip_vertically(bool value) {
  _has_bits_[0] |= 0x00000008u;
  flip_vertically_ = value;
}
inline void ImageTransformationCalculatorOptions::set_flip_vertically(bool value) {
  _internal_set_flip_vertically(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageTransformationCalculatorOptions.flip_vertically)
}

// optional bool flip_horizontally = 5 [default = false];
inline bool ImageTransformationCalculatorOptions::_internal_has_flip_horizontally() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool ImageTransformationCalculatorOptions::has_flip_horizontally() const {
  return _internal_has_flip_horizontally();
}
inline void ImageTransformationCalculatorOptions::clear_flip_horizontally() {
  flip_horizontally_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool ImageTransformationCalculatorOptions::_internal_flip_horizontally() const {
  return flip_horizontally_;
}
inline bool ImageTransformationCalculatorOptions::flip_horizontally() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageTransformationCalculatorOptions.flip_horizontally)
  return _internal_flip_horizontally();
}
inline void ImageTransformationCalculatorOptions::_internal_set_flip_horizontally(bool value) {
  _has_bits_[0] |= 0x00000010u;
  flip_horizontally_ = value;
}
inline void ImageTransformationCalculatorOptions::set_flip_horizontally(bool value) {
  _internal_set_flip_horizontally(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageTransformationCalculatorOptions.flip_horizontally)
}

// optional .mediapipe.ScaleMode.Mode scale_mode = 6;
inline bool ImageTransformationCalculatorOptions::_internal_has_scale_mode() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool ImageTransformationCalculatorOptions::has_scale_mode() const {
  return _internal_has_scale_mode();
}
inline void ImageTransformationCalculatorOptions::clear_scale_mode() {
  scale_mode_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::mediapipe::ScaleMode_Mode ImageTransformationCalculatorOptions::_internal_scale_mode() const {
  return static_cast< ::mediapipe::ScaleMode_Mode >(scale_mode_);
}
inline ::mediapipe::ScaleMode_Mode ImageTransformationCalculatorOptions::scale_mode() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageTransformationCalculatorOptions.scale_mode)
  return _internal_scale_mode();
}
inline void ImageTransformationCalculatorOptions::_internal_set_scale_mode(::mediapipe::ScaleMode_Mode value) {
  assert(::mediapipe::ScaleMode_Mode_IsValid(value));
  _has_bits_[0] |= 0x00000020u;
  scale_mode_ = value;
}
inline void ImageTransformationCalculatorOptions::set_scale_mode(::mediapipe::ScaleMode_Mode value) {
  _internal_set_scale_mode(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageTransformationCalculatorOptions.scale_mode)
}

// optional bool constant_padding = 7 [default = true];
inline bool ImageTransformationCalculatorOptions::_internal_has_constant_padding() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool ImageTransformationCalculatorOptions::has_constant_padding() const {
  return _internal_has_constant_padding();
}
inline void ImageTransformationCalculatorOptions::clear_constant_padding() {
  constant_padding_ = true;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool ImageTransformationCalculatorOptions::_internal_constant_padding() const {
  return constant_padding_;
}
inline bool ImageTransformationCalculatorOptions::constant_padding() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageTransformationCalculatorOptions.constant_padding)
  return _internal_constant_padding();
}
inline void ImageTransformationCalculatorOptions::_internal_set_constant_padding(bool value) {
  _has_bits_[0] |= 0x00000040u;
  constant_padding_ = value;
}
inline void ImageTransformationCalculatorOptions::set_constant_padding(bool value) {
  _internal_set_constant_padding(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageTransformationCalculatorOptions.constant_padding)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::mediapipe::RotationMode_Mode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mediapipe::RotationMode_Mode>() {
  return ::mediapipe::RotationMode_Mode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fimage_2fimage_5ftransformation_5fcalculator_2eproto
