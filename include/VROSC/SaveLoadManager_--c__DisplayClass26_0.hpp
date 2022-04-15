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
NEED_NO_BOX(::VROSC::SaveLoadManager::$$c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager::$$c__DisplayClass26_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass26_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveLoadManager/VROSC.<>c__DisplayClass26_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SaveLoadManager::$$c__DisplayClass26_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean isCloud
    // Size: 0x1
    // Offset: 0x10
    bool isCloud;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isCommunity
    // Size: 0x1
    // Offset: 0x11
    bool isCommunity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isCommunity and: $$4__this
    char __padding1[0x6] = {};
    // public VROSC.SaveLoadManager <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SaveLoadManager* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SaveLoadManager*) == 0x8);
    // public System.String sessionId
    // Size: 0x8
    // Offset: 0x20
    ::StringW sessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean hasPreview
    // Size: 0x1
    // Offset: 0x28
    bool hasPreview;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean isCloud
    [[deprecated("Use field access instead!")]] bool& dyn_isCloud();
    // Get instance field reference: public System.Boolean isCommunity
    [[deprecated("Use field access instead!")]] bool& dyn_isCommunity();
    // Get instance field reference: public VROSC.SaveLoadManager <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::SaveLoadManager*& dyn_$$4__this();
    // Get instance field reference: public System.String sessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sessionId();
    // Get instance field reference: public System.Boolean hasPreview
    [[deprecated("Use field access instead!")]] bool& dyn_hasPreview();
    // public System.Void .ctor()
    // Offset: 0x8D097C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveLoadManager::$$c__DisplayClass26_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SaveLoadManager::$$c__DisplayClass26_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveLoadManager::$$c__DisplayClass26_0*, creationType>()));
    }
    // System.Void <SaveSession>b__0()
    // Offset: 0x8D0984
    void $SaveSession$b__0();
    // System.Void <SaveSession>b__1(VROSC.Error error)
    // Offset: 0x8D0CBC
    void $SaveSession$b__1(::VROSC::Error error);
  }; // VROSC.SaveLoadManager/VROSC.<>c__DisplayClass26_0
  #pragma pack(pop)
  static check_size<sizeof(SaveLoadManager::$$c__DisplayClass26_0), 40 + sizeof(bool)> __VROSC_SaveLoadManager_$$c__DisplayClass26_0SizeCheck;
  static_assert(sizeof(SaveLoadManager::$$c__DisplayClass26_0) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass26_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass26_0::$SaveSession$b__0
// Il2CppName: <SaveSession>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c__DisplayClass26_0::*)()>(&VROSC::SaveLoadManager::$$c__DisplayClass26_0::$SaveSession$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c__DisplayClass26_0*), "<SaveSession>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass26_0::$SaveSession$b__1
// Il2CppName: <SaveSession>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c__DisplayClass26_0::*)(::VROSC::Error)>(&VROSC::SaveLoadManager::$$c__DisplayClass26_0::$SaveSession$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c__DisplayClass26_0*), "<SaveSession>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
