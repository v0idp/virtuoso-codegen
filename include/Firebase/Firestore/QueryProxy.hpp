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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: QuerySnapshotProxy
  class QuerySnapshotProxy;
  // Forward declaring type: SourceProxy
  struct SourceProxy;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: QueryProxy
  class QueryProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::QueryProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::QueryProxy*, "Firebase.Firestore", "QueryProxy");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.QueryProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class QueryProxy : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0xD4BF10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QueryProxy* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::QueryProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QueryProxy*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Firestore.QueryProxy obj)
    // Offset: 0xD5BB58
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::QueryProxy* obj);
    // public System.Void Dispose()
    // Offset: 0xD4C264
    void Dispose();
    // public System.Threading.Tasks.Task`1<Firebase.Firestore.QuerySnapshotProxy> GetAsync(Firebase.Firestore.SourceProxy source)
    // Offset: 0xD631B4
    ::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshotProxy*>* GetAsync(::Firebase::Firestore::SourceProxy source);
    // protected override System.Void Finalize()
    // Offset: 0xD4BFDC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Firestore.QueryProxy
  #pragma pack(pop)
  static check_size<sizeof(QueryProxy), 32 + sizeof(bool)> __Firebase_Firestore_QueryProxySizeCheck;
  static_assert(sizeof(QueryProxy) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::QueryProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::QueryProxy::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::QueryProxy*)>(&Firebase::Firestore::QueryProxy::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "QueryProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QueryProxy*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QueryProxy::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::QueryProxy::*)()>(&Firebase::Firestore::QueryProxy::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QueryProxy*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QueryProxy::GetAsync
// Il2CppName: GetAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshotProxy*>* (Firebase::Firestore::QueryProxy::*)(::Firebase::Firestore::SourceProxy)>(&Firebase::Firestore::QueryProxy::GetAsync)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SourceProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QueryProxy*), "GetAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QueryProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::QueryProxy::*)()>(&Firebase::Firestore::QueryProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QueryProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
