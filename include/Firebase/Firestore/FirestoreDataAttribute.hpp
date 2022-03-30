// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: Firebase.Firestore.UnknownPropertyHandling
#include "Firebase/Firestore/UnknownPropertyHandling.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FirestoreDataAttribute
  class FirestoreDataAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FirestoreDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreDataAttribute*, "Firebase.Firestore", "FirestoreDataAttribute");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FirestoreDataAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 5C7670
  class FirestoreDataAttribute : public ::System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0x5C783C
    // private Firebase.Firestore.UnknownPropertyHandling <UnknownPropertyHandling>k__BackingField
    // Size: 0x14
    // Offset: 0x10
    ::Firebase::Firestore::UnknownPropertyHandling UnknownPropertyHandling;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::UnknownPropertyHandling) == 0x14);
    // [DebuggerBrowsableAttribute] Offset: 0x5C7878
    // private System.Type <ConverterType>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* ConverterType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private Firebase.Firestore.UnknownPropertyHandling <UnknownPropertyHandling>k__BackingField
    ::Firebase::Firestore::UnknownPropertyHandling& dyn_$UnknownPropertyHandling$k__BackingField();
    // Get instance field reference: private System.Type <ConverterType>k__BackingField
    ::System::Type*& dyn_$ConverterType$k__BackingField();
    // public Firebase.Firestore.UnknownPropertyHandling get_UnknownPropertyHandling()
    // Offset: 0xC3AF8C
    ::Firebase::Firestore::UnknownPropertyHandling get_UnknownPropertyHandling();
    // public System.Type get_ConverterType()
    // Offset: 0xC3AF94
    ::System::Type* get_ConverterType();
  }; // Firebase.Firestore.FirestoreDataAttribute
  #pragma pack(pop)
  static check_size<sizeof(FirestoreDataAttribute), 24 + sizeof(::System::Type*)> __Firebase_Firestore_FirestoreDataAttributeSizeCheck;
  static_assert(sizeof(FirestoreDataAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreDataAttribute::get_UnknownPropertyHandling
// Il2CppName: get_UnknownPropertyHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::UnknownPropertyHandling (Firebase::Firestore::FirestoreDataAttribute::*)()>(&Firebase::Firestore::FirestoreDataAttribute::get_UnknownPropertyHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreDataAttribute*), "get_UnknownPropertyHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreDataAttribute::get_ConverterType
// Il2CppName: get_ConverterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Firebase::Firestore::FirestoreDataAttribute::*)()>(&Firebase::Firestore::FirestoreDataAttribute::get_ConverterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreDataAttribute*), "get_ConverterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
