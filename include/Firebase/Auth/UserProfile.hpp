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
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Forward declaring type: UserProfile
  class UserProfile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Auth::UserProfile);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::UserProfile*, "Firebase.Auth", "UserProfile");
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Auth.UserProfile
  // [TokenAttribute] Offset: FFFFFFFF
  class UserProfile : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // private System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x20
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: private System.Boolean swigCMemOwn
    [[deprecated("Use field access instead!")]] bool& dyn_swigCMemOwn();
    // public System.Void set_DisplayName(System.String value)
    // Offset: 0x18B3480
    void set_DisplayName(::StringW value);
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x18B3184
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserProfile* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::UserProfile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserProfile*, creationType>(cPtr, cMemoryOwn)));
    }
    // public System.Void .ctor()
    // Offset: 0x18B31E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserProfile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::UserProfile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserProfile*, creationType>()));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Auth.UserProfile obj)
    // Offset: 0x18B2190
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Auth::UserProfile* obj);
    // public System.Void Dispose()
    // Offset: 0x18B32F0
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x18B3288
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Auth.UserProfile
  #pragma pack(pop)
  static check_size<sizeof(UserProfile), 32 + sizeof(bool)> __Firebase_Auth_UserProfileSizeCheck;
  static_assert(sizeof(UserProfile) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Auth::UserProfile::set_DisplayName
// Il2CppName: set_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::UserProfile::*)(::StringW)>(&Firebase::Auth::UserProfile::set_DisplayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::UserProfile*), "set_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::UserProfile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Auth::UserProfile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Auth::UserProfile::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Auth::UserProfile*)>(&Firebase::Auth::UserProfile::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Auth", "UserProfile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::UserProfile*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::UserProfile::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::UserProfile::*)()>(&Firebase::Auth::UserProfile::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::UserProfile*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::UserProfile::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::UserProfile::*)()>(&Firebase::Auth::UserProfile::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::UserProfile*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
