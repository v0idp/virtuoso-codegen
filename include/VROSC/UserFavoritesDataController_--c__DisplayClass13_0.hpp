// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UserFavoritesDataController
#include "VROSC/UserFavoritesDataController.hpp"
// Including type: VROSC.UserFavoritesDataModel
#include "VROSC/UserFavoritesDataModel.hpp"
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
NEED_NO_BOX(::VROSC::UserFavoritesDataController::$$c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataController::$$c__DisplayClass13_0*, "VROSC", "UserFavoritesDataController/<>c__DisplayClass13_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UserFavoritesDataController/VROSC.<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserFavoritesDataController::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    public:
    // public VROSC.UserFavoritesDataController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::UserFavoritesDataController* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::UserFavoritesDataController*) == 0x8);
    // public VROSC.UserFavoritesDataModel/VROSC.Favorite favorite
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UserFavoritesDataModel::Favorite* favorite;
    // Field size check
    static_assert(sizeof(::VROSC::UserFavoritesDataModel::Favorite*) == 0x8);
    // public System.Action onSuccess
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public VROSC.UserFavoritesDataController <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::UserFavoritesDataController*& dyn_$$4__this();
    // Get instance field reference: public VROSC.UserFavoritesDataModel/VROSC.Favorite favorite
    [[deprecated("Use field access instead!")]] ::VROSC::UserFavoritesDataModel::Favorite*& dyn_favorite();
    // Get instance field reference: public System.Action onSuccess
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onSuccess();
    // public System.Void .ctor()
    // Offset: 0xE86030
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserFavoritesDataController::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UserFavoritesDataController::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserFavoritesDataController::$$c__DisplayClass13_0*, creationType>()));
    }
    // System.Void <RemoveFavoriteFromData>b__0()
    // Offset: 0xE86038
    void $RemoveFavoriteFromData$b__0();
  }; // VROSC.UserFavoritesDataController/VROSC.<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(UserFavoritesDataController::$$c__DisplayClass13_0), 32 + sizeof(::System::Action*)> __VROSC_UserFavoritesDataController_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(UserFavoritesDataController::$$c__DisplayClass13_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UserFavoritesDataController::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UserFavoritesDataController::$$c__DisplayClass13_0::$RemoveFavoriteFromData$b__0
// Il2CppName: <RemoveFavoriteFromData>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserFavoritesDataController::$$c__DisplayClass13_0::*)()>(&VROSC::UserFavoritesDataController::$$c__DisplayClass13_0::$RemoveFavoriteFromData$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserFavoritesDataController::$$c__DisplayClass13_0*), "<RemoveFavoriteFromData>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
