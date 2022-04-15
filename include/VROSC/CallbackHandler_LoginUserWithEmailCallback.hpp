// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.CallbackHandler
#include "VROSC/CallbackHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CallbackHandler::LoginUserWithEmailCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler::LoginUserWithEmailCallback*, "VROSC", "CallbackHandler/LoginUserWithEmailCallback");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CallbackHandler/VROSC.LoginUserWithEmailCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class CallbackHandler::LoginUserWithEmailCallback : public ::Il2CppObject {
    public:
    public:
    // public System.Action`2<System.String,System.Boolean> Action
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_2<::StringW, bool>* Action;
    // Field size check
    static_assert(sizeof(::System::Action_2<::StringW, bool>*) == 0x8);
    // public System.String UserId
    // Size: 0x8
    // Offset: 0x18
    ::StringW UserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean IsVerified
    // Size: 0x1
    // Offset: 0x20
    bool IsVerified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Action`2<System.String,System.Boolean> Action
    [[deprecated("Use field access instead!")]] ::System::Action_2<::StringW, bool>*& dyn_Action();
    // Get instance field reference: public System.String UserId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_UserId();
    // Get instance field reference: public System.Boolean IsVerified
    [[deprecated("Use field access instead!")]] bool& dyn_IsVerified();
    // public System.Void .ctor()
    // Offset: 0x9593D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackHandler::LoginUserWithEmailCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CallbackHandler::LoginUserWithEmailCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackHandler::LoginUserWithEmailCallback*, creationType>()));
    }
  }; // VROSC.CallbackHandler/VROSC.LoginUserWithEmailCallback
  #pragma pack(pop)
  static check_size<sizeof(CallbackHandler::LoginUserWithEmailCallback), 32 + sizeof(bool)> __VROSC_CallbackHandler_LoginUserWithEmailCallbackSizeCheck;
  static_assert(sizeof(CallbackHandler::LoginUserWithEmailCallback) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CallbackHandler::LoginUserWithEmailCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
