// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SaveLoadManager
#include "VROSC/SaveLoadManager.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SaveLoadManager::$$c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager::$$c__DisplayClass27_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass27_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveLoadManager/VROSC.<>c__DisplayClass27_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SaveLoadManager::$$c__DisplayClass27_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String origin
    // Size: 0x8
    // Offset: 0x10
    ::StringW origin;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action`1<System.String> onSuccess
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::StringW>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // public System.String sessionName
    // Size: 0x8
    // Offset: 0x20
    ::StringW sessionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action`2<System.String,VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_2<::StringW, ::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_2<::StringW, ::VROSC::Error>*) == 0x8);
    public:
    // Get instance field reference: public System.String origin
    [[deprecated]] ::StringW& dyn_origin();
    // Get instance field reference: public System.Action`1<System.String> onSuccess
    [[deprecated]] ::System::Action_1<::StringW>*& dyn_onSuccess();
    // Get instance field reference: public System.String sessionName
    [[deprecated]] ::StringW& dyn_sessionName();
    // Get instance field reference: public System.Action`2<System.String,VROSC.Error> onFailure
    [[deprecated]] ::System::Action_2<::StringW, ::VROSC::Error>*& dyn_onFailure();
    // System.Void <UpdateOldSaveFiles>b__0()
    // Offset: 0x8D0D54
    void $UpdateOldSaveFiles$b__0();
    // System.Void <UpdateOldSaveFiles>b__1(VROSC.Error error)
    // Offset: 0x8D0DC4
    void $UpdateOldSaveFiles$b__1(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x8D0D4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveLoadManager::$$c__DisplayClass27_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SaveLoadManager::$$c__DisplayClass27_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveLoadManager::$$c__DisplayClass27_0*, creationType>()));
    }
  }; // VROSC.SaveLoadManager/VROSC.<>c__DisplayClass27_0
  #pragma pack(pop)
  static check_size<sizeof(SaveLoadManager::$$c__DisplayClass27_0), 40 + sizeof(::System::Action_2<::StringW, ::VROSC::Error>*)> __VROSC_SaveLoadManager_$$c__DisplayClass27_0SizeCheck;
  static_assert(sizeof(SaveLoadManager::$$c__DisplayClass27_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass27_0::$UpdateOldSaveFiles$b__0
// Il2CppName: <UpdateOldSaveFiles>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c__DisplayClass27_0::*)()>(&VROSC::SaveLoadManager::$$c__DisplayClass27_0::$UpdateOldSaveFiles$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c__DisplayClass27_0*), "<UpdateOldSaveFiles>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass27_0::$UpdateOldSaveFiles$b__1
// Il2CppName: <UpdateOldSaveFiles>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c__DisplayClass27_0::*)(::VROSC::Error)>(&VROSC::SaveLoadManager::$$c__DisplayClass27_0::$UpdateOldSaveFiles$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c__DisplayClass27_0*), "<UpdateOldSaveFiles>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass27_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
