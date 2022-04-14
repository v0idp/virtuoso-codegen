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
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaParticle
  class XmlSchemaParticle;
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
  // Forward declaring type: XmlSchemaAnyAttribute
  class XmlSchemaAnyAttribute;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaComplexContentRestriction
  class XmlSchemaComplexContentRestriction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexContentRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexContentRestriction*, "System.Xml.Schema", "XmlSchemaComplexContentRestriction");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaComplexContentRestriction
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaComplexContentRestriction : public ::System::Xml::Schema::XmlSchemaContent {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaParticle particle
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::Schema::XmlSchemaParticle* particle;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaParticle*) == 0x8);
    // private System.Xml.Schema.XmlSchemaObjectCollection attributes
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Schema::XmlSchemaObjectCollection* attributes;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*) == 0x8);
    // private System.Xml.Schema.XmlSchemaAnyAttribute anyAttribute
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaAnyAttribute*) == 0x8);
    // private System.Xml.XmlQualifiedName baseTypeName
    // Size: 0x8
    // Offset: 0x68
    ::System::Xml::XmlQualifiedName* baseTypeName;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Schema.XmlSchemaParticle particle
    [[deprecated]] ::System::Xml::Schema::XmlSchemaParticle*& dyn_particle();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObjectCollection attributes
    [[deprecated]] ::System::Xml::Schema::XmlSchemaObjectCollection*& dyn_attributes();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaAnyAttribute anyAttribute
    [[deprecated]] ::System::Xml::Schema::XmlSchemaAnyAttribute*& dyn_anyAttribute();
    // Get instance field reference: private System.Xml.XmlQualifiedName baseTypeName
    [[deprecated]] ::System::Xml::XmlQualifiedName*& dyn_baseTypeName();
    // public System.Xml.XmlQualifiedName get_BaseTypeName()
    // Offset: 0x110B038
    ::System::Xml::XmlQualifiedName* get_BaseTypeName();
    // public System.Void set_BaseTypeName(System.Xml.XmlQualifiedName value)
    // Offset: 0x110B040
    void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);
    // public System.Xml.Schema.XmlSchemaParticle get_Particle()
    // Offset: 0x110B0EC
    ::System::Xml::Schema::XmlSchemaParticle* get_Particle();
    // public System.Void set_Particle(System.Xml.Schema.XmlSchemaParticle value)
    // Offset: 0x110B0F4
    void set_Particle(::System::Xml::Schema::XmlSchemaParticle* value);
    // public System.Xml.Schema.XmlSchemaObjectCollection get_Attributes()
    // Offset: 0x110B0FC
    ::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();
    // public System.Xml.Schema.XmlSchemaAnyAttribute get_AnyAttribute()
    // Offset: 0x110B104
    ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();
    // public System.Void set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute value)
    // Offset: 0x110B10C
    void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);
    // System.Void SetAttributes(System.Xml.Schema.XmlSchemaObjectCollection newAttributes)
    // Offset: 0x110B114
    void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);
    // public System.Void .ctor()
    // Offset: 0x110B11C
    // Implemented from: System.Xml.Schema.XmlSchemaContent
    // Base method: System.Void XmlSchemaContent::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaComplexContentRestriction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaComplexContentRestriction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaComplexContentRestriction*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaComplexContentRestriction
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaComplexContentRestriction), 104 + sizeof(::System::Xml::XmlQualifiedName*)> __System_Xml_Schema_XmlSchemaComplexContentRestrictionSizeCheck;
  static_assert(sizeof(XmlSchemaComplexContentRestriction) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::get_BaseTypeName
// Il2CppName: get_BaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::XmlSchemaComplexContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaComplexContentRestriction::get_BaseTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentRestriction*), "get_BaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::set_BaseTypeName
// Il2CppName: set_BaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContentRestriction::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaComplexContentRestriction::set_BaseTypeName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentRestriction*), "set_BaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::get_Particle
// Il2CppName: get_Particle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (System::Xml::Schema::XmlSchemaComplexContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaComplexContentRestriction::get_Particle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentRestriction*), "get_Particle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::set_Particle
// Il2CppName: set_Particle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContentRestriction::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&System::Xml::Schema::XmlSchemaComplexContentRestriction::set_Particle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaParticle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentRestriction*), "set_Particle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaComplexContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaComplexContentRestriction::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentRestriction*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::get_AnyAttribute
// Il2CppName: get_AnyAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (System::Xml::Schema::XmlSchemaComplexContentRestriction::*)()>(&System::Xml::Schema::XmlSchemaComplexContentRestriction::get_AnyAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentRestriction*), "get_AnyAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::set_AnyAttribute
// Il2CppName: set_AnyAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContentRestriction::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&System::Xml::Schema::XmlSchemaComplexContentRestriction::set_AnyAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentRestriction*), "set_AnyAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::SetAttributes
// Il2CppName: SetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContentRestriction::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&System::Xml::Schema::XmlSchemaComplexContentRestriction::SetAttributes)> {
  static const MethodInfo* get() {
    static auto* newAttributes = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentRestriction*), "SetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newAttributes});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentRestriction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!