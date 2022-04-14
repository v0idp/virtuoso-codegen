// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CryptoConfig
  class CryptoConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfig);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfig*, "System.Security.Cryptography", "CryptoConfig");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CryptoConfig
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6848B8
  class CryptoConfig : public ::Il2CppObject {
    public:
    // static public System.Boolean get_AllowOnlyFipsAlgorithms()
    // Offset: 0x13F6A14
    static bool get_AllowOnlyFipsAlgorithms();
    // static public System.Byte[] EncodeOID(System.String str)
    // Offset: 0x13F63FC
    static ::ArrayW<uint8_t> EncodeOID(::StringW str);
    // static private System.Byte[] EncodeLongNumber(System.Int64 x)
    // Offset: 0x13F6864
    static ::ArrayW<uint8_t> EncodeLongNumber(int64_t x);
    // static public System.Object CreateFromName(System.String name)
    // Offset: 0x13F6A1C
    static ::Il2CppObject* CreateFromName(::StringW name);
    // static public System.Object CreateFromName(System.String name, params System.Object[] args)
    // Offset: 0x13F6A20
    static ::Il2CppObject* CreateFromName(::StringW name, ::ArrayW<::Il2CppObject*> args);
    // static System.String MapNameToOID(System.String name, System.Object arg)
    // Offset: 0x13F84B8
    static ::StringW MapNameToOID(::StringW name, ::Il2CppObject* arg);
    // static public System.String MapNameToOID(System.String name)
    // Offset: 0x13F84BC
    static ::StringW MapNameToOID(::StringW name);
  }; // System.Security.Cryptography.CryptoConfig
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::get_AllowOnlyFipsAlgorithms
// Il2CppName: get_AllowOnlyFipsAlgorithms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Security::Cryptography::CryptoConfig::get_AllowOnlyFipsAlgorithms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "get_AllowOnlyFipsAlgorithms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::EncodeOID
// Il2CppName: EncodeOID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::Security::Cryptography::CryptoConfig::EncodeOID)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "EncodeOID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::EncodeLongNumber
// Il2CppName: EncodeLongNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&System::Security::Cryptography::CryptoConfig::EncodeLongNumber)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "EncodeLongNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::CreateFromName
// Il2CppName: CreateFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::StringW)>(&System::Security::Cryptography::CryptoConfig::CreateFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "CreateFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::CreateFromName
// Il2CppName: CreateFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&System::Security::Cryptography::CryptoConfig::CreateFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "CreateFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, args});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::MapNameToOID
// Il2CppName: MapNameToOID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Il2CppObject*)>(&System::Security::Cryptography::CryptoConfig::MapNameToOID)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "MapNameToOID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, arg});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::MapNameToOID
// Il2CppName: MapNameToOID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Security::Cryptography::CryptoConfig::MapNameToOID)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "MapNameToOID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
