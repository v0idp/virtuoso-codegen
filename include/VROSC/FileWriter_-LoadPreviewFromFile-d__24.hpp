// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.FileWriter
#include "VROSC/FileWriter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter::$LoadPreviewFromFile$d__24, "VROSC", "FileWriter/<LoadPreviewFromFile>d__24");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.FileWriter/VROSC.<LoadPreviewFromFile>d__24
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct FileWriter::$LoadPreviewFromFile$d__24/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Action`1<UnityEngine.AudioClip> onSuccess
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::AudioClip*>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::AudioClip*>*) == 0x8);
    // public System.String fileName
    // Size: 0x8
    // Offset: 0x28
    ::StringW fileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean isTemp
    // Size: 0x1
    // Offset: 0x30
    bool isTemp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Action`1<VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $LoadPreviewFromFile$d__24
    constexpr $LoadPreviewFromFile$d__24(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::System::Action_1<::UnityEngine::AudioClip*>* onSuccess_ = {}, ::StringW fileName_ = {}, bool isTemp_ = {}, ::System::Action_1<::VROSC::Error>* onFailure_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, onSuccess{onSuccess_}, fileName{fileName_}, isTemp{isTemp_}, onFailure{onFailure_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.Action`1<UnityEngine.AudioClip> onSuccess
    ::System::Action_1<::UnityEngine::AudioClip*>*& dyn_onSuccess();
    // Get instance field reference: public System.String fileName
    ::StringW& dyn_fileName();
    // Get instance field reference: public System.Boolean isTemp
    bool& dyn_isTemp();
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x13658F0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1365B70
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.FileWriter/VROSC.<LoadPreviewFromFile>d__24
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FileWriter::$LoadPreviewFromFile$d__24::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FileWriter::$LoadPreviewFromFile$d__24::*)()>(&VROSC::FileWriter::$LoadPreviewFromFile$d__24::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FileWriter::$LoadPreviewFromFile$d__24), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FileWriter::$LoadPreviewFromFile$d__24::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FileWriter::$LoadPreviewFromFile$d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::FileWriter::$LoadPreviewFromFile$d__24::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FileWriter::$LoadPreviewFromFile$d__24), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
