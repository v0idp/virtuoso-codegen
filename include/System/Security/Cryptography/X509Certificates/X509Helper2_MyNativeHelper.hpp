// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Helper2
#include "System/Security/Cryptography/X509Certificates/X509Helper2.hpp"
// Including type: System.Security.Cryptography.X509Certificates.INativeCertificateHelper
#include "System/Security/Cryptography/X509Certificates/INativeCertificateHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper*, "System.Security.Cryptography.X509Certificates", "X509Helper2/MyNativeHelper");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Helper2/System.Security.Cryptography.X509Certificates.MyNativeHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Helper2::MyNativeHelper : public ::Il2CppObject/*, public ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper*/ {
    public:
    // Creating interface conversion operator: operator ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper
    operator ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper() noexcept {
      return *reinterpret_cast<::System::Security::Cryptography::X509Certificates::INativeCertificateHelper*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x17CFEE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Helper2::MyNativeHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Helper2::MyNativeHelper*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509Helper2/System.Security.Cryptography.X509Certificates.MyNativeHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
