// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Storage.StorageReference
#include "Firebase/Storage/StorageReference.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Storage
namespace Firebase::Storage {
  // Forward declaring type: MonitorControllerInternal
  class MonitorControllerInternal;
  // Forward declaring type: MetadataInternal
  class MetadataInternal;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Storage::StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3*, "Firebase.Storage", "StorageReference/<PutFileUsingMonitorControllerAsync>c__AnonStorey3");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.StorageReference/Firebase.Storage.<PutFileUsingMonitorControllerAsync>c__AnonStorey3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3 : public ::Il2CppObject {
    public:
    public:
    // Firebase.Storage.MonitorControllerInternal monitorController
    // Size: 0x8
    // Offset: 0x10
    ::Firebase::Storage::MonitorControllerInternal* monitorController;
    // Field size check
    static_assert(sizeof(::Firebase::Storage::MonitorControllerInternal*) == 0x8);
    // Firebase.Storage.MetadataInternal metadata
    // Size: 0x8
    // Offset: 0x18
    ::Firebase::Storage::MetadataInternal* metadata;
    // Field size check
    static_assert(sizeof(::Firebase::Storage::MetadataInternal*) == 0x8);
    public:
    // Get instance field reference: Firebase.Storage.MonitorControllerInternal monitorController
    [[deprecated("Use field access instead!")]] ::Firebase::Storage::MonitorControllerInternal*& dyn_monitorController();
    // Get instance field reference: Firebase.Storage.MetadataInternal metadata
    [[deprecated("Use field access instead!")]] ::Firebase::Storage::MetadataInternal*& dyn_metadata();
    // public System.Void .ctor()
    // Offset: 0x18382A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3*, creationType>()));
    }
    // System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> <>m__0(System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> completedTask)
    // Offset: 0x183B990
    ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* $$m__0(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* completedTask);
  }; // Firebase.Storage.StorageReference/Firebase.Storage.<PutFileUsingMonitorControllerAsync>c__AnonStorey3
  #pragma pack(pop)
  static check_size<sizeof(StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3), 24 + sizeof(::Firebase::Storage::MetadataInternal*)> __Firebase_Storage_StorageReference_$PutFileUsingMonitorControllerAsync$c__AnonStorey3SizeCheck;
  static_assert(sizeof(StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Storage::StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Storage::StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* (Firebase::Storage::StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3::*)(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*)>(&Firebase::Storage::StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3::$$m__0)> {
  static const MethodInfo* get() {
    static auto* completedTask = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Storage", "MetadataInternal")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::StorageReference::$PutFileUsingMonitorControllerAsync$c__AnonStorey3*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completedTask});
  }
};
