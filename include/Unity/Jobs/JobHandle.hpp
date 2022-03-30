// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Unity.Jobs
namespace Unity::Jobs {
  // Forward declaring type: JobHandle
  struct JobHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::JobHandle, "Unity.Jobs", "JobHandle");
// Type namespace: Unity.Jobs
namespace Unity::Jobs {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Jobs.JobHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: 5643AC
  struct JobHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // [NativeDisableUnsafePtrRestrictionAttribute] Offset: 0x5697AC
    // System.IntPtr jobGroup
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr jobGroup;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // System.Int32 version
    // Size: 0x4
    // Offset: 0x8
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JobHandle
    constexpr JobHandle(::System::IntPtr jobGroup_ = {}, int version_ = {}) noexcept : jobGroup{jobGroup_}, version{version_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.IntPtr jobGroup
    ::System::IntPtr& dyn_jobGroup();
    // Get instance field reference: System.Int32 version
    int& dyn_version();
    // static public System.Void ScheduleBatchedJobs()
    // Offset: 0xE31B40
    static void ScheduleBatchedJobs();
  }; // Unity.Jobs.JobHandle
  #pragma pack(pop)
  static check_size<sizeof(JobHandle), 8 + sizeof(int)> __Unity_Jobs_JobHandleSizeCheck;
  static_assert(sizeof(JobHandle) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Jobs::JobHandle::ScheduleBatchedJobs
// Il2CppName: ScheduleBatchedJobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Jobs::JobHandle::ScheduleBatchedJobs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Jobs::JobHandle), "ScheduleBatchedJobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
