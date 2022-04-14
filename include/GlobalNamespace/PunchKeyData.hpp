// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Key/Type
#include "GlobalNamespace/Key_Type.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PunchKeyData
  class PunchKeyData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PunchKeyData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyData*, "", "PunchKeyData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PunchKeyData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 77E43C
  class PunchKeyData : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private Key/Type _keyType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::Key::Type keyType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Key::Type) == 0x4);
    // Padding between fields: keyType and: keyCapChar
    char __padding0[0x4] = {};
    // private System.String _keyCapChar
    // Size: 0x8
    // Offset: 0x20
    ::StringW keyCapChar;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _alterateKeyCapChar
    // Size: 0x8
    // Offset: 0x28
    ::StringW alterateKeyCapChar;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Key/Type _keyType
    [[deprecated]] ::GlobalNamespace::Key::Type& dyn__keyType();
    // Get instance field reference: private System.String _keyCapChar
    [[deprecated]] ::StringW& dyn__keyCapChar();
    // Get instance field reference: private System.String _alterateKeyCapChar
    [[deprecated]] ::StringW& dyn__alterateKeyCapChar();
    // public Key/Type get_KeyType()
    // Offset: 0xB2A888
    ::GlobalNamespace::Key::Type get_KeyType();
    // public System.String get_KeyCapChar()
    // Offset: 0xB2A890
    ::StringW get_KeyCapChar();
    // public System.String get_AlterateKeyCapChar()
    // Offset: 0xB2A898
    ::StringW get_AlterateKeyCapChar();
    // System.Void Set(Key/Type keyType, System.String keyCapChar, System.String alterateKeyCapChar)
    // Offset: 0xB2A8A0
    void Set(::GlobalNamespace::Key::Type keyType, ::StringW keyCapChar, ::StringW alterateKeyCapChar);
    // public System.Void .ctor()
    // Offset: 0xB2A8AC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PunchKeyData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PunchKeyData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PunchKeyData*, creationType>()));
    }
  }; // PunchKeyData
  #pragma pack(pop)
  static check_size<sizeof(PunchKeyData), 40 + sizeof(::StringW)> __GlobalNamespace_PunchKeyDataSizeCheck;
  static_assert(sizeof(PunchKeyData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyData::get_KeyType
// Il2CppName: get_KeyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Key::Type (GlobalNamespace::PunchKeyData::*)()>(&GlobalNamespace::PunchKeyData::get_KeyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyData*), "get_KeyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyData::get_KeyCapChar
// Il2CppName: get_KeyCapChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PunchKeyData::*)()>(&GlobalNamespace::PunchKeyData::get_KeyCapChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyData*), "get_KeyCapChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyData::get_AlterateKeyCapChar
// Il2CppName: get_AlterateKeyCapChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PunchKeyData::*)()>(&GlobalNamespace::PunchKeyData::get_AlterateKeyCapChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyData*), "get_AlterateKeyCapChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyData::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PunchKeyData::*)(::GlobalNamespace::Key::Type, ::StringW, ::StringW)>(&GlobalNamespace::PunchKeyData::Set)> {
  static const MethodInfo* get() {
    static auto* keyType = &::il2cpp_utils::GetClassFromName("", "Key/Type")->byval_arg;
    static auto* keyCapChar = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* alterateKeyCapChar = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyData*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyType, keyCapChar, alterateKeyCapChar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
