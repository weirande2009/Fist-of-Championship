// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MainProtobuf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MainProtobuf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MainProtobuf_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MainProtobuf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MainProtobuf_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MainProtobuf_2eproto;
namespace ChampionFistMain {
class C_Game_Server;
class C_Game_ServerDefaultTypeInternal;
extern C_Game_ServerDefaultTypeInternal _C_Game_Server_default_instance_;
class C_Participate;
class C_ParticipateDefaultTypeInternal;
extern C_ParticipateDefaultTypeInternal _C_Participate_default_instance_;
class S_Start;
class S_StartDefaultTypeInternal;
extern S_StartDefaultTypeInternal _S_Start_default_instance_;
}  // namespace ChampionFistMain
PROTOBUF_NAMESPACE_OPEN
template<> ::ChampionFistMain::C_Game_Server* Arena::CreateMaybeMessage<::ChampionFistMain::C_Game_Server>(Arena*);
template<> ::ChampionFistMain::C_Participate* Arena::CreateMaybeMessage<::ChampionFistMain::C_Participate>(Arena*);
template<> ::ChampionFistMain::S_Start* Arena::CreateMaybeMessage<::ChampionFistMain::S_Start>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ChampionFistMain {

enum ServerCommandType : int {
  S_START = 0,
  ServerCommandType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ServerCommandType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ServerCommandType_IsValid(int value);
constexpr ServerCommandType ServerCommandType_MIN = S_START;
constexpr ServerCommandType ServerCommandType_MAX = S_START;
constexpr int ServerCommandType_ARRAYSIZE = ServerCommandType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ServerCommandType_descriptor();
template<typename T>
inline const std::string& ServerCommandType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ServerCommandType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ServerCommandType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ServerCommandType_descriptor(), enum_t_value);
}
inline bool ServerCommandType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ServerCommandType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ServerCommandType>(
    ServerCommandType_descriptor(), name, value);
}
enum ClientCommandType : int {
  C_PARTICIPATE = 0,
  C_GAME_SERVER = 1,
  ClientCommandType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ClientCommandType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ClientCommandType_IsValid(int value);
constexpr ClientCommandType ClientCommandType_MIN = C_PARTICIPATE;
constexpr ClientCommandType ClientCommandType_MAX = C_GAME_SERVER;
constexpr int ClientCommandType_ARRAYSIZE = ClientCommandType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ClientCommandType_descriptor();
template<typename T>
inline const std::string& ClientCommandType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ClientCommandType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ClientCommandType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ClientCommandType_descriptor(), enum_t_value);
}
inline bool ClientCommandType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ClientCommandType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ClientCommandType>(
    ClientCommandType_descriptor(), name, value);
}
// ===================================================================

class S_Start PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChampionFistMain.S_Start) */ {
 public:
  inline S_Start() : S_Start(nullptr) {}
  virtual ~S_Start();

  S_Start(const S_Start& from);
  S_Start(S_Start&& from) noexcept
    : S_Start() {
    *this = ::std::move(from);
  }

  inline S_Start& operator=(const S_Start& from) {
    CopyFrom(from);
    return *this;
  }
  inline S_Start& operator=(S_Start&& from) noexcept {
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
  static const S_Start& default_instance();

  static inline const S_Start* internal_default_instance() {
    return reinterpret_cast<const S_Start*>(
               &_S_Start_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(S_Start& a, S_Start& b) {
    a.Swap(&b);
  }
  inline void Swap(S_Start* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(S_Start* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline S_Start* New() const final {
    return CreateMaybeMessage<S_Start>(nullptr);
  }

  S_Start* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<S_Start>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const S_Start& from);
  void MergeFrom(const S_Start& from);
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
  void InternalSwap(S_Start* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChampionFistMain.S_Start";
  }
  protected:
  explicit S_Start(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MainProtobuf_2eproto);
    return ::descriptor_table_MainProtobuf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGameServerIpFieldNumber = 1,
    kGameServerPortFieldNumber = 2,
  };
  // string game_server_ip = 1;
  void clear_game_server_ip();
  const std::string& game_server_ip() const;
  void set_game_server_ip(const std::string& value);
  void set_game_server_ip(std::string&& value);
  void set_game_server_ip(const char* value);
  void set_game_server_ip(const char* value, size_t size);
  std::string* mutable_game_server_ip();
  std::string* release_game_server_ip();
  void set_allocated_game_server_ip(std::string* game_server_ip);
  private:
  const std::string& _internal_game_server_ip() const;
  void _internal_set_game_server_ip(const std::string& value);
  std::string* _internal_mutable_game_server_ip();
  public:

  // int32 game_server_port = 2;
  void clear_game_server_port();
  ::PROTOBUF_NAMESPACE_ID::int32 game_server_port() const;
  void set_game_server_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_game_server_port() const;
  void _internal_set_game_server_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:ChampionFistMain.S_Start)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr game_server_ip_;
  ::PROTOBUF_NAMESPACE_ID::int32 game_server_port_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MainProtobuf_2eproto;
};
// -------------------------------------------------------------------

class C_Participate PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChampionFistMain.C_Participate) */ {
 public:
  inline C_Participate() : C_Participate(nullptr) {}
  virtual ~C_Participate();

  C_Participate(const C_Participate& from);
  C_Participate(C_Participate&& from) noexcept
    : C_Participate() {
    *this = ::std::move(from);
  }

  inline C_Participate& operator=(const C_Participate& from) {
    CopyFrom(from);
    return *this;
  }
  inline C_Participate& operator=(C_Participate&& from) noexcept {
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
  static const C_Participate& default_instance();

  static inline const C_Participate* internal_default_instance() {
    return reinterpret_cast<const C_Participate*>(
               &_C_Participate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(C_Participate& a, C_Participate& b) {
    a.Swap(&b);
  }
  inline void Swap(C_Participate* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(C_Participate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline C_Participate* New() const final {
    return CreateMaybeMessage<C_Participate>(nullptr);
  }

  C_Participate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<C_Participate>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const C_Participate& from);
  void MergeFrom(const C_Participate& from);
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
  void InternalSwap(C_Participate* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChampionFistMain.C_Participate";
  }
  protected:
  explicit C_Participate(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MainProtobuf_2eproto);
    return ::descriptor_table_MainProtobuf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kHeroNoFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 hero_no = 2;
  void clear_hero_no();
  ::PROTOBUF_NAMESPACE_ID::int32 hero_no() const;
  void set_hero_no(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_hero_no() const;
  void _internal_set_hero_no(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:ChampionFistMain.C_Participate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 hero_no_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MainProtobuf_2eproto;
};
// -------------------------------------------------------------------

class C_Game_Server PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChampionFistMain.C_Game_Server) */ {
 public:
  inline C_Game_Server() : C_Game_Server(nullptr) {}
  virtual ~C_Game_Server();

  C_Game_Server(const C_Game_Server& from);
  C_Game_Server(C_Game_Server&& from) noexcept
    : C_Game_Server() {
    *this = ::std::move(from);
  }

  inline C_Game_Server& operator=(const C_Game_Server& from) {
    CopyFrom(from);
    return *this;
  }
  inline C_Game_Server& operator=(C_Game_Server&& from) noexcept {
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
  static const C_Game_Server& default_instance();

  static inline const C_Game_Server* internal_default_instance() {
    return reinterpret_cast<const C_Game_Server*>(
               &_C_Game_Server_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(C_Game_Server& a, C_Game_Server& b) {
    a.Swap(&b);
  }
  inline void Swap(C_Game_Server* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(C_Game_Server* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline C_Game_Server* New() const final {
    return CreateMaybeMessage<C_Game_Server>(nullptr);
  }

  C_Game_Server* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<C_Game_Server>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const C_Game_Server& from);
  void MergeFrom(const C_Game_Server& from);
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
  void InternalSwap(C_Game_Server* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChampionFistMain.C_Game_Server";
  }
  protected:
  explicit C_Game_Server(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MainProtobuf_2eproto);
    return ::descriptor_table_MainProtobuf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 2,
    kCmdFieldNumber = 1,
  };
  // string data = 2;
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const char* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // int32 cmd = 1;
  void clear_cmd();
  ::PROTOBUF_NAMESPACE_ID::int32 cmd() const;
  void set_cmd(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_cmd() const;
  void _internal_set_cmd(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:ChampionFistMain.C_Game_Server)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::PROTOBUF_NAMESPACE_ID::int32 cmd_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MainProtobuf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// S_Start

// string game_server_ip = 1;
inline void S_Start::clear_game_server_ip() {
  game_server_ip_.ClearToEmpty();
}
inline const std::string& S_Start::game_server_ip() const {
  // @@protoc_insertion_point(field_get:ChampionFistMain.S_Start.game_server_ip)
  return _internal_game_server_ip();
}
inline void S_Start::set_game_server_ip(const std::string& value) {
  _internal_set_game_server_ip(value);
  // @@protoc_insertion_point(field_set:ChampionFistMain.S_Start.game_server_ip)
}
inline std::string* S_Start::mutable_game_server_ip() {
  // @@protoc_insertion_point(field_mutable:ChampionFistMain.S_Start.game_server_ip)
  return _internal_mutable_game_server_ip();
}
inline const std::string& S_Start::_internal_game_server_ip() const {
  return game_server_ip_.Get();
}
inline void S_Start::_internal_set_game_server_ip(const std::string& value) {
  
  game_server_ip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void S_Start::set_game_server_ip(std::string&& value) {
  
  game_server_ip_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ChampionFistMain.S_Start.game_server_ip)
}
inline void S_Start::set_game_server_ip(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  game_server_ip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ChampionFistMain.S_Start.game_server_ip)
}
inline void S_Start::set_game_server_ip(const char* value,
    size_t size) {
  
  game_server_ip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ChampionFistMain.S_Start.game_server_ip)
}
inline std::string* S_Start::_internal_mutable_game_server_ip() {
  
  return game_server_ip_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* S_Start::release_game_server_ip() {
  // @@protoc_insertion_point(field_release:ChampionFistMain.S_Start.game_server_ip)
  return game_server_ip_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void S_Start::set_allocated_game_server_ip(std::string* game_server_ip) {
  if (game_server_ip != nullptr) {
    
  } else {
    
  }
  game_server_ip_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), game_server_ip,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ChampionFistMain.S_Start.game_server_ip)
}

// int32 game_server_port = 2;
inline void S_Start::clear_game_server_port() {
  game_server_port_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 S_Start::_internal_game_server_port() const {
  return game_server_port_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 S_Start::game_server_port() const {
  // @@protoc_insertion_point(field_get:ChampionFistMain.S_Start.game_server_port)
  return _internal_game_server_port();
}
inline void S_Start::_internal_set_game_server_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  game_server_port_ = value;
}
inline void S_Start::set_game_server_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_game_server_port(value);
  // @@protoc_insertion_point(field_set:ChampionFistMain.S_Start.game_server_port)
}

// -------------------------------------------------------------------

// C_Participate

// string name = 1;
inline void C_Participate::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& C_Participate::name() const {
  // @@protoc_insertion_point(field_get:ChampionFistMain.C_Participate.name)
  return _internal_name();
}
inline void C_Participate::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:ChampionFistMain.C_Participate.name)
}
inline std::string* C_Participate::mutable_name() {
  // @@protoc_insertion_point(field_mutable:ChampionFistMain.C_Participate.name)
  return _internal_mutable_name();
}
inline const std::string& C_Participate::_internal_name() const {
  return name_.Get();
}
inline void C_Participate::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void C_Participate::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ChampionFistMain.C_Participate.name)
}
inline void C_Participate::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ChampionFistMain.C_Participate.name)
}
inline void C_Participate::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ChampionFistMain.C_Participate.name)
}
inline std::string* C_Participate::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* C_Participate::release_name() {
  // @@protoc_insertion_point(field_release:ChampionFistMain.C_Participate.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void C_Participate::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ChampionFistMain.C_Participate.name)
}

// int32 hero_no = 2;
inline void C_Participate::clear_hero_no() {
  hero_no_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 C_Participate::_internal_hero_no() const {
  return hero_no_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 C_Participate::hero_no() const {
  // @@protoc_insertion_point(field_get:ChampionFistMain.C_Participate.hero_no)
  return _internal_hero_no();
}
inline void C_Participate::_internal_set_hero_no(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  hero_no_ = value;
}
inline void C_Participate::set_hero_no(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_hero_no(value);
  // @@protoc_insertion_point(field_set:ChampionFistMain.C_Participate.hero_no)
}

// -------------------------------------------------------------------

// C_Game_Server

// int32 cmd = 1;
inline void C_Game_Server::clear_cmd() {
  cmd_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 C_Game_Server::_internal_cmd() const {
  return cmd_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 C_Game_Server::cmd() const {
  // @@protoc_insertion_point(field_get:ChampionFistMain.C_Game_Server.cmd)
  return _internal_cmd();
}
inline void C_Game_Server::_internal_set_cmd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cmd_ = value;
}
inline void C_Game_Server::set_cmd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_cmd(value);
  // @@protoc_insertion_point(field_set:ChampionFistMain.C_Game_Server.cmd)
}

// string data = 2;
inline void C_Game_Server::clear_data() {
  data_.ClearToEmpty();
}
inline const std::string& C_Game_Server::data() const {
  // @@protoc_insertion_point(field_get:ChampionFistMain.C_Game_Server.data)
  return _internal_data();
}
inline void C_Game_Server::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:ChampionFistMain.C_Game_Server.data)
}
inline std::string* C_Game_Server::mutable_data() {
  // @@protoc_insertion_point(field_mutable:ChampionFistMain.C_Game_Server.data)
  return _internal_mutable_data();
}
inline const std::string& C_Game_Server::_internal_data() const {
  return data_.Get();
}
inline void C_Game_Server::_internal_set_data(const std::string& value) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void C_Game_Server::set_data(std::string&& value) {
  
  data_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ChampionFistMain.C_Game_Server.data)
}
inline void C_Game_Server::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ChampionFistMain.C_Game_Server.data)
}
inline void C_Game_Server::set_data(const char* value,
    size_t size) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ChampionFistMain.C_Game_Server.data)
}
inline std::string* C_Game_Server::_internal_mutable_data() {
  
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* C_Game_Server::release_data() {
  // @@protoc_insertion_point(field_release:ChampionFistMain.C_Game_Server.data)
  return data_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void C_Game_Server::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ChampionFistMain.C_Game_Server.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ChampionFistMain

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ChampionFistMain::ServerCommandType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ChampionFistMain::ServerCommandType>() {
  return ::ChampionFistMain::ServerCommandType_descriptor();
}
template <> struct is_proto_enum< ::ChampionFistMain::ClientCommandType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ChampionFistMain::ClientCommandType>() {
  return ::ChampionFistMain::ClientCommandType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MainProtobuf_2eproto