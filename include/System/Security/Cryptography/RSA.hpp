// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAParameters
  struct RSAParameters;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RSA);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSA*, "System.Security.Cryptography", "RSA");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSA
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57B868
  class RSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
    public:
    // static public System.Security.Cryptography.RSA Create()
    // Offset: 0x1138688
    static ::System::Security::Cryptography::RSA* Create();
    // public System.Security.Cryptography.RSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);
    // public System.Void ImportParameters(System.Security.Cryptography.RSAParameters parameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);
    // protected System.Void .ctor()
    // Offset: 0x1138680
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSA* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSA::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSA*, creationType>()));
    }
    // public override System.Void FromXmlString(System.String xmlString)
    // Offset: 0x11386E0
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::FromXmlString(System.String xmlString)
    void FromXmlString(::StringW xmlString);
    // public override System.String ToXmlString(System.Boolean includePrivateParameters)
    // Offset: 0x1138C70
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.String AsymmetricAlgorithm::ToXmlString(System.Boolean includePrivateParameters)
    ::StringW ToXmlString(bool includePrivateParameters);
  }; // System.Security.Cryptography.RSA
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)()>(&System::Security::Cryptography::RSA::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::ExportParameters
// Il2CppName: ExportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (System::Security::Cryptography::RSA::*)(bool)>(&System::Security::Cryptography::RSA::ExportParameters)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "ExportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::ImportParameters
// Il2CppName: ImportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSA::*)(::System::Security::Cryptography::RSAParameters)>(&System::Security::Cryptography::RSA::ImportParameters)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "ImportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::FromXmlString
// Il2CppName: FromXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSA::*)(::StringW)>(&System::Security::Cryptography::RSA::FromXmlString)> {
  static const MethodInfo* get() {
    static auto* xmlString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "FromXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlString});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::ToXmlString
// Il2CppName: ToXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::RSA::*)(bool)>(&System::Security::Cryptography::RSA::ToXmlString)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "ToXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
