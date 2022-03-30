// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Auth.AuthUtilPINVOKE/Firebase.Auth.SWIGExceptionHelper
#include "Firebase/Auth/AuthUtilPINVOKE_SWIGExceptionHelper.hpp"
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
NEED_NO_BOX(::Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate*, "Firebase.Auth", "AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate");
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Auth.AuthUtilPINVOKE/Firebase.Auth.SWIGExceptionHelper/Firebase.Auth.ExceptionDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12B3D18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String message)
    // Offset: 0x12B506C
    void Invoke(::StringW message);
    // public System.IAsyncResult BeginInvoke(System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12B53E0
    ::System::IAsyncResult* BeginInvoke(::StringW message, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x12B5404
    void EndInvoke(::System::IAsyncResult* result);
  }; // Firebase.Auth.AuthUtilPINVOKE/Firebase.Auth.SWIGExceptionHelper/Firebase.Auth.ExceptionDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::*)(::StringW)>(&Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, callback, object});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::*)(::System::IAsyncResult*)>(&Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::AuthUtilPINVOKE::SWIGExceptionHelper::ExceptionDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};