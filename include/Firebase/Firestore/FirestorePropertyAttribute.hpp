// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: FirestorePropertyAttribute
  class FirestorePropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FirestorePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestorePropertyAttribute*, "Firebase.Firestore", "FirestorePropertyAttribute");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FirestorePropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 5C7648
  class FirestorePropertyAttribute : public ::System::Attribute {
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
    // [DebuggerBrowsableAttribute] Offset: 0x5C7788
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x5C77C4
    // private System.Type <ConverterType>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* ConverterType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.String <Name>k__BackingField
    ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.Type <ConverterType>k__BackingField
    ::System::Type*& dyn_$ConverterType$k__BackingField();
    // public System.String get_Name()
    // Offset: 0xC3B028
    ::StringW get_Name();
    // public System.Type get_ConverterType()
    // Offset: 0xC3B030
    ::System::Type* get_ConverterType();
  }; // Firebase.Firestore.FirestorePropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(FirestorePropertyAttribute), 24 + sizeof(::System::Type*)> __Firebase_Firestore_FirestorePropertyAttributeSizeCheck;
  static_assert(sizeof(FirestorePropertyAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FirestorePropertyAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::FirestorePropertyAttribute::*)()>(&Firebase::Firestore::FirestorePropertyAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestorePropertyAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestorePropertyAttribute::get_ConverterType
// Il2CppName: get_ConverterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Firebase::Firestore::FirestorePropertyAttribute::*)()>(&Firebase::Firestore::FirestorePropertyAttribute::get_ConverterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestorePropertyAttribute*), "get_ConverterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
