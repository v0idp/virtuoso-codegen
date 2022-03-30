// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.FirestoreError
#include "Firebase/Firestore/FirestoreError.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: QueryProxy
  class QueryProxy;
  // Forward declaring type: FirebaseFirestore
  class FirebaseFirestore;
  // Forward declaring type: ListenerRegistrationMap`1<T>
  template<typename T>
  class ListenerRegistrationMap_1;
  // Forward declaring type: QuerySnapshotProxy
  class QuerySnapshotProxy;
  // Forward declaring type: QuerySnapshot
  class QuerySnapshot;
  // Forward declaring type: Source
  struct Source;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: Query
  class Query;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Query);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Query*, "Firebase.Firestore", "Query");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Query
  // [TokenAttribute] Offset: FFFFFFFF
  class Query : public ::Il2CppObject {
    public:
    // Nested type: ::Firebase::Firestore::Query::ListenerDelegate
    class ListenerDelegate;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // readonly Firebase.Firestore.QueryProxy _proxy
    // Size: 0x8
    // Offset: 0x10
    ::Firebase::Firestore::QueryProxy* proxy;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::QueryProxy*) == 0x8);
    // private readonly Firebase.Firestore.FirebaseFirestore _firestore
    // Size: 0x8
    // Offset: 0x18
    ::Firebase::Firestore::FirebaseFirestore* firestore;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::FirebaseFirestore*) == 0x8);
    public:
    // Get static field: static private Firebase.Firestore.ListenerRegistrationMap`1<System.Action`3<Firebase.Firestore.QuerySnapshotProxy,Firebase.Firestore.FirestoreError,System.String>> snapshotListenerCallbacks
    static ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*, ::Firebase::Firestore::FirestoreError, ::StringW>*>* _get_snapshotListenerCallbacks();
    // Set static field: static private Firebase.Firestore.ListenerRegistrationMap`1<System.Action`3<Firebase.Firestore.QuerySnapshotProxy,Firebase.Firestore.FirestoreError,System.String>> snapshotListenerCallbacks
    static void _set_snapshotListenerCallbacks(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*, ::Firebase::Firestore::FirestoreError, ::StringW>*>* value);
    // Get static field: static private Firebase.Firestore.Query/Firebase.Firestore.ListenerDelegate querySnapshotsHandler
    static ::Firebase::Firestore::Query::ListenerDelegate* _get_querySnapshotsHandler();
    // Set static field: static private Firebase.Firestore.Query/Firebase.Firestore.ListenerDelegate querySnapshotsHandler
    static void _set_querySnapshotsHandler(::Firebase::Firestore::Query::ListenerDelegate* value);
    // Get instance field reference: readonly Firebase.Firestore.QueryProxy _proxy
    ::Firebase::Firestore::QueryProxy*& dyn__proxy();
    // Get instance field reference: private readonly Firebase.Firestore.FirebaseFirestore _firestore
    ::Firebase::Firestore::FirebaseFirestore*& dyn__firestore();
    // public Firebase.Firestore.FirebaseFirestore get_Firestore()
    // Offset: 0xC3E8BC
    ::Firebase::Firestore::FirebaseFirestore* get_Firestore();
    // System.Void .ctor(Firebase.Firestore.QueryProxy proxy, Firebase.Firestore.FirebaseFirestore firestore)
    // Offset: 0xC2993C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Query* New_ctor(::Firebase::Firestore::QueryProxy* proxy, ::Firebase::Firestore::FirebaseFirestore* firestore) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Query::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Query*, creationType>(proxy, firestore)));
    }
    // static private System.Void .cctor()
    // Offset: 0xC3E9DC
    static void _cctor();
    // static System.Void ClearCallbacksForOwner(Firebase.Firestore.FirebaseFirestore owner)
    // Offset: 0xC37B1C
    static void ClearCallbacksForOwner(::Firebase::Firestore::FirebaseFirestore* owner);
    // public System.Threading.Tasks.Task`1<Firebase.Firestore.QuerySnapshot> GetSnapshotAsync(Firebase.Firestore.Source source)
    // Offset: 0xC3E8C4
    ::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>* GetSnapshotAsync(::Firebase::Firestore::Source source);
    // static private System.Void QuerySnapshotsHandler(System.Int32 callbackId, System.IntPtr snapshotPtr, Firebase.Firestore.FirestoreError errorCode, System.String errorMessage)
    // Offset: 0xC3E7A4
    static void QuerySnapshotsHandler(int callbackId, ::System::IntPtr snapshotPtr, ::Firebase::Firestore::FirestoreError errorCode, ::StringW errorMessage);
    // public System.Boolean Equals(Firebase.Firestore.Query other)
    // Offset: 0xC29F00
    bool Equals(::Firebase::Firestore::Query* other);
    // private Firebase.Firestore.QuerySnapshot <GetSnapshotAsync>m__0(Firebase.Firestore.QuerySnapshotProxy taskResult)
    // Offset: 0xC3EAC0
    ::Firebase::Firestore::QuerySnapshot* $GetSnapshotAsync$m__0(::Firebase::Firestore::QuerySnapshotProxy* taskResult);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC29E48
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC3E99C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Firebase.Firestore.Query
  #pragma pack(pop)
  static check_size<sizeof(Query), 24 + sizeof(::Firebase::Firestore::FirebaseFirestore*)> __Firebase_Firestore_QuerySizeCheck;
  static_assert(sizeof(Query) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Query::get_Firestore
// Il2CppName: get_Firestore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FirebaseFirestore* (Firebase::Firestore::Query::*)()>(&Firebase::Firestore::Query::get_Firestore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), "get_Firestore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Query::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Query::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Firestore::Query::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Query::ClearCallbacksForOwner
// Il2CppName: ClearCallbacksForOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Firestore::FirebaseFirestore*)>(&Firebase::Firestore::Query::ClearCallbacksForOwner)> {
  static const MethodInfo* get() {
    static auto* owner = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FirebaseFirestore")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), "ClearCallbacksForOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owner});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Query::GetSnapshotAsync
// Il2CppName: GetSnapshotAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>* (Firebase::Firestore::Query::*)(::Firebase::Firestore::Source)>(&Firebase::Firestore::Query::GetSnapshotAsync)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "Source")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), "GetSnapshotAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Query::QuerySnapshotsHandler
// Il2CppName: QuerySnapshotsHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::System::IntPtr, ::Firebase::Firestore::FirestoreError, ::StringW)>(&Firebase::Firestore::Query::QuerySnapshotsHandler)> {
  static const MethodInfo* get() {
    static auto* callbackId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* snapshotPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FirestoreError")->byval_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), "QuerySnapshotsHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackId, snapshotPtr, errorCode, errorMessage});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Query::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::Query::*)(::Firebase::Firestore::Query*)>(&Firebase::Firestore::Query::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "Query")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Query::$GetSnapshotAsync$m__0
// Il2CppName: <GetSnapshotAsync>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::QuerySnapshot* (Firebase::Firestore::Query::*)(::Firebase::Firestore::QuerySnapshotProxy*)>(&Firebase::Firestore::Query::$GetSnapshotAsync$m__0)> {
  static const MethodInfo* get() {
    static auto* taskResult = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "QuerySnapshotProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), "<GetSnapshotAsync>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taskResult});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Query::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Firebase::Firestore::Query::*)()>(&Firebase::Firestore::Query::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Query::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::Query::*)(::Il2CppObject*)>(&Firebase::Firestore::Query::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Query*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
