// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AppValidityChecker
#include "VROSC/AppValidityChecker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19, "VROSC", "AppValidityChecker/<ForceUpdatesDataLoadFailure>d__19");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AppValidityChecker/VROSC.<ForceUpdatesDataLoadFailure>d__19
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public VROSC.Error error
    // Size: 0x4
    // Offset: 0x28
    ::VROSC::Error error;
    // Field size check
    static_assert(sizeof(::VROSC::Error) == 0x4);
    // Padding between fields: error and: $$4__this
    char __padding2[0x4] = {};
    // public VROSC.AppValidityChecker <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::AppValidityChecker* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::AppValidityChecker*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x38
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $ForceUpdatesDataLoadFailure$d__19
    constexpr $ForceUpdatesDataLoadFailure$d__19(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::VROSC::Error error_ = {}, ::VROSC::AppValidityChecker* $$4__this_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, error{error_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    [[deprecated]] ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public VROSC.Error error
    [[deprecated]] ::VROSC::Error& dyn_error();
    // Get instance field reference: public VROSC.AppValidityChecker <>4__this
    [[deprecated]] ::VROSC::AppValidityChecker*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x956834
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x956B30
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.AppValidityChecker/VROSC.<ForceUpdatesDataLoadFailure>d__19
  #pragma pack(pop)
  static check_size<sizeof(AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19), 56 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __VROSC_AppValidityChecker_$ForceUpdatesDataLoadFailure$d__19SizeCheck;
  static_assert(sizeof(AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19::*)()>(&VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
