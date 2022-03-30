// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UserUpVotesDataController
#include "VROSC/UserUpVotesDataController.hpp"
// Including type: VROSC.UserUpVotesDataModel
#include "VROSC/UserUpVotesDataModel.hpp"
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
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UserUpVotesDataController::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserUpVotesDataController::$$c__DisplayClass10_0*, "VROSC", "UserUpVotesDataController/<>c__DisplayClass10_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UserUpVotesDataController/VROSC.<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserUpVotesDataController::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public VROSC.UserUpVotesDataModel/VROSC.UpVote upVote
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::UserUpVotesDataModel::UpVote* upVote;
    // Field size check
    static_assert(sizeof(::VROSC::UserUpVotesDataModel::UpVote*) == 0x8);
    // public VROSC.UserUpVotesDataController <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UserUpVotesDataController* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::UserUpVotesDataController*) == 0x8);
    // public System.Action`1<System.String> onSuccess
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::StringW>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: public VROSC.UserUpVotesDataModel/VROSC.UpVote upVote
    ::VROSC::UserUpVotesDataModel::UpVote*& dyn_upVote();
    // Get instance field reference: public VROSC.UserUpVotesDataController <>4__this
    ::VROSC::UserUpVotesDataController*& dyn_$$4__this();
    // Get instance field reference: public System.Action`1<System.String> onSuccess
    ::System::Action_1<::StringW>*& dyn_onSuccess();
    // System.Void <AddUpVoteToData>b__0(System.String id)
    // Offset: 0x14167DC
    void $AddUpVoteToData$b__0(::StringW id);
    // public System.Void .ctor()
    // Offset: 0x14167D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserUpVotesDataController::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UserUpVotesDataController::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserUpVotesDataController::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // VROSC.UserUpVotesDataController/VROSC.<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(UserUpVotesDataController::$$c__DisplayClass10_0), 32 + sizeof(::System::Action_1<::StringW>*)> __VROSC_UserUpVotesDataController_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(UserUpVotesDataController::$$c__DisplayClass10_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UserUpVotesDataController::$$c__DisplayClass10_0::$AddUpVoteToData$b__0
// Il2CppName: <AddUpVoteToData>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserUpVotesDataController::$$c__DisplayClass10_0::*)(::StringW)>(&VROSC::UserUpVotesDataController::$$c__DisplayClass10_0::$AddUpVoteToData$b__0)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserUpVotesDataController::$$c__DisplayClass10_0*), "<AddUpVoteToData>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VROSC::UserUpVotesDataController::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
