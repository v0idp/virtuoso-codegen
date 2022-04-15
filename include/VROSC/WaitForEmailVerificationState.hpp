// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.IState
#include "VROSC/IState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AuthenticationManager
  class AuthenticationManager;
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: WaitForEmailVerificationState
  class WaitForEmailVerificationState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::WaitForEmailVerificationState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaitForEmailVerificationState*, "VROSC", "WaitForEmailVerificationState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.WaitForEmailVerificationState
  // [TokenAttribute] Offset: FFFFFFFF
  class WaitForEmailVerificationState : public ::Il2CppObject/*, public ::VROSC::IState*/ {
    public:
    public:
    // private VROSC.AuthenticationManager _authManager
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::AuthenticationManager* authManager;
    // Field size check
    static_assert(sizeof(::VROSC::AuthenticationManager*) == 0x8);
    // private System.Single _reloadTimer
    // Size: 0x4
    // Offset: 0x18
    float reloadTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _attemptedSendingVerificationEmail
    // Size: 0x1
    // Offset: 0x1C
    bool attemptedSendingVerificationEmail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::VROSC::IState
    operator ::VROSC::IState() noexcept {
      return *reinterpret_cast<::VROSC::IState*>(this);
    }
    // Get instance field reference: private VROSC.AuthenticationManager _authManager
    [[deprecated("Use field access instead!")]] ::VROSC::AuthenticationManager*& dyn__authManager();
    // Get instance field reference: private System.Single _reloadTimer
    [[deprecated("Use field access instead!")]] float& dyn__reloadTimer();
    // Get instance field reference: private System.Boolean _attemptedSendingVerificationEmail
    [[deprecated("Use field access instead!")]] bool& dyn__attemptedSendingVerificationEmail();
    // public System.Void .ctor(VROSC.AuthenticationManager authManager)
    // Offset: 0x94FC78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitForEmailVerificationState* New_ctor(::VROSC::AuthenticationManager* authManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::WaitForEmailVerificationState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitForEmailVerificationState*, creationType>(authManager)));
    }
    // public System.Void OnEnter(params System.Object[] values)
    // Offset: 0x94FCA4
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public System.Void OnExit()
    // Offset: 0x94FCB0
    void OnExit();
    // public System.Void Tick()
    // Offset: 0x94FCB4
    void Tick();
    // public System.Void UpdateData(params System.Object[] values)
    // Offset: 0x94FE98
    void UpdateData(::ArrayW<::Il2CppObject*> values);
    // private System.Void FirebaseSendVerificationEmailSuccess()
    // Offset: 0x94FE9C
    void FirebaseSendVerificationEmailSuccess();
    // private System.Void FirebaseSendVerificationEmailFailure(VROSC.Error error)
    // Offset: 0x950014
    void FirebaseSendVerificationEmailFailure(::VROSC::Error error);
  }; // VROSC.WaitForEmailVerificationState
  #pragma pack(pop)
  static check_size<sizeof(WaitForEmailVerificationState), 28 + sizeof(bool)> __VROSC_WaitForEmailVerificationStateSizeCheck;
  static_assert(sizeof(WaitForEmailVerificationState) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::WaitForEmailVerificationState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::WaitForEmailVerificationState::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WaitForEmailVerificationState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::WaitForEmailVerificationState::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::WaitForEmailVerificationState*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::WaitForEmailVerificationState::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WaitForEmailVerificationState::*)()>(&VROSC::WaitForEmailVerificationState::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::WaitForEmailVerificationState*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::WaitForEmailVerificationState::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WaitForEmailVerificationState::*)()>(&VROSC::WaitForEmailVerificationState::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::WaitForEmailVerificationState*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::WaitForEmailVerificationState::UpdateData
// Il2CppName: UpdateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WaitForEmailVerificationState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::WaitForEmailVerificationState::UpdateData)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::WaitForEmailVerificationState*), "UpdateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::WaitForEmailVerificationState::FirebaseSendVerificationEmailSuccess
// Il2CppName: FirebaseSendVerificationEmailSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WaitForEmailVerificationState::*)()>(&VROSC::WaitForEmailVerificationState::FirebaseSendVerificationEmailSuccess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::WaitForEmailVerificationState*), "FirebaseSendVerificationEmailSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::WaitForEmailVerificationState::FirebaseSendVerificationEmailFailure
// Il2CppName: FirebaseSendVerificationEmailFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WaitForEmailVerificationState::*)(::VROSC::Error)>(&VROSC::WaitForEmailVerificationState::FirebaseSendVerificationEmailFailure)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::WaitForEmailVerificationState*), "FirebaseSendVerificationEmailFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
