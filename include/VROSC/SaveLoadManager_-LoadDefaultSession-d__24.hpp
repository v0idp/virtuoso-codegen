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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager::$LoadDefaultSession$d__24, "VROSC", "SaveLoadManager/<LoadDefaultSession>d__24");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveLoadManager/VROSC.<LoadDefaultSession>d__24
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct SaveLoadManager::$LoadDefaultSession$d__24/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public VROSC.SaveLoadManager <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::SaveLoadManager* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SaveLoadManager*) == 0x8);
    // private UnityEngine.Networking.UnityWebRequest <webRequest>5__2
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Networking::UnityWebRequest* $webRequest$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x38
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $LoadDefaultSession$d__24
    constexpr $LoadDefaultSession$d__24(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::VROSC::SaveLoadManager* $$4__this_ = {}, ::UnityEngine::Networking::UnityWebRequest* $webRequest$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $webRequest$5__2{$webRequest$5__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public VROSC.SaveLoadManager <>4__this
    ::VROSC::SaveLoadManager*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest <webRequest>5__2
    ::UnityEngine::Networking::UnityWebRequest*& dyn_$webRequest$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1346F90
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x13476A4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.SaveLoadManager/VROSC.<LoadDefaultSession>d__24
  #pragma pack(pop)
  static check_size<sizeof(SaveLoadManager::$LoadDefaultSession$d__24), 56 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __VROSC_SaveLoadManager_$LoadDefaultSession$d__24SizeCheck;
  static_assert(sizeof(SaveLoadManager::$LoadDefaultSession$d__24) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$LoadDefaultSession$d__24::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$LoadDefaultSession$d__24::*)()>(&VROSC::SaveLoadManager::$LoadDefaultSession$d__24::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$LoadDefaultSession$d__24), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$LoadDefaultSession$d__24::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$LoadDefaultSession$d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::SaveLoadManager::$LoadDefaultSession$d__24::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$LoadDefaultSession$d__24), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
