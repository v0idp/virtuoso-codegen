// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Extensions.TaskExtension
#include "Firebase/Extensions/TaskExtension.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Extensions
namespace Firebase::Extensions {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0*, "Firebase.Extensions", "TaskExtension/<ContinueWithOnMainThread>c__AnonStorey0");
// Type namespace: Firebase.Extensions
namespace Firebase::Extensions {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Extensions.TaskExtension/Firebase.Extensions.<ContinueWithOnMainThread>c__AnonStorey0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0 : public ::Il2CppObject {
    public:
    // Nested type: ::Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0::$ContinueWithOnMainThread$c__AnonStorey1
    class $ContinueWithOnMainThread$c__AnonStorey1;
    public:
    // System.Action`1<System.Threading.Tasks.Task> continuation
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::System::Threading::Tasks::Task*>* continuation;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Threading::Tasks::Task*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<::System::Threading::Tasks::Task*>*
    constexpr operator ::System::Action_1<::System::Threading::Tasks::Task*>*() const noexcept {
      return continuation;
    }
    // Get instance field reference: System.Action`1<System.Threading.Tasks.Task> continuation
    [[deprecated("Use field access instead!")]] ::System::Action_1<::System::Threading::Tasks::Task*>*& dyn_continuation();
    // public System.Void .ctor()
    // Offset: 0x190CA4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0*, creationType>()));
    }
    // System.Threading.Tasks.Task`1<System.Boolean> <>m__0(System.Threading.Tasks.Task t)
    // Offset: 0x190CA54
    ::System::Threading::Tasks::Task_1<bool>* $$m__0(::System::Threading::Tasks::Task* t);
  }; // Firebase.Extensions.TaskExtension/Firebase.Extensions.<ContinueWithOnMainThread>c__AnonStorey0
  #pragma pack(pop)
  static check_size<sizeof(TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0), 16 + sizeof(::System::Action_1<::System::Threading::Tasks::Task*>*)> __Firebase_Extensions_TaskExtension_$ContinueWithOnMainThread$c__AnonStorey0SizeCheck;
  static_assert(sizeof(TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0::*)(::System::Threading::Tasks::Task*)>(&Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0::$$m__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Extensions::TaskExtension::$ContinueWithOnMainThread$c__AnonStorey0*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
