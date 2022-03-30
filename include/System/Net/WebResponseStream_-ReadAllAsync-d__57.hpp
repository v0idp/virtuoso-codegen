// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebResponseStream
#include "System/Net/WebResponseStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebCompletionSource
  class WebCompletionSource;
  // Forward declaring type: BufferOffsetSize
  class BufferOffsetSize;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream::$ReadAllAsync$d__57, "System.Net", "WebResponseStream/<ReadAllAsync>d__57");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebResponseStream/System.Net.<ReadAllAsync>d__57
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct WebResponseStream::$ReadAllAsync$d__57/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Net.WebResponseStream <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::WebResponseStream* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebResponseStream*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Net.WebCompletionSource <completion>5__1
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::WebCompletionSource* $completion$5__1;
    // Field size check
    static_assert(sizeof(::System::Net::WebCompletionSource*) == 0x8);
    // private System.Threading.Tasks.Task <timeoutTask>5__2
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::Tasks::Task* $timeoutTask$5__2;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // public System.Boolean resending
    // Size: 0x1
    // Offset: 0x40
    bool resending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.IO.MemoryStream <ms>5__3
    // Size: 0x8
    // Offset: 0x48
    ::System::IO::MemoryStream* $ms$5__3;
    // Field size check
    static_assert(sizeof(::System::IO::MemoryStream*) == 0x8);
    // private System.Net.BufferOffsetSize <buffer>5__4
    // Size: 0x8
    // Offset: 0x50
    ::System::Net::BufferOffsetSize* $buffer$5__4;
    // Field size check
    static_assert(sizeof(::System::Net::BufferOffsetSize*) == 0x8);
    // private System.Int32 <read>5__5
    // Size: 0x4
    // Offset: 0x58
    int $read$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] <b>5__6
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<uint8_t> $b$5__6;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 <remaining>5__7
    // Size: 0x4
    // Offset: 0x68
    int $remaining$5__7;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <readSize>5__8
    // Size: 0x4
    // Offset: 0x6C
    int $readSize$5__8;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <new_size>5__9
    // Size: 0x4
    // Offset: 0x70
    int $new_size$5__9;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x88
    ::System::Runtime::CompilerServices::TaskAwaiter_1<int> $$u__2;
    public:
    // Creating value type constructor for type: $ReadAllAsync$d__57
    constexpr $ReadAllAsync$d__57(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::System::Net::WebResponseStream* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Net::WebCompletionSource* $completion$5__1_ = {}, ::System::Threading::Tasks::Task* $timeoutTask$5__2_ = {}, bool resending_ = {}, ::System::IO::MemoryStream* $ms$5__3_ = {}, ::System::Net::BufferOffsetSize* $buffer$5__4_ = {}, int $read$5__5_ = {}, ::ArrayW<uint8_t> $b$5__6_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int $remaining$5__7_ = {}, int $readSize$5__8_ = {}, int $new_size$5__9_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<int> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $completion$5__1{$completion$5__1_}, $timeoutTask$5__2{$timeoutTask$5__2_}, resending{resending_}, $ms$5__3{$ms$5__3_}, $buffer$5__4{$buffer$5__4_}, $read$5__5{$read$5__5_}, $b$5__6{$b$5__6_}, $remaining$5__7{$remaining$5__7_}, $readSize$5__8{$readSize$5__8_}, $new_size$5__9{$new_size$5__9_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Net.WebResponseStream <>4__this
    ::System::Net::WebResponseStream*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Net.WebCompletionSource <completion>5__1
    ::System::Net::WebCompletionSource*& dyn_$completion$5__1();
    // Get instance field reference: private System.Threading.Tasks.Task <timeoutTask>5__2
    ::System::Threading::Tasks::Task*& dyn_$timeoutTask$5__2();
    // Get instance field reference: public System.Boolean resending
    bool& dyn_resending();
    // Get instance field reference: private System.IO.MemoryStream <ms>5__3
    ::System::IO::MemoryStream*& dyn_$ms$5__3();
    // Get instance field reference: private System.Net.BufferOffsetSize <buffer>5__4
    ::System::Net::BufferOffsetSize*& dyn_$buffer$5__4();
    // Get instance field reference: private System.Int32 <read>5__5
    int& dyn_$read$5__5();
    // Get instance field reference: private System.Byte[] <b>5__6
    ::ArrayW<uint8_t>& dyn_$b$5__6();
    // Get instance field reference: private System.Int32 <remaining>5__7
    int& dyn_$remaining$5__7();
    // Get instance field reference: private System.Int32 <readSize>5__8
    int& dyn_$readSize$5__8();
    // Get instance field reference: private System.Int32 <new_size>5__9
    int& dyn_$new_size$5__9();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> <>u__2
    ::System::Runtime::CompilerServices::TaskAwaiter_1<int>& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x127FB98
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x12807B0
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebResponseStream/System.Net.<ReadAllAsync>d__57
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebResponseStream::$ReadAllAsync$d__57::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::$ReadAllAsync$d__57::*)()>(&System::Net::WebResponseStream::$ReadAllAsync$d__57::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream::$ReadAllAsync$d__57), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::$ReadAllAsync$d__57::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::$ReadAllAsync$d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebResponseStream::$ReadAllAsync$d__57::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream::$ReadAllAsync$d__57), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};