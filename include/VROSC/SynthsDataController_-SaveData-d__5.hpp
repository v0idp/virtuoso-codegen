// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SynthsDataController
#include "VROSC/SynthsDataController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
// Including type: VROSC.InstrumentsDataController
#include "VROSC/InstrumentsDataController.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SynthData
  class SynthData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataController::$SaveData$d__5, "VROSC", "SynthsDataController/<SaveData>d__5");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SynthsDataController/VROSC.<SaveData>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct SynthsDataController::$SaveData$d__5/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public VROSC.SynthsDataController <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::SynthsDataController* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SynthsDataController*) == 0x8);
    // public System.Action`1<VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.String sessionName
    // Size: 0x8
    // Offset: 0x38
    ::StringW sessionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private VROSC.SynthsDataController/VROSC.<>c__DisplayClass5_0 <>8__1
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::SynthsDataController::$$c__DisplayClass5_0* $$8__1;
    // Field size check
    static_assert(sizeof(::VROSC::SynthsDataController::$$c__DisplayClass5_0*) == 0x8);
    // public System.Action onSuccess
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x50
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $i$5__2 and: $instrumentData$5__3
    char __padding7[0x4] = {};
    // private VROSC.SynthData <instrumentData>5__3
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::SynthData* $instrumentData$5__3;
    // Field size check
    static_assert(sizeof(::VROSC::SynthData*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.InstrumentsDataController/VROSC.PatchSettings> <patchSettingsList>5__4
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController::PatchSettings*>* $patchSettingsList$5__4;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController::PatchSettings*>*) == 0x8);
    // private System.Int32 <j>5__5
    // Size: 0x4
    // Offset: 0x68
    int $j$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $j$5__5 and: $$u__1
    char __padding10[0x4] = {};
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x70
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $SaveData$d__5
    constexpr $SaveData$d__5(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::VROSC::SynthsDataController* $$4__this_ = {}, ::System::Action_1<::VROSC::Error>* onFailure_ = {}, ::StringW sessionName_ = {}, ::VROSC::SynthsDataController::$$c__DisplayClass5_0* $$8__1_ = {}, ::System::Action* onSuccess_ = {}, int $i$5__2_ = {}, ::VROSC::SynthData* $instrumentData$5__3_ = {}, ::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController::PatchSettings*>* $patchSettingsList$5__4_ = {}, int $j$5__5_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, onFailure{onFailure_}, sessionName{sessionName_}, $$8__1{$$8__1_}, onSuccess{onSuccess_}, $i$5__2{$i$5__2_}, $instrumentData$5__3{$instrumentData$5__3_}, $patchSettingsList$5__4{$patchSettingsList$5__4_}, $j$5__5{$j$5__5_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public VROSC.SynthsDataController <>4__this
    ::VROSC::SynthsDataController*& dyn_$$4__this();
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.String sessionName
    ::StringW& dyn_sessionName();
    // Get instance field reference: private VROSC.SynthsDataController/VROSC.<>c__DisplayClass5_0 <>8__1
    ::VROSC::SynthsDataController::$$c__DisplayClass5_0*& dyn_$$8__1();
    // Get instance field reference: public System.Action onSuccess
    ::System::Action*& dyn_onSuccess();
    // Get instance field reference: private System.Int32 <i>5__2
    int& dyn_$i$5__2();
    // Get instance field reference: private VROSC.SynthData <instrumentData>5__3
    ::VROSC::SynthData*& dyn_$instrumentData$5__3();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.InstrumentsDataController/VROSC.PatchSettings> <patchSettingsList>5__4
    ::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController::PatchSettings*>*& dyn_$patchSettingsList$5__4();
    // Get instance field reference: private System.Int32 <j>5__5
    int& dyn_$j$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x134F148
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x134F734
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.SynthsDataController/VROSC.<SaveData>d__5
  #pragma pack(pop)
  static check_size<sizeof(SynthsDataController::$SaveData$d__5), 112 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __VROSC_SynthsDataController_$SaveData$d__5SizeCheck;
  static_assert(sizeof(SynthsDataController::$SaveData$d__5) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SynthsDataController::$SaveData$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthsDataController::$SaveData$d__5::*)()>(&VROSC::SynthsDataController::$SaveData$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthsDataController::$SaveData$d__5), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthsDataController::$SaveData$d__5::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthsDataController::$SaveData$d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::SynthsDataController::$SaveData$d__5::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthsDataController::$SaveData$d__5), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
