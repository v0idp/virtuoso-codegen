// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Auth.FirebaseAuth
#include "Firebase/Auth/FirebaseAuth.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: Firebase::Auth
namespace Firebase::Auth {
  // Forward declaring type: FirebaseUser
  class FirebaseUser;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB*, "Firebase.Auth", "FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStoreyB");
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Auth.FirebaseAuth/Firebase.Auth.<CreateUserWithEmailAndPasswordAsync>c__AnonStoreyB
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB : public ::Il2CppObject {
    public:
    public:
    // System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> taskCompletionSource
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>* taskCompletionSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*) == 0x8);
    // Firebase.Auth.FirebaseAuth $this
    // Size: 0x8
    // Offset: 0x18
    ::Firebase::Auth::FirebaseAuth* $this;
    // Field size check
    static_assert(sizeof(::Firebase::Auth::FirebaseAuth*) == 0x8);
    public:
    // Get instance field reference: System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> taskCompletionSource
    [[deprecated]] ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*& dyn_taskCompletionSource();
    // Get instance field reference: Firebase.Auth.FirebaseAuth $this
    [[deprecated]] ::Firebase::Auth::FirebaseAuth*& dyn_$this();
    // System.Void <>m__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> task)
    // Offset: 0x18B450C
    void $$m__0(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* task);
    // public System.Void .ctor()
    // Offset: 0x18B135C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB*, creationType>()));
    }
  }; // Firebase.Auth.FirebaseAuth/Firebase.Auth.<CreateUserWithEmailAndPasswordAsync>c__AnonStoreyB
  #pragma pack(pop)
  static check_size<sizeof(FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB), 24 + sizeof(::Firebase::Auth::FirebaseAuth*)> __Firebase_Auth_FirebaseAuth_$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyBSizeCheck;
  static_assert(sizeof(FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB::*)(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*)>(&Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB::$$m__0)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseUser")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
