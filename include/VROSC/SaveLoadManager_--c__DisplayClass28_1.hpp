// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SaveLoadManager
#include "VROSC/SaveLoadManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SaveLoadManager::$$c__DisplayClass28_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager::$$c__DisplayClass28_1*, "VROSC", "SaveLoadManager/<>c__DisplayClass28_1");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveLoadManager/VROSC.<>c__DisplayClass28_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SaveLoadManager::$$c__DisplayClass28_1 : public ::Il2CppObject {
    public:
    public:
    // public System.String s
    // Size: 0x8
    // Offset: 0x10
    ::StringW s;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return s;
    }
    // Get instance field reference: public System.String s
    [[deprecated("Use field access instead!")]] ::StringW& dyn_s();
    // public System.Void .ctor()
    // Offset: 0x8D0F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveLoadManager::$$c__DisplayClass28_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SaveLoadManager::$$c__DisplayClass28_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveLoadManager::$$c__DisplayClass28_1*, creationType>()));
    }
    // System.Void <DeleteSession>b__1()
    // Offset: 0x8D0F6C
    void $DeleteSession$b__1();
    // System.Void <DeleteSession>b__2(VROSC.Error error)
    // Offset: 0x8D0FE8
    void $DeleteSession$b__2(::VROSC::Error error);
  }; // VROSC.SaveLoadManager/VROSC.<>c__DisplayClass28_1
  #pragma pack(pop)
  static check_size<sizeof(SaveLoadManager::$$c__DisplayClass28_1), 16 + sizeof(::StringW)> __VROSC_SaveLoadManager_$$c__DisplayClass28_1SizeCheck;
  static_assert(sizeof(SaveLoadManager::$$c__DisplayClass28_1) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass28_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass28_1::$DeleteSession$b__1
// Il2CppName: <DeleteSession>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c__DisplayClass28_1::*)()>(&VROSC::SaveLoadManager::$$c__DisplayClass28_1::$DeleteSession$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c__DisplayClass28_1*), "<DeleteSession>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass28_1::$DeleteSession$b__2
// Il2CppName: <DeleteSession>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c__DisplayClass28_1::*)(::VROSC::Error)>(&VROSC::SaveLoadManager::$$c__DisplayClass28_1::$DeleteSession$b__2)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c__DisplayClass28_1*), "<DeleteSession>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
