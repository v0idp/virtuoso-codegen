// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ZipFileWriter
#include "VROSC/ZipFileWriter.hpp"
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
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter::$ExtractZipToFolder$d__3, "VROSC", "ZipFileWriter/<ExtractZipToFolder>d__3");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.ZipFileWriter/VROSC.<ExtractZipToFolder>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct ZipFileWriter::$ExtractZipToFolder$d__3/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.String destination
    // Size: 0x8
    // Offset: 0x20
    ::StringW destination;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public VROSC.ZipFileWriter <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::ZipFileWriter* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::ZipFileWriter*) == 0x8);
    // public System.Action successCallback
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* successCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> failureCallback
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::VROSC::Error>* failureCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.String origin
    // Size: 0x8
    // Offset: 0x40
    ::StringW origin;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x48
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $ExtractZipToFolder$d__3
    constexpr $ExtractZipToFolder$d__3(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::StringW destination_ = {}, ::VROSC::ZipFileWriter* $$4__this_ = {}, ::System::Action* successCallback_ = {}, ::System::Action_1<::VROSC::Error>* failureCallback_ = {}, ::StringW origin_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, destination{destination_}, $$4__this{$$4__this_}, successCallback{successCallback_}, failureCallback{failureCallback_}, origin{origin_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.String destination
    [[deprecated]] ::StringW& dyn_destination();
    // Get instance field reference: public VROSC.ZipFileWriter <>4__this
    [[deprecated]] ::VROSC::ZipFileWriter*& dyn_$$4__this();
    // Get instance field reference: public System.Action successCallback
    [[deprecated]] ::System::Action*& dyn_successCallback();
    // Get instance field reference: public System.Action`1<VROSC.Error> failureCallback
    [[deprecated]] ::System::Action_1<::VROSC::Error>*& dyn_failureCallback();
    // Get instance field reference: public System.String origin
    [[deprecated]] ::StringW& dyn_origin();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0xE8ACD4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE8AFC4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.ZipFileWriter/VROSC.<ExtractZipToFolder>d__3
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ZipFileWriter::$ExtractZipToFolder$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ZipFileWriter::$ExtractZipToFolder$d__3::*)()>(&VROSC::ZipFileWriter::$ExtractZipToFolder$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ZipFileWriter::$ExtractZipToFolder$d__3), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ZipFileWriter::$ExtractZipToFolder$d__3::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ZipFileWriter::$ExtractZipToFolder$d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::ZipFileWriter::$ExtractZipToFolder$d__3::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ZipFileWriter::$ExtractZipToFolder$d__3), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
