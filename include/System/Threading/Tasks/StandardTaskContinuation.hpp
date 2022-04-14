// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.TaskContinuation
#include "System/Threading/Tasks/TaskContinuation.hpp"
// Including type: System.Threading.Tasks.TaskContinuationOptions
#include "System/Threading/Tasks/TaskContinuationOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: StandardTaskContinuation
  class StandardTaskContinuation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::StandardTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::StandardTaskContinuation*, "System.Threading.Tasks", "StandardTaskContinuation");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.StandardTaskContinuation
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardTaskContinuation : public ::System::Threading::Tasks::TaskContinuation {
    public:
    public:
    // readonly System.Threading.Tasks.Task m_task
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::Task* m_task;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // readonly System.Threading.Tasks.TaskContinuationOptions m_options
    // Size: 0x4
    // Offset: 0x18
    ::System::Threading::Tasks::TaskContinuationOptions m_options;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskContinuationOptions) == 0x4);
    // Padding between fields: m_options and: m_taskScheduler
    char __padding1[0x4] = {};
    // private readonly System.Threading.Tasks.TaskScheduler m_taskScheduler
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::TaskScheduler* m_taskScheduler;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskScheduler*) == 0x8);
    public:
    // Get instance field reference: readonly System.Threading.Tasks.Task m_task
    [[deprecated]] ::System::Threading::Tasks::Task*& dyn_m_task();
    // Get instance field reference: readonly System.Threading.Tasks.TaskContinuationOptions m_options
    [[deprecated]] ::System::Threading::Tasks::TaskContinuationOptions& dyn_m_options();
    // Get instance field reference: private readonly System.Threading.Tasks.TaskScheduler m_taskScheduler
    [[deprecated]] ::System::Threading::Tasks::TaskScheduler*& dyn_m_taskScheduler();
    // System.Void .ctor(System.Threading.Tasks.Task task, System.Threading.Tasks.TaskContinuationOptions options, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x1255A38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardTaskContinuation* New_ctor(::System::Threading::Tasks::Task* task, ::System::Threading::Tasks::TaskContinuationOptions options, ::System::Threading::Tasks::TaskScheduler* scheduler) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::StandardTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardTaskContinuation*, creationType>(task, options, scheduler)));
    }
    // override System.Void Run(System.Threading.Tasks.Task completedTask, System.Boolean bCanInlineContinuationTask)
    // Offset: 0x1255BD4
    // Implemented from: System.Threading.Tasks.TaskContinuation
    // Base method: System.Void TaskContinuation::Run(System.Threading.Tasks.Task completedTask, System.Boolean bCanInlineContinuationTask)
    void Run(::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask);
  }; // System.Threading.Tasks.StandardTaskContinuation
  #pragma pack(pop)
  static check_size<sizeof(StandardTaskContinuation), 32 + sizeof(::System::Threading::Tasks::TaskScheduler*)> __System_Threading_Tasks_StandardTaskContinuationSizeCheck;
  static_assert(sizeof(StandardTaskContinuation) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::StandardTaskContinuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::StandardTaskContinuation::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::StandardTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(&System::Threading::Tasks::StandardTaskContinuation::Run)> {
  static const MethodInfo* get() {
    static auto* completedTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* bCanInlineContinuationTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::StandardTaskContinuation*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completedTask, bCanInlineContinuationTask});
  }
};
