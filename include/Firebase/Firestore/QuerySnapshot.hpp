// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: DocumentSnapshot
  class DocumentSnapshot;
  // Forward declaring type: QuerySnapshotProxy
  class QuerySnapshotProxy;
  // Forward declaring type: FirebaseFirestore
  class FirebaseFirestore;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: QuerySnapshot
  class QuerySnapshot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::QuerySnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::QuerySnapshot*, "Firebase.Firestore", "QuerySnapshot");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.QuerySnapshot
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6D8270
  class QuerySnapshot : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*/ {
    public:
    public:
    // private readonly Firebase.Firestore.QuerySnapshotProxy _proxy
    // Size: 0x8
    // Offset: 0x10
    ::Firebase::Firestore::QuerySnapshotProxy* proxy;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::QuerySnapshotProxy*) == 0x8);
    // private readonly Firebase.Firestore.FirebaseFirestore _firestore
    // Size: 0x8
    // Offset: 0x18
    ::Firebase::Firestore::FirebaseFirestore* firestore;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::FirebaseFirestore*) == 0x8);
    // private Firebase.Firestore.DocumentSnapshot[] _documentsCached
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Firebase::Firestore::DocumentSnapshot*> documentsCached;
    // Field size check
    static_assert(sizeof(::ArrayW<::Firebase::Firestore::DocumentSnapshot*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>
    operator ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>(this);
    }
    // Get instance field reference: private readonly Firebase.Firestore.QuerySnapshotProxy _proxy
    [[deprecated]] ::Firebase::Firestore::QuerySnapshotProxy*& dyn__proxy();
    // Get instance field reference: private readonly Firebase.Firestore.FirebaseFirestore _firestore
    [[deprecated]] ::Firebase::Firestore::FirebaseFirestore*& dyn__firestore();
    // Get instance field reference: private Firebase.Firestore.DocumentSnapshot[] _documentsCached
    [[deprecated]] ::ArrayW<::Firebase::Firestore::DocumentSnapshot*>& dyn__documentsCached();
    // public System.Collections.Generic.IEnumerable`1<Firebase.Firestore.DocumentSnapshot> get_Documents()
    // Offset: 0xD632A4
    ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>* get_Documents();
    // public System.Int32 get_Count()
    // Offset: 0xD63420
    int get_Count();
    // System.Void .ctor(Firebase.Firestore.QuerySnapshotProxy proxy, Firebase.Firestore.FirebaseFirestore firestore)
    // Offset: 0xD63118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuerySnapshot* New_ctor(::Firebase::Firestore::QuerySnapshotProxy* proxy, ::Firebase::Firestore::FirebaseFirestore* firestore) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::QuerySnapshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuerySnapshot*, creationType>(proxy, firestore)));
    }
    // public System.Boolean Equals(Firebase.Firestore.QuerySnapshot other)
    // Offset: 0xD63550
    bool Equals(::Firebase::Firestore::QuerySnapshot* other);
    // public System.Collections.Generic.IEnumerator`1<Firebase.Firestore.DocumentSnapshot> GetEnumerator()
    // Offset: 0xD63570
    ::System::Collections::Generic::IEnumerator_1<::Firebase::Firestore::DocumentSnapshot*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xD63624
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // private System.Void LoadDocumentsCached()
    // Offset: 0xD632C8
    void LoadDocumentsCached();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xD634D0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xD63568
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Firebase.Firestore.QuerySnapshot
  #pragma pack(pop)
  static check_size<sizeof(QuerySnapshot), 32 + sizeof(::ArrayW<::Firebase::Firestore::DocumentSnapshot*>)> __Firebase_Firestore_QuerySnapshotSizeCheck;
  static_assert(sizeof(QuerySnapshot) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::get_Documents
// Il2CppName: get_Documents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>* (Firebase::Firestore::QuerySnapshot::*)()>(&Firebase::Firestore::QuerySnapshot::get_Documents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QuerySnapshot*), "get_Documents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Firebase::Firestore::QuerySnapshot::*)()>(&Firebase::Firestore::QuerySnapshot::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QuerySnapshot*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::QuerySnapshot::*)(::Firebase::Firestore::QuerySnapshot*)>(&Firebase::Firestore::QuerySnapshot::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "QuerySnapshot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QuerySnapshot*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Firebase::Firestore::DocumentSnapshot*>* (Firebase::Firestore::QuerySnapshot::*)()>(&Firebase::Firestore::QuerySnapshot::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QuerySnapshot*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Firebase::Firestore::QuerySnapshot::*)()>(&Firebase::Firestore::QuerySnapshot::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QuerySnapshot*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::LoadDocumentsCached
// Il2CppName: LoadDocumentsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::QuerySnapshot::*)()>(&Firebase::Firestore::QuerySnapshot::LoadDocumentsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QuerySnapshot*), "LoadDocumentsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::QuerySnapshot::*)(::Il2CppObject*)>(&Firebase::Firestore::QuerySnapshot::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QuerySnapshot*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::QuerySnapshot::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Firebase::Firestore::QuerySnapshot::*)()>(&Firebase::Firestore::QuerySnapshot::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::QuerySnapshot*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
