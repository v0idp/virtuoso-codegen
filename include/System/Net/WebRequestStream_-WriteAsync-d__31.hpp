// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebRequestStream
#include "System/Net/WebRequestStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebCompletionSource
  class WebCompletionSource;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream::$WriteAsync$d__31, "System.Net", "WebRequestStream/<WriteAsync>d__31");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebRequestStream/System.Net.<WriteAsync>d__31
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct WebRequestStream::$WriteAsync$d__31/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Net.WebRequestStream <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::WebRequestStream* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebRequestStream*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // public System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 offset
    // Size: 0x4
    // Offset: 0x38
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 size
    // Size: 0x4
    // Offset: 0x3C
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.WebCompletionSource <completion>5__1
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::WebCompletionSource* $completion$5__1;
    // Field size check
    static_assert(sizeof(::System::Net::WebCompletionSource*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    // Size: 0x9
    // Offset: 0x48
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0x58
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $WriteAsync$d__31
    constexpr $WriteAsync$d__31(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::System::Net::WebRequestStream* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::ArrayW<uint8_t> buffer_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int offset_ = {}, int size_ = {}, ::System::Net::WebCompletionSource* $completion$5__1_ = {}, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, buffer{buffer_}, offset{offset_}, size{size_}, $completion$5__1{$completion$5__1_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Net.WebRequestStream <>4__this
    ::System::Net::WebRequestStream*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public System.Byte[] buffer
    ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: public System.Int32 offset
    int& dyn_offset();
    // Get instance field reference: public System.Int32 size
    int& dyn_size();
    // Get instance field reference: private System.Net.WebCompletionSource <completion>5__1
    ::System::Net::WebCompletionSource*& dyn_$completion$5__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x8ECFE0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x8ED6A4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebRequestStream/System.Net.<WriteAsync>d__31
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequestStream::$WriteAsync$d__31::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequestStream::$WriteAsync$d__31::*)()>(&System::Net::WebRequestStream::$WriteAsync$d__31::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream::$WriteAsync$d__31), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::$WriteAsync$d__31::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequestStream::$WriteAsync$d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebRequestStream::$WriteAsync$d__31::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream::$WriteAsync$d__31), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};