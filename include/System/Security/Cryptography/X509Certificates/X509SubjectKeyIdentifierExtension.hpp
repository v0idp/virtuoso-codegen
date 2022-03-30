// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.AsnDecodeStatus
#include "System/Security/Cryptography/AsnDecodeStatus.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
#include "System/Security/Cryptography/X509Certificates/X509SubjectKeyIdentifierHashAlgorithm.hpp"
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
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: AsnEncodedData because it is already included!
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: PublicKey
  class PublicKey;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509SubjectKeyIdentifierExtension
  class X509SubjectKeyIdentifierExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
  // [TokenAttribute] Offset: FFFFFFFF
  class X509SubjectKeyIdentifierExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Byte[] _subjectKeyIdentifier
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> subjectKeyIdentifier;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String _ski
    // Size: 0x8
    // Offset: 0x30
    ::StringW ski;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Size: 0x14
    // Offset: 0x38
    ::System::Security::Cryptography::AsnDecodeStatus status;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::AsnDecodeStatus) == 0x14);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // static field const value: static System.String oid
    static constexpr const char* oid = "2.5.29.14";
    // Get static field: static System.String oid
    static ::StringW _get_oid();
    // Set static field: static System.String oid
    static void _set_oid(::StringW value);
    // static field const value: static System.String friendlyName
    static constexpr const char* friendlyName = "Subject Key Identifier";
    // Get static field: static System.String friendlyName
    static ::StringW _get_friendlyName();
    // Set static field: static System.String friendlyName
    static void _set_friendlyName(::StringW value);
    // Get instance field reference: private System.Byte[] _subjectKeyIdentifier
    ::ArrayW<uint8_t>& dyn__subjectKeyIdentifier();
    // Get instance field reference: private System.String _ski
    ::StringW& dyn__ski();
    // Get instance field reference: private System.Security.Cryptography.AsnDecodeStatus _status
    ::System::Security::Cryptography::AsnDecodeStatus& dyn__status();
    // public System.String get_SubjectKeyIdentifier()
    // Offset: 0x8D7EBC
    ::StringW get_SubjectKeyIdentifier();
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedSubjectKeyIdentifier, System.Boolean critical)
    // Offset: 0x8D7460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509SubjectKeyIdentifierExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509SubjectKeyIdentifierExtension*, creationType>(encodedSubjectKeyIdentifier, critical)));
    }
    // public System.Void .ctor(System.Byte[] subjectKeyIdentifier, System.Boolean critical)
    // Offset: 0x8D76A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509SubjectKeyIdentifierExtension* New_ctor(::ArrayW<uint8_t> subjectKeyIdentifier, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509SubjectKeyIdentifierExtension*, creationType>(subjectKeyIdentifier, critical)));
    }
    // public System.Void .ctor(System.String subjectKeyIdentifier, System.Boolean critical)
    // Offset: 0x8D78B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509SubjectKeyIdentifierExtension* New_ctor(::StringW subjectKeyIdentifier, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509SubjectKeyIdentifierExtension*, creationType>(subjectKeyIdentifier, critical)));
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.PublicKey key, System.Boolean critical)
    // Offset: 0x8D7B14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509SubjectKeyIdentifierExtension* New_ctor(::System::Security::Cryptography::X509Certificates::PublicKey* key, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509SubjectKeyIdentifierExtension*, creationType>(key, critical)));
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.PublicKey key, System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm algorithm, System.Boolean critical)
    // Offset: 0x8D7B20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509SubjectKeyIdentifierExtension* New_ctor(::System::Security::Cryptography::X509Certificates::PublicKey* key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509SubjectKeyIdentifierExtension*, creationType>(key, algorithm, critical)));
    }
    // static System.Byte FromHexChar(System.Char c)
    // Offset: 0x8D811C
    static uint8_t FromHexChar(::Il2CppChar c);
    // static System.Byte FromHexChars(System.Char c1, System.Char c2)
    // Offset: 0x8D8164
    static uint8_t FromHexChars(::Il2CppChar c1, ::Il2CppChar c2);
    // static System.Byte[] FromHex(System.String hex)
    // Offset: 0x8D7A10
    static ::ArrayW<uint8_t> FromHex(::StringW hex);
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x8D752C
    ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t> extension);
    // System.Byte[] Encode()
    // Offset: 0x8D783C
    ::ArrayW<uint8_t> Encode();
    // public System.Void .ctor()
    // Offset: 0x8D73C8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::.ctor()
    // Base method: System.Void AsnEncodedData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509SubjectKeyIdentifierExtension* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509SubjectKeyIdentifierExtension*, creationType>()));
    }
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x8D7F4C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x8D8200
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::StringW ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
  #pragma pack(pop)
  static check_size<sizeof(X509SubjectKeyIdentifierExtension), 56 + sizeof(::System::Security::Cryptography::AsnDecodeStatus)> __System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtensionSizeCheck;
  static_assert(sizeof(X509SubjectKeyIdentifierExtension) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier
// Il2CppName: get_SubjectKeyIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*), "get_SubjectKeyIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChar
// Il2CppName: FromHexChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Il2CppChar)>(&System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChar)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*), "FromHexChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChars
// Il2CppName: FromHexChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Il2CppChar, ::Il2CppChar)>(&System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChars)> {
  static const MethodInfo* get() {
    static auto* c1 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*), "FromHexChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c1, c2});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHex
// Il2CppName: FromHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHex)> {
  static const MethodInfo* get() {
    static auto* hex = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*), "FromHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hex});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsnDecodeStatus (System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Decode)> {
  static const MethodInfo* get() {
    static auto* extension = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Encode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(::System::Security::Cryptography::AsnEncodedData*)>(&System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* asnEncodedData = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsnEncodedData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asnEncodedData});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::ToString)> {
  static const MethodInfo* get() {
    static auto* multiLine = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiLine});
  }
};
