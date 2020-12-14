// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/tflite/ssd_anchors_calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto;
namespace mediapipe {
class SsdAnchorsCalculatorOptions;
class SsdAnchorsCalculatorOptionsDefaultTypeInternal;
extern SsdAnchorsCalculatorOptionsDefaultTypeInternal _SsdAnchorsCalculatorOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::SsdAnchorsCalculatorOptions* Arena::CreateMaybeMessage<::mediapipe::SsdAnchorsCalculatorOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class SsdAnchorsCalculatorOptions :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.SsdAnchorsCalculatorOptions) */ {
 public:
  SsdAnchorsCalculatorOptions();
  virtual ~SsdAnchorsCalculatorOptions();

  SsdAnchorsCalculatorOptions(const SsdAnchorsCalculatorOptions& from);
  SsdAnchorsCalculatorOptions(SsdAnchorsCalculatorOptions&& from) noexcept
    : SsdAnchorsCalculatorOptions() {
    *this = ::std::move(from);
  }

  inline SsdAnchorsCalculatorOptions& operator=(const SsdAnchorsCalculatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline SsdAnchorsCalculatorOptions& operator=(SsdAnchorsCalculatorOptions&& from) noexcept {
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
  static const SsdAnchorsCalculatorOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SsdAnchorsCalculatorOptions* internal_default_instance() {
    return reinterpret_cast<const SsdAnchorsCalculatorOptions*>(
               &_SsdAnchorsCalculatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SsdAnchorsCalculatorOptions& a, SsdAnchorsCalculatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(SsdAnchorsCalculatorOptions* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SsdAnchorsCalculatorOptions* New() const final {
    return CreateMaybeMessage<SsdAnchorsCalculatorOptions>(nullptr);
  }

  SsdAnchorsCalculatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SsdAnchorsCalculatorOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SsdAnchorsCalculatorOptions& from);
  void MergeFrom(const SsdAnchorsCalculatorOptions& from);
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
  void InternalSwap(SsdAnchorsCalculatorOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.SsdAnchorsCalculatorOptions";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto);
    return ::descriptor_table_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFeatureMapWidthFieldNumber = 8,
    kFeatureMapHeightFieldNumber = 9,
    kStridesFieldNumber = 10,
    kAspectRatiosFieldNumber = 11,
    kInputSizeWidthFieldNumber = 1,
    kInputSizeHeightFieldNumber = 2,
    kMinScaleFieldNumber = 3,
    kMaxScaleFieldNumber = 4,
    kNumLayersFieldNumber = 7,
    kReduceBoxesInLowestLayerFieldNumber = 12,
    kFixedAnchorSizeFieldNumber = 14,
    kInterpolatedScaleAspectRatioFieldNumber = 13,
    kAnchorOffsetXFieldNumber = 5,
    kAnchorOffsetYFieldNumber = 6,
  };
  // repeated int32 feature_map_width = 8;
  int feature_map_width_size() const;
  private:
  int _internal_feature_map_width_size() const;
  public:
  void clear_feature_map_width();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_feature_map_width(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_feature_map_width() const;
  void _internal_add_feature_map_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_feature_map_width();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 feature_map_width(int index) const;
  void set_feature_map_width(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_feature_map_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      feature_map_width() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_feature_map_width();

  // repeated int32 feature_map_height = 9;
  int feature_map_height_size() const;
  private:
  int _internal_feature_map_height_size() const;
  public:
  void clear_feature_map_height();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_feature_map_height(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_feature_map_height() const;
  void _internal_add_feature_map_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_feature_map_height();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 feature_map_height(int index) const;
  void set_feature_map_height(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_feature_map_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      feature_map_height() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_feature_map_height();

  // repeated int32 strides = 10;
  int strides_size() const;
  private:
  int _internal_strides_size() const;
  public:
  void clear_strides();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_strides(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_strides() const;
  void _internal_add_strides(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_strides();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 strides(int index) const;
  void set_strides(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_strides(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      strides() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_strides();

  // repeated float aspect_ratios = 11;
  int aspect_ratios_size() const;
  private:
  int _internal_aspect_ratios_size() const;
  public:
  void clear_aspect_ratios();
  private:
  float _internal_aspect_ratios(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_aspect_ratios() const;
  void _internal_add_aspect_ratios(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_aspect_ratios();
  public:
  float aspect_ratios(int index) const;
  void set_aspect_ratios(int index, float value);
  void add_aspect_ratios(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      aspect_ratios() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_aspect_ratios();

  // required int32 input_size_width = 1;
  bool has_input_size_width() const;
  private:
  bool _internal_has_input_size_width() const;
  public:
  void clear_input_size_width();
  ::PROTOBUF_NAMESPACE_ID::int32 input_size_width() const;
  void set_input_size_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_input_size_width() const;
  void _internal_set_input_size_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 input_size_height = 2;
  bool has_input_size_height() const;
  private:
  bool _internal_has_input_size_height() const;
  public:
  void clear_input_size_height();
  ::PROTOBUF_NAMESPACE_ID::int32 input_size_height() const;
  void set_input_size_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_input_size_height() const;
  void _internal_set_input_size_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required float min_scale = 3;
  bool has_min_scale() const;
  private:
  bool _internal_has_min_scale() const;
  public:
  void clear_min_scale();
  float min_scale() const;
  void set_min_scale(float value);
  private:
  float _internal_min_scale() const;
  void _internal_set_min_scale(float value);
  public:

  // required float max_scale = 4;
  bool has_max_scale() const;
  private:
  bool _internal_has_max_scale() const;
  public:
  void clear_max_scale();
  float max_scale() const;
  void set_max_scale(float value);
  private:
  float _internal_max_scale() const;
  void _internal_set_max_scale(float value);
  public:

  // required int32 num_layers = 7;
  bool has_num_layers() const;
  private:
  bool _internal_has_num_layers() const;
  public:
  void clear_num_layers();
  ::PROTOBUF_NAMESPACE_ID::int32 num_layers() const;
  void set_num_layers(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_num_layers() const;
  void _internal_set_num_layers(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool reduce_boxes_in_lowest_layer = 12 [default = false];
  bool has_reduce_boxes_in_lowest_layer() const;
  private:
  bool _internal_has_reduce_boxes_in_lowest_layer() const;
  public:
  void clear_reduce_boxes_in_lowest_layer();
  bool reduce_boxes_in_lowest_layer() const;
  void set_reduce_boxes_in_lowest_layer(bool value);
  private:
  bool _internal_reduce_boxes_in_lowest_layer() const;
  void _internal_set_reduce_boxes_in_lowest_layer(bool value);
  public:

  // optional bool fixed_anchor_size = 14 [default = false];
  bool has_fixed_anchor_size() const;
  private:
  bool _internal_has_fixed_anchor_size() const;
  public:
  void clear_fixed_anchor_size();
  bool fixed_anchor_size() const;
  void set_fixed_anchor_size(bool value);
  private:
  bool _internal_fixed_anchor_size() const;
  void _internal_set_fixed_anchor_size(bool value);
  public:

  // optional float interpolated_scale_aspect_ratio = 13 [default = 1];
  bool has_interpolated_scale_aspect_ratio() const;
  private:
  bool _internal_has_interpolated_scale_aspect_ratio() const;
  public:
  void clear_interpolated_scale_aspect_ratio();
  float interpolated_scale_aspect_ratio() const;
  void set_interpolated_scale_aspect_ratio(float value);
  private:
  float _internal_interpolated_scale_aspect_ratio() const;
  void _internal_set_interpolated_scale_aspect_ratio(float value);
  public:

  // required float anchor_offset_x = 5 [default = 0.5];
  bool has_anchor_offset_x() const;
  private:
  bool _internal_has_anchor_offset_x() const;
  public:
  void clear_anchor_offset_x();
  float anchor_offset_x() const;
  void set_anchor_offset_x(float value);
  private:
  float _internal_anchor_offset_x() const;
  void _internal_set_anchor_offset_x(float value);
  public:

  // required float anchor_offset_y = 6 [default = 0.5];
  bool has_anchor_offset_y() const;
  private:
  bool _internal_has_anchor_offset_y() const;
  public:
  void clear_anchor_offset_y();
  float anchor_offset_y() const;
  void set_anchor_offset_y(float value);
  private:
  float _internal_anchor_offset_y() const;
  void _internal_set_anchor_offset_y(float value);
  public:

  static const int kExtFieldNumber = 247258239;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::SsdAnchorsCalculatorOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.SsdAnchorsCalculatorOptions)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > feature_map_width_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > feature_map_height_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > strides_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > aspect_ratios_;
  ::PROTOBUF_NAMESPACE_ID::int32 input_size_width_;
  ::PROTOBUF_NAMESPACE_ID::int32 input_size_height_;
  float min_scale_;
  float max_scale_;
  ::PROTOBUF_NAMESPACE_ID::int32 num_layers_;
  bool reduce_boxes_in_lowest_layer_;
  bool fixed_anchor_size_;
  float interpolated_scale_aspect_ratio_;
  float anchor_offset_x_;
  float anchor_offset_y_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SsdAnchorsCalculatorOptions

// required int32 input_size_width = 1;
inline bool SsdAnchorsCalculatorOptions::_internal_has_input_size_width() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_input_size_width() const {
  return _internal_has_input_size_width();
}
inline void SsdAnchorsCalculatorOptions::clear_input_size_width() {
  input_size_width_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::_internal_input_size_width() const {
  return input_size_width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::input_size_width() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.input_size_width)
  return _internal_input_size_width();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_input_size_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  input_size_width_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_input_size_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_input_size_width(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.input_size_width)
}

// required int32 input_size_height = 2;
inline bool SsdAnchorsCalculatorOptions::_internal_has_input_size_height() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_input_size_height() const {
  return _internal_has_input_size_height();
}
inline void SsdAnchorsCalculatorOptions::clear_input_size_height() {
  input_size_height_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::_internal_input_size_height() const {
  return input_size_height_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::input_size_height() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.input_size_height)
  return _internal_input_size_height();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_input_size_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  input_size_height_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_input_size_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_input_size_height(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.input_size_height)
}

// required float min_scale = 3;
inline bool SsdAnchorsCalculatorOptions::_internal_has_min_scale() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_min_scale() const {
  return _internal_has_min_scale();
}
inline void SsdAnchorsCalculatorOptions::clear_min_scale() {
  min_scale_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float SsdAnchorsCalculatorOptions::_internal_min_scale() const {
  return min_scale_;
}
inline float SsdAnchorsCalculatorOptions::min_scale() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.min_scale)
  return _internal_min_scale();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_min_scale(float value) {
  _has_bits_[0] |= 0x00000004u;
  min_scale_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_min_scale(float value) {
  _internal_set_min_scale(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.min_scale)
}

// required float max_scale = 4;
inline bool SsdAnchorsCalculatorOptions::_internal_has_max_scale() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_max_scale() const {
  return _internal_has_max_scale();
}
inline void SsdAnchorsCalculatorOptions::clear_max_scale() {
  max_scale_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float SsdAnchorsCalculatorOptions::_internal_max_scale() const {
  return max_scale_;
}
inline float SsdAnchorsCalculatorOptions::max_scale() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.max_scale)
  return _internal_max_scale();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_max_scale(float value) {
  _has_bits_[0] |= 0x00000008u;
  max_scale_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_max_scale(float value) {
  _internal_set_max_scale(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.max_scale)
}

// required float anchor_offset_x = 5 [default = 0.5];
inline bool SsdAnchorsCalculatorOptions::_internal_has_anchor_offset_x() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_anchor_offset_x() const {
  return _internal_has_anchor_offset_x();
}
inline void SsdAnchorsCalculatorOptions::clear_anchor_offset_x() {
  anchor_offset_x_ = 0.5f;
  _has_bits_[0] &= ~0x00000100u;
}
inline float SsdAnchorsCalculatorOptions::_internal_anchor_offset_x() const {
  return anchor_offset_x_;
}
inline float SsdAnchorsCalculatorOptions::anchor_offset_x() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.anchor_offset_x)
  return _internal_anchor_offset_x();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_anchor_offset_x(float value) {
  _has_bits_[0] |= 0x00000100u;
  anchor_offset_x_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_anchor_offset_x(float value) {
  _internal_set_anchor_offset_x(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.anchor_offset_x)
}

// required float anchor_offset_y = 6 [default = 0.5];
inline bool SsdAnchorsCalculatorOptions::_internal_has_anchor_offset_y() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_anchor_offset_y() const {
  return _internal_has_anchor_offset_y();
}
inline void SsdAnchorsCalculatorOptions::clear_anchor_offset_y() {
  anchor_offset_y_ = 0.5f;
  _has_bits_[0] &= ~0x00000200u;
}
inline float SsdAnchorsCalculatorOptions::_internal_anchor_offset_y() const {
  return anchor_offset_y_;
}
inline float SsdAnchorsCalculatorOptions::anchor_offset_y() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.anchor_offset_y)
  return _internal_anchor_offset_y();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_anchor_offset_y(float value) {
  _has_bits_[0] |= 0x00000200u;
  anchor_offset_y_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_anchor_offset_y(float value) {
  _internal_set_anchor_offset_y(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.anchor_offset_y)
}

// required int32 num_layers = 7;
inline bool SsdAnchorsCalculatorOptions::_internal_has_num_layers() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_num_layers() const {
  return _internal_has_num_layers();
}
inline void SsdAnchorsCalculatorOptions::clear_num_layers() {
  num_layers_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::_internal_num_layers() const {
  return num_layers_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::num_layers() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.num_layers)
  return _internal_num_layers();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_num_layers(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  num_layers_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_num_layers(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_num_layers(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.num_layers)
}

// repeated int32 feature_map_width = 8;
inline int SsdAnchorsCalculatorOptions::_internal_feature_map_width_size() const {
  return feature_map_width_.size();
}
inline int SsdAnchorsCalculatorOptions::feature_map_width_size() const {
  return _internal_feature_map_width_size();
}
inline void SsdAnchorsCalculatorOptions::clear_feature_map_width() {
  feature_map_width_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::_internal_feature_map_width(int index) const {
  return feature_map_width_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::feature_map_width(int index) const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.feature_map_width)
  return _internal_feature_map_width(index);
}
inline void SsdAnchorsCalculatorOptions::set_feature_map_width(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  feature_map_width_.Set(index, value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.feature_map_width)
}
inline void SsdAnchorsCalculatorOptions::_internal_add_feature_map_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  feature_map_width_.Add(value);
}
inline void SsdAnchorsCalculatorOptions::add_feature_map_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_feature_map_width(value);
  // @@protoc_insertion_point(field_add:mediapipe.SsdAnchorsCalculatorOptions.feature_map_width)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SsdAnchorsCalculatorOptions::_internal_feature_map_width() const {
  return feature_map_width_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SsdAnchorsCalculatorOptions::feature_map_width() const {
  // @@protoc_insertion_point(field_list:mediapipe.SsdAnchorsCalculatorOptions.feature_map_width)
  return _internal_feature_map_width();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SsdAnchorsCalculatorOptions::_internal_mutable_feature_map_width() {
  return &feature_map_width_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SsdAnchorsCalculatorOptions::mutable_feature_map_width() {
  // @@protoc_insertion_point(field_mutable_list:mediapipe.SsdAnchorsCalculatorOptions.feature_map_width)
  return _internal_mutable_feature_map_width();
}

// repeated int32 feature_map_height = 9;
inline int SsdAnchorsCalculatorOptions::_internal_feature_map_height_size() const {
  return feature_map_height_.size();
}
inline int SsdAnchorsCalculatorOptions::feature_map_height_size() const {
  return _internal_feature_map_height_size();
}
inline void SsdAnchorsCalculatorOptions::clear_feature_map_height() {
  feature_map_height_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::_internal_feature_map_height(int index) const {
  return feature_map_height_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::feature_map_height(int index) const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.feature_map_height)
  return _internal_feature_map_height(index);
}
inline void SsdAnchorsCalculatorOptions::set_feature_map_height(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  feature_map_height_.Set(index, value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.feature_map_height)
}
inline void SsdAnchorsCalculatorOptions::_internal_add_feature_map_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  feature_map_height_.Add(value);
}
inline void SsdAnchorsCalculatorOptions::add_feature_map_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_feature_map_height(value);
  // @@protoc_insertion_point(field_add:mediapipe.SsdAnchorsCalculatorOptions.feature_map_height)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SsdAnchorsCalculatorOptions::_internal_feature_map_height() const {
  return feature_map_height_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SsdAnchorsCalculatorOptions::feature_map_height() const {
  // @@protoc_insertion_point(field_list:mediapipe.SsdAnchorsCalculatorOptions.feature_map_height)
  return _internal_feature_map_height();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SsdAnchorsCalculatorOptions::_internal_mutable_feature_map_height() {
  return &feature_map_height_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SsdAnchorsCalculatorOptions::mutable_feature_map_height() {
  // @@protoc_insertion_point(field_mutable_list:mediapipe.SsdAnchorsCalculatorOptions.feature_map_height)
  return _internal_mutable_feature_map_height();
}

// repeated int32 strides = 10;
inline int SsdAnchorsCalculatorOptions::_internal_strides_size() const {
  return strides_.size();
}
inline int SsdAnchorsCalculatorOptions::strides_size() const {
  return _internal_strides_size();
}
inline void SsdAnchorsCalculatorOptions::clear_strides() {
  strides_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::_internal_strides(int index) const {
  return strides_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SsdAnchorsCalculatorOptions::strides(int index) const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.strides)
  return _internal_strides(index);
}
inline void SsdAnchorsCalculatorOptions::set_strides(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  strides_.Set(index, value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.strides)
}
inline void SsdAnchorsCalculatorOptions::_internal_add_strides(::PROTOBUF_NAMESPACE_ID::int32 value) {
  strides_.Add(value);
}
inline void SsdAnchorsCalculatorOptions::add_strides(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_strides(value);
  // @@protoc_insertion_point(field_add:mediapipe.SsdAnchorsCalculatorOptions.strides)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SsdAnchorsCalculatorOptions::_internal_strides() const {
  return strides_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SsdAnchorsCalculatorOptions::strides() const {
  // @@protoc_insertion_point(field_list:mediapipe.SsdAnchorsCalculatorOptions.strides)
  return _internal_strides();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SsdAnchorsCalculatorOptions::_internal_mutable_strides() {
  return &strides_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SsdAnchorsCalculatorOptions::mutable_strides() {
  // @@protoc_insertion_point(field_mutable_list:mediapipe.SsdAnchorsCalculatorOptions.strides)
  return _internal_mutable_strides();
}

// repeated float aspect_ratios = 11;
inline int SsdAnchorsCalculatorOptions::_internal_aspect_ratios_size() const {
  return aspect_ratios_.size();
}
inline int SsdAnchorsCalculatorOptions::aspect_ratios_size() const {
  return _internal_aspect_ratios_size();
}
inline void SsdAnchorsCalculatorOptions::clear_aspect_ratios() {
  aspect_ratios_.Clear();
}
inline float SsdAnchorsCalculatorOptions::_internal_aspect_ratios(int index) const {
  return aspect_ratios_.Get(index);
}
inline float SsdAnchorsCalculatorOptions::aspect_ratios(int index) const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.aspect_ratios)
  return _internal_aspect_ratios(index);
}
inline void SsdAnchorsCalculatorOptions::set_aspect_ratios(int index, float value) {
  aspect_ratios_.Set(index, value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.aspect_ratios)
}
inline void SsdAnchorsCalculatorOptions::_internal_add_aspect_ratios(float value) {
  aspect_ratios_.Add(value);
}
inline void SsdAnchorsCalculatorOptions::add_aspect_ratios(float value) {
  _internal_add_aspect_ratios(value);
  // @@protoc_insertion_point(field_add:mediapipe.SsdAnchorsCalculatorOptions.aspect_ratios)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
SsdAnchorsCalculatorOptions::_internal_aspect_ratios() const {
  return aspect_ratios_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
SsdAnchorsCalculatorOptions::aspect_ratios() const {
  // @@protoc_insertion_point(field_list:mediapipe.SsdAnchorsCalculatorOptions.aspect_ratios)
  return _internal_aspect_ratios();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
SsdAnchorsCalculatorOptions::_internal_mutable_aspect_ratios() {
  return &aspect_ratios_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
SsdAnchorsCalculatorOptions::mutable_aspect_ratios() {
  // @@protoc_insertion_point(field_mutable_list:mediapipe.SsdAnchorsCalculatorOptions.aspect_ratios)
  return _internal_mutable_aspect_ratios();
}

// optional bool reduce_boxes_in_lowest_layer = 12 [default = false];
inline bool SsdAnchorsCalculatorOptions::_internal_has_reduce_boxes_in_lowest_layer() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_reduce_boxes_in_lowest_layer() const {
  return _internal_has_reduce_boxes_in_lowest_layer();
}
inline void SsdAnchorsCalculatorOptions::clear_reduce_boxes_in_lowest_layer() {
  reduce_boxes_in_lowest_layer_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool SsdAnchorsCalculatorOptions::_internal_reduce_boxes_in_lowest_layer() const {
  return reduce_boxes_in_lowest_layer_;
}
inline bool SsdAnchorsCalculatorOptions::reduce_boxes_in_lowest_layer() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.reduce_boxes_in_lowest_layer)
  return _internal_reduce_boxes_in_lowest_layer();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_reduce_boxes_in_lowest_layer(bool value) {
  _has_bits_[0] |= 0x00000020u;
  reduce_boxes_in_lowest_layer_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_reduce_boxes_in_lowest_layer(bool value) {
  _internal_set_reduce_boxes_in_lowest_layer(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.reduce_boxes_in_lowest_layer)
}

// optional float interpolated_scale_aspect_ratio = 13 [default = 1];
inline bool SsdAnchorsCalculatorOptions::_internal_has_interpolated_scale_aspect_ratio() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_interpolated_scale_aspect_ratio() const {
  return _internal_has_interpolated_scale_aspect_ratio();
}
inline void SsdAnchorsCalculatorOptions::clear_interpolated_scale_aspect_ratio() {
  interpolated_scale_aspect_ratio_ = 1;
  _has_bits_[0] &= ~0x00000080u;
}
inline float SsdAnchorsCalculatorOptions::_internal_interpolated_scale_aspect_ratio() const {
  return interpolated_scale_aspect_ratio_;
}
inline float SsdAnchorsCalculatorOptions::interpolated_scale_aspect_ratio() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.interpolated_scale_aspect_ratio)
  return _internal_interpolated_scale_aspect_ratio();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_interpolated_scale_aspect_ratio(float value) {
  _has_bits_[0] |= 0x00000080u;
  interpolated_scale_aspect_ratio_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_interpolated_scale_aspect_ratio(float value) {
  _internal_set_interpolated_scale_aspect_ratio(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.interpolated_scale_aspect_ratio)
}

// optional bool fixed_anchor_size = 14 [default = false];
inline bool SsdAnchorsCalculatorOptions::_internal_has_fixed_anchor_size() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool SsdAnchorsCalculatorOptions::has_fixed_anchor_size() const {
  return _internal_has_fixed_anchor_size();
}
inline void SsdAnchorsCalculatorOptions::clear_fixed_anchor_size() {
  fixed_anchor_size_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool SsdAnchorsCalculatorOptions::_internal_fixed_anchor_size() const {
  return fixed_anchor_size_;
}
inline bool SsdAnchorsCalculatorOptions::fixed_anchor_size() const {
  // @@protoc_insertion_point(field_get:mediapipe.SsdAnchorsCalculatorOptions.fixed_anchor_size)
  return _internal_fixed_anchor_size();
}
inline void SsdAnchorsCalculatorOptions::_internal_set_fixed_anchor_size(bool value) {
  _has_bits_[0] |= 0x00000040u;
  fixed_anchor_size_ = value;
}
inline void SsdAnchorsCalculatorOptions::set_fixed_anchor_size(bool value) {
  _internal_set_fixed_anchor_size(value);
  // @@protoc_insertion_point(field_set:mediapipe.SsdAnchorsCalculatorOptions.fixed_anchor_size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2ftflite_2fssd_5fanchors_5fcalculator_2eproto
