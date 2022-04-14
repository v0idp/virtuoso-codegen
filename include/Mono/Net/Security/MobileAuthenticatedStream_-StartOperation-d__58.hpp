// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.OperationType
#include "Mono/Net/Security/MobileAuthenticatedStream_OperationType.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: AsyncProtocolRequest
  class AsyncProtocolRequest;
  // Forward declaring type: AsyncProtocolResult
  class AsyncProtocolResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58, "Mono.Net.Security", "MobileAuthenticatedStream/<StartOperation>d__58");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // WARNING Size may be invalid!
  // Autogenerated type: Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.<StartOperation>d__58
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MobileAuthenticatedStream::$StartOperation$d__58/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Mono::Net::Security::MobileAuthenticatedStream* $$4__this;
    // Field size check
    static_assert(sizeof(::Mono::Net::Security::MobileAuthenticatedStream*) == 0x8);
    // public Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.OperationType type
    // Size: 0x4
    // Offset: 0x28
    ::Mono::Net::Security::MobileAuthenticatedStream::OperationType type;
    // Field size check
    static_assert(sizeof(::Mono::Net::Security::MobileAuthenticatedStream::OperationType) == 0x4);
    // public Mono.Net.Security.AsyncProtocolRequest asyncRequest
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest;
    // Field size check
    static_assert(sizeof(::Mono::Net::Security::AsyncProtocolRequest*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<Mono.Net.Security.AsyncProtocolResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $StartOperation$d__58
    constexpr $StartOperation$d__58(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int> $$t__builder_ = {}, ::Mono::Net::Security::MobileAuthenticatedStream* $$4__this_ = {}, ::Mono::Net::Security::MobileAuthenticatedStream::OperationType type_ = {}, ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, type{type_}, asyncRequest{asyncRequest_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    [[deprecated]] ::Mono::Net::Security::MobileAuthenticatedStream*& dyn_$$4__this();
    // Get instance field reference: public Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.OperationType type
    [[deprecated]] ::Mono::Net::Security::MobileAuthenticatedStream::OperationType& dyn_type();
    // Get instance field reference: public Mono.Net.Security.AsyncProtocolRequest asyncRequest
    [[deprecated]] ::Mono::Net::Security::AsyncProtocolRequest*& dyn_asyncRequest();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<Mono.Net.Security.AsyncProtocolResult> <>u__1
    [[deprecated]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x9FA3E8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x9FABCC
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.<StartOperation>d__58
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58::*)()>(&Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
