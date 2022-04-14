// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.FirebaseWrapper
#include "VROSC/FirebaseWrapper.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Firebase::Storage
namespace Firebase::Storage {
  // Forward declaring type: DownloadState
  class DownloadState;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FirebaseWrapper::$$c__DisplayClass94_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FirebaseWrapper::$$c__DisplayClass94_0*, "VROSC", "FirebaseWrapper/<>c__DisplayClass94_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass94_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseWrapper::$$c__DisplayClass94_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<System.Single> onProgress
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<float>* onProgress;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // public System.Action`1<VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action`1<System.String> onSuccess
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::StringW>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // public System.String destinationFilePath
    // Size: 0x8
    // Offset: 0x28
    ::StringW destinationFilePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Action`1<System.Single> onProgress
    [[deprecated]] ::System::Action_1<float>*& dyn_onProgress();
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    [[deprecated]] ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.Action`1<System.String> onSuccess
    [[deprecated]] ::System::Action_1<::StringW>*& dyn_onSuccess();
    // Get instance field reference: public System.String destinationFilePath
    [[deprecated]] ::StringW& dyn_destinationFilePath();
    // System.Void <LoadPreviewFile>b__0(Firebase.Storage.DownloadState state)
    // Offset: 0x1956100
    void $LoadPreviewFile$b__0(::Firebase::Storage::DownloadState* state);
    // System.Void <LoadPreviewFile>b__1(System.Threading.Tasks.Task task)
    // Offset: 0x19561A0
    void $LoadPreviewFile$b__1(::System::Threading::Tasks::Task* task);
    // public System.Void .ctor()
    // Offset: 0x19560F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseWrapper::$$c__DisplayClass94_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FirebaseWrapper::$$c__DisplayClass94_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseWrapper::$$c__DisplayClass94_0*, creationType>()));
    }
  }; // VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass94_0
  #pragma pack(pop)
  static check_size<sizeof(FirebaseWrapper::$$c__DisplayClass94_0), 40 + sizeof(::StringW)> __VROSC_FirebaseWrapper_$$c__DisplayClass94_0SizeCheck;
  static_assert(sizeof(FirebaseWrapper::$$c__DisplayClass94_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass94_0::$LoadPreviewFile$b__0
// Il2CppName: <LoadPreviewFile>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FirebaseWrapper::$$c__DisplayClass94_0::*)(::Firebase::Storage::DownloadState*)>(&VROSC::FirebaseWrapper::$$c__DisplayClass94_0::$LoadPreviewFile$b__0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("Firebase.Storage", "DownloadState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FirebaseWrapper::$$c__DisplayClass94_0*), "<LoadPreviewFile>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass94_0::$LoadPreviewFile$b__1
// Il2CppName: <LoadPreviewFile>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FirebaseWrapper::$$c__DisplayClass94_0::*)(::System::Threading::Tasks::Task*)>(&VROSC::FirebaseWrapper::$$c__DisplayClass94_0::$LoadPreviewFile$b__1)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FirebaseWrapper::$$c__DisplayClass94_0*), "<LoadPreviewFile>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass94_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
