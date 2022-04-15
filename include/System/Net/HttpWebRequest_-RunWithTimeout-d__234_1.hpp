// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HttpWebRequest
#include "System/Net/HttpWebRequest.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1, "System.Net", "HttpWebRequest/<RunWithTimeout>d__234`1");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.HttpWebRequest/System.Net.<RunWithTimeout>d__234`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  struct HttpWebRequest::$RunWithTimeout$d__234_1/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder;
    // public System.Int32 timeout
    // Size: 0x4
    // Offset: 0x0
    int timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>> func
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* func;
    // Field size check
    static_assert(sizeof(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*) == 0x8);
    // private System.Threading.Tasks.Task <timeoutTask>5__1
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::Tasks::Task* $timeoutTask$5__1;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // private System.Threading.CancellationTokenSource <cts>5__2
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::CancellationTokenSource* $cts$5__2;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    // public System.Action abort
    // Size: 0x8
    // Offset: 0x0
    ::System::Action* abort;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Threading.Tasks.Task`1<T> <workerTask>5__3
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::Tasks::Task_1<T>* $workerTask$5__3;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<T>*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $RunWithTimeout$d__234_1
    constexpr $RunWithTimeout$d__234_1(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder_ = {}, int timeout_ = {}, ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* func_ = {}, ::System::Threading::Tasks::Task* $timeoutTask$5__1_ = {}, ::System::Threading::CancellationTokenSource* $cts$5__2_ = {}, ::System::Action* abort_ = {}, ::System::Threading::Tasks::Task_1<T>* $workerTask$5__3_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, timeout{timeout_}, func{func_}, $timeoutTask$5__1{$timeoutTask$5__1_}, $cts$5__2{$cts$5__2_}, abort{abort_}, $workerTask$5__3{$workerTask$5__3_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_$$1__state");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>& dyn_$$t__builder() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_$$t__builder");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>t__builder"))->offset;
      return *reinterpret_cast<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 timeout
    [[deprecated("Use field access instead!")]] int& dyn_timeout() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_timeout");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "timeout"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>> func
    [[deprecated("Use field access instead!")]] ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*& dyn_func() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_func");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "func"))->offset;
      return *reinterpret_cast<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Threading.Tasks.Task <timeoutTask>5__1
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_$timeoutTask$5__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_$timeoutTask$5__1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<timeoutTask>5__1"))->offset;
      return *reinterpret_cast<::System::Threading::Tasks::Task**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Threading.CancellationTokenSource <cts>5__2
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn_$cts$5__2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_$cts$5__2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<cts>5__2"))->offset;
      return *reinterpret_cast<::System::Threading::CancellationTokenSource**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action abort
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_abort() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_abort");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "abort"))->offset;
      return *reinterpret_cast<::System::Action**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Threading.Tasks.Task`1<T> <workerTask>5__3
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<T>*& dyn_$workerTask$5__3() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_$workerTask$5__3");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<workerTask>5__3"))->offset;
      return *reinterpret_cast<::System::Threading::Tasks::Task_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter& dyn_$$u__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::dyn_$$u__1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>u__1"))->offset;
      return *reinterpret_cast<typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::Net::HttpWebRequest::$RunWithTimeout$d__234_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, stateMachine);
    }
  }; // System.Net.HttpWebRequest/System.Net.<RunWithTimeout>d__234`1
  // Could not write size check! Type: System.Net.HttpWebRequest/System.Net.<RunWithTimeout>d__234`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
