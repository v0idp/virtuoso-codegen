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
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebCompletionSource
  class WebCompletionSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream::$ReadAsync$d__48, "System.Net", "WebResponseStream/<ReadAsync>d__48");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebResponseStream/System.Net.<ReadAsync>d__48
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct WebResponseStream::$ReadAsync$d__48/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int> $$t__builder;
    // public System.Net.WebResponseStream <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::WebResponseStream* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebResponseStream*) == 0x8);
    // public System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 offset
    // Size: 0x4
    // Offset: 0x30
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 size
    // Size: 0x4
    // Offset: 0x34
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Net.WebCompletionSource <completion>5__1
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::WebCompletionSource* $completion$5__1;
    // Field size check
    static_assert(sizeof(::System::Net::WebCompletionSource*) == 0x8);
    // private System.Net.WebResponseStream/System.Net.<>c__DisplayClass48_0 <>8__2
    // Size: 0x8
    // Offset: 0x48
    ::System::Net::WebResponseStream::$$c__DisplayClass48_0* $$8__2;
    // Field size check
    static_assert(sizeof(::System::Net::WebResponseStream::$$c__DisplayClass48_0*) == 0x8);
    // private System.Exception <throwMe>5__3
    // Size: 0x8
    // Offset: 0x50
    ::System::Exception* $throwMe$5__3;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Int32 <oldBytes>5__4
    // Size: 0x4
    // Offset: 0x58
    int $oldBytes$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <nbytes>5__5
    // Size: 0x4
    // Offset: 0x5C
    int $nbytes$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x70
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_2<int, int>>::ConfiguredTaskAwaiter $$u__2;
    public:
    // Creating value type constructor for type: $ReadAsync$d__48
    constexpr $ReadAsync$d__48(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int> $$t__builder_ = {}, ::System::Net::WebResponseStream* $$4__this_ = {}, ::ArrayW<uint8_t> buffer_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int offset_ = {}, int size_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Net::WebCompletionSource* $completion$5__1_ = {}, ::System::Net::WebResponseStream::$$c__DisplayClass48_0* $$8__2_ = {}, ::System::Exception* $throwMe$5__3_ = {}, int $oldBytes$5__4_ = {}, int $nbytes$5__5_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter $$u__1_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_2<int, int>>::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, buffer{buffer_}, offset{offset_}, size{size_}, cancellationToken{cancellationToken_}, $completion$5__1{$completion$5__1_}, $$8__2{$$8__2_}, $throwMe$5__3{$throwMe$5__3_}, $oldBytes$5__4{$oldBytes$5__4_}, $nbytes$5__5{$nbytes$5__5_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> <>t__builder
    [[deprecated]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int>& dyn_$$t__builder();
    // Get instance field reference: public System.Net.WebResponseStream <>4__this
    [[deprecated]] ::System::Net::WebResponseStream*& dyn_$$4__this();
    // Get instance field reference: public System.Byte[] buffer
    [[deprecated]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: public System.Int32 offset
    [[deprecated]] int& dyn_offset();
    // Get instance field reference: public System.Int32 size
    [[deprecated]] int& dyn_size();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Net.WebCompletionSource <completion>5__1
    [[deprecated]] ::System::Net::WebCompletionSource*& dyn_$completion$5__1();
    // Get instance field reference: private System.Net.WebResponseStream/System.Net.<>c__DisplayClass48_0 <>8__2
    [[deprecated]] ::System::Net::WebResponseStream::$$c__DisplayClass48_0*& dyn_$$8__2();
    // Get instance field reference: private System.Exception <throwMe>5__3
    [[deprecated]] ::System::Exception*& dyn_$throwMe$5__3();
    // Get instance field reference: private System.Int32 <oldBytes>5__4
    [[deprecated]] int& dyn_$oldBytes$5__4();
    // Get instance field reference: private System.Int32 <nbytes>5__5
    [[deprecated]] int& dyn_$nbytes$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Boolean> <>u__1
    [[deprecated]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>> <>u__2
    [[deprecated]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_2<int, int>>::ConfiguredTaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x17CEFD4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x17CFA10
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebResponseStream/System.Net.<ReadAsync>d__48
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebResponseStream::$ReadAsync$d__48::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::$ReadAsync$d__48::*)()>(&System::Net::WebResponseStream::$ReadAsync$d__48::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream::$ReadAsync$d__48), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::$ReadAsync$d__48::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::$ReadAsync$d__48::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebResponseStream::$ReadAsync$d__48::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream::$ReadAsync$d__48), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
