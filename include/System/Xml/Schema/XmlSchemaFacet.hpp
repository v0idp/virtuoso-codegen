// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaAnnotated
#include "System/Xml/Schema/XmlSchemaAnnotated.hpp"
// Including type: System.Xml.Schema.FacetType
#include "System/Xml/Schema/FacetType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaFacet
  class XmlSchemaFacet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaFacet*, "System.Xml.Schema", "XmlSchemaFacet");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaFacet
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaFacet : public ::System::Xml::Schema::XmlSchemaAnnotated {
    public:
    public:
    // private System.String value
    // Size: 0x8
    // Offset: 0x50
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean isFixed
    // Size: 0x1
    // Offset: 0x58
    bool isFixed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isFixed and: facetType
    char __padding1[0x3] = {};
    // private System.Xml.Schema.FacetType facetType
    // Size: 0x4
    // Offset: 0x5C
    ::System::Xml::Schema::FacetType facetType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::FacetType) == 0x4);
    public:
    // Get instance field reference: private System.String value
    [[deprecated]] ::StringW& dyn_value();
    // Get instance field reference: private System.Boolean isFixed
    [[deprecated]] bool& dyn_isFixed();
    // Get instance field reference: private System.Xml.Schema.FacetType facetType
    [[deprecated]] ::System::Xml::Schema::FacetType& dyn_facetType();
    // public System.String get_Value()
    // Offset: 0x110EE80
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x110EE88
    void set_Value(::StringW value);
    // public System.Boolean get_IsFixed()
    // Offset: 0x110EE90
    bool get_IsFixed();
    // public System.Void set_IsFixed(System.Boolean value)
    // Offset: 0x110EE98
    void set_IsFixed(bool value);
    // System.Xml.Schema.FacetType get_FacetType()
    // Offset: 0x110EF58
    ::System::Xml::Schema::FacetType get_FacetType();
    // System.Void set_FacetType(System.Xml.Schema.FacetType value)
    // Offset: 0x110EF60
    void set_FacetType(::System::Xml::Schema::FacetType value);
    // protected System.Void .ctor()
    // Offset: 0x110E16C
    // Implemented from: System.Xml.Schema.XmlSchemaAnnotated
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaFacet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaFacet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaFacet*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaFacet
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaFacet), 92 + sizeof(::System::Xml::Schema::FacetType)> __System_Xml_Schema_XmlSchemaFacetSizeCheck;
  static_assert(sizeof(XmlSchemaFacet) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaFacet::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaFacet::*)()>(&System::Xml::Schema::XmlSchemaFacet::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaFacet*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaFacet::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaFacet::*)(::StringW)>(&System::Xml::Schema::XmlSchemaFacet::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaFacet*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaFacet::get_IsFixed
// Il2CppName: get_IsFixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaFacet::*)()>(&System::Xml::Schema::XmlSchemaFacet::get_IsFixed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaFacet*), "get_IsFixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaFacet::set_IsFixed
// Il2CppName: set_IsFixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaFacet::*)(bool)>(&System::Xml::Schema::XmlSchemaFacet::set_IsFixed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaFacet*), "set_IsFixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaFacet::get_FacetType
// Il2CppName: get_FacetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::FacetType (System::Xml::Schema::XmlSchemaFacet::*)()>(&System::Xml::Schema::XmlSchemaFacet::get_FacetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaFacet*), "get_FacetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaFacet::set_FacetType
// Il2CppName: set_FacetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaFacet::*)(::System::Xml::Schema::FacetType)>(&System::Xml::Schema::XmlSchemaFacet::set_FacetType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "FacetType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaFacet*), "set_FacetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaFacet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
