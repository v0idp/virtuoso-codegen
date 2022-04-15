// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaSimpleTypeContent
#include "System/Xml/Schema/XmlSchemaSimpleTypeContent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleTypeUnion
  class XmlSchemaSimpleTypeUnion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeUnion);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeUnion*, "System.Xml.Schema", "XmlSchemaSimpleTypeUnion");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaSimpleTypeUnion
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaSimpleTypeUnion : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaObjectCollection baseTypes
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::Schema::XmlSchemaObjectCollection* baseTypes;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*) == 0x8);
    // private System.Xml.XmlQualifiedName[] memberTypes
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::System::Xml::XmlQualifiedName*> memberTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::XmlQualifiedName*>) == 0x8);
    // private System.Xml.Schema.XmlSchemaSimpleType[] baseMemberTypes
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> baseMemberTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObjectCollection baseTypes
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaObjectCollection*& dyn_baseTypes();
    // Get instance field reference: private System.Xml.XmlQualifiedName[] memberTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::XmlQualifiedName*>& dyn_memberTypes();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleType[] baseMemberTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>& dyn_baseMemberTypes();
    // public System.Xml.Schema.XmlSchemaObjectCollection get_BaseTypes()
    // Offset: 0xF37064
    ::System::Xml::Schema::XmlSchemaObjectCollection* get_BaseTypes();
    // public System.Xml.XmlQualifiedName[] get_MemberTypes()
    // Offset: 0xF3706C
    ::ArrayW<::System::Xml::XmlQualifiedName*> get_MemberTypes();
    // public System.Void set_MemberTypes(System.Xml.XmlQualifiedName[] value)
    // Offset: 0xF37074
    void set_MemberTypes(::ArrayW<::System::Xml::XmlQualifiedName*> value);
    // public System.Xml.Schema.XmlSchemaSimpleType[] get_BaseMemberTypes()
    // Offset: 0xF3707C
    ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> get_BaseMemberTypes();
    // System.Void SetBaseMemberTypes(System.Xml.Schema.XmlSchemaSimpleType[] baseMemberTypes)
    // Offset: 0xF37084
    void SetBaseMemberTypes(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> baseMemberTypes);
    // public System.Void .ctor()
    // Offset: 0xF37200
    // Implemented from: System.Xml.Schema.XmlSchemaSimpleTypeContent
    // Base method: System.Void XmlSchemaSimpleTypeContent::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaSimpleTypeUnion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaSimpleTypeUnion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaSimpleTypeUnion*, creationType>()));
    }
    // override System.Xml.Schema.XmlSchemaObject Clone()
    // Offset: 0xF3708C
    // Implemented from: System.Xml.Schema.XmlSchemaObject
    // Base method: System.Xml.Schema.XmlSchemaObject XmlSchemaObject::Clone()
    ::System::Xml::Schema::XmlSchemaObject* Clone();
  }; // System.Xml.Schema.XmlSchemaSimpleTypeUnion
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaSimpleTypeUnion), 96 + sizeof(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>)> __System_Xml_Schema_XmlSchemaSimpleTypeUnionSizeCheck;
  static_assert(sizeof(XmlSchemaSimpleTypeUnion) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_BaseTypes
// Il2CppName: get_BaseTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaSimpleTypeUnion::*)()>(&System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_BaseTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeUnion*), "get_BaseTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_MemberTypes
// Il2CppName: get_MemberTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::XmlQualifiedName*> (System::Xml::Schema::XmlSchemaSimpleTypeUnion::*)()>(&System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_MemberTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeUnion*), "get_MemberTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeUnion::set_MemberTypes
// Il2CppName: set_MemberTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleTypeUnion::*)(::ArrayW<::System::Xml::XmlQualifiedName*>)>(&System::Xml::Schema::XmlSchemaSimpleTypeUnion::set_MemberTypes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeUnion*), "set_MemberTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_BaseMemberTypes
// Il2CppName: get_BaseMemberTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> (System::Xml::Schema::XmlSchemaSimpleTypeUnion::*)()>(&System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_BaseMemberTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeUnion*), "get_BaseMemberTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeUnion::SetBaseMemberTypes
// Il2CppName: SetBaseMemberTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleTypeUnion::*)(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>)>(&System::Xml::Schema::XmlSchemaSimpleTypeUnion::SetBaseMemberTypes)> {
  static const MethodInfo* get() {
    static auto* baseMemberTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSimpleType"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeUnion*), "SetBaseMemberTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMemberTypes});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeUnion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeUnion::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObject* (System::Xml::Schema::XmlSchemaSimpleTypeUnion::*)()>(&System::Xml::Schema::XmlSchemaSimpleTypeUnion::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeUnion*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
