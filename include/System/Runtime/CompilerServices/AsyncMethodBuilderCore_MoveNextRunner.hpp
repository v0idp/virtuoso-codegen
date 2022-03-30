// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IAsyncStateMachine
  class IAsyncStateMachine;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.MoveNextRunner
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncMethodBuilderCore::MoveNextRunner : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Threading.ExecutionContext m_context
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::ExecutionContext* m_context;
    // Field size check
    static_assert(sizeof(::System::Threading::ExecutionContext*) == 0x8);
    // System.Runtime.CompilerServices.IAsyncStateMachine m_stateMachine
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::IAsyncStateMachine*) == 0x8);
    public:
    // Get static field: static private System.Threading.ContextCallback s_invokeMoveNext
    static ::System::Threading::ContextCallback* _get_s_invokeMoveNext();
    // Set static field: static private System.Threading.ContextCallback s_invokeMoveNext
    static void _set_s_invokeMoveNext(::System::Threading::ContextCallback* value);
    // Get instance field reference: private readonly System.Threading.ExecutionContext m_context
    ::System::Threading::ExecutionContext*& dyn_m_context();
    // Get instance field reference: System.Runtime.CompilerServices.IAsyncStateMachine m_stateMachine
    ::System::Runtime::CompilerServices::IAsyncStateMachine*& dyn_m_stateMachine();
    // System.Void .ctor(System.Threading.ExecutionContext context, System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDCC5FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncMethodBuilderCore::MoveNextRunner* New_ctor(::System::Threading::ExecutionContext* context, ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncMethodBuilderCore::MoveNextRunner*, creationType>(context, stateMachine)));
    }
    // System.Void Run()
    // Offset: 0xDCC634
    void Run();
    // static private System.Void InvokeMoveNext(System.Object stateMachine)
    // Offset: 0xDCC838
    static void InvokeMoveNext(::Il2CppObject* stateMachine);
  }; // System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.MoveNextRunner
  #pragma pack(pop)
  static check_size<sizeof(AsyncMethodBuilderCore::MoveNextRunner), 24 + sizeof(::System::Runtime::CompilerServices::IAsyncStateMachine*)> __System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunnerSizeCheck;
  static_assert(sizeof(AsyncMethodBuilderCore::MoveNextRunner) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::*)()>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::Run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::InvokeMoveNext
// Il2CppName: InvokeMoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::InvokeMoveNext)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*), "InvokeMoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};