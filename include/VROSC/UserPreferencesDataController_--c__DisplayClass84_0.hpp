// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UserPreferencesDataController
#include "VROSC/UserPreferencesDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UserPreferencesDataController::$$c__DisplayClass84_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserPreferencesDataController::$$c__DisplayClass84_0*, "VROSC", "UserPreferencesDataController/<>c__DisplayClass84_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UserPreferencesDataController/VROSC.<>c__DisplayClass84_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserPreferencesDataController::$$c__DisplayClass84_0 : public ::Il2CppObject {
    public:
    public:
    // public VROSC.UserPreferencesDataController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::UserPreferencesDataController* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::UserPreferencesDataController*) == 0x8);
    // public System.Action onSuccess
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public VROSC.UserPreferencesDataController <>4__this
    [[deprecated]] ::VROSC::UserPreferencesDataController*& dyn_$$4__this();
    // Get instance field reference: public System.Action onSuccess
    [[deprecated]] ::System::Action*& dyn_onSuccess();
    // System.Void <SaveAllPreferences>b__0()
    // Offset: 0xE883AC
    void $SaveAllPreferences$b__0();
    // public System.Void .ctor()
    // Offset: 0xE883A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserPreferencesDataController::$$c__DisplayClass84_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UserPreferencesDataController::$$c__DisplayClass84_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserPreferencesDataController::$$c__DisplayClass84_0*, creationType>()));
    }
  }; // VROSC.UserPreferencesDataController/VROSC.<>c__DisplayClass84_0
  #pragma pack(pop)
  static check_size<sizeof(UserPreferencesDataController::$$c__DisplayClass84_0), 24 + sizeof(::System::Action*)> __VROSC_UserPreferencesDataController_$$c__DisplayClass84_0SizeCheck;
  static_assert(sizeof(UserPreferencesDataController::$$c__DisplayClass84_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UserPreferencesDataController::$$c__DisplayClass84_0::$SaveAllPreferences$b__0
// Il2CppName: <SaveAllPreferences>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserPreferencesDataController::$$c__DisplayClass84_0::*)()>(&VROSC::UserPreferencesDataController::$$c__DisplayClass84_0::$SaveAllPreferences$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserPreferencesDataController::$$c__DisplayClass84_0*), "<SaveAllPreferences>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserPreferencesDataController::$$c__DisplayClass84_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!