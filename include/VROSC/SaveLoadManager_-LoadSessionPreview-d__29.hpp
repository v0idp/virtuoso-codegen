// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SaveLoadManager
#include "VROSC/SaveLoadManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager::$LoadSessionPreview$d__29, "VROSC", "SaveLoadManager/<LoadSessionPreview>d__29");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveLoadManager/VROSC.<LoadSessionPreview>d__29
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct SaveLoadManager::$LoadSessionPreview$d__29/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.String sessionId
    // Size: 0x8
    // Offset: 0x28
    ::StringW sessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean inCloud
    // Size: 0x1
    // Offset: 0x30
    bool inCloud;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isCommunity
    // Size: 0x1
    // Offset: 0x31
    bool isCommunity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isOgg
    // Size: 0x1
    // Offset: 0x32
    bool isOgg;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOgg and: $$4__this
    char __padding5[0x5] = {};
    // public VROSC.SaveLoadManager <>4__this
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::SaveLoadManager* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SaveLoadManager*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x40
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x48
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $LoadSessionPreview$d__29
    constexpr $LoadSessionPreview$d__29(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::StringW sessionId_ = {}, bool inCloud_ = {}, bool isCommunity_ = {}, bool isOgg_ = {}, ::VROSC::SaveLoadManager* $$4__this_ = {}, ::StringW userId_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, sessionId{sessionId_}, inCloud{inCloud_}, isCommunity{isCommunity_}, isOgg{isOgg_}, $$4__this{$$4__this_}, userId{userId_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.String sessionId
    [[deprecated]] ::StringW& dyn_sessionId();
    // Get instance field reference: public System.Boolean inCloud
    [[deprecated]] bool& dyn_inCloud();
    // Get instance field reference: public System.Boolean isCommunity
    [[deprecated]] bool& dyn_isCommunity();
    // Get instance field reference: public System.Boolean isOgg
    [[deprecated]] bool& dyn_isOgg();
    // Get instance field reference: public VROSC.SaveLoadManager <>4__this
    [[deprecated]] ::VROSC::SaveLoadManager*& dyn_$$4__this();
    // Get instance field reference: public System.String userId
    [[deprecated]] ::StringW& dyn_userId();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x8D2F48
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x8D3390
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.SaveLoadManager/VROSC.<LoadSessionPreview>d__29
  #pragma pack(pop)
  static check_size<sizeof(SaveLoadManager::$LoadSessionPreview$d__29), 72 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __VROSC_SaveLoadManager_$LoadSessionPreview$d__29SizeCheck;
  static_assert(sizeof(SaveLoadManager::$LoadSessionPreview$d__29) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$LoadSessionPreview$d__29::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$LoadSessionPreview$d__29::*)()>(&VROSC::SaveLoadManager::$LoadSessionPreview$d__29::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$LoadSessionPreview$d__29), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$LoadSessionPreview$d__29::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$LoadSessionPreview$d__29::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::SaveLoadManager::$LoadSessionPreview$d__29::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$LoadSessionPreview$d__29), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
