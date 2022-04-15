// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: Server
  class Server;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Server);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Server*, "VROSC", "Server");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Server
  // [TokenAttribute] Offset: FFFFFFFF
  class Server : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.String _serverName
    // Size: 0x8
    // Offset: 0x18
    ::StringW serverName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _port
    // Size: 0x4
    // Offset: 0x20
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: server
    char __padding1[0x4] = {};
    // private UnityOSC.OSCServer server
    // Size: 0x8
    // Offset: 0x28
    ::UnityOSC::OSCServer* server;
    // Field size check
    static_assert(sizeof(::UnityOSC::OSCServer*) == 0x8);
    // private System.Boolean _isStarted
    // Size: 0x1
    // Offset: 0x30
    bool isStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _serverName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__serverName();
    // Get instance field reference: private System.Int32 _port
    [[deprecated("Use field access instead!")]] int& dyn__port();
    // Get instance field reference: private UnityOSC.OSCServer server
    [[deprecated("Use field access instead!")]] ::UnityOSC::OSCServer*& dyn_server();
    // Get instance field reference: private System.Boolean _isStarted
    [[deprecated("Use field access instead!")]] bool& dyn__isStarted();
    // public System.Void .ctor()
    // Offset: 0x19851B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Server* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Server::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Server*, creationType>()));
    }
    // public System.Void StartOSCServer()
    // Offset: 0x1984EF4
    void StartOSCServer();
    // private System.Void OnPacketReceived(UnityOSC.OSCServer server, UnityOSC.OSCPacket packet)
    // Offset: 0x1985028
    void OnPacketReceived(::UnityOSC::OSCServer* server, ::UnityOSC::OSCPacket* packet);
  }; // VROSC.Server
  #pragma pack(pop)
  static check_size<sizeof(Server), 48 + sizeof(bool)> __VROSC_ServerSizeCheck;
  static_assert(sizeof(Server) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Server::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::Server::StartOSCServer
// Il2CppName: StartOSCServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Server::*)()>(&VROSC::Server::StartOSCServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Server*), "StartOSCServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Server::OnPacketReceived
// Il2CppName: OnPacketReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Server::*)(::UnityOSC::OSCServer*, ::UnityOSC::OSCPacket*)>(&VROSC::Server::OnPacketReceived)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("UnityOSC", "OSCServer")->byval_arg;
    static auto* packet = &::il2cpp_utils::GetClassFromName("UnityOSC", "OSCPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Server*), "OnPacketReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server, packet});
  }
};
