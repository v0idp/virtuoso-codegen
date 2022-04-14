// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Auth
namespace Firebase::Auth {
  // Forward declaring type: FirebaseAuth
  class FirebaseAuth;
  // Forward declaring type: UserProfile
  class UserProfile;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Forward declaring type: FirebaseUser
  class FirebaseUser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Auth::FirebaseUser);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseUser*, "Firebase.Auth", "FirebaseUser");
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Auth.FirebaseUser
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseUser : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x10
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: swigCMemOwn and: swigCPtr
    char __padding0[0x7] = {};
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x18
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // Firebase.Auth.FirebaseAuth authProxy
    // Size: 0x8
    // Offset: 0x28
    ::Firebase::Auth::FirebaseAuth* authProxy;
    // Field size check
    static_assert(sizeof(::Firebase::Auth::FirebaseAuth*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Boolean swigCMemOwn
    [[deprecated]] bool& dyn_swigCMemOwn();
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: Firebase.Auth.FirebaseAuth authProxy
    [[deprecated]] ::Firebase::Auth::FirebaseAuth*& dyn_authProxy();
    // public System.Boolean get_IsEmailVerified()
    // Offset: 0x18B22C8
    bool get_IsEmailVerified();
    // public System.String get_UserId()
    // Offset: 0x18B236C
    ::StringW get_UserId();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x18B1B1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseUser* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::FirebaseUser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseUser*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Auth.FirebaseUser obj)
    // Offset: 0x18B0D88
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Auth::FirebaseUser* obj);
    // public System.Void Dispose()
    // Offset: 0x18B0598
    void Dispose();
    // public System.Threading.Tasks.Task UpdateEmailAsync(System.String email)
    // Offset: 0x18B1E34
    ::System::Threading::Tasks::Task* UpdateEmailAsync(::StringW email);
    // public System.Threading.Tasks.Task UpdatePasswordAsync(System.String password)
    // Offset: 0x18B1F08
    ::System::Threading::Tasks::Task* UpdatePasswordAsync(::StringW password);
    // public System.Threading.Tasks.Task SendEmailVerificationAsync()
    // Offset: 0x18B1FDC
    ::System::Threading::Tasks::Task* SendEmailVerificationAsync();
    // public System.Threading.Tasks.Task UpdateUserProfileAsync(Firebase.Auth.UserProfile profile)
    // Offset: 0x18B20A8
    ::System::Threading::Tasks::Task* UpdateUserProfileAsync(::Firebase::Auth::UserProfile* profile);
    // public System.Threading.Tasks.Task ReloadAsync()
    // Offset: 0x18B21FC
    ::System::Threading::Tasks::Task* ReloadAsync();
    // protected override System.Void Finalize()
    // Offset: 0x18B1DCC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Auth.FirebaseUser
  #pragma pack(pop)
  static check_size<sizeof(FirebaseUser), 40 + sizeof(::Firebase::Auth::FirebaseAuth*)> __Firebase_Auth_FirebaseUserSizeCheck;
  static_assert(sizeof(FirebaseUser) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::get_IsEmailVerified
// Il2CppName: get_IsEmailVerified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Auth::FirebaseUser::*)()>(&Firebase::Auth::FirebaseUser::get_IsEmailVerified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "get_IsEmailVerified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::get_UserId
// Il2CppName: get_UserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Auth::FirebaseUser::*)()>(&Firebase::Auth::FirebaseUser::get_UserId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "get_UserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Auth::FirebaseUser*)>(&Firebase::Auth::FirebaseUser::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseUser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseUser::*)()>(&Firebase::Auth::FirebaseUser::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::UpdateEmailAsync
// Il2CppName: UpdateEmailAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Firebase::Auth::FirebaseUser::*)(::StringW)>(&Firebase::Auth::FirebaseUser::UpdateEmailAsync)> {
  static const MethodInfo* get() {
    static auto* email = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "UpdateEmailAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{email});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::UpdatePasswordAsync
// Il2CppName: UpdatePasswordAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Firebase::Auth::FirebaseUser::*)(::StringW)>(&Firebase::Auth::FirebaseUser::UpdatePasswordAsync)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "UpdatePasswordAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::SendEmailVerificationAsync
// Il2CppName: SendEmailVerificationAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Firebase::Auth::FirebaseUser::*)()>(&Firebase::Auth::FirebaseUser::SendEmailVerificationAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "SendEmailVerificationAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::UpdateUserProfileAsync
// Il2CppName: UpdateUserProfileAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Firebase::Auth::FirebaseUser::*)(::Firebase::Auth::UserProfile*)>(&Firebase::Auth::FirebaseUser::UpdateUserProfileAsync)> {
  static const MethodInfo* get() {
    static auto* profile = &::il2cpp_utils::GetClassFromName("Firebase.Auth", "UserProfile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "UpdateUserProfileAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{profile});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::ReloadAsync
// Il2CppName: ReloadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Firebase::Auth::FirebaseUser::*)()>(&Firebase::Auth::FirebaseUser::ReloadAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "ReloadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseUser::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseUser::*)()>(&Firebase::Auth::FirebaseUser::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseUser*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
