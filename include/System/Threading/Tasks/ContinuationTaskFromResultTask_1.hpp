// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: ContinuationTaskFromResultTask`1<TAntecedentResult>
  template<typename TAntecedentResult>
  class ContinuationTaskFromResultTask_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::ContinuationTaskFromResultTask_1, "System.Threading.Tasks", "ContinuationTaskFromResultTask`1");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.ContinuationTaskFromResultTask`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TAntecedentResult>
  class ContinuationTaskFromResultTask_1 : public ::System::Threading::Tasks::Task {
    public:
    public:
    // private System.Threading.Tasks.Task`1<TAntecedentResult> m_antecedent
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<TAntecedentResult>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Threading::Tasks::Task_1<TAntecedentResult>*
    constexpr operator ::System::Threading::Tasks::Task_1<TAntecedentResult>*() const noexcept {
      return m_antecedent;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Threading.Tasks.Task`1<TAntecedentResult> m_antecedent
    [[deprecated]] ::System::Threading::Tasks::Task_1<TAntecedentResult>*& dyn_m_antecedent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::ContinuationTaskFromResultTask_1::dyn_m_antecedent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_antecedent"))->offset;
      return *reinterpret_cast<::System::Threading::Tasks::Task_1<TAntecedentResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Threading.Tasks.Task`1<TAntecedentResult> antecedent, System.Delegate action, System.Object state, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContinuationTaskFromResultTask_1<TAntecedentResult>* New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action, ::Il2CppObject* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ByRef<::System::Threading::StackCrawlMark> stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::ContinuationTaskFromResultTask_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContinuationTaskFromResultTask_1<TAntecedentResult>*, creationType>(antecedent, action, state, creationOptions, internalOptions, byref(stackMark))));
    }
    // override System.Void InnerInvoke()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::InnerInvoke()
    void InnerInvoke() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::ContinuationTaskFromResultTask_1::InnerInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Threading::Tasks::Task*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // System.Threading.Tasks.ContinuationTaskFromResultTask`1
  // Could not write size check! Type: System.Threading.Tasks.ContinuationTaskFromResultTask`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
