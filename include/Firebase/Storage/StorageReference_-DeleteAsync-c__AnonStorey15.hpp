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
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Storage::StorageReference::$DeleteAsync$c__AnonStorey15);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference::$DeleteAsync$c__AnonStorey15*, "Firebase.Storage", "StorageReference/<DeleteAsync>c__AnonStorey15");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.StorageReference/Firebase.Storage.<DeleteAsync>c__AnonStorey15
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class StorageReference::$DeleteAsync$c__AnonStorey15 : public ::Il2CppObject {
    public:
    public:
    // System.Threading.Tasks.Task task
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::Task* task;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Threading::Tasks::Task*
    constexpr operator ::System::Threading::Tasks::Task*() const noexcept {
      return task;
    }
    // Get instance field reference: System.Threading.Tasks.Task task
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_task();
    // public System.Void .ctor()
    // Offset: 0x1839570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StorageReference::$DeleteAsync$c__AnonStorey15* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageReference::$DeleteAsync$c__AnonStorey15::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StorageReference::$DeleteAsync$c__AnonStorey15*, creationType>()));
    }
    // System.Void <>m__0()
    // Offset: 0x183B7A4
    void $$m__0();
  }; // Firebase.Storage.StorageReference/Firebase.Storage.<DeleteAsync>c__AnonStorey15
  #pragma pack(pop)
  static check_size<sizeof(StorageReference::$DeleteAsync$c__AnonStorey15), 16 + sizeof(::System::Threading::Tasks::Task*)> __Firebase_Storage_StorageReference_$DeleteAsync$c__AnonStorey15SizeCheck;
  static_assert(sizeof(StorageReference::$DeleteAsync$c__AnonStorey15) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Storage::StorageReference::$DeleteAsync$c__AnonStorey15::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Storage::StorageReference::$DeleteAsync$c__AnonStorey15::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::StorageReference::$DeleteAsync$c__AnonStorey15::*)()>(&Firebase::Storage::StorageReference::$DeleteAsync$c__AnonStorey15::$$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::StorageReference::$DeleteAsync$c__AnonStorey15*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
