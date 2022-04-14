// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoardPlayer
#include "VROSC/NoteBoardPlayer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: VROSC.HandType
#include "VROSC/HandType.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardPlayer::$Stop$d__20, "VROSC", "NoteBoardPlayer/<Stop>d__20");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.NoteBoardPlayer/VROSC.<Stop>d__20
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NoteBoardPlayer::$Stop$d__20/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public VROSC.NoteBoardPlayer <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::NoteBoardPlayer* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardPlayer*) == 0x8);
    // public System.Boolean linkHands
    // Size: 0x1
    // Offset: 0x28
    bool linkHands;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean immediate
    // Size: 0x1
    // Offset: 0x29
    bool immediate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public VROSC.HandType handType
    // Size: 0x4
    // Offset: 0x2C
    ::VROSC::HandType handType;
    // Field size check
    static_assert(sizeof(::VROSC::HandType) == 0x4);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x30
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $Stop$d__20
    constexpr $Stop$d__20(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::VROSC::NoteBoardPlayer* $$4__this_ = {}, bool linkHands_ = {}, bool immediate_ = {}, ::VROSC::HandType handType_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, linkHands{linkHands_}, immediate{immediate_}, handType{handType_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    [[deprecated]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public VROSC.NoteBoardPlayer <>4__this
    [[deprecated]] ::VROSC::NoteBoardPlayer*& dyn_$$4__this();
    // Get instance field reference: public System.Boolean linkHands
    [[deprecated]] bool& dyn_linkHands();
    // Get instance field reference: public System.Boolean immediate
    [[deprecated]] bool& dyn_immediate();
    // Get instance field reference: public VROSC.HandType handType
    [[deprecated]] ::VROSC::HandType& dyn_handType();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x19664A0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x19666D4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.NoteBoardPlayer/VROSC.<Stop>d__20
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardPlayer::$Stop$d__20::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardPlayer::$Stop$d__20::*)()>(&VROSC::NoteBoardPlayer::$Stop$d__20::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardPlayer::$Stop$d__20), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardPlayer::$Stop$d__20::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardPlayer::$Stop$d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::NoteBoardPlayer::$Stop$d__20::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardPlayer::$Stop$d__20), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
