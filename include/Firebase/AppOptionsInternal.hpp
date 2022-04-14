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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: Firebase
namespace Firebase {
  // Forward declaring type: AppOptionsInternal
  class AppOptionsInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::AppOptionsInternal);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppOptionsInternal*, "Firebase", "AppOptionsInternal");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.AppOptionsInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class AppOptionsInternal : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    [[deprecated]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: private System.Boolean swigCMemOwn
    [[deprecated]] bool& dyn_swigCMemOwn();
    // public System.Uri get_DatabaseUrl()
    // Offset: 0x188256C
    ::System::Uri* get_DatabaseUrl();
    // public System.String get_AppId()
    // Offset: 0x18825DC
    ::StringW get_AppId();
    // public System.String get_ApiKey()
    // Offset: 0x1882678
    ::StringW get_ApiKey();
    // public System.String get_MessageSenderId()
    // Offset: 0x1882714
    ::StringW get_MessageSenderId();
    // public System.String get_StorageBucket()
    // Offset: 0x18827B0
    ::StringW get_StorageBucket();
    // public System.String get_ProjectId()
    // Offset: 0x188284C
    ::StringW get_ProjectId();
    // public System.String get_PackageName()
    // Offset: 0x18828E8
    ::StringW get_PackageName();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x18829C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppOptionsInternal* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::AppOptionsInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppOptionsInternal*, creationType>(cPtr, cMemoryOwn)));
    }
    // public System.Void Dispose()
    // Offset: 0x1882A94
    void Dispose();
    // System.String GetDatabaseUrlInternal()
    // Offset: 0x1882CA4
    ::StringW GetDatabaseUrlInternal();
    // protected override System.Void Finalize()
    // Offset: 0x1882A2C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.AppOptionsInternal
  #pragma pack(pop)
  static check_size<sizeof(AppOptionsInternal), 32 + sizeof(bool)> __Firebase_AppOptionsInternalSizeCheck;
  static_assert(sizeof(AppOptionsInternal) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::get_DatabaseUrl
// Il2CppName: get_DatabaseUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::get_DatabaseUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "get_DatabaseUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::get_AppId
// Il2CppName: get_AppId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::get_AppId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "get_AppId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::get_ApiKey
// Il2CppName: get_ApiKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::get_ApiKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "get_ApiKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::get_MessageSenderId
// Il2CppName: get_MessageSenderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::get_MessageSenderId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "get_MessageSenderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::get_StorageBucket
// Il2CppName: get_StorageBucket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::get_StorageBucket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "get_StorageBucket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::get_ProjectId
// Il2CppName: get_ProjectId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::get_ProjectId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "get_ProjectId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::get_PackageName
// Il2CppName: get_PackageName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::get_PackageName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "get_PackageName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::GetDatabaseUrlInternal
// Il2CppName: GetDatabaseUrlInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::GetDatabaseUrlInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "GetDatabaseUrlInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppOptionsInternal::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::AppOptionsInternal::*)()>(&Firebase::AppOptionsInternal::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppOptionsInternal*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
