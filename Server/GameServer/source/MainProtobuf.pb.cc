// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MainProtobuf.proto

#include "MainProtobuf.pb.h"

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
namespace ChampionFistMain {
class S_StartDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<S_Start> _instance;
} _S_Start_default_instance_;
class C_ParticipateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<C_Participate> _instance;
} _C_Participate_default_instance_;
class C_Game_ServerDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<C_Game_Server> _instance;
} _C_Game_Server_default_instance_;
}  // namespace ChampionFistMain
static void InitDefaultsscc_info_C_Game_Server_MainProtobuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ChampionFistMain::_C_Game_Server_default_instance_;
    new (ptr) ::ChampionFistMain::C_Game_Server();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_C_Game_Server_MainProtobuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_C_Game_Server_MainProtobuf_2eproto}, {}};

static void InitDefaultsscc_info_C_Participate_MainProtobuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ChampionFistMain::_C_Participate_default_instance_;
    new (ptr) ::ChampionFistMain::C_Participate();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_C_Participate_MainProtobuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_C_Participate_MainProtobuf_2eproto}, {}};

static void InitDefaultsscc_info_S_Start_MainProtobuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ChampionFistMain::_S_Start_default_instance_;
    new (ptr) ::ChampionFistMain::S_Start();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_S_Start_MainProtobuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_S_Start_MainProtobuf_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_MainProtobuf_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_MainProtobuf_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_MainProtobuf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_MainProtobuf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::S_Start, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::S_Start, game_server_ip_),
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::S_Start, game_server_port_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::C_Participate, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::C_Participate, name_),
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::C_Participate, hero_no_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::C_Game_Server, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::C_Game_Server, cmd_),
  PROTOBUF_FIELD_OFFSET(::ChampionFistMain::C_Game_Server, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ChampionFistMain::S_Start)},
  { 7, -1, sizeof(::ChampionFistMain::C_Participate)},
  { 14, -1, sizeof(::ChampionFistMain::C_Game_Server)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ChampionFistMain::_S_Start_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ChampionFistMain::_C_Participate_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ChampionFistMain::_C_Game_Server_default_instance_),
};

const char descriptor_table_protodef_MainProtobuf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022MainProtobuf.proto\022\020ChampionFistMain\";"
  "\n\007S_Start\022\026\n\016game_server_ip\030\001 \001(\t\022\030\n\020gam"
  "e_server_port\030\002 \001(\005\".\n\rC_Participate\022\014\n\004"
  "name\030\001 \001(\t\022\017\n\007hero_no\030\002 \001(\005\"*\n\rC_Game_Se"
  "rver\022\013\n\003cmd\030\001 \001(\005\022\014\n\004data\030\002 \001(\t* \n\021Serve"
  "rCommandType\022\013\n\007S_START\020\000*9\n\021ClientComma"
  "ndType\022\021\n\rC_PARTICIPATE\020\000\022\021\n\rC_GAME_SERV"
  "ER\020\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_MainProtobuf_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_MainProtobuf_2eproto_sccs[3] = {
  &scc_info_C_Game_Server_MainProtobuf_2eproto.base,
  &scc_info_C_Participate_MainProtobuf_2eproto.base,
  &scc_info_S_Start_MainProtobuf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_MainProtobuf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MainProtobuf_2eproto = {
  false, false, descriptor_table_protodef_MainProtobuf_2eproto, "MainProtobuf.proto", 292,
  &descriptor_table_MainProtobuf_2eproto_once, descriptor_table_MainProtobuf_2eproto_sccs, descriptor_table_MainProtobuf_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_MainProtobuf_2eproto::offsets,
  file_level_metadata_MainProtobuf_2eproto, 3, file_level_enum_descriptors_MainProtobuf_2eproto, file_level_service_descriptors_MainProtobuf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_MainProtobuf_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_MainProtobuf_2eproto)), true);
namespace ChampionFistMain {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ServerCommandType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MainProtobuf_2eproto);
  return file_level_enum_descriptors_MainProtobuf_2eproto[0];
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
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MainProtobuf_2eproto);
  return file_level_enum_descriptors_MainProtobuf_2eproto[1];
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

class S_Start::_Internal {
 public:
};

S_Start::S_Start(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:ChampionFistMain.S_Start)
}
S_Start::S_Start(const S_Start& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  game_server_ip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_game_server_ip().empty()) {
    game_server_ip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_game_server_ip(), 
      GetArena());
  }
  game_server_port_ = from.game_server_port_;
  // @@protoc_insertion_point(copy_constructor:ChampionFistMain.S_Start)
}

void S_Start::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_S_Start_MainProtobuf_2eproto.base);
  game_server_ip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  game_server_port_ = 0;
}

S_Start::~S_Start() {
  // @@protoc_insertion_point(destructor:ChampionFistMain.S_Start)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void S_Start::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  game_server_ip_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void S_Start::ArenaDtor(void* object) {
  S_Start* _this = reinterpret_cast< S_Start* >(object);
  (void)_this;
}
void S_Start::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void S_Start::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const S_Start& S_Start::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_S_Start_MainProtobuf_2eproto.base);
  return *internal_default_instance();
}


void S_Start::Clear() {
// @@protoc_insertion_point(message_clear_start:ChampionFistMain.S_Start)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  game_server_ip_.ClearToEmpty();
  game_server_port_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* S_Start::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string game_server_ip = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_game_server_ip();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ChampionFistMain.S_Start.game_server_ip"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 game_server_port = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          game_server_port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* S_Start::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChampionFistMain.S_Start)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string game_server_ip = 1;
  if (this->game_server_ip().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_game_server_ip().data(), static_cast<int>(this->_internal_game_server_ip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ChampionFistMain.S_Start.game_server_ip");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_game_server_ip(), target);
  }

  // int32 game_server_port = 2;
  if (this->game_server_port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_game_server_port(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChampionFistMain.S_Start)
  return target;
}

size_t S_Start::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChampionFistMain.S_Start)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string game_server_ip = 1;
  if (this->game_server_ip().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_game_server_ip());
  }

  // int32 game_server_port = 2;
  if (this->game_server_port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_game_server_port());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void S_Start::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ChampionFistMain.S_Start)
  GOOGLE_DCHECK_NE(&from, this);
  const S_Start* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<S_Start>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ChampionFistMain.S_Start)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ChampionFistMain.S_Start)
    MergeFrom(*source);
  }
}

void S_Start::MergeFrom(const S_Start& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ChampionFistMain.S_Start)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.game_server_ip().size() > 0) {
    _internal_set_game_server_ip(from._internal_game_server_ip());
  }
  if (from.game_server_port() != 0) {
    _internal_set_game_server_port(from._internal_game_server_port());
  }
}

void S_Start::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ChampionFistMain.S_Start)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void S_Start::CopyFrom(const S_Start& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChampionFistMain.S_Start)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S_Start::IsInitialized() const {
  return true;
}

void S_Start::InternalSwap(S_Start* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  game_server_ip_.Swap(&other->game_server_ip_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(game_server_port_, other->game_server_port_);
}

::PROTOBUF_NAMESPACE_ID::Metadata S_Start::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class C_Participate::_Internal {
 public:
};

C_Participate::C_Participate(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:ChampionFistMain.C_Participate)
}
C_Participate::C_Participate(const C_Participate& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArena());
  }
  hero_no_ = from.hero_no_;
  // @@protoc_insertion_point(copy_constructor:ChampionFistMain.C_Participate)
}

void C_Participate::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_C_Participate_MainProtobuf_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  hero_no_ = 0;
}

C_Participate::~C_Participate() {
  // @@protoc_insertion_point(destructor:ChampionFistMain.C_Participate)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void C_Participate::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void C_Participate::ArenaDtor(void* object) {
  C_Participate* _this = reinterpret_cast< C_Participate* >(object);
  (void)_this;
}
void C_Participate::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void C_Participate::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const C_Participate& C_Participate::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_C_Participate_MainProtobuf_2eproto.base);
  return *internal_default_instance();
}


void C_Participate::Clear() {
// @@protoc_insertion_point(message_clear_start:ChampionFistMain.C_Participate)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  hero_no_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* C_Participate::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ChampionFistMain.C_Participate.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 hero_no = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          hero_no_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* C_Participate::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChampionFistMain.C_Participate)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ChampionFistMain.C_Participate.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // int32 hero_no = 2;
  if (this->hero_no() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_hero_no(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChampionFistMain.C_Participate)
  return target;
}

size_t C_Participate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChampionFistMain.C_Participate)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // int32 hero_no = 2;
  if (this->hero_no() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_hero_no());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void C_Participate::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ChampionFistMain.C_Participate)
  GOOGLE_DCHECK_NE(&from, this);
  const C_Participate* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<C_Participate>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ChampionFistMain.C_Participate)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ChampionFistMain.C_Participate)
    MergeFrom(*source);
  }
}

void C_Participate::MergeFrom(const C_Participate& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ChampionFistMain.C_Participate)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.hero_no() != 0) {
    _internal_set_hero_no(from._internal_hero_no());
  }
}

void C_Participate::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ChampionFistMain.C_Participate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void C_Participate::CopyFrom(const C_Participate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChampionFistMain.C_Participate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C_Participate::IsInitialized() const {
  return true;
}

void C_Participate::InternalSwap(C_Participate* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(hero_no_, other->hero_no_);
}

::PROTOBUF_NAMESPACE_ID::Metadata C_Participate::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class C_Game_Server::_Internal {
 public:
};

C_Game_Server::C_Game_Server(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:ChampionFistMain.C_Game_Server)
}
C_Game_Server::C_Game_Server(const C_Game_Server& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArena());
  }
  cmd_ = from.cmd_;
  // @@protoc_insertion_point(copy_constructor:ChampionFistMain.C_Game_Server)
}

void C_Game_Server::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_C_Game_Server_MainProtobuf_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  cmd_ = 0;
}

C_Game_Server::~C_Game_Server() {
  // @@protoc_insertion_point(destructor:ChampionFistMain.C_Game_Server)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void C_Game_Server::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void C_Game_Server::ArenaDtor(void* object) {
  C_Game_Server* _this = reinterpret_cast< C_Game_Server* >(object);
  (void)_this;
}
void C_Game_Server::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void C_Game_Server::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const C_Game_Server& C_Game_Server::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_C_Game_Server_MainProtobuf_2eproto.base);
  return *internal_default_instance();
}


void C_Game_Server::Clear() {
// @@protoc_insertion_point(message_clear_start:ChampionFistMain.C_Game_Server)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmpty();
  cmd_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* C_Game_Server::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 cmd = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          cmd_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ChampionFistMain.C_Game_Server.data"));
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

::PROTOBUF_NAMESPACE_ID::uint8* C_Game_Server::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChampionFistMain.C_Game_Server)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 cmd = 1;
  if (this->cmd() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_cmd(), target);
  }

  // string data = 2;
  if (this->data().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_data().data(), static_cast<int>(this->_internal_data().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ChampionFistMain.C_Game_Server.data");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChampionFistMain.C_Game_Server)
  return target;
}

size_t C_Game_Server::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChampionFistMain.C_Game_Server)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string data = 2;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_data());
  }

  // int32 cmd = 1;
  if (this->cmd() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_cmd());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void C_Game_Server::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ChampionFistMain.C_Game_Server)
  GOOGLE_DCHECK_NE(&from, this);
  const C_Game_Server* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<C_Game_Server>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ChampionFistMain.C_Game_Server)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ChampionFistMain.C_Game_Server)
    MergeFrom(*source);
  }
}

void C_Game_Server::MergeFrom(const C_Game_Server& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ChampionFistMain.C_Game_Server)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {
    _internal_set_data(from._internal_data());
  }
  if (from.cmd() != 0) {
    _internal_set_cmd(from._internal_cmd());
  }
}

void C_Game_Server::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ChampionFistMain.C_Game_Server)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void C_Game_Server::CopyFrom(const C_Game_Server& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChampionFistMain.C_Game_Server)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C_Game_Server::IsInitialized() const {
  return true;
}

void C_Game_Server::InternalSwap(C_Game_Server* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(cmd_, other->cmd_);
}

::PROTOBUF_NAMESPACE_ID::Metadata C_Game_Server::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ChampionFistMain
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ChampionFistMain::S_Start* Arena::CreateMaybeMessage< ::ChampionFistMain::S_Start >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ChampionFistMain::S_Start >(arena);
}
template<> PROTOBUF_NOINLINE ::ChampionFistMain::C_Participate* Arena::CreateMaybeMessage< ::ChampionFistMain::C_Participate >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ChampionFistMain::C_Participate >(arena);
}
template<> PROTOBUF_NOINLINE ::ChampionFistMain::C_Game_Server* Arena::CreateMaybeMessage< ::ChampionFistMain::C_Game_Server >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ChampionFistMain::C_Game_Server >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
