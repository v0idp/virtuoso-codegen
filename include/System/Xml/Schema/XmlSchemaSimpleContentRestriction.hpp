// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaContent
#include "System/Xml/Schema/XmlSchemaContent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
  // Forward declaring type: XmlSchemaAnyAttribute
  class XmlSchemaAnyAttribute;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleContentRestriction
  class XmlSchemaSimpleContentRestriction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleContentRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleContentRestriction*, "System.Xml.Schema", "XmlSchemaSimpleContentRestriction");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaSimpleContentRestriction
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaSimpleContentRestriction : public ::System::Xml::Schema::XmlSchemaContent {
    public:
    public:
    // private System.Xml.XmlQualifiedName baseTypeName
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::XmlQualifiedName* baseTypeName;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Xml.Schema.XmlSchemaSimpleType baseType
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Schema::XmlSchemaSimpleType* baseType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaSimpleType*) == 0x8);
    // private System.Xml.Schema.XmlSchemaObjectCollection facets
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::Schema::XmlSchemaObjectCollection* facets;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*) == 0x8);
    // private System.Xml.Schema.XmlSchemaObjectCollection attributes
    // Size: 0x8
    // Offset: 0x68
    ::System::Xml::Schema::XmlSchemaObjectCollection* attributes;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*) == 0x8);
    // private System.Xml.Schema.XmlSchemaAnyAttribute anyAttribute
    // Size: 0x8
    // Offset: 0x70
    ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaAnyAttribute*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlQualifiedName baseTypeName
    [[deprecated]] ::System::Xml::XmlQualifiedName*& dyn_baseTypeName();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleType baseType
    [[deprecated]] ::System::Xml::Schema::XmlSchemaSimpleType*& dyn_baseType();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObjectCollection facets
    [[deprecated]] ::System::Xml::Schema::XmlSchemaObjectCollection*& dyn_facets();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObjectCollection attributes
    [[deprecated]] ::System::Xml::Schema::XmlSchemaObjectCollection*& dyn_attributes();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaAnyAttribute anyAttribute
    [[deprecated]] ::System::Xml::Schema::XmlSchemaAnyAttribute*& dyn_anyAttribute();
    // public System.Xml.XmlQualifiedName get_BaseTypeName()
    // Offset: 0xF36904
    ::System::Xml::XmlQualifiedName* get_BaseTypeName();
    // public System.Void set_BaseTypeName(System.Xml.XmlQualifiedName value)
    // Offset: 0xF3690C
    void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);
    // public System.Xml.Schema.XmlSchemaSimpleType get_BaseType()
    // Offset: 0xF369B8
    ::System::Xml::Schema::XmlSchemaSimpleType* get_BaseType();
    // public System.Void set_BaseType(System.Xml.Schema.XmlSchemaSimpleType value)
    // Offset: 0xF369C0
    void set_BaseType(::System::Xml::Schema::XmlSchemaSimpleType* value);
    // public System.Xml.Schema.XmlSchemaObjectCollection get_Facets()
    // Offset: 0xF369C8
    ::System::Xml::Schema::XmlSchemaObjectCollection* get_Facets();
    // public System.Xml.Schema.XmlSchemaObjectCollection get_Attributes()
    // Offset: 0xF369D0
    ::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();
    // public System.Xml.Schema.XmlSchemaAnyAttribute get_AnyAttribute()
    // Offset: 0xF369D8
    ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();
    // public System.Void set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute value)
    // Offset: 0xF369E0
    void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);
    // System.Void SetAttributes(System.Xml.Schema.XmlSchemaObjectCollection newAttributes)
    // Offset: 0xF369E8
    void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);
    // public System.Void .ctor()
    // Offset: 0xF369F0
    // Implemented from: System.Xml.Schema.XmlSchemaContent
    // Base method: System.Void XmlSchemaContent::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaSimpleContentRestriction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaSimpleContentRestriction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaSimpleContentRestriction*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaSimpleContentRestriction
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaSimpleContentRestriction), 112 + sizeof(::System::Xml::Schema::XmlSchemaAnyAttribute*)> __System_Xml_Schema_XmlSchemaSimpleContentRestrictionSizeCheck;
  static_assert(sizeof(XmlSchemaSimpleContentRestriction) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_BaseTypeName
// Il2CppName: get_BaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_BaseTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "get_BaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::set_BaseTypeName
// Il2CppName: set_BaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::set_BaseTypeName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "set_BaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_BaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::set_BaseType
// Il2CppName: set_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::set_BaseType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSimpleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "set_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_Facets
// Il2CppName: get_Facets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_Facets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "get_Facets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_AnyAttribute
// Il2CppName: get_AnyAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::get_AnyAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "get_AnyAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::set_AnyAttribute
// Il2CppName: set_AnyAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::set_AnyAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "set_AnyAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::SetAttributes
// Il2CppName: SetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleContentRestriction::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&System::Xml::Schema::XmlSchemaSimpleContentRestriction::SetAttributes)> {
  static const MethodInfo* get() {
    static auto* newAttributes = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleContentRestriction*), "SetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newAttributes});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleContentRestriction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
