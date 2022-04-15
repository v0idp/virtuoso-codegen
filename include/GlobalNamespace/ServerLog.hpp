// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityOSC
namespace UnityOSC {
  // Forward declaring type: OSCServer
  class OSCServer;
  // Forward declaring type: OSCPacket
  class OSCPacket;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ServerLog
  struct ServerLog;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerLog, "", "ServerLog");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ServerLog
  // [TokenAttribute] Offset: FFFFFFFF
  struct ServerLog/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityOSC.OSCServer server
    // Size: 0x8
    // Offset: 0x0
    ::UnityOSC::OSCServer* server;
    // Field size check
    static_assert(sizeof(::UnityOSC::OSCServer*) == 0x8);
    // public System.Collections.Generic.List`1<UnityOSC.OSCPacket> packets
    // Size: 0x8
    // Offset: 0x8
    ::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>* packets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> log
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::StringW>* log;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Creating value type constructor for type: ServerLog
    constexpr ServerLog(::UnityOSC::OSCServer* server_ = {}, ::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>* packets_ = {}, ::System::Collections::Generic::List_1<::StringW>* log_ = {}) noexcept : server{server_}, packets{packets_}, log{log_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityOSC.OSCServer server
    [[deprecated("Use field access instead!")]] ::UnityOSC::OSCServer*& dyn_server();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityOSC.OSCPacket> packets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>*& dyn_packets();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> log
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_log();
  }; // ServerLog
  #pragma pack(pop)
  static check_size<sizeof(ServerLog), 16 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __GlobalNamespace_ServerLogSizeCheck;
  static_assert(sizeof(ServerLog) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
