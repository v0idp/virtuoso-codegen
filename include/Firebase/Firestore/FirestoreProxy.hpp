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
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: CollectionReferenceProxy
  class CollectionReferenceProxy;
  // Forward declaring type: SettingsProxy
  class SettingsProxy;
  // Forward declaring type: WriteBatchProxy
  class WriteBatchProxy;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FirestoreProxy
  class FirestoreProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FirestoreProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreProxy*, "Firebase.Firestore", "FirestoreProxy");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FirestoreProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class FirestoreProxy : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0xD5EC30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirestoreProxy* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FirestoreProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirestoreProxy*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Firestore.FirestoreProxy obj)
    // Offset: 0xD5EC94
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::FirestoreProxy* obj);
    // public System.Void Dispose()
    // Offset: 0xD5ED70
    void Dispose();
    // static Firebase.Firestore.FirestoreProxy GetInstance(Firebase.FirebaseApp app)
    // Offset: 0xD5A5DC
    static ::Firebase::Firestore::FirestoreProxy* GetInstance(::Firebase::FirebaseApp* app);
    // public Firebase.Firestore.CollectionReferenceProxy Collection(System.String collectionPath)
    // Offset: 0xD5EF00
    ::Firebase::Firestore::CollectionReferenceProxy* Collection(::StringW collectionPath);
    // public Firebase.Firestore.SettingsProxy settings()
    // Offset: 0xD5EFDC
    ::Firebase::Firestore::SettingsProxy* settings();
    // public System.Void set_settings(Firebase.Firestore.SettingsProxy settings)
    // Offset: 0xD5F10C
    void set_settings(::Firebase::Firestore::SettingsProxy* settings);
    // public Firebase.Firestore.WriteBatchProxy batch()
    // Offset: 0xD5F25C
    ::Firebase::Firestore::WriteBatchProxy* batch();
    // protected override System.Void Finalize()
    // Offset: 0xD5ED00
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Firestore.FirestoreProxy
  #pragma pack(pop)
  static check_size<sizeof(FirestoreProxy), 32 + sizeof(bool)> __Firebase_Firestore_FirestoreProxySizeCheck;
  static_assert(sizeof(FirestoreProxy) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::FirestoreProxy*)>(&Firebase::Firestore::FirestoreProxy::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FirestoreProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreProxy*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FirestoreProxy::*)()>(&Firebase::Firestore::FirestoreProxy::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreProxy*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FirestoreProxy* (*)(::Firebase::FirebaseApp*)>(&Firebase::Firestore::FirestoreProxy::GetInstance)> {
  static const MethodInfo* get() {
    static auto* app = &::il2cpp_utils::GetClassFromName("Firebase", "FirebaseApp")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreProxy*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{app});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::Collection
// Il2CppName: Collection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::CollectionReferenceProxy* (Firebase::Firestore::FirestoreProxy::*)(::StringW)>(&Firebase::Firestore::FirestoreProxy::Collection)> {
  static const MethodInfo* get() {
    static auto* collectionPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreProxy*), "Collection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collectionPath});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::settings
// Il2CppName: settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SettingsProxy* (Firebase::Firestore::FirestoreProxy::*)()>(&Firebase::Firestore::FirestoreProxy::settings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreProxy*), "settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::set_settings
// Il2CppName: set_settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FirestoreProxy::*)(::Firebase::Firestore::SettingsProxy*)>(&Firebase::Firestore::FirestoreProxy::set_settings)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SettingsProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreProxy*), "set_settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::batch
// Il2CppName: batch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::WriteBatchProxy* (Firebase::Firestore::FirestoreProxy::*)()>(&Firebase::Firestore::FirestoreProxy::batch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreProxy*), "batch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FirestoreProxy::*)()>(&Firebase::Firestore::FirestoreProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
