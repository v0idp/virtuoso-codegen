// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopStationDataController/VROSC.<>c__DisplayClass39_0
#include "VROSC/LoopStationDataController_--c__DisplayClass39_0.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: VROSC.LoopStationDataController
#include "VROSC/LoopStationDataController.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d, "VROSC", "LoopStationDataController/<>c__DisplayClass39_0/<<LoadData>b__0>d");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationDataController/VROSC.<>c__DisplayClass39_0/VROSC.<<LoadData>b__0>d
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.String data
    // Size: 0x8
    // Offset: 0x28
    ::StringW data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public VROSC.LoopStationDataController/VROSC.<>c__DisplayClass39_0 <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::LoopStationDataController::$$c__DisplayClass39_0* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationDataController::$$c__DisplayClass39_0*) == 0x8);
    // private VROSC.LoopStationDataController/VROSC.<>c__DisplayClass39_1 <>8__1
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::LoopStationDataController::$$c__DisplayClass39_1* $$8__1;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationDataController::$$c__DisplayClass39_1*) == 0x8);
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x40
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $i$5__2 and: $$u__1
    char __padding5[0x4] = {};
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x48
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $$LoadData$b__0$d
    constexpr $$LoadData$b__0$d(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::StringW data_ = {}, ::VROSC::LoopStationDataController::$$c__DisplayClass39_0* $$4__this_ = {}, ::VROSC::LoopStationDataController::$$c__DisplayClass39_1* $$8__1_ = {}, int $i$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, data{data_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $i$5__2{$i$5__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.String data
    [[deprecated]] ::StringW& dyn_data();
    // Get instance field reference: public VROSC.LoopStationDataController/VROSC.<>c__DisplayClass39_0 <>4__this
    [[deprecated]] ::VROSC::LoopStationDataController::$$c__DisplayClass39_0*& dyn_$$4__this();
    // Get instance field reference: private VROSC.LoopStationDataController/VROSC.<>c__DisplayClass39_1 <>8__1
    [[deprecated]] ::VROSC::LoopStationDataController::$$c__DisplayClass39_1*& dyn_$$8__1();
    // Get instance field reference: private System.Int32 <i>5__2
    [[deprecated]] int& dyn_$i$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0xE8B384
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE8B8A8
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.LoopStationDataController/VROSC.<>c__DisplayClass39_0/VROSC.<<LoadData>b__0>d
  #pragma pack(pop)
  static check_size<sizeof(LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d), 72 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __VROSC_LoopStationDataController_$$c__DisplayClass39_0_$$LoadData$b__0$dSizeCheck;
  static_assert(sizeof(LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d::*)()>(&VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationDataController::$$c__DisplayClass39_0::$$LoadData$b__0$d), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
