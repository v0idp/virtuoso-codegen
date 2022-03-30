// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Including type: System.IOOperation
#include "System/IOOperation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IOAsyncCallback
  class IOAsyncCallback;
  // Forward declaring type: IOAsyncResult
  class IOAsyncResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IOSelectorJob
  class IOSelectorJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IOSelectorJob);
DEFINE_IL2CPP_ARG_TYPE(::System::IOSelectorJob*, "System", "IOSelectorJob");
// Type namespace: System
namespace System {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.IOSelectorJob
  // [TokenAttribute] Offset: FFFFFFFF
  class IOSelectorJob : public ::Il2CppObject/*, public ::System::Threading::IThreadPoolWorkItem*/ {
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
    // private System.IOOperation operation
    // Size: 0x14
    // Offset: 0x10
    ::System::IOOperation operation;
    // Field size check
    static_assert(sizeof(::System::IOOperation) == 0x14);
    // private System.IOAsyncCallback callback
    // Size: 0x8
    // Offset: 0x18
    ::System::IOAsyncCallback* callback;
    // Field size check
    static_assert(sizeof(::System::IOAsyncCallback*) == 0x8);
    // private System.IOAsyncResult state
    // Size: 0x8
    // Offset: 0x20
    ::System::IOAsyncResult* state;
    // Field size check
    static_assert(sizeof(::System::IOAsyncResult*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Threading::IThreadPoolWorkItem
    operator ::System::Threading::IThreadPoolWorkItem() noexcept {
      return *reinterpret_cast<::System::Threading::IThreadPoolWorkItem*>(this);
    }
    // Get instance field reference: private System.IOOperation operation
    ::System::IOOperation& dyn_operation();
    // Get instance field reference: private System.IOAsyncCallback callback
    ::System::IOAsyncCallback*& dyn_callback();
    // Get instance field reference: private System.IOAsyncResult state
    ::System::IOAsyncResult*& dyn_state();
    // public System.Void .ctor(System.IOOperation operation, System.IOAsyncCallback callback, System.IOAsyncResult state)
    // Offset: 0xD93598
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOSelectorJob* New_ctor(::System::IOOperation operation, ::System::IOAsyncCallback* callback, ::System::IOAsyncResult* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IOSelectorJob::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOSelectorJob*, creationType>(operation, callback, state)));
    }
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0xD935D8
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0xD935F8
    void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae);
    // public System.Void MarkDisposed()
    // Offset: 0xD935FC
    void MarkDisposed();
  }; // System.IOSelectorJob
  #pragma pack(pop)
  static check_size<sizeof(IOSelectorJob), 32 + sizeof(::System::IOAsyncResult*)> __System_IOSelectorJobSizeCheck;
  static_assert(sizeof(IOSelectorJob) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IOSelectorJob::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
// Il2CppName: System.Threading.IThreadPoolWorkItem.ExecuteWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOSelectorJob::*)()>(&System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IOSelectorJob*), "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted
// Il2CppName: System.Threading.IThreadPoolWorkItem.MarkAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOSelectorJob::*)(::System::Threading::ThreadAbortException*)>(&System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  static const MethodInfo* get() {
    static auto* tae = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadAbortException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IOSelectorJob*), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tae});
  }
};
// Writing MetadataGetter for method: System::IOSelectorJob::MarkDisposed
// Il2CppName: MarkDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOSelectorJob::*)()>(&System::IOSelectorJob::MarkDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IOSelectorJob*), "MarkDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
