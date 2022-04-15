// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.AwaitTaskContinuation
#include "System/Threading/Tasks/AwaitTaskContinuation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskSchedulerAwaitTaskContinuation
  class TaskSchedulerAwaitTaskContinuation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
  // [TokenAttribute] Offset: FFFFFFFF
  class TaskSchedulerAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation {
    public:
    // Nested type: ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::$$c
    class $$c;
    public:
    // private readonly System.Threading.Tasks.TaskScheduler m_scheduler
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::TaskScheduler* m_scheduler;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskScheduler*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Threading::Tasks::TaskScheduler*
    constexpr operator ::System::Threading::Tasks::TaskScheduler*() const noexcept {
      return m_scheduler;
    }
    // Get instance field reference: private readonly System.Threading.Tasks.TaskScheduler m_scheduler
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskScheduler*& dyn_m_scheduler();
    // System.Void .ctor(System.Threading.Tasks.TaskScheduler scheduler, System.Action action, System.Boolean flowExecutionContext, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1271770
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskSchedulerAwaitTaskContinuation* New_ctor(::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Action* action, bool flowExecutionContext, ByRef<::System::Threading::StackCrawlMark> stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskSchedulerAwaitTaskContinuation*, creationType>(scheduler, action, flowExecutionContext, byref(stackMark))));
    }
    // override System.Void Run(System.Threading.Tasks.Task ignored, System.Boolean canInlineContinuationTask)
    // Offset: 0x1275E60
    // Implemented from: System.Threading.Tasks.AwaitTaskContinuation
    // Base method: System.Void AwaitTaskContinuation::Run(System.Threading.Tasks.Task ignored, System.Boolean canInlineContinuationTask)
    void Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);
  }; // System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
  #pragma pack(pop)
  static check_size<sizeof(TaskSchedulerAwaitTaskContinuation), 32 + sizeof(::System::Threading::Tasks::TaskScheduler*)> __System_Threading_Tasks_TaskSchedulerAwaitTaskContinuationSizeCheck;
  static_assert(sizeof(TaskSchedulerAwaitTaskContinuation) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(&System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::Run)> {
  static const MethodInfo* get() {
    static auto* ignored = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* canInlineContinuationTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ignored, canInlineContinuationTask});
  }
};
