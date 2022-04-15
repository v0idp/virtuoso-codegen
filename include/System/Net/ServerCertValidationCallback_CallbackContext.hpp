// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ServerCertValidationCallback
#include "System/Net/ServerCertValidationCallback.hpp"
// Including type: System.Net.Security.SslPolicyErrors
#include "System/Net/Security/SslPolicyErrors.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ServerCertValidationCallback::CallbackContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServerCertValidationCallback::CallbackContext*, "System.Net", "ServerCertValidationCallback/CallbackContext");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServerCertValidationCallback/System.Net.CallbackContext
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerCertValidationCallback::CallbackContext : public ::Il2CppObject {
    public:
    public:
    // readonly System.Object request
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* request;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // readonly System.Security.Cryptography.X509Certificates.X509Certificate certificate
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // readonly System.Security.Cryptography.X509Certificates.X509Chain chain
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::X509Certificates::X509Chain* chain;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Chain*) == 0x8);
    // readonly System.Net.Security.SslPolicyErrors sslPolicyErrors
    // Size: 0x4
    // Offset: 0x28
    ::System::Net::Security::SslPolicyErrors sslPolicyErrors;
    // Field size check
    static_assert(sizeof(::System::Net::Security::SslPolicyErrors) == 0x4);
    // System.Boolean result
    // Size: 0x1
    // Offset: 0x2C
    bool result;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: readonly System.Object request
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_request();
    // Get instance field reference: readonly System.Security.Cryptography.X509Certificates.X509Certificate certificate
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509Certificate*& dyn_certificate();
    // Get instance field reference: readonly System.Security.Cryptography.X509Certificates.X509Chain chain
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509Chain*& dyn_chain();
    // Get instance field reference: readonly System.Net.Security.SslPolicyErrors sslPolicyErrors
    [[deprecated("Use field access instead!")]] ::System::Net::Security::SslPolicyErrors& dyn_sslPolicyErrors();
    // Get instance field reference: System.Boolean result
    [[deprecated("Use field access instead!")]] bool& dyn_result();
    // System.Void .ctor(System.Object request, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, System.Net.Security.SslPolicyErrors sslPolicyErrors)
    // Offset: 0x9FDE7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCertValidationCallback::CallbackContext* New_ctor(::Il2CppObject* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ServerCertValidationCallback::CallbackContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCertValidationCallback::CallbackContext*, creationType>(request, certificate, chain, sslPolicyErrors)));
    }
  }; // System.Net.ServerCertValidationCallback/System.Net.CallbackContext
  #pragma pack(pop)
  static check_size<sizeof(ServerCertValidationCallback::CallbackContext), 44 + sizeof(bool)> __System_Net_ServerCertValidationCallback_CallbackContextSizeCheck;
  static_assert(sizeof(ServerCertValidationCallback::CallbackContext) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServerCertValidationCallback::CallbackContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
