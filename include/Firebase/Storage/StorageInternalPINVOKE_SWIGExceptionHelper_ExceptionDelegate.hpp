// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Storage.StorageInternalPINVOKE/Firebase.Storage.SWIGExceptionHelper
#include "Firebase/Storage/StorageInternalPINVOKE_SWIGExceptionHelper.hpp"
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
NEED_NO_BOX(::Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate*, "Firebase.Storage", "StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.StorageInternalPINVOKE/Firebase.Storage.SWIGExceptionHelper/Firebase.Storage.ExceptionDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x183B2A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String message)
    // Offset: 0x183BDE4
    void Invoke(::StringW message);
    // public System.IAsyncResult BeginInvoke(System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x183C158
    ::System::IAsyncResult* BeginInvoke(::StringW message, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x183C17C
    void EndInvoke(::System::IAsyncResult* result);
  }; // Firebase.Storage.StorageInternalPINVOKE/Firebase.Storage.SWIGExceptionHelper/Firebase.Storage.ExceptionDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::*)(::StringW)>(&Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, callback, object});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::*)(::System::IAsyncResult*)>(&Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::StorageInternalPINVOKE::SWIGExceptionHelper::ExceptionDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};