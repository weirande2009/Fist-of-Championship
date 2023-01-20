// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerProtobuf.proto

#include "ServerProtobuf.pb.h"

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
namespace ChampionFistServer {
class C_EstablishDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<C_Establish> _instance;
} _C_Establish_default_instance_;
class C_OverDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<C_Over> _instance;
} _C_Over_default_instance_;
}  // namespace ChampionFistServer
static void InitDefaultsscc_info_C_Establish_ServerProtobuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ChampionFistServer::_C_Establish_default_instance_;
    new (ptr) ::ChampionFistServer::C_Establish();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_C_Establish_ServerProtobuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_C_Establish_ServerProtobuf_2eproto}, {}};

static void InitDefaultsscc_info_C_Over_ServerProtobuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ChampionFistServer::_C_Over_default_instance_;
    new (ptr) ::ChampionFistServer::C_Over();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_C_Over_ServerProtobuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_C_Over_ServerProtobuf_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ServerProtobuf_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ServerProtobuf_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ServerProtobuf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ServerProtobuf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChampionFistServer::C_Establish, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ChampionFistServer::C_Establish, pid_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChampionFistServer::C_Over, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ChampionFistServer::C_Over, port_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ChampionFistServer::C_Establish)},
  { 6, -1, sizeof(::ChampionFistServer::C_Over)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ChampionFistServer::_C_Establish_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ChampionFistServer::_C_Over_default_instance_),
};

const char descriptor_table_protodef_ServerProtobuf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024ServerProtobuf.proto\022\022ChampionFistServ"
  "er\"\032\n\013C_Establish\022\013\n\003pid\030\001 \001(\005\"\026\n\006C_Over"
  "\022\014\n\004port\030\001 \001(\005*$\n\021ServerCommandType\022\017\n\013S"
  "_ESTABLISH\020\000*0\n\021ClientCommandType\022\017\n\013C_E"
  "STABLISH\020\000\022\n\n\006C_OVER\020\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ServerProtobuf_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ServerProtobuf_2eproto_sccs[2] = {
  &scc_info_C_Establish_ServerProtobuf_2eproto.base,
  &scc_info_C_Over_ServerProtobuf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ServerProtobuf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ServerProtobuf_2eproto = {
  false, false, descriptor_table_protodef_ServerProtobuf_2eproto, "ServerProtobuf.proto", 190,
  &descriptor_table_ServerProtobuf_2eproto_once, descriptor_table_ServerProtobuf_2eproto_sccs, descriptor_table_ServerProtobuf_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_ServerProtobuf_2eproto::offsets,
  file_level_metadata_ServerProtobuf_2eproto, 2, file_level_enum_descriptors_ServerProtobuf_2eproto, file_level_service_descriptors_ServerProtobuf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ServerProtobuf_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ServerProtobuf_2eproto)), true);
namespace ChampionFistServer {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ServerCommandType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ServerProtobuf_2eproto);
  return file_level_enum_descriptors_ServerProtobuf_2eproto[0];
}
bool ServerCommandType_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ClientCommandType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ServerProtobuf_2eproto);
  return file_level_enum_descriptors_ServerProtobuf_2eproto[1];
}
bool ClientCommandType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class C_Establish::_Internal {
 public:
};

C_Establish::C_Establish(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:ChampionFistServer.C_Establish)
}
C_Establish::C_Establish(const C_Establish& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  pid_ = from.pid_;
  // @@protoc_insertion_point(copy_constructor:ChampionFistServer.C_Establish)
}

void C_Establish::SharedCtor() {
  pid_ = 0;
}

C_Establish::~C_Establish() {
  // @@protoc_insertion_point(destructor:ChampionFistServer.C_Establish)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void C_Establish::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void C_Establish::ArenaDtor(void* object) {
  C_Establish* _this = reinterpret_cast< C_Establish* >(object);
  (void)_this;
}
void C_Establish::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void C_Establish::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const C_Establish& C_Establish::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_C_Establish_ServerProtobuf_2eproto.base);
  return *internal_default_instance();
}


void C_Establish::Clear() {
// @@protoc_insertion_point(message_clear_start:ChampionFistServer.C_Establish)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  pid_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* C_Establish::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* C_Establish::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChampionFistServer.C_Establish)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 pid = 1;
  if (this->pid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_pid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChampionFistServer.C_Establish)
  return target;
}

size_t C_Establish::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChampionFistServer.C_Establish)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 pid = 1;
  if (this->pid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_pid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void C_Establish::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ChampionFistServer.C_Establish)
  GOOGLE_DCHECK_NE(&from, this);
  const C_Establish* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<C_Establish>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ChampionFistServer.C_Establish)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ChampionFistServer.C_Establish)
    MergeFrom(*source);
  }
}

void C_Establish::MergeFrom(const C_Establish& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ChampionFistServer.C_Establish)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.pid() != 0) {
    _internal_set_pid(from._internal_pid());
  }
}

void C_Establish::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ChampionFistServer.C_Establish)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void C_Establish::CopyFrom(const C_Establish& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChampionFistServer.C_Establish)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C_Establish::IsInitialized() const {
  return true;
}

void C_Establish::InternalSwap(C_Establish* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(pid_, other->pid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata C_Establish::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class C_Over::_Internal {
 public:
};

C_Over::C_Over(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:ChampionFistServer.C_Over)
}
C_Over::C_Over(const C_Over& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  port_ = from.port_;
  // @@protoc_insertion_point(copy_constructor:ChampionFistServer.C_Over)
}

void C_Over::SharedCtor() {
  port_ = 0;
}

C_Over::~C_Over() {
  // @@protoc_insertion_point(destructor:ChampionFistServer.C_Over)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void C_Over::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void C_Over::ArenaDtor(void* object) {
  C_Over* _this = reinterpret_cast< C_Over* >(object);
  (void)_this;
}
void C_Over::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void C_Over::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const C_Over& C_Over::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_C_Over_ServerProtobuf_2eproto.base);
  return *internal_default_instance();
}


void C_Over::Clear() {
// @@protoc_insertion_point(message_clear_start:ChampionFistServer.C_Over)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  port_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* C_Over::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 port = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* C_Over::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChampionFistServer.C_Over)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 port = 1;
  if (this->port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_port(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChampionFistServer.C_Over)
  return target;
}

size_t C_Over::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChampionFistServer.C_Over)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 port = 1;
  if (this->port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_port());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void C_Over::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ChampionFistServer.C_Over)
  GOOGLE_DCHECK_NE(&from, this);
  const C_Over* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<C_Over>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ChampionFistServer.C_Over)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ChampionFistServer.C_Over)
    MergeFrom(*source);
  }
}

void C_Over::MergeFrom(const C_Over& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ChampionFistServer.C_Over)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.port() != 0) {
    _internal_set_port(from._internal_port());
  }
}

void C_Over::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ChampionFistServer.C_Over)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void C_Over::CopyFrom(const C_Over& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChampionFistServer.C_Over)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C_Over::IsInitialized() const {
  return true;
}

void C_Over::InternalSwap(C_Over* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(port_, other->port_);
}

::PROTOBUF_NAMESPACE_ID::Metadata C_Over::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ChampionFistServer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ChampionFistServer::C_Establish* Arena::CreateMaybeMessage< ::ChampionFistServer::C_Establish >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ChampionFistServer::C_Establish >(arena);
}
template<> PROTOBUF_NOINLINE ::ChampionFistServer::C_Over* Arena::CreateMaybeMessage< ::ChampionFistServer::C_Over >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ChampionFistServer::C_Over >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
