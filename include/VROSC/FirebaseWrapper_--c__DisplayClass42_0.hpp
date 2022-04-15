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
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
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
NEED_NO_BOX(::VROSC::FirebaseWrapper::$$c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FirebaseWrapper::$$c__DisplayClass42_0*, "VROSC", "FirebaseWrapper/<>c__DisplayClass42_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass42_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseWrapper::$$c__DisplayClass42_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action`2<System.String,System.Boolean> onSuccess
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_2<::StringW, bool>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_2<::StringW, bool>*) == 0x8);
    // public VROSC.FirebaseWrapper <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::FirebaseWrapper* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::FirebaseWrapper*) == 0x8);
    public:
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.Action`2<System.String,System.Boolean> onSuccess
    [[deprecated("Use field access instead!")]] ::System::Action_2<::StringW, bool>*& dyn_onSuccess();
    // Get instance field reference: public VROSC.FirebaseWrapper <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::FirebaseWrapper*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x1952A3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseWrapper::$$c__DisplayClass42_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FirebaseWrapper::$$c__DisplayClass42_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseWrapper::$$c__DisplayClass42_0*, creationType>()));
    }
    // System.Void <LoginUserWithEmail>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> task)
    // Offset: 0x1952A44
    void $LoginUserWithEmail$b__0(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* task);
  }; // VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass42_0
  #pragma pack(pop)
  static check_size<sizeof(FirebaseWrapper::$$c__DisplayClass42_0), 32 + sizeof(::VROSC::FirebaseWrapper*)> __VROSC_FirebaseWrapper_$$c__DisplayClass42_0SizeCheck;
  static_assert(sizeof(FirebaseWrapper::$$c__DisplayClass42_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass42_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass42_0::$LoginUserWithEmail$b__0
// Il2CppName: <LoginUserWithEmail>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FirebaseWrapper::$$c__DisplayClass42_0::*)(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*)>(&VROSC::FirebaseWrapper::$$c__DisplayClass42_0::$LoginUserWithEmail$b__0)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseUser")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FirebaseWrapper::$$c__DisplayClass42_0*), "<LoginUserWithEmail>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
