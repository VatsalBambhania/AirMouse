// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/util/detections_to_render_data_calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto

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
#include "mediapipe/util/color.pb.h"
#include "mediapipe/util/render_data.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto;
namespace mediapipe {
class DetectionsToRenderDataCalculatorOptions;
class DetectionsToRenderDataCalculatorOptionsDefaultTypeInternal;
extern DetectionsToRenderDataCalculatorOptionsDefaultTypeInternal _DetectionsToRenderDataCalculatorOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::DetectionsToRenderDataCalculatorOptions* Arena::CreateMaybeMessage<::mediapipe::DetectionsToRenderDataCalculatorOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class DetectionsToRenderDataCalculatorOptions :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.DetectionsToRenderDataCalculatorOptions) */ {
 public:
  DetectionsToRenderDataCalculatorOptions();
  virtual ~DetectionsToRenderDataCalculatorOptions();

  DetectionsToRenderDataCalculatorOptions(const DetectionsToRenderDataCalculatorOptions& from);
  DetectionsToRenderDataCalculatorOptions(DetectionsToRenderDataCalculatorOptions&& from) noexcept
    : DetectionsToRenderDataCalculatorOptions() {
    *this = ::std::move(from);
  }

  inline DetectionsToRenderDataCalculatorOptions& operator=(const DetectionsToRenderDataCalculatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline DetectionsToRenderDataCalculatorOptions& operator=(DetectionsToRenderDataCalculatorOptions&& from) noexcept {
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
  static const DetectionsToRenderDataCalculatorOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DetectionsToRenderDataCalculatorOptions* internal_default_instance() {
    return reinterpret_cast<const DetectionsToRenderDataCalculatorOptions*>(
               &_DetectionsToRenderDataCalculatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DetectionsToRenderDataCalculatorOptions& a, DetectionsToRenderDataCalculatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(DetectionsToRenderDataCalculatorOptions* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DetectionsToRenderDataCalculatorOptions* New() const final {
    return CreateMaybeMessage<DetectionsToRenderDataCalculatorOptions>(nullptr);
  }

  DetectionsToRenderDataCalculatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DetectionsToRenderDataCalculatorOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DetectionsToRenderDataCalculatorOptions& from);
  void MergeFrom(const DetectionsToRenderDataCalculatorOptions& from);
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
  void InternalSwap(DetectionsToRenderDataCalculatorOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.DetectionsToRenderDataCalculatorOptions";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto);
    return ::descriptor_table_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTextDelimiterFieldNumber = 2,
    kSceneClassFieldNumber = 7,
    kTextFieldNumber = 4,
    kColorFieldNumber = 6,
    kOneLabelPerLineFieldNumber = 3,
    kRenderDetectionIdFieldNumber = 8,
    kProduceEmptyPacketFieldNumber = 1,
    kThicknessFieldNumber = 5,
  };
  // optional string text_delimiter = 2 [default = ","];
  bool has_text_delimiter() const;
  private:
  bool _internal_has_text_delimiter() const;
  public:
  void clear_text_delimiter();
  const std::string& text_delimiter() const;
  void set_text_delimiter(const std::string& value);
  void set_text_delimiter(std::string&& value);
  void set_text_delimiter(const char* value);
  void set_text_delimiter(const char* value, size_t size);
  std::string* mutable_text_delimiter();
  std::string* release_text_delimiter();
  void set_allocated_text_delimiter(std::string* text_delimiter);
  private:
  const std::string& _internal_text_delimiter() const;
  void _internal_set_text_delimiter(const std::string& value);
  std::string* _internal_mutable_text_delimiter();
  public:

  // optional string scene_class = 7 [default = "DETECTION"];
  bool has_scene_class() const;
  private:
  bool _internal_has_scene_class() const;
  public:
  void clear_scene_class();
  const std::string& scene_class() const;
  void set_scene_class(const std::string& value);
  void set_scene_class(std::string&& value);
  void set_scene_class(const char* value);
  void set_scene_class(const char* value, size_t size);
  std::string* mutable_scene_class();
  std::string* release_scene_class();
  void set_allocated_scene_class(std::string* scene_class);
  private:
  const std::string& _internal_scene_class() const;
  void _internal_set_scene_class(const std::string& value);
  std::string* _internal_mutable_scene_class();
  public:

  // optional .mediapipe.RenderAnnotation.Text text = 4;
  bool has_text() const;
  private:
  bool _internal_has_text() const;
  public:
  void clear_text();
  const ::mediapipe::RenderAnnotation_Text& text() const;
  ::mediapipe::RenderAnnotation_Text* release_text();
  ::mediapipe::RenderAnnotation_Text* mutable_text();
  void set_allocated_text(::mediapipe::RenderAnnotation_Text* text);
  private:
  const ::mediapipe::RenderAnnotation_Text& _internal_text() const;
  ::mediapipe::RenderAnnotation_Text* _internal_mutable_text();
  public:

  // optional .mediapipe.Color color = 6;
  bool has_color() const;
  private:
  bool _internal_has_color() const;
  public:
  void clear_color();
  const ::mediapipe::Color& color() const;
  ::mediapipe::Color* release_color();
  ::mediapipe::Color* mutable_color();
  void set_allocated_color(::mediapipe::Color* color);
  private:
  const ::mediapipe::Color& _internal_color() const;
  ::mediapipe::Color* _internal_mutable_color();
  public:

  // optional bool one_label_per_line = 3 [default = false];
  bool has_one_label_per_line() const;
  private:
  bool _internal_has_one_label_per_line() const;
  public:
  void clear_one_label_per_line();
  bool one_label_per_line() const;
  void set_one_label_per_line(bool value);
  private:
  bool _internal_one_label_per_line() const;
  void _internal_set_one_label_per_line(bool value);
  public:

  // optional bool render_detection_id = 8 [default = false];
  bool has_render_detection_id() const;
  private:
  bool _internal_has_render_detection_id() const;
  public:
  void clear_render_detection_id();
  bool render_detection_id() const;
  void set_render_detection_id(bool value);
  private:
  bool _internal_render_detection_id() const;
  void _internal_set_render_detection_id(bool value);
  public:

  // optional bool produce_empty_packet = 1 [default = true];
  bool has_produce_empty_packet() const;
  private:
  bool _internal_has_produce_empty_packet() const;
  public:
  void clear_produce_empty_packet();
  bool produce_empty_packet() const;
  void set_produce_empty_packet(bool value);
  private:
  bool _internal_produce_empty_packet() const;
  void _internal_set_produce_empty_packet(bool value);
  public:

  // optional double thickness = 5 [default = 1];
  bool has_thickness() const;
  private:
  bool _internal_has_thickness() const;
  public:
  void clear_thickness();
  double thickness() const;
  void set_thickness(double value);
  private:
  double _internal_thickness() const;
  void _internal_set_thickness(double value);
  public:

  static const int kExtFieldNumber = 248360806;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::DetectionsToRenderDataCalculatorOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.DetectionsToRenderDataCalculatorOptions)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  public:
  static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> _i_give_permission_to_break_this_code_default_text_delimiter_;
  private:
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_delimiter_;
  public:
  static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> _i_give_permission_to_break_this_code_default_scene_class_;
  private:
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr scene_class_;
  ::mediapipe::RenderAnnotation_Text* text_;
  ::mediapipe::Color* color_;
  bool one_label_per_line_;
  bool render_detection_id_;
  bool produce_empty_packet_;
  double thickness_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DetectionsToRenderDataCalculatorOptions

// optional bool produce_empty_packet = 1 [default = true];
inline bool DetectionsToRenderDataCalculatorOptions::_internal_has_produce_empty_packet() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool DetectionsToRenderDataCalculatorOptions::has_produce_empty_packet() const {
  return _internal_has_produce_empty_packet();
}
inline void DetectionsToRenderDataCalculatorOptions::clear_produce_empty_packet() {
  produce_empty_packet_ = true;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool DetectionsToRenderDataCalculatorOptions::_internal_produce_empty_packet() const {
  return produce_empty_packet_;
}
inline bool DetectionsToRenderDataCalculatorOptions::produce_empty_packet() const {
  // @@protoc_insertion_point(field_get:mediapipe.DetectionsToRenderDataCalculatorOptions.produce_empty_packet)
  return _internal_produce_empty_packet();
}
inline void DetectionsToRenderDataCalculatorOptions::_internal_set_produce_empty_packet(bool value) {
  _has_bits_[0] |= 0x00000040u;
  produce_empty_packet_ = value;
}
inline void DetectionsToRenderDataCalculatorOptions::set_produce_empty_packet(bool value) {
  _internal_set_produce_empty_packet(value);
  // @@protoc_insertion_point(field_set:mediapipe.DetectionsToRenderDataCalculatorOptions.produce_empty_packet)
}

// optional string text_delimiter = 2 [default = ","];
inline bool DetectionsToRenderDataCalculatorOptions::_internal_has_text_delimiter() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool DetectionsToRenderDataCalculatorOptions::has_text_delimiter() const {
  return _internal_has_text_delimiter();
}
inline void DetectionsToRenderDataCalculatorOptions::clear_text_delimiter() {
  text_delimiter_.ClearToDefaultNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_text_delimiter_.get());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& DetectionsToRenderDataCalculatorOptions::text_delimiter() const {
  // @@protoc_insertion_point(field_get:mediapipe.DetectionsToRenderDataCalculatorOptions.text_delimiter)
  return _internal_text_delimiter();
}
inline void DetectionsToRenderDataCalculatorOptions::set_text_delimiter(const std::string& value) {
  _internal_set_text_delimiter(value);
  // @@protoc_insertion_point(field_set:mediapipe.DetectionsToRenderDataCalculatorOptions.text_delimiter)
}
inline std::string* DetectionsToRenderDataCalculatorOptions::mutable_text_delimiter() {
  // @@protoc_insertion_point(field_mutable:mediapipe.DetectionsToRenderDataCalculatorOptions.text_delimiter)
  return _internal_mutable_text_delimiter();
}
inline const std::string& DetectionsToRenderDataCalculatorOptions::_internal_text_delimiter() const {
  return text_delimiter_.GetNoArena();
}
inline void DetectionsToRenderDataCalculatorOptions::_internal_set_text_delimiter(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  text_delimiter_.SetNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_text_delimiter_.get(), value);
}
inline void DetectionsToRenderDataCalculatorOptions::set_text_delimiter(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  text_delimiter_.SetNoArena(
    &::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_text_delimiter_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mediapipe.DetectionsToRenderDataCalculatorOptions.text_delimiter)
}
inline void DetectionsToRenderDataCalculatorOptions::set_text_delimiter(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  text_delimiter_.SetNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_text_delimiter_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mediapipe.DetectionsToRenderDataCalculatorOptions.text_delimiter)
}
inline void DetectionsToRenderDataCalculatorOptions::set_text_delimiter(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  text_delimiter_.SetNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_text_delimiter_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mediapipe.DetectionsToRenderDataCalculatorOptions.text_delimiter)
}
inline std::string* DetectionsToRenderDataCalculatorOptions::_internal_mutable_text_delimiter() {
  _has_bits_[0] |= 0x00000001u;
  return text_delimiter_.MutableNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_text_delimiter_.get());
}
inline std::string* DetectionsToRenderDataCalculatorOptions::release_text_delimiter() {
  // @@protoc_insertion_point(field_release:mediapipe.DetectionsToRenderDataCalculatorOptions.text_delimiter)
  if (!_internal_has_text_delimiter()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return text_delimiter_.ReleaseNonDefaultNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_text_delimiter_.get());
}
inline void DetectionsToRenderDataCalculatorOptions::set_allocated_text_delimiter(std::string* text_delimiter) {
  if (text_delimiter != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  text_delimiter_.SetAllocatedNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_text_delimiter_.get(), text_delimiter);
  // @@protoc_insertion_point(field_set_allocated:mediapipe.DetectionsToRenderDataCalculatorOptions.text_delimiter)
}

// optional bool one_label_per_line = 3 [default = false];
inline bool DetectionsToRenderDataCalculatorOptions::_internal_has_one_label_per_line() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool DetectionsToRenderDataCalculatorOptions::has_one_label_per_line() const {
  return _internal_has_one_label_per_line();
}
inline void DetectionsToRenderDataCalculatorOptions::clear_one_label_per_line() {
  one_label_per_line_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool DetectionsToRenderDataCalculatorOptions::_internal_one_label_per_line() const {
  return one_label_per_line_;
}
inline bool DetectionsToRenderDataCalculatorOptions::one_label_per_line() const {
  // @@protoc_insertion_point(field_get:mediapipe.DetectionsToRenderDataCalculatorOptions.one_label_per_line)
  return _internal_one_label_per_line();
}
inline void DetectionsToRenderDataCalculatorOptions::_internal_set_one_label_per_line(bool value) {
  _has_bits_[0] |= 0x00000010u;
  one_label_per_line_ = value;
}
inline void DetectionsToRenderDataCalculatorOptions::set_one_label_per_line(bool value) {
  _internal_set_one_label_per_line(value);
  // @@protoc_insertion_point(field_set:mediapipe.DetectionsToRenderDataCalculatorOptions.one_label_per_line)
}

// optional .mediapipe.RenderAnnotation.Text text = 4;
inline bool DetectionsToRenderDataCalculatorOptions::_internal_has_text() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || text_ != nullptr);
  return value;
}
inline bool DetectionsToRenderDataCalculatorOptions::has_text() const {
  return _internal_has_text();
}
inline const ::mediapipe::RenderAnnotation_Text& DetectionsToRenderDataCalculatorOptions::_internal_text() const {
  const ::mediapipe::RenderAnnotation_Text* p = text_;
  return p != nullptr ? *p : *reinterpret_cast<const ::mediapipe::RenderAnnotation_Text*>(
      &::mediapipe::_RenderAnnotation_Text_default_instance_);
}
inline const ::mediapipe::RenderAnnotation_Text& DetectionsToRenderDataCalculatorOptions::text() const {
  // @@protoc_insertion_point(field_get:mediapipe.DetectionsToRenderDataCalculatorOptions.text)
  return _internal_text();
}
inline ::mediapipe::RenderAnnotation_Text* DetectionsToRenderDataCalculatorOptions::release_text() {
  // @@protoc_insertion_point(field_release:mediapipe.DetectionsToRenderDataCalculatorOptions.text)
  _has_bits_[0] &= ~0x00000004u;
  ::mediapipe::RenderAnnotation_Text* temp = text_;
  text_ = nullptr;
  return temp;
}
inline ::mediapipe::RenderAnnotation_Text* DetectionsToRenderDataCalculatorOptions::_internal_mutable_text() {
  _has_bits_[0] |= 0x00000004u;
  if (text_ == nullptr) {
    auto* p = CreateMaybeMessage<::mediapipe::RenderAnnotation_Text>(GetArenaNoVirtual());
    text_ = p;
  }
  return text_;
}
inline ::mediapipe::RenderAnnotation_Text* DetectionsToRenderDataCalculatorOptions::mutable_text() {
  // @@protoc_insertion_point(field_mutable:mediapipe.DetectionsToRenderDataCalculatorOptions.text)
  return _internal_mutable_text();
}
inline void DetectionsToRenderDataCalculatorOptions::set_allocated_text(::mediapipe::RenderAnnotation_Text* text) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(text_);
  }
  if (text) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      text = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, text, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  text_ = text;
  // @@protoc_insertion_point(field_set_allocated:mediapipe.DetectionsToRenderDataCalculatorOptions.text)
}

// optional double thickness = 5 [default = 1];
inline bool DetectionsToRenderDataCalculatorOptions::_internal_has_thickness() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool DetectionsToRenderDataCalculatorOptions::has_thickness() const {
  return _internal_has_thickness();
}
inline void DetectionsToRenderDataCalculatorOptions::clear_thickness() {
  thickness_ = 1;
  _has_bits_[0] &= ~0x00000080u;
}
inline double DetectionsToRenderDataCalculatorOptions::_internal_thickness() const {
  return thickness_;
}
inline double DetectionsToRenderDataCalculatorOptions::thickness() const {
  // @@protoc_insertion_point(field_get:mediapipe.DetectionsToRenderDataCalculatorOptions.thickness)
  return _internal_thickness();
}
inline void DetectionsToRenderDataCalculatorOptions::_internal_set_thickness(double value) {
  _has_bits_[0] |= 0x00000080u;
  thickness_ = value;
}
inline void DetectionsToRenderDataCalculatorOptions::set_thickness(double value) {
  _internal_set_thickness(value);
  // @@protoc_insertion_point(field_set:mediapipe.DetectionsToRenderDataCalculatorOptions.thickness)
}

// optional .mediapipe.Color color = 6;
inline bool DetectionsToRenderDataCalculatorOptions::_internal_has_color() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || color_ != nullptr);
  return value;
}
inline bool DetectionsToRenderDataCalculatorOptions::has_color() const {
  return _internal_has_color();
}
inline const ::mediapipe::Color& DetectionsToRenderDataCalculatorOptions::_internal_color() const {
  const ::mediapipe::Color* p = color_;
  return p != nullptr ? *p : *reinterpret_cast<const ::mediapipe::Color*>(
      &::mediapipe::_Color_default_instance_);
}
inline const ::mediapipe::Color& DetectionsToRenderDataCalculatorOptions::color() const {
  // @@protoc_insertion_point(field_get:mediapipe.DetectionsToRenderDataCalculatorOptions.color)
  return _internal_color();
}
inline ::mediapipe::Color* DetectionsToRenderDataCalculatorOptions::release_color() {
  // @@protoc_insertion_point(field_release:mediapipe.DetectionsToRenderDataCalculatorOptions.color)
  _has_bits_[0] &= ~0x00000008u;
  ::mediapipe::Color* temp = color_;
  color_ = nullptr;
  return temp;
}
inline ::mediapipe::Color* DetectionsToRenderDataCalculatorOptions::_internal_mutable_color() {
  _has_bits_[0] |= 0x00000008u;
  if (color_ == nullptr) {
    auto* p = CreateMaybeMessage<::mediapipe::Color>(GetArenaNoVirtual());
    color_ = p;
  }
  return color_;
}
inline ::mediapipe::Color* DetectionsToRenderDataCalculatorOptions::mutable_color() {
  // @@protoc_insertion_point(field_mutable:mediapipe.DetectionsToRenderDataCalculatorOptions.color)
  return _internal_mutable_color();
}
inline void DetectionsToRenderDataCalculatorOptions::set_allocated_color(::mediapipe::Color* color) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(color_);
  }
  if (color) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      color = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, color, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  color_ = color;
  // @@protoc_insertion_point(field_set_allocated:mediapipe.DetectionsToRenderDataCalculatorOptions.color)
}

// optional string scene_class = 7 [default = "DETECTION"];
inline bool DetectionsToRenderDataCalculatorOptions::_internal_has_scene_class() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool DetectionsToRenderDataCalculatorOptions::has_scene_class() const {
  return _internal_has_scene_class();
}
inline void DetectionsToRenderDataCalculatorOptions::clear_scene_class() {
  scene_class_.ClearToDefaultNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_scene_class_.get());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& DetectionsToRenderDataCalculatorOptions::scene_class() const {
  // @@protoc_insertion_point(field_get:mediapipe.DetectionsToRenderDataCalculatorOptions.scene_class)
  return _internal_scene_class();
}
inline void DetectionsToRenderDataCalculatorOptions::set_scene_class(const std::string& value) {
  _internal_set_scene_class(value);
  // @@protoc_insertion_point(field_set:mediapipe.DetectionsToRenderDataCalculatorOptions.scene_class)
}
inline std::string* DetectionsToRenderDataCalculatorOptions::mutable_scene_class() {
  // @@protoc_insertion_point(field_mutable:mediapipe.DetectionsToRenderDataCalculatorOptions.scene_class)
  return _internal_mutable_scene_class();
}
inline const std::string& DetectionsToRenderDataCalculatorOptions::_internal_scene_class() const {
  return scene_class_.GetNoArena();
}
inline void DetectionsToRenderDataCalculatorOptions::_internal_set_scene_class(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  scene_class_.SetNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_scene_class_.get(), value);
}
inline void DetectionsToRenderDataCalculatorOptions::set_scene_class(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  scene_class_.SetNoArena(
    &::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_scene_class_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mediapipe.DetectionsToRenderDataCalculatorOptions.scene_class)
}
inline void DetectionsToRenderDataCalculatorOptions::set_scene_class(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  scene_class_.SetNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_scene_class_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mediapipe.DetectionsToRenderDataCalculatorOptions.scene_class)
}
inline void DetectionsToRenderDataCalculatorOptions::set_scene_class(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  scene_class_.SetNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_scene_class_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mediapipe.DetectionsToRenderDataCalculatorOptions.scene_class)
}
inline std::string* DetectionsToRenderDataCalculatorOptions::_internal_mutable_scene_class() {
  _has_bits_[0] |= 0x00000002u;
  return scene_class_.MutableNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_scene_class_.get());
}
inline std::string* DetectionsToRenderDataCalculatorOptions::release_scene_class() {
  // @@protoc_insertion_point(field_release:mediapipe.DetectionsToRenderDataCalculatorOptions.scene_class)
  if (!_internal_has_scene_class()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return scene_class_.ReleaseNonDefaultNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_scene_class_.get());
}
inline void DetectionsToRenderDataCalculatorOptions::set_allocated_scene_class(std::string* scene_class) {
  if (scene_class != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  scene_class_.SetAllocatedNoArena(&::mediapipe::DetectionsToRenderDataCalculatorOptions::_i_give_permission_to_break_this_code_default_scene_class_.get(), scene_class);
  // @@protoc_insertion_point(field_set_allocated:mediapipe.DetectionsToRenderDataCalculatorOptions.scene_class)
}

// optional bool render_detection_id = 8 [default = false];
inline bool DetectionsToRenderDataCalculatorOptions::_internal_has_render_detection_id() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool DetectionsToRenderDataCalculatorOptions::has_render_detection_id() const {
  return _internal_has_render_detection_id();
}
inline void DetectionsToRenderDataCalculatorOptions::clear_render_detection_id() {
  render_detection_id_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool DetectionsToRenderDataCalculatorOptions::_internal_render_detection_id() const {
  return render_detection_id_;
}
inline bool DetectionsToRenderDataCalculatorOptions::render_detection_id() const {
  // @@protoc_insertion_point(field_get:mediapipe.DetectionsToRenderDataCalculatorOptions.render_detection_id)
  return _internal_render_detection_id();
}
inline void DetectionsToRenderDataCalculatorOptions::_internal_set_render_detection_id(bool value) {
  _has_bits_[0] |= 0x00000020u;
  render_detection_id_ = value;
}
inline void DetectionsToRenderDataCalculatorOptions::set_render_detection_id(bool value) {
  _internal_set_render_detection_id(value);
  // @@protoc_insertion_point(field_set:mediapipe.DetectionsToRenderDataCalculatorOptions.render_detection_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2fdetections_5fto_5frender_5fdata_5fcalculator_2eproto
