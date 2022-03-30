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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainElement
  class X509ChainElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainElement*, "System.Security.Cryptography.X509Certificates", "X509ChainElement");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainElement
  // [TokenAttribute] Offset: FFFFFFFF
  class X509ChainElement : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Security.Cryptography.X509Certificates.X509Certificate2 certificate
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate2*) == 0x8);
    // private System.String info
    // Size: 0x8
    // Offset: 0x18
    ::StringW info;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate2 certificate
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*& dyn_certificate();
    // Get instance field reference: private System.String info
    ::StringW& dyn_info();
    // public System.Security.Cryptography.X509Certificates.X509Certificate2 get_Certificate()
    // Offset: 0xAC76D0
    ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Certificate();
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0xAC7660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainElement* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509ChainElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainElement*, creationType>(certificate)));
    }
  }; // System.Security.Cryptography.X509Certificates.X509ChainElement
  #pragma pack(pop)
  static check_size<sizeof(X509ChainElement), 24 + sizeof(::StringW)> __System_Security_Cryptography_X509Certificates_X509ChainElementSizeCheck;
  static_assert(sizeof(X509ChainElement) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::get_Certificate
// Il2CppName: get_Certificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElement::get_Certificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElement*), "get_Certificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
