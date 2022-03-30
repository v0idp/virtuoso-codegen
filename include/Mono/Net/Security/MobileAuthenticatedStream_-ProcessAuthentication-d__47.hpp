// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Security.Authentication.SslProtocols
#include "System/Security/Authentication/SslProtocols.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: AsyncProtocolResult
  class AsyncProtocolResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47, "Mono.Net.Security", "MobileAuthenticatedStream/<ProcessAuthentication>d__47");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // WARNING Size may be invalid!
  // Autogenerated type: Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.<ProcessAuthentication>d__47
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MobileAuthenticatedStream::$ProcessAuthentication$d__47/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Boolean serverMode
    // Size: 0x1
    // Offset: 0x20
    bool serverMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate
    // Size: 0x8
    // Offset: 0x28
    ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // public System.String targetHost
    // Size: 0x8
    // Offset: 0x30
    ::StringW targetHost;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    // Size: 0x8
    // Offset: 0x38
    ::Mono::Net::Security::MobileAuthenticatedStream* $$4__this;
    // Field size check
    static_assert(sizeof(::Mono::Net::Security::MobileAuthenticatedStream*) == 0x8);
    // public System.Boolean runSynchronously
    // Size: 0x1
    // Offset: 0x40
    bool runSynchronously;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Security.Authentication.SslProtocols enabledProtocols
    // Size: 0x14
    // Offset: 0x44
    ::System::Security::Authentication::SslProtocols enabledProtocols;
    // Field size check
    static_assert(sizeof(::System::Security::Authentication::SslProtocols) == 0x14);
    // public System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates
    // Size: 0x8
    // Offset: 0x48
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*) == 0x8);
    // public System.Boolean clientCertRequired
    // Size: 0x1
    // Offset: 0x50
    bool clientCertRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<Mono.Net.Security.AsyncProtocolResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $ProcessAuthentication$d__47
    constexpr $ProcessAuthentication$d__47(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, bool serverMode_ = {}, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate_ = {}, ::StringW targetHost_ = {}, ::Mono::Net::Security::MobileAuthenticatedStream* $$4__this_ = {}, bool runSynchronously_ = {}, ::System::Security::Authentication::SslProtocols enabledProtocols_ = {}, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates_ = {}, bool clientCertRequired_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, serverMode{serverMode_}, serverCertificate{serverCertificate_}, targetHost{targetHost_}, $$4__this{$$4__this_}, runSynchronously{runSynchronously_}, enabledProtocols{enabledProtocols_}, clientCertificates{clientCertificates_}, clientCertRequired{clientCertRequired_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.Boolean serverMode
    bool& dyn_serverMode();
    // Get instance field reference: public System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate
    ::System::Security::Cryptography::X509Certificates::X509Certificate*& dyn_serverCertificate();
    // Get instance field reference: public System.String targetHost
    ::StringW& dyn_targetHost();
    // Get instance field reference: public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    ::Mono::Net::Security::MobileAuthenticatedStream*& dyn_$$4__this();
    // Get instance field reference: public System.Boolean runSynchronously
    bool& dyn_runSynchronously();
    // Get instance field reference: public System.Security.Authentication.SslProtocols enabledProtocols
    ::System::Security::Authentication::SslProtocols& dyn_enabledProtocols();
    // Get instance field reference: public System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& dyn_clientCertificates();
    // Get instance field reference: public System.Boolean clientCertRequired
    bool& dyn_clientCertRequired();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<Mono.Net.Security.AsyncProtocolResult> <>u__1
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x8DECAC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x8DF660
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.<ProcessAuthentication>d__47
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47::*)()>(&Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
