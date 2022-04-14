// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.FirebaseFirestore
#include "Firebase/Firestore/FirebaseFirestore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: CollectionReference
  class CollectionReference;
  // Forward declaring type: FirestoreProxy
  class FirestoreProxy;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestore::$Collection$c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestore::$Collection$c__AnonStorey0*, "Firebase.Firestore", "FirebaseFirestore/<Collection>c__AnonStorey0");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FirebaseFirestore/Firebase.Firestore.<Collection>c__AnonStorey0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseFirestore::$Collection$c__AnonStorey0 : public ::Il2CppObject {
    public:
    public:
    // System.String path
    // Size: 0x8
    // Offset: 0x10
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // Firebase.Firestore.FirebaseFirestore $this
    // Size: 0x8
    // Offset: 0x18
    ::Firebase::Firestore::FirebaseFirestore* $this;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::FirebaseFirestore*) == 0x8);
    public:
    // Get instance field reference: System.String path
    [[deprecated]] ::StringW& dyn_path();
    // Get instance field reference: Firebase.Firestore.FirebaseFirestore $this
    [[deprecated]] ::Firebase::Firestore::FirebaseFirestore*& dyn_$this();
    // Firebase.Firestore.CollectionReference <>m__0(Firebase.Firestore.FirestoreProxy proxy)
    // Offset: 0xD66D3C
    ::Firebase::Firestore::CollectionReference* $$m__0(::Firebase::Firestore::FirestoreProxy* proxy);
    // public System.Void .ctor()
    // Offset: 0xD5A808
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseFirestore::$Collection$c__AnonStorey0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FirebaseFirestore::$Collection$c__AnonStorey0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseFirestore::$Collection$c__AnonStorey0*, creationType>()));
    }
  }; // Firebase.Firestore.FirebaseFirestore/Firebase.Firestore.<Collection>c__AnonStorey0
  #pragma pack(pop)
  static check_size<sizeof(FirebaseFirestore::$Collection$c__AnonStorey0), 24 + sizeof(::Firebase::Firestore::FirebaseFirestore*)> __Firebase_Firestore_FirebaseFirestore_$Collection$c__AnonStorey0SizeCheck;
  static_assert(sizeof(FirebaseFirestore::$Collection$c__AnonStorey0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FirebaseFirestore::$Collection$c__AnonStorey0::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::CollectionReference* (Firebase::Firestore::FirebaseFirestore::$Collection$c__AnonStorey0::*)(::Firebase::Firestore::FirestoreProxy*)>(&Firebase::Firestore::FirebaseFirestore::$Collection$c__AnonStorey0::$$m__0)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FirestoreProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirebaseFirestore::$Collection$c__AnonStorey0*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirebaseFirestore::$Collection$c__AnonStorey0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!