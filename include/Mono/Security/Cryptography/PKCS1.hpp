// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: PKCS1
  class PKCS1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS1);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS1*, "Mono.Security.Cryptography", "PKCS1");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.PKCS1
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS1 : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] emptySHA1
    static ::ArrayW<uint8_t> _get_emptySHA1();
    // Set static field: static private System.Byte[] emptySHA1
    static void _set_emptySHA1(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] emptySHA256
    static ::ArrayW<uint8_t> _get_emptySHA256();
    // Set static field: static private System.Byte[] emptySHA256
    static void _set_emptySHA256(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] emptySHA384
    static ::ArrayW<uint8_t> _get_emptySHA384();
    // Set static field: static private System.Byte[] emptySHA384
    static void _set_emptySHA384(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] emptySHA512
    static ::ArrayW<uint8_t> _get_emptySHA512();
    // Set static field: static private System.Byte[] emptySHA512
    static void _set_emptySHA512(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x10EB424
    static void _cctor();
    // static System.Security.Cryptography.HashAlgorithm CreateFromName(System.String name)
    // Offset: 0x10EB034
    static ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::StringW name);
  }; // Mono.Security.Cryptography.PKCS1
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Cryptography::PKCS1::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1::CreateFromName
// Il2CppName: CreateFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(::StringW)>(&Mono::Security::Cryptography::PKCS1::CreateFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1*), "CreateFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
