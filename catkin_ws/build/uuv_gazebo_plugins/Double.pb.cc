// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Double.proto

#include "Double.pb.h"

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
namespace uuv_gazebo_plugins_msgs {
namespace msgs {
class DoubleDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Double> _instance;
} _Double_default_instance_;
}  // namespace msgs
}  // namespace uuv_gazebo_plugins_msgs
static void InitDefaultsscc_info_Double_Double_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::uuv_gazebo_plugins_msgs::msgs::_Double_default_instance_;
    new (ptr) ::uuv_gazebo_plugins_msgs::msgs::Double();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::uuv_gazebo_plugins_msgs::msgs::Double::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Double_Double_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Double_Double_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Double_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Double_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Double_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Double_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::uuv_gazebo_plugins_msgs::msgs::Double, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::uuv_gazebo_plugins_msgs::msgs::Double, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::uuv_gazebo_plugins_msgs::msgs::Double, value_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::uuv_gazebo_plugins_msgs::msgs::Double)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::uuv_gazebo_plugins_msgs::msgs::_Double_default_instance_),
};

const char descriptor_table_protodef_Double_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014Double.proto\022\034uuv_gazebo_plugins_msgs."
  "msgs\"\032\n\006Double\022\020\n\005value\030\001 \002(\001:\0010"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Double_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Double_2eproto_sccs[1] = {
  &scc_info_Double_Double_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Double_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Double_2eproto = {
  false, false, descriptor_table_protodef_Double_2eproto, "Double.proto", 72,
  &descriptor_table_Double_2eproto_once, descriptor_table_Double_2eproto_sccs, descriptor_table_Double_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_Double_2eproto::offsets,
  file_level_metadata_Double_2eproto, 1, file_level_enum_descriptors_Double_2eproto, file_level_service_descriptors_Double_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Double_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Double_2eproto)), true);
namespace uuv_gazebo_plugins_msgs {
namespace msgs {

// ===================================================================

void Double::InitAsDefaultInstance() {
}
class Double::_Internal {
 public:
  using HasBits = decltype(std::declval<Double>()._has_bits_);
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

Double::Double(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:uuv_gazebo_plugins_msgs.msgs.Double)
}
Double::Double(const Double& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  value_ = from.value_;
  // @@protoc_insertion_point(copy_constructor:uuv_gazebo_plugins_msgs.msgs.Double)
}

void Double::SharedCtor() {
  value_ = 0;
}

Double::~Double() {
  // @@protoc_insertion_point(destructor:uuv_gazebo_plugins_msgs.msgs.Double)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Double::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Double::ArenaDtor(void* object) {
  Double* _this = reinterpret_cast< Double* >(object);
  (void)_this;
}
void Double::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Double::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Double& Double::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Double_Double_2eproto.base);
  return *internal_default_instance();
}


void Double::Clear() {
// @@protoc_insertion_point(message_clear_start:uuv_gazebo_plugins_msgs.msgs.Double)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Double::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required double value = 1 [default = 0];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_value(&has_bits);
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* Double::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:uuv_gazebo_plugins_msgs.msgs.Double)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double value = 1 [default = 0];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:uuv_gazebo_plugins_msgs.msgs.Double)
  return target;
}

size_t Double::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:uuv_gazebo_plugins_msgs.msgs.Double)
  size_t total_size = 0;

  // required double value = 1 [default = 0];
  if (_internal_has_value()) {
    total_size += 1 + 8;
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Double::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:uuv_gazebo_plugins_msgs.msgs.Double)
  GOOGLE_DCHECK_NE(&from, this);
  const Double* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Double>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:uuv_gazebo_plugins_msgs.msgs.Double)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:uuv_gazebo_plugins_msgs.msgs.Double)
    MergeFrom(*source);
  }
}

void Double::MergeFrom(const Double& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:uuv_gazebo_plugins_msgs.msgs.Double)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_value()) {
    _internal_set_value(from._internal_value());
  }
}

void Double::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:uuv_gazebo_plugins_msgs.msgs.Double)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Double::CopyFrom(const Double& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:uuv_gazebo_plugins_msgs.msgs.Double)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Double::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Double::InternalSwap(Double* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(value_, other->value_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Double::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace uuv_gazebo_plugins_msgs
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::uuv_gazebo_plugins_msgs::msgs::Double* Arena::CreateMaybeMessage< ::uuv_gazebo_plugins_msgs::msgs::Double >(Arena* arena) {
  return Arena::CreateMessageInternal< ::uuv_gazebo_plugins_msgs::msgs::Double >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
