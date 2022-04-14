// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Auth.AuthUtilPINVOKE/Firebase.Auth.SWIGStringHelper
#include "Firebase/Auth/AuthUtilPINVOKE_SWIGStringHelper.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate*, "Firebase.Auth", "AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate");
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Auth.AuthUtilPINVOKE/Firebase.Auth.SWIGStringHelper/Firebase.Auth.SWIGStringDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18B4478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate*, creationType>(object, method)));
    }
    // public System.String Invoke(System.String message)
    // Offset: 0x18B5600
    ::StringW Invoke(::StringW message);
    // public System.IAsyncResult BeginInvoke(System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18B597C
    ::System::IAsyncResult* BeginInvoke(::StringW message, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.String EndInvoke(System.IAsyncResult result)
    // Offset: 0x18B59A0
    ::StringW EndInvoke(::System::IAsyncResult* result);
  }; // Firebase.Auth.AuthUtilPINVOKE/Firebase.Auth.SWIGStringHelper/Firebase.Auth.SWIGStringDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::*)(::StringW)>(&Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, callback, object});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::*)(::System::IAsyncResult*)>(&Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::AuthUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
