// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.StreamReader
#include "System/IO/StreamReader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamReader::$ReadBufferAsync$d__98, "System.IO", "StreamReader/<ReadBufferAsync>d__98");
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.StreamReader/System.IO.<ReadBufferAsync>d__98
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: 68354C
  struct StreamReader::$ReadBufferAsync$d__98/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.IO.StreamReader <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::System::IO::StreamReader* $$4__this;
    // Field size check
    static_assert(sizeof(::System::IO::StreamReader*) == 0x8);
    // private System.IO.Stream <tmpStream>5__1
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* $tmpStream$5__1;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Byte[] <tmpByteBuffer>5__2
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> $tmpByteBuffer$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Int32> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $ReadBufferAsync$d__98
    constexpr $ReadBufferAsync$d__98(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int> $$t__builder_ = {}, ::System::IO::StreamReader* $$4__this_ = {}, ::System::IO::Stream* $tmpStream$5__1_ = {}, ::ArrayW<uint8_t> $tmpByteBuffer$5__2_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $tmpStream$5__1{$tmpStream$5__1_}, $tmpByteBuffer$5__2{$tmpByteBuffer$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int>& dyn_$$t__builder();
    // Get instance field reference: public System.IO.StreamReader <>4__this
    [[deprecated("Use field access instead!")]] ::System::IO::StreamReader*& dyn_$$4__this();
    // Get instance field reference: private System.IO.Stream <tmpStream>5__1
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_$tmpStream$5__1();
    // Get instance field reference: private System.Byte[] <tmpByteBuffer>5__2
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_$tmpByteBuffer$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Int32> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0xE5D2C4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE5D73C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.IO.StreamReader/System.IO.<ReadBufferAsync>d__98
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StreamReader::$ReadBufferAsync$d__98::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::$ReadBufferAsync$d__98::*)()>(&System::IO::StreamReader::$ReadBufferAsync$d__98::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::$ReadBufferAsync$d__98), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::$ReadBufferAsync$d__98::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::$ReadBufferAsync$d__98::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::IO::StreamReader::$ReadBufferAsync$d__98::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::$ReadBufferAsync$d__98), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
