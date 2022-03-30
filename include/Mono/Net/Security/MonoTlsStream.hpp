// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebExceptionStatus
#include "System/Net/WebExceptionStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: IMonoSslStream
  class IMonoSslStream;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: NetworkStream
  class NetworkStream;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: WebConnectionTunnel
  class WebConnectionTunnel;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: MonoTlsStream
  class MonoTlsStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::MonoTlsStream);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoTlsStream*, "Mono.Net.Security", "MonoTlsStream");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.MonoTlsStream
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTlsStream : public ::Il2CppObject {
    public:
    // Nested type: ::Mono::Net::Security::MonoTlsStream::$CreateStream$d__17
    struct $CreateStream$d__17;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly Mono.Security.Interface.MonoTlsProvider provider
    // Size: 0x8
    // Offset: 0x10
    ::Mono::Security::Interface::MonoTlsProvider* provider;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // private readonly System.Net.Sockets.NetworkStream networkStream
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Sockets::NetworkStream* networkStream;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::NetworkStream*) == 0x8);
    // private readonly System.Net.HttpWebRequest request
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::HttpWebRequest* request;
    // Field size check
    static_assert(sizeof(::System::Net::HttpWebRequest*) == 0x8);
    // private readonly Mono.Security.Interface.MonoTlsSettings settings
    // Size: 0x8
    // Offset: 0x28
    ::Mono::Security::Interface::MonoTlsSettings* settings;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::MonoTlsSettings*) == 0x8);
    // private Mono.Security.Interface.IMonoSslStream sslStream
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Security::Interface::IMonoSslStream* sslStream;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::IMonoSslStream*) == 0x8);
    // private System.Net.WebExceptionStatus status
    // Size: 0x14
    // Offset: 0x38
    ::System::Net::WebExceptionStatus status;
    // Field size check
    static_assert(sizeof(::System::Net::WebExceptionStatus) == 0x14);
    // private System.Boolean <CertificateValidationFailed>k__BackingField
    // Size: 0x1
    // Offset: 0x3C
    bool CertificateValidationFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly Mono.Security.Interface.MonoTlsProvider provider
    ::Mono::Security::Interface::MonoTlsProvider*& dyn_provider();
    // Get instance field reference: private readonly System.Net.Sockets.NetworkStream networkStream
    ::System::Net::Sockets::NetworkStream*& dyn_networkStream();
    // Get instance field reference: private readonly System.Net.HttpWebRequest request
    ::System::Net::HttpWebRequest*& dyn_request();
    // Get instance field reference: private readonly Mono.Security.Interface.MonoTlsSettings settings
    ::Mono::Security::Interface::MonoTlsSettings*& dyn_settings();
    // Get instance field reference: private Mono.Security.Interface.IMonoSslStream sslStream
    ::Mono::Security::Interface::IMonoSslStream*& dyn_sslStream();
    // Get instance field reference: private System.Net.WebExceptionStatus status
    ::System::Net::WebExceptionStatus& dyn_status();
    // Get instance field reference: private System.Boolean <CertificateValidationFailed>k__BackingField
    bool& dyn_$CertificateValidationFailed$k__BackingField();
    // System.Net.HttpWebRequest get_Request()
    // Offset: 0xBF4810
    ::System::Net::HttpWebRequest* get_Request();
    // System.Net.WebExceptionStatus get_ExceptionStatus()
    // Offset: 0xBF4818
    ::System::Net::WebExceptionStatus get_ExceptionStatus();
    // System.Boolean get_CertificateValidationFailed()
    // Offset: 0xBF4820
    bool get_CertificateValidationFailed();
    // System.Void set_CertificateValidationFailed(System.Boolean value)
    // Offset: 0xBF4828
    void set_CertificateValidationFailed(bool value);
    // public System.Void .ctor(System.Net.HttpWebRequest request, System.Net.Sockets.NetworkStream networkStream)
    // Offset: 0xBF4834
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsStream* New_ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::MonoTlsStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsStream*, creationType>(request, networkStream)));
    }
    // System.Threading.Tasks.Task`1<System.IO.Stream> CreateStream(System.Net.WebConnectionTunnel tunnel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBF48E8
    ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* CreateStream(::System::Net::WebConnectionTunnel* tunnel, ::System::Threading::CancellationToken cancellationToken);
  }; // Mono.Net.Security.MonoTlsStream
  #pragma pack(pop)
  static check_size<sizeof(MonoTlsStream), 60 + sizeof(bool)> __Mono_Net_Security_MonoTlsStreamSizeCheck;
  static_assert(sizeof(MonoTlsStream) == 0x3D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::get_Request
// Il2CppName: get_Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest* (Mono::Net::Security::MonoTlsStream::*)()>(&Mono::Net::Security::MonoTlsStream::get_Request)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "get_Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::get_ExceptionStatus
// Il2CppName: get_ExceptionStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebExceptionStatus (Mono::Net::Security::MonoTlsStream::*)()>(&Mono::Net::Security::MonoTlsStream::get_ExceptionStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "get_ExceptionStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed
// Il2CppName: get_CertificateValidationFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MonoTlsStream::*)()>(&Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "get_CertificateValidationFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed
// Il2CppName: set_CertificateValidationFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoTlsStream::*)(bool)>(&Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "set_CertificateValidationFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::CreateStream
// Il2CppName: CreateStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (Mono::Net::Security::MonoTlsStream::*)(::System::Net::WebConnectionTunnel*, ::System::Threading::CancellationToken)>(&Mono::Net::Security::MonoTlsStream::CreateStream)> {
  static const MethodInfo* get() {
    static auto* tunnel = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnectionTunnel")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "CreateStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tunnel, cancellationToken});
  }
};