// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Query
#include "Firebase/Firestore/Query.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: CollectionReferenceProxy
  class CollectionReferenceProxy;
  // Forward declaring type: FirebaseFirestore
  class FirebaseFirestore;
  // Forward declaring type: DocumentReference
  class DocumentReference;
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
  // Forward declaring type: CollectionReference
  class CollectionReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::CollectionReference);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::CollectionReference*, "Firebase.Firestore", "CollectionReference");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.CollectionReference
  // [TokenAttribute] Offset: FFFFFFFF
  class CollectionReference : public ::Firebase::Firestore::Query/*, public ::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>
    operator ::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>*>(this);
    }
    // private Firebase.Firestore.CollectionReferenceProxy get_Proxy()
    // Offset: 0xC299D8
    ::Firebase::Firestore::CollectionReferenceProxy* get_Proxy();
    // public System.String get_Path()
    // Offset: 0xC29A54
    ::StringW get_Path();
    // System.Void .ctor(Firebase.Firestore.CollectionReferenceProxy proxy, Firebase.Firestore.FirebaseFirestore firestore)
    // Offset: 0xC298C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionReference* New_ctor(::Firebase::Firestore::CollectionReferenceProxy* proxy, ::Firebase::Firestore::FirebaseFirestore* firestore) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::CollectionReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionReference*, creationType>(proxy, firestore)));
    }
    // public Firebase.Firestore.DocumentReference Document()
    // Offset: 0xC29A78
    ::Firebase::Firestore::DocumentReference* Document();
    // public Firebase.Firestore.DocumentReference Document(System.String path)
    // Offset: 0xC29BBC
    ::Firebase::Firestore::DocumentReference* Document(::StringW path);
    // public System.Threading.Tasks.Task`1<Firebase.Firestore.DocumentReference> AddAsync(System.Object documentData)
    // Offset: 0xC29C54
    ::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>* AddAsync(::Il2CppObject* documentData);
    // public System.Boolean Equals(Firebase.Firestore.CollectionReference other)
    // Offset: 0xC29EE8
    bool Equals(::Firebase::Firestore::CollectionReference* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC29E1C
    // Implemented from: Firebase.Firestore.Query
    // Base method: System.Int32 Query::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC29E88
    // Implemented from: Firebase.Firestore.Query
    // Base method: System.Boolean Query::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0xC29F40
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Firebase.Firestore.CollectionReference
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::get_Proxy
// Il2CppName: get_Proxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::CollectionReferenceProxy* (Firebase::Firestore::CollectionReference::*)()>(&Firebase::Firestore::CollectionReference::get_Proxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "get_Proxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::get_Path
// Il2CppName: get_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::CollectionReference::*)()>(&Firebase::Firestore::CollectionReference::get_Path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "get_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::Document
// Il2CppName: Document
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReference* (Firebase::Firestore::CollectionReference::*)()>(&Firebase::Firestore::CollectionReference::Document)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "Document", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::Document
// Il2CppName: Document
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReference* (Firebase::Firestore::CollectionReference::*)(::StringW)>(&Firebase::Firestore::CollectionReference::Document)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "Document", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::AddAsync
// Il2CppName: AddAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>* (Firebase::Firestore::CollectionReference::*)(::Il2CppObject*)>(&Firebase::Firestore::CollectionReference::AddAsync)> {
  static const MethodInfo* get() {
    static auto* documentData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "AddAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{documentData});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::CollectionReference::*)(::Firebase::Firestore::CollectionReference*)>(&Firebase::Firestore::CollectionReference::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "CollectionReference")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Firebase::Firestore::CollectionReference::*)()>(&Firebase::Firestore::CollectionReference::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::CollectionReference::*)(::Il2CppObject*)>(&Firebase::Firestore::CollectionReference::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReference::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::CollectionReference::*)()>(&Firebase::Firestore::CollectionReference::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReference*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
