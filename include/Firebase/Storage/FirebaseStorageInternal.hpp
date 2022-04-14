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
// Forward declaring namespace: Firebase
namespace Firebase {
  // Forward declaring type: FirebaseApp
  class FirebaseApp;
  // Forward declaring type: InitResult
  struct InitResult;
}
// Forward declaring namespace: Firebase::Storage
namespace Firebase::Storage {
  // Forward declaring type: StorageReferenceInternal
  class StorageReferenceInternal;
}
// Completed forward declares
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Forward declaring type: FirebaseStorageInternal
  class FirebaseStorageInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Storage::FirebaseStorageInternal);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::FirebaseStorageInternal*, "Firebase.Storage", "FirebaseStorageInternal");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.FirebaseStorageInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseStorageInternal : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // protected System.Boolean swigCMemOwn
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
    // Get instance field reference: protected System.Boolean swigCMemOwn
    [[deprecated]] bool& dyn_swigCMemOwn();
    // System.String get_InstanceKey()
    // Offset: 0x1830DE4
    ::StringW get_InstanceKey();
    // public Firebase.FirebaseApp get_App()
    // Offset: 0x18321B8
    ::Firebase::FirebaseApp* get_App();
    // public System.String get_Url()
    // Offset: 0x1830D40
    ::StringW get_Url();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x1831F44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseStorageInternal* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::FirebaseStorageInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseStorageInternal*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Storage.FirebaseStorageInternal obj)
    // Offset: 0x1831224
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Storage::FirebaseStorageInternal* obj);
    // public System.Void Dispose()
    // Offset: 0x1832018
    void Dispose();
    // System.Void SetSwigCMemOwn(System.Boolean ownership)
    // Offset: 0x18322AC
    void SetSwigCMemOwn(bool ownership);
    // Firebase.Storage.StorageReferenceInternal GetReference()
    // Offset: 0x18315BC
    ::Firebase::Storage::StorageReferenceInternal* GetReference();
    // static Firebase.Storage.FirebaseStorageInternal GetInstanceInternal(Firebase.FirebaseApp app, System.String url, out Firebase.InitResult init_result_out)
    // Offset: 0x1831CBC
    static ::Firebase::Storage::FirebaseStorageInternal* GetInstanceInternal(::Firebase::FirebaseApp* app, ::StringW url, ByRef<::Firebase::InitResult> init_result_out);
    // static System.Void ReleaseReferenceInternal(Firebase.Storage.FirebaseStorageInternal instance)
    // Offset: 0x1832110
    static void ReleaseReferenceInternal(::Firebase::Storage::FirebaseStorageInternal* instance);
    // protected override System.Void Finalize()
    // Offset: 0x1831FA8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Storage.FirebaseStorageInternal
  #pragma pack(pop)
  static check_size<sizeof(FirebaseStorageInternal), 32 + sizeof(bool)> __Firebase_Storage_FirebaseStorageInternalSizeCheck;
  static_assert(sizeof(FirebaseStorageInternal) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::get_InstanceKey
// Il2CppName: get_InstanceKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Storage::FirebaseStorageInternal::*)()>(&Firebase::Storage::FirebaseStorageInternal::get_InstanceKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "get_InstanceKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::get_App
// Il2CppName: get_App
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (Firebase::Storage::FirebaseStorageInternal::*)()>(&Firebase::Storage::FirebaseStorageInternal::get_App)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "get_App", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::get_Url
// Il2CppName: get_Url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Storage::FirebaseStorageInternal::*)()>(&Firebase::Storage::FirebaseStorageInternal::get_Url)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "get_Url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Storage::FirebaseStorageInternal*)>(&Firebase::Storage::FirebaseStorageInternal::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Storage", "FirebaseStorageInternal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::FirebaseStorageInternal::*)()>(&Firebase::Storage::FirebaseStorageInternal::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::SetSwigCMemOwn
// Il2CppName: SetSwigCMemOwn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::FirebaseStorageInternal::*)(bool)>(&Firebase::Storage::FirebaseStorageInternal::SetSwigCMemOwn)> {
  static const MethodInfo* get() {
    static auto* ownership = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "SetSwigCMemOwn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ownership});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::GetReference
// Il2CppName: GetReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::StorageReferenceInternal* (Firebase::Storage::FirebaseStorageInternal::*)()>(&Firebase::Storage::FirebaseStorageInternal::GetReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "GetReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::GetInstanceInternal
// Il2CppName: GetInstanceInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::FirebaseStorageInternal* (*)(::Firebase::FirebaseApp*, ::StringW, ByRef<::Firebase::InitResult>)>(&Firebase::Storage::FirebaseStorageInternal::GetInstanceInternal)> {
  static const MethodInfo* get() {
    static auto* app = &::il2cpp_utils::GetClassFromName("Firebase", "FirebaseApp")->byval_arg;
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* init_result_out = &::il2cpp_utils::GetClassFromName("Firebase", "InitResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "GetInstanceInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{app, url, init_result_out});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::ReleaseReferenceInternal
// Il2CppName: ReleaseReferenceInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Storage::FirebaseStorageInternal*)>(&Firebase::Storage::FirebaseStorageInternal::ReleaseReferenceInternal)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("Firebase.Storage", "FirebaseStorageInternal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "ReleaseReferenceInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::FirebaseStorageInternal::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::FirebaseStorageInternal::*)()>(&Firebase::Storage::FirebaseStorageInternal::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::FirebaseStorageInternal*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};