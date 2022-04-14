// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: UnobservedTaskExceptionEventArgs
  class UnobservedTaskExceptionEventArgs;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskScheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskScheduler*, "System.Threading.Tasks", "TaskScheduler");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskScheduler
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 6840CC
  // [DebuggerTypeProxyAttribute] Offset: 6840CC
  class TaskScheduler : public ::Il2CppObject {
    public:
    // Nested type: ::System::Threading::Tasks::TaskScheduler::SystemThreadingTasks_TaskSchedulerDebugView
    class SystemThreadingTasks_TaskSchedulerDebugView;
    public:
    // private System.Int32 m_taskSchedulerId
    // Size: 0x4
    // Offset: 0x10
    int m_taskSchedulerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_taskSchedulerId;
    }
    // Get static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> s_activeTaskSchedulers
    static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::Il2CppObject*>* _get_s_activeTaskSchedulers();
    // Set static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> s_activeTaskSchedulers
    static void _set_s_activeTaskSchedulers(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::Il2CppObject*>* value);
    // Get static field: static private readonly System.Threading.Tasks.TaskScheduler s_defaultTaskScheduler
    static ::System::Threading::Tasks::TaskScheduler* _get_s_defaultTaskScheduler();
    // Set static field: static private readonly System.Threading.Tasks.TaskScheduler s_defaultTaskScheduler
    static void _set_s_defaultTaskScheduler(::System::Threading::Tasks::TaskScheduler* value);
    // Get static field: static System.Int32 s_taskSchedulerIdCounter
    static int _get_s_taskSchedulerIdCounter();
    // Set static field: static System.Int32 s_taskSchedulerIdCounter
    static void _set_s_taskSchedulerIdCounter(int value);
    // Get static field: static private System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> _unobservedTaskException
    static ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* _get__unobservedTaskException();
    // Set static field: static private System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> _unobservedTaskException
    static void _set__unobservedTaskException(::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* value);
    // Get static field: static private readonly System.Object _unobservedTaskExceptionLockObject
    static ::Il2CppObject* _get__unobservedTaskExceptionLockObject();
    // Set static field: static private readonly System.Object _unobservedTaskExceptionLockObject
    static void _set__unobservedTaskExceptionLockObject(::Il2CppObject* value);
    // Get instance field reference: private System.Int32 m_taskSchedulerId
    [[deprecated]] int& dyn_m_taskSchedulerId();
    // System.Boolean get_RequiresAtomicStartTransition()
    // Offset: 0x1275B08
    bool get_RequiresAtomicStartTransition();
    // static public System.Threading.Tasks.TaskScheduler get_Default()
    // Offset: 0x1275CA4
    static ::System::Threading::Tasks::TaskScheduler* get_Default();
    // static public System.Threading.Tasks.TaskScheduler get_Current()
    // Offset: 0x1272410
    static ::System::Threading::Tasks::TaskScheduler* get_Current();
    // static System.Threading.Tasks.TaskScheduler get_InternalCurrent()
    // Offset: 0x12716B8
    static ::System::Threading::Tasks::TaskScheduler* get_InternalCurrent();
    // public System.Int32 get_Id()
    // Offset: 0x1275D08
    int get_Id();
    // static private System.Void .cctor()
    // Offset: 0x1275DB8
    static void _cctor();
    // protected internal System.Void QueueTask(System.Threading.Tasks.Task task)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void QueueTask(::System::Threading::Tasks::Task* task);
    // protected System.Boolean TryExecuteTaskInline(System.Threading.Tasks.Task task, System.Boolean taskWasPreviouslyQueued)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
    // System.Boolean TryRunInline(System.Threading.Tasks.Task task, System.Boolean taskWasPreviouslyQueued)
    // Offset: 0x1271CF8
    bool TryRunInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
    // protected internal System.Boolean TryDequeue(System.Threading.Tasks.Task task)
    // Offset: 0x1275AFC
    bool TryDequeue(::System::Threading::Tasks::Task* task);
    // System.Void NotifyWorkItemProgress()
    // Offset: 0x1275B04
    void NotifyWorkItemProgress();
    // System.Void InternalQueueTask(System.Threading.Tasks.Task task)
    // Offset: 0x126F0F0
    void InternalQueueTask(::System::Threading::Tasks::Task* task);
    // private System.Void AddToActiveTaskSchedulers()
    // Offset: 0x1275B94
    void AddToActiveTaskSchedulers();
    // static System.Void PublishUnobservedTaskException(System.Object sender, System.Threading.Tasks.UnobservedTaskExceptionEventArgs ueea)
    // Offset: 0x1274DF8
    static void PublishUnobservedTaskException(::Il2CppObject* sender, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* ueea);
    // protected System.Void .ctor()
    // Offset: 0x1275B10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskScheduler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskScheduler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskScheduler*, creationType>()));
    }
  }; // System.Threading.Tasks.TaskScheduler
  #pragma pack(pop)
  static check_size<sizeof(TaskScheduler), 16 + sizeof(int)> __System_Threading_Tasks_TaskSchedulerSizeCheck;
  static_assert(sizeof(TaskScheduler) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::get_RequiresAtomicStartTransition
// Il2CppName: get_RequiresAtomicStartTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskScheduler::*)()>(&System::Threading::Tasks::TaskScheduler::get_RequiresAtomicStartTransition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "get_RequiresAtomicStartTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&System::Threading::Tasks::TaskScheduler::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&System::Threading::Tasks::TaskScheduler::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::get_InternalCurrent
// Il2CppName: get_InternalCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&System::Threading::Tasks::TaskScheduler::get_InternalCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "get_InternalCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::Tasks::TaskScheduler::*)()>(&System::Threading::Tasks::TaskScheduler::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::TaskScheduler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::QueueTask
// Il2CppName: QueueTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*)>(&System::Threading::Tasks::TaskScheduler::QueueTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "QueueTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::TryExecuteTaskInline
// Il2CppName: TryExecuteTaskInline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(&System::Threading::Tasks::TaskScheduler::TryExecuteTaskInline)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* taskWasPreviouslyQueued = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "TryExecuteTaskInline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, taskWasPreviouslyQueued});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::TryRunInline
// Il2CppName: TryRunInline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(&System::Threading::Tasks::TaskScheduler::TryRunInline)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* taskWasPreviouslyQueued = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "TryRunInline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, taskWasPreviouslyQueued});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::TryDequeue
// Il2CppName: TryDequeue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*)>(&System::Threading::Tasks::TaskScheduler::TryDequeue)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "TryDequeue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::NotifyWorkItemProgress
// Il2CppName: NotifyWorkItemProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskScheduler::*)()>(&System::Threading::Tasks::TaskScheduler::NotifyWorkItemProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "NotifyWorkItemProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::InternalQueueTask
// Il2CppName: InternalQueueTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*)>(&System::Threading::Tasks::TaskScheduler::InternalQueueTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "InternalQueueTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::AddToActiveTaskSchedulers
// Il2CppName: AddToActiveTaskSchedulers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskScheduler::*)()>(&System::Threading::Tasks::TaskScheduler::AddToActiveTaskSchedulers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "AddToActiveTaskSchedulers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::PublishUnobservedTaskException
// Il2CppName: PublishUnobservedTaskException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*)>(&System::Threading::Tasks::TaskScheduler::PublishUnobservedTaskException)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* ueea = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "UnobservedTaskExceptionEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskScheduler*), "PublishUnobservedTaskException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, ueea});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskScheduler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
