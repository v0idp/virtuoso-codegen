// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
  // Forward declaring type: BindIPEndPoint
  class BindIPEndPoint;
  // Forward declaring type: ServicePointScheduler
  class ServicePointScheduler;
  // Forward declaring type: WebOperation
  class WebOperation;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ServicePoint
  class ServicePoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ServicePoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePoint*, "System.Net", "ServicePoint");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServicePoint
  // [TokenAttribute] Offset: FFFFFFFF
  class ServicePoint : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Uri uri
    // Size: 0x8
    // Offset: 0x10
    ::System::Uri* uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.DateTime lastDnsResolve
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime lastDnsResolve;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Version protocolVersion
    // Size: 0x8
    // Offset: 0x20
    ::System::Version* protocolVersion;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Net.IPHostEntry host
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::IPHostEntry* host;
    // Field size check
    static_assert(sizeof(::System::Net::IPHostEntry*) == 0x8);
    // private System.Boolean usesProxy
    // Size: 0x1
    // Offset: 0x30
    bool usesProxy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean sendContinue
    // Size: 0x1
    // Offset: 0x31
    bool sendContinue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean useConnect
    // Size: 0x1
    // Offset: 0x32
    bool useConnect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useConnect and: hostE
    char __padding6[0x5] = {};
    // private System.Object hostE
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* hostE;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean useNagle
    // Size: 0x1
    // Offset: 0x40
    bool useNagle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useNagle and: endPointCallback
    char __padding8[0x7] = {};
    // private System.Net.BindIPEndPoint endPointCallback
    // Size: 0x8
    // Offset: 0x48
    ::System::Net::BindIPEndPoint* endPointCallback;
    // Field size check
    static_assert(sizeof(::System::Net::BindIPEndPoint*) == 0x8);
    // private System.Boolean tcp_keepalive
    // Size: 0x1
    // Offset: 0x50
    bool tcp_keepalive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: tcp_keepalive and: tcp_keepalive_time
    char __padding10[0x3] = {};
    // private System.Int32 tcp_keepalive_time
    // Size: 0x4
    // Offset: 0x54
    int tcp_keepalive_time;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 tcp_keepalive_interval
    // Size: 0x4
    // Offset: 0x58
    int tcp_keepalive_interval;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: tcp_keepalive_interval and: Scheduler
    char __padding12[0x4] = {};
    // private readonly System.Net.ServicePointScheduler <Scheduler>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::System::Net::ServicePointScheduler* Scheduler;
    // Field size check
    static_assert(sizeof(::System::Net::ServicePointScheduler*) == 0x8);
    // private System.Object m_ServerCertificateOrBytes
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppObject* m_ServerCertificateOrBytes;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object m_ClientCertificateOrBytes
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppObject* m_ClientCertificateOrBytes;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Uri uri
    [[deprecated]] ::System::Uri*& dyn_uri();
    // Get instance field reference: private System.DateTime lastDnsResolve
    [[deprecated]] ::System::DateTime& dyn_lastDnsResolve();
    // Get instance field reference: private System.Version protocolVersion
    [[deprecated]] ::System::Version*& dyn_protocolVersion();
    // Get instance field reference: private System.Net.IPHostEntry host
    [[deprecated]] ::System::Net::IPHostEntry*& dyn_host();
    // Get instance field reference: private System.Boolean usesProxy
    [[deprecated]] bool& dyn_usesProxy();
    // Get instance field reference: private System.Boolean sendContinue
    [[deprecated]] bool& dyn_sendContinue();
    // Get instance field reference: private System.Boolean useConnect
    [[deprecated]] bool& dyn_useConnect();
    // Get instance field reference: private System.Object hostE
    [[deprecated]] ::Il2CppObject*& dyn_hostE();
    // Get instance field reference: private System.Boolean useNagle
    [[deprecated]] bool& dyn_useNagle();
    // Get instance field reference: private System.Net.BindIPEndPoint endPointCallback
    [[deprecated]] ::System::Net::BindIPEndPoint*& dyn_endPointCallback();
    // Get instance field reference: private System.Boolean tcp_keepalive
    [[deprecated]] bool& dyn_tcp_keepalive();
    // Get instance field reference: private System.Int32 tcp_keepalive_time
    [[deprecated]] int& dyn_tcp_keepalive_time();
    // Get instance field reference: private System.Int32 tcp_keepalive_interval
    [[deprecated]] int& dyn_tcp_keepalive_interval();
    // Get instance field reference: private readonly System.Net.ServicePointScheduler <Scheduler>k__BackingField
    [[deprecated]] ::System::Net::ServicePointScheduler*& dyn_$Scheduler$k__BackingField();
    // Get instance field reference: private System.Object m_ServerCertificateOrBytes
    [[deprecated]] ::Il2CppObject*& dyn_m_ServerCertificateOrBytes();
    // Get instance field reference: private System.Object m_ClientCertificateOrBytes
    [[deprecated]] ::Il2CppObject*& dyn_m_ClientCertificateOrBytes();
    // System.Net.ServicePointScheduler get_Scheduler()
    // Offset: 0xD9A360
    ::System::Net::ServicePointScheduler* get_Scheduler();
    // public System.Uri get_Address()
    // Offset: 0xD9A368
    ::System::Uri* get_Address();
    // public System.Int32 get_ConnectionLimit()
    // Offset: 0xD9A370
    int get_ConnectionLimit();
    // public System.Version get_ProtocolVersion()
    // Offset: 0xD9A38C
    ::System::Version* get_ProtocolVersion();
    // public System.Void set_Expect100Continue(System.Boolean value)
    // Offset: 0xD9A394
    void set_Expect100Continue(bool value);
    // public System.Boolean get_UseNagleAlgorithm()
    // Offset: 0xD9A3A0
    bool get_UseNagleAlgorithm();
    // public System.Void set_UseNagleAlgorithm(System.Boolean value)
    // Offset: 0xD9A3A8
    void set_UseNagleAlgorithm(bool value);
    // System.Boolean get_SendContinue()
    // Offset: 0xD9A3B4
    bool get_SendContinue();
    // System.Void set_SendContinue(System.Boolean value)
    // Offset: 0xD9A4B8
    void set_SendContinue(bool value);
    // System.Boolean get_UsesProxy()
    // Offset: 0xD9A794
    bool get_UsesProxy();
    // System.Void set_UsesProxy(System.Boolean value)
    // Offset: 0xD9A79C
    void set_UsesProxy(bool value);
    // System.Boolean get_UseConnect()
    // Offset: 0xD9A7A8
    bool get_UseConnect();
    // System.Void set_UseConnect(System.Boolean value)
    // Offset: 0xD9A7B0
    void set_UseConnect(bool value);
    // private System.Boolean get_HasTimedOut()
    // Offset: 0xD9A7BC
    bool get_HasTimedOut();
    // System.Net.IPHostEntry get_HostEntry()
    // Offset: 0xD9A918
    ::System::Net::IPHostEntry* get_HostEntry();
    // System.Void .ctor(System.Uri uri, System.Int32 connectionLimit, System.Int32 maxIdleTime)
    // Offset: 0xD9A0C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServicePoint* New_ctor(::System::Uri* uri, int connectionLimit, int maxIdleTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ServicePoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServicePoint*, creationType>(uri, connectionLimit, maxIdleTime)));
    }
    // public System.Void SetTcpKeepAlive(System.Boolean enabled, System.Int32 keepAliveTime, System.Int32 keepAliveInterval)
    // Offset: 0xD9A4C4
    void SetTcpKeepAlive(bool enabled, int keepAliveTime, int keepAliveInterval);
    // System.Void KeepAliveSetup(System.Net.Sockets.Socket socket)
    // Offset: 0xD9A578
    void KeepAliveSetup(::System::Net::Sockets::Socket* socket);
    // static private System.Void PutBytes(System.Byte[] bytes, System.UInt32 v, System.Int32 offset)
    // Offset: 0xD9A638
    static void PutBytes(::ArrayW<uint8_t> bytes, uint v, int offset);
    // System.Void SetVersion(System.Version version)
    // Offset: 0xD9ACD4
    void SetVersion(::System::Version* version);
    // System.Void SendRequest(System.Net.WebOperation operation, System.String groupName)
    // Offset: 0xD9ACDC
    void SendRequest(::System::Net::WebOperation* operation, ::StringW groupName);
    // System.Void UpdateServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    // Offset: 0xD9AEA8
    void UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);
    // System.Void UpdateClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    // Offset: 0xD9AEE8
    void UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);
    // System.Boolean CallEndPointDelegate(System.Net.Sockets.Socket sock, System.Net.IPEndPoint remote)
    // Offset: 0xD9AF28
    bool CallEndPointDelegate(::System::Net::Sockets::Socket* sock, ::System::Net::IPEndPoint* remote);
  }; // System.Net.ServicePoint
  #pragma pack(pop)
  static check_size<sizeof(ServicePoint), 112 + sizeof(::Il2CppObject*)> __System_Net_ServicePointSizeCheck;
  static_assert(sizeof(ServicePoint) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServicePoint::get_Scheduler
// Il2CppName: get_Scheduler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePointScheduler* (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_Scheduler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_Scheduler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_ConnectionLimit
// Il2CppName: get_ConnectionLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_ConnectionLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_ConnectionLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_ProtocolVersion
// Il2CppName: get_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_ProtocolVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_Expect100Continue
// Il2CppName: set_Expect100Continue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_Expect100Continue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_Expect100Continue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_UseNagleAlgorithm
// Il2CppName: get_UseNagleAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_UseNagleAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_UseNagleAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_UseNagleAlgorithm
// Il2CppName: set_UseNagleAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_UseNagleAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_UseNagleAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_SendContinue
// Il2CppName: get_SendContinue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_SendContinue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_SendContinue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_SendContinue
// Il2CppName: set_SendContinue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_SendContinue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_SendContinue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_UsesProxy
// Il2CppName: get_UsesProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_UsesProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_UsesProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_UsesProxy
// Il2CppName: set_UsesProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_UsesProxy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_UsesProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_UseConnect
// Il2CppName: get_UseConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_UseConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_UseConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_UseConnect
// Il2CppName: set_UseConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_UseConnect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_UseConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_HasTimedOut
// Il2CppName: get_HasTimedOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_HasTimedOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_HasTimedOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_HostEntry
// Il2CppName: get_HostEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_HostEntry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_HostEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ServicePoint::SetTcpKeepAlive
// Il2CppName: SetTcpKeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool, int, int)>(&System::Net::ServicePoint::SetTcpKeepAlive)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* keepAliveTime = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* keepAliveInterval = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "SetTcpKeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled, keepAliveTime, keepAliveInterval});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::KeepAliveSetup
// Il2CppName: KeepAliveSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Net::Sockets::Socket*)>(&System::Net::ServicePoint::KeepAliveSetup)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "KeepAliveSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::PutBytes
// Il2CppName: PutBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, uint, int)>(&System::Net::ServicePoint::PutBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "PutBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, v, offset});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::SetVersion
// Il2CppName: SetVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Version*)>(&System::Net::ServicePoint::SetVersion)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "SetVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::SendRequest
// Il2CppName: SendRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Net::WebOperation*, ::StringW)>(&System::Net::ServicePoint::SendRequest)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("System.Net", "WebOperation")->byval_arg;
    static auto* groupName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "SendRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation, groupName});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::UpdateServerCertificate
// Il2CppName: UpdateServerCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Net::ServicePoint::UpdateServerCertificate)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "UpdateServerCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::UpdateClientCertificate
// Il2CppName: UpdateClientCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Net::ServicePoint::UpdateClientCertificate)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "UpdateClientCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::CallEndPointDelegate
// Il2CppName: CallEndPointDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)(::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*)>(&System::Net::ServicePoint::CallEndPointDelegate)> {
  static const MethodInfo* get() {
    static auto* sock = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    static auto* remote = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "CallEndPointDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sock, remote});
  }
};
