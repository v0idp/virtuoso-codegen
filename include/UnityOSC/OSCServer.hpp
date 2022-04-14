// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityOSC
namespace UnityOSC {
  // Forward declaring type: PacketReceivedEventHandler
  class PacketReceivedEventHandler;
  // Forward declaring type: OSCPacket
  class OSCPacket;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: UdpClient
  class UdpClient;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Completed forward declares
// Type namespace: UnityOSC
namespace UnityOSC {
  // Forward declaring type: OSCServer
  class OSCServer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityOSC::OSCServer);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCServer*, "UnityOSC", "OSCServer");
// Type namespace: UnityOSC
namespace UnityOSC {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: UnityOSC.OSCServer
  // [TokenAttribute] Offset: FFFFFFFF
  class OSCServer : public ::Il2CppObject {
    public:
    // Nested type: ::UnityOSC::OSCServer::$$c
    class $$c;
    public:
    // private UnityOSC.PacketReceivedEventHandler PacketReceivedEvent
    // Size: 0x8
    // Offset: 0x10
    ::UnityOSC::PacketReceivedEventHandler* PacketReceivedEvent;
    // Field size check
    static_assert(sizeof(::UnityOSC::PacketReceivedEventHandler*) == 0x8);
    // private System.Net.Sockets.UdpClient _udpClient
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Sockets::UdpClient* udpClient;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::UdpClient*) == 0x8);
    // private System.Int32 _localPort
    // Size: 0x4
    // Offset: 0x20
    int localPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: localPort and: receiverThread
    char __padding2[0x4] = {};
    // private System.Threading.Thread _receiverThread
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::Thread* receiverThread;
    // Field size check
    static_assert(sizeof(::System::Threading::Thread*) == 0x8);
    // private UnityOSC.OSCPacket _lastReceivedPacket
    // Size: 0x8
    // Offset: 0x30
    ::UnityOSC::OSCPacket* lastReceivedPacket;
    // Field size check
    static_assert(sizeof(::UnityOSC::OSCPacket*) == 0x8);
    // private System.Int32 _sleepMilliseconds
    // Size: 0x4
    // Offset: 0x38
    int sleepMilliseconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private UnityOSC.PacketReceivedEventHandler PacketReceivedEvent
    [[deprecated]] ::UnityOSC::PacketReceivedEventHandler*& dyn_PacketReceivedEvent();
    // Get instance field reference: private System.Net.Sockets.UdpClient _udpClient
    [[deprecated]] ::System::Net::Sockets::UdpClient*& dyn__udpClient();
    // Get instance field reference: private System.Int32 _localPort
    [[deprecated]] int& dyn__localPort();
    // Get instance field reference: private System.Threading.Thread _receiverThread
    [[deprecated]] ::System::Threading::Thread*& dyn__receiverThread();
    // Get instance field reference: private UnityOSC.OSCPacket _lastReceivedPacket
    [[deprecated]] ::UnityOSC::OSCPacket*& dyn__lastReceivedPacket();
    // Get instance field reference: private System.Int32 _sleepMilliseconds
    [[deprecated]] int& dyn__sleepMilliseconds();
    // public System.Net.Sockets.UdpClient get_UDPClient()
    // Offset: 0xC5E3B4
    ::System::Net::Sockets::UdpClient* get_UDPClient();
    // public System.Void set_UDPClient(System.Net.Sockets.UdpClient value)
    // Offset: 0xC5E3BC
    void set_UDPClient(::System::Net::Sockets::UdpClient* value);
    // public System.Int32 get_LocalPort()
    // Offset: 0xC5E3C4
    int get_LocalPort();
    // public System.Void set_LocalPort(System.Int32 value)
    // Offset: 0xC5E3CC
    void set_LocalPort(int value);
    // public UnityOSC.OSCPacket get_LastReceivedPacket()
    // Offset: 0xC5E3D4
    ::UnityOSC::OSCPacket* get_LastReceivedPacket();
    // public System.Int32 get_SleepMilliseconds()
    // Offset: 0xC5E3DC
    int get_SleepMilliseconds();
    // public System.Void set_SleepMilliseconds(System.Int32 value)
    // Offset: 0xC5E3E4
    void set_SleepMilliseconds(int value);
    // public System.Void add_PacketReceivedEvent(UnityOSC.PacketReceivedEventHandler value)
    // Offset: 0xC5CC34
    void add_PacketReceivedEvent(::UnityOSC::PacketReceivedEventHandler* value);
    // public System.Void remove_PacketReceivedEvent(UnityOSC.PacketReceivedEventHandler value)
    // Offset: 0xC5E17C
    void remove_PacketReceivedEvent(::UnityOSC::PacketReceivedEventHandler* value);
    // public System.Void .ctor(System.Int32 localPort)
    // Offset: 0xC5CB1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSCServer* New_ctor(int localPort) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOSC::OSCServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSCServer*, creationType>(localPort)));
    }
    // public System.Void Connect()
    // Offset: 0xC5E21C
    void Connect();
    // public System.Void Close()
    // Offset: 0xC5C1DC
    void Close();
    // private System.Void Receive()
    // Offset: 0xC5E3EC
    void Receive();
    // private System.Void ReceivePool()
    // Offset: 0xC5E4D0
    void ReceivePool();
  }; // UnityOSC.OSCServer
  #pragma pack(pop)
  static check_size<sizeof(OSCServer), 56 + sizeof(int)> __UnityOSC_OSCServerSizeCheck;
  static_assert(sizeof(OSCServer) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityOSC::OSCServer::get_UDPClient
// Il2CppName: get_UDPClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::UdpClient* (UnityOSC::OSCServer::*)()>(&UnityOSC::OSCServer::get_UDPClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "get_UDPClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::set_UDPClient
// Il2CppName: set_UDPClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)(::System::Net::Sockets::UdpClient*)>(&UnityOSC::OSCServer::set_UDPClient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "UdpClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "set_UDPClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::get_LocalPort
// Il2CppName: get_LocalPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityOSC::OSCServer::*)()>(&UnityOSC::OSCServer::get_LocalPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "get_LocalPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::set_LocalPort
// Il2CppName: set_LocalPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)(int)>(&UnityOSC::OSCServer::set_LocalPort)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "set_LocalPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::get_LastReceivedPacket
// Il2CppName: get_LastReceivedPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityOSC::OSCPacket* (UnityOSC::OSCServer::*)()>(&UnityOSC::OSCServer::get_LastReceivedPacket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "get_LastReceivedPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::get_SleepMilliseconds
// Il2CppName: get_SleepMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityOSC::OSCServer::*)()>(&UnityOSC::OSCServer::get_SleepMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "get_SleepMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::set_SleepMilliseconds
// Il2CppName: set_SleepMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)(int)>(&UnityOSC::OSCServer::set_SleepMilliseconds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "set_SleepMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::add_PacketReceivedEvent
// Il2CppName: add_PacketReceivedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)(::UnityOSC::PacketReceivedEventHandler*)>(&UnityOSC::OSCServer::add_PacketReceivedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityOSC", "PacketReceivedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "add_PacketReceivedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::remove_PacketReceivedEvent
// Il2CppName: remove_PacketReceivedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)(::UnityOSC::PacketReceivedEventHandler*)>(&UnityOSC::OSCServer::remove_PacketReceivedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityOSC", "PacketReceivedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "remove_PacketReceivedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityOSC::OSCServer::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)()>(&UnityOSC::OSCServer::Connect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)()>(&UnityOSC::OSCServer::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::Receive
// Il2CppName: Receive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)()>(&UnityOSC::OSCServer::Receive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "Receive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCServer::ReceivePool
// Il2CppName: ReceivePool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCServer::*)()>(&UnityOSC::OSCServer::ReceivePool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCServer*), "ReceivePool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
