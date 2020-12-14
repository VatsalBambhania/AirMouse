// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/tflite/tflite_tensors_to_landmarks_calculator.proto

#include "mediapipe/calculators/tflite/tflite_tensors_to_landmarks_calculator.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TfLiteTensorsToLandmarksCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto;
namespace mediapipe {
class TfLiteTensorsToLandmarksCalculatorOptionsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TfLiteTensorsToLandmarksCalculatorOptions> _instance;
} _TfLiteTensorsToLandmarksCalculatorOptions_default_instance_;
}  // namespace mediapipe
static void InitDefaultsscc_info_TfLiteTensorsToLandmarksCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_TfLiteTensorsToLandmarksCalculatorOptions_default_instance_;
    new (ptr) ::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TfLiteTensorsToLandmarksCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_TfLiteTensorsToLandmarksCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions, num_landmarks_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions, input_image_width_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions, input_image_height_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions, flip_vertically_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions, flip_horizontally_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions, normalize_z_),
  0,
  1,
  2,
  3,
  4,
  5,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_TfLiteTensorsToLandmarksCalculatorOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nImediapipe/calculators/tflite/tflite_te"
  "nsors_to_landmarks_calculator.proto\022\tmed"
  "iapipe\032$mediapipe/framework/calculator.p"
  "roto\"\267\002\n)TfLiteTensorsToLandmarksCalcula"
  "torOptions\022\025\n\rnum_landmarks\030\001 \002(\005\022\031\n\021inp"
  "ut_image_width\030\002 \001(\005\022\032\n\022input_image_heig"
  "ht\030\003 \001(\005\022\036\n\017flip_vertically\030\004 \001(\010:\005false"
  "\022 \n\021flip_horizontally\030\006 \001(\010:\005false\022\026\n\013no"
  "rmalize_z\030\005 \001(\002:\00112b\n\003ext\022\034.mediapipe.Ca"
  "lculatorOptions\030\312\340\336z \001(\01324.mediapipe.TfL"
  "iteTensorsToLandmarksCalculatorOptions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto_deps[1] = {
  &::descriptor_table_mediapipe_2fframework_2fcalculator_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto_sccs[1] = {
  &scc_info_TfLiteTensorsToLandmarksCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto_once;
static bool descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto = {
  &descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto_initialized, descriptor_table_protodef_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto, "mediapipe/calculators/tflite/tflite_tensors_to_landmarks_calculator.proto", 438,
  &descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto_once, descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto_sccs, descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto::offsets,
  file_level_metadata_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto, 1, file_level_enum_descriptors_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto, file_level_service_descriptors_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto), true);
namespace mediapipe {

// ===================================================================

void TfLiteTensorsToLandmarksCalculatorOptions::InitAsDefaultInstance() {
}
class TfLiteTensorsToLandmarksCalculatorOptions::_Internal {
 public:
  using HasBits = decltype(std::declval<TfLiteTensorsToLandmarksCalculatorOptions>()._has_bits_);
  static void set_has_num_landmarks(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_input_image_width(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_input_image_height(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_flip_vertically(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_flip_horizontally(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_normalize_z(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

TfLiteTensorsToLandmarksCalculatorOptions::TfLiteTensorsToLandmarksCalculatorOptions()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
}
TfLiteTensorsToLandmarksCalculatorOptions::TfLiteTensorsToLandmarksCalculatorOptions(const TfLiteTensorsToLandmarksCalculatorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&num_landmarks_, &from.num_landmarks_,
    static_cast<size_t>(reinterpret_cast<char*>(&normalize_z_) -
    reinterpret_cast<char*>(&num_landmarks_)) + sizeof(normalize_z_));
  // @@protoc_insertion_point(copy_constructor:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
}

void TfLiteTensorsToLandmarksCalculatorOptions::SharedCtor() {
  ::memset(&num_landmarks_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&flip_horizontally_) -
      reinterpret_cast<char*>(&num_landmarks_)) + sizeof(flip_horizontally_));
  normalize_z_ = 1;
}

TfLiteTensorsToLandmarksCalculatorOptions::~TfLiteTensorsToLandmarksCalculatorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  SharedDtor();
}

void TfLiteTensorsToLandmarksCalculatorOptions::SharedDtor() {
}

void TfLiteTensorsToLandmarksCalculatorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TfLiteTensorsToLandmarksCalculatorOptions& TfLiteTensorsToLandmarksCalculatorOptions::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TfLiteTensorsToLandmarksCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5ftensors_5fto_5flandmarks_5fcalculator_2eproto.base);
  return *internal_default_instance();
}


void TfLiteTensorsToLandmarksCalculatorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&num_landmarks_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&flip_horizontally_) -
        reinterpret_cast<char*>(&num_landmarks_)) + sizeof(flip_horizontally_));
    normalize_z_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* TfLiteTensorsToLandmarksCalculatorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required int32 num_landmarks = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_num_landmarks(&has_bits);
          num_landmarks_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 input_image_width = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_input_image_width(&has_bits);
          input_image_width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 input_image_height = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_input_image_height(&has_bits);
          input_image_height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool flip_vertically = 4 [default = false];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_flip_vertically(&has_bits);
          flip_vertically_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional float normalize_z = 5 [default = 1];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          _Internal::set_has_normalize_z(&has_bits);
          normalize_z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional bool flip_horizontally = 6 [default = false];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_flip_horizontally(&has_bits);
          flip_horizontally_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* TfLiteTensorsToLandmarksCalculatorOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 num_landmarks = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_num_landmarks(), target);
  }

  // optional int32 input_image_width = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_input_image_width(), target);
  }

  // optional int32 input_image_height = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_input_image_height(), target);
  }

  // optional bool flip_vertically = 4 [default = false];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_flip_vertically(), target);
  }

  // optional float normalize_z = 5 [default = 1];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_normalize_z(), target);
  }

  // optional bool flip_horizontally = 6 [default = false];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->_internal_flip_horizontally(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  return target;
}

size_t TfLiteTensorsToLandmarksCalculatorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  size_t total_size = 0;

  // required int32 num_landmarks = 1;
  if (_internal_has_num_landmarks()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_num_landmarks());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003eu) {
    // optional int32 input_image_width = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_input_image_width());
    }

    // optional int32 input_image_height = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_input_image_height());
    }

    // optional bool flip_vertically = 4 [default = false];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional bool flip_horizontally = 6 [default = false];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

    // optional float normalize_z = 5 [default = 1];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 4;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TfLiteTensorsToLandmarksCalculatorOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const TfLiteTensorsToLandmarksCalculatorOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TfLiteTensorsToLandmarksCalculatorOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
    MergeFrom(*source);
  }
}

void TfLiteTensorsToLandmarksCalculatorOptions::MergeFrom(const TfLiteTensorsToLandmarksCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      num_landmarks_ = from.num_landmarks_;
    }
    if (cached_has_bits & 0x00000002u) {
      input_image_width_ = from.input_image_width_;
    }
    if (cached_has_bits & 0x00000004u) {
      input_image_height_ = from.input_image_height_;
    }
    if (cached_has_bits & 0x00000008u) {
      flip_vertically_ = from.flip_vertically_;
    }
    if (cached_has_bits & 0x00000010u) {
      flip_horizontally_ = from.flip_horizontally_;
    }
    if (cached_has_bits & 0x00000020u) {
      normalize_z_ = from.normalize_z_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void TfLiteTensorsToLandmarksCalculatorOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TfLiteTensorsToLandmarksCalculatorOptions::CopyFrom(const TfLiteTensorsToLandmarksCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.TfLiteTensorsToLandmarksCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TfLiteTensorsToLandmarksCalculatorOptions::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void TfLiteTensorsToLandmarksCalculatorOptions::InternalSwap(TfLiteTensorsToLandmarksCalculatorOptions* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(num_landmarks_, other->num_landmarks_);
  swap(input_image_width_, other->input_image_width_);
  swap(input_image_height_, other->input_image_height_);
  swap(flip_vertically_, other->flip_vertically_);
  swap(flip_horizontally_, other->flip_horizontally_);
  swap(normalize_z_, other->normalize_z_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TfLiteTensorsToLandmarksCalculatorOptions::GetMetadata() const {
  return GetMetadataStatic();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TfLiteTensorsToLandmarksCalculatorOptions::kExtFieldNumber;
#endif
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions >, 11, false >
  TfLiteTensorsToLandmarksCalculatorOptions::ext(kExtFieldNumber, *::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions::internal_default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions* Arena::CreateMaybeMessage< ::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::TfLiteTensorsToLandmarksCalculatorOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>