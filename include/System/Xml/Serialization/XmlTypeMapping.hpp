// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.XmlMapping
#include "System/Xml/Serialization/XmlMapping.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: TypeData
  class TypeData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeMapping
  class XmlTypeMapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapping*, "System.Xml.Serialization", "XmlTypeMapping");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlTypeMapping
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTypeMapping : public ::System::Xml::Serialization::XmlMapping {
    public:
    public:
    // private System.String xmlType
    // Size: 0x8
    // Offset: 0x48
    ::StringW xmlType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String xmlTypeNamespace
    // Size: 0x8
    // Offset: 0x50
    ::StringW xmlTypeNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Serialization.TypeData type
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Serialization::TypeData* type;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::TypeData*) == 0x8);
    // private System.Xml.Serialization.XmlTypeMapping baseMap
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::Serialization::XmlTypeMapping* baseMap;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlTypeMapping*) == 0x8);
    // private System.Boolean multiReferenceType
    // Size: 0x1
    // Offset: 0x68
    bool multiReferenceType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean includeInSchema
    // Size: 0x1
    // Offset: 0x69
    bool includeInSchema;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isNullable
    // Size: 0x1
    // Offset: 0x6A
    bool isNullable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isAny
    // Size: 0x1
    // Offset: 0x6B
    bool isAny;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isAny and: derivedTypes
    char __padding7[0x4] = {};
    // private System.Collections.ArrayList _derivedTypes
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::ArrayList* derivedTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Get instance field reference: private System.String xmlType
    [[deprecated]] ::StringW& dyn_xmlType();
    // Get instance field reference: private System.String xmlTypeNamespace
    [[deprecated]] ::StringW& dyn_xmlTypeNamespace();
    // Get instance field reference: private System.Xml.Serialization.TypeData type
    [[deprecated]] ::System::Xml::Serialization::TypeData*& dyn_type();
    // Get instance field reference: private System.Xml.Serialization.XmlTypeMapping baseMap
    [[deprecated]] ::System::Xml::Serialization::XmlTypeMapping*& dyn_baseMap();
    // Get instance field reference: private System.Boolean multiReferenceType
    [[deprecated]] bool& dyn_multiReferenceType();
    // Get instance field reference: private System.Boolean includeInSchema
    [[deprecated]] bool& dyn_includeInSchema();
    // Get instance field reference: private System.Boolean isNullable
    [[deprecated]] bool& dyn_isNullable();
    // Get instance field reference: private System.Boolean isAny
    [[deprecated]] bool& dyn_isAny();
    // Get instance field reference: private System.Collections.ArrayList _derivedTypes
    [[deprecated]] ::System::Collections::ArrayList*& dyn__derivedTypes();
    // public System.String get_TypeFullName()
    // Offset: 0x1088C90
    ::StringW get_TypeFullName();
    // System.Xml.Serialization.TypeData get_TypeData()
    // Offset: 0x1088CAC
    ::System::Xml::Serialization::TypeData* get_TypeData();
    // System.String get_XmlType()
    // Offset: 0x1088CB4
    ::StringW get_XmlType();
    // System.Void set_XmlType(System.String value)
    // Offset: 0x1088CBC
    void set_XmlType(::StringW value);
    // System.String get_XmlTypeNamespace()
    // Offset: 0x1086994
    ::StringW get_XmlTypeNamespace();
    // System.Void set_XmlTypeNamespace(System.String value)
    // Offset: 0x1088CC4
    void set_XmlTypeNamespace(::StringW value);
    // System.Boolean get_HasXmlTypeNamespace()
    // Offset: 0x1088CCC
    bool get_HasXmlTypeNamespace();
    // System.Collections.ArrayList get_DerivedTypes()
    // Offset: 0x1088CDC
    ::System::Collections::ArrayList* get_DerivedTypes();
    // System.Boolean get_MultiReferenceType()
    // Offset: 0x1088CE4
    bool get_MultiReferenceType();
    // System.Xml.Serialization.XmlTypeMapping get_BaseMap()
    // Offset: 0x1088CEC
    ::System::Xml::Serialization::XmlTypeMapping* get_BaseMap();
    // System.Void set_BaseMap(System.Xml.Serialization.XmlTypeMapping value)
    // Offset: 0x1088CF4
    void set_BaseMap(::System::Xml::Serialization::XmlTypeMapping* value);
    // System.Void set_IncludeInSchema(System.Boolean value)
    // Offset: 0x1088CFC
    void set_IncludeInSchema(bool value);
    // System.Boolean get_IsNullable()
    // Offset: 0x1088D08
    bool get_IsNullable();
    // System.Void set_IsNullable(System.Boolean value)
    // Offset: 0x1088D10
    void set_IsNullable(bool value);
    // System.Boolean get_IsAny()
    // Offset: 0x1088D1C
    bool get_IsAny();
    // System.Void set_IsAny(System.Boolean value)
    // Offset: 0x1088D24
    void set_IsAny(bool value);
    // System.Void .ctor(System.String elementName, System.String ns, System.Xml.Serialization.TypeData typeData, System.String xmlType, System.String xmlTypeNamespace)
    // Offset: 0x1088BE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTypeMapping* New_ctor(::StringW elementName, ::StringW ns, ::System::Xml::Serialization::TypeData* typeData, ::StringW xmlType, ::StringW xmlTypeNamespace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlTypeMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTypeMapping*, creationType>(elementName, ns, typeData, xmlType, xmlTypeNamespace)));
    }
    // System.Xml.Serialization.XmlTypeMapping GetRealTypeMap(System.Type objectType)
    // Offset: 0x1088D30
    ::System::Xml::Serialization::XmlTypeMapping* GetRealTypeMap(::System::Type* objectType);
    // System.Xml.Serialization.XmlTypeMapping GetRealElementMap(System.String name, System.String ens)
    // Offset: 0x1088EBC
    ::System::Xml::Serialization::XmlTypeMapping* GetRealElementMap(::StringW name, ::StringW ens);
    // System.Void UpdateRoot(System.Xml.XmlQualifiedName qname)
    // Offset: 0x1089264
    void UpdateRoot(::System::Xml::XmlQualifiedName* qname);
  }; // System.Xml.Serialization.XmlTypeMapping
  #pragma pack(pop)
  static check_size<sizeof(XmlTypeMapping), 112 + sizeof(::System::Collections::ArrayList*)> __System_Xml_Serialization_XmlTypeMappingSizeCheck;
  static_assert(sizeof(XmlTypeMapping) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_TypeFullName
// Il2CppName: get_TypeFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_TypeFullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_TypeFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_TypeData
// Il2CppName: get_TypeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::TypeData* (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_TypeData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_TypeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_XmlType
// Il2CppName: get_XmlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_XmlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_XmlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::set_XmlType
// Il2CppName: set_XmlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapping::*)(::StringW)>(&System::Xml::Serialization::XmlTypeMapping::set_XmlType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "set_XmlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_XmlTypeNamespace
// Il2CppName: get_XmlTypeNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_XmlTypeNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_XmlTypeNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::set_XmlTypeNamespace
// Il2CppName: set_XmlTypeNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapping::*)(::StringW)>(&System::Xml::Serialization::XmlTypeMapping::set_XmlTypeNamespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "set_XmlTypeNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_HasXmlTypeNamespace
// Il2CppName: get_HasXmlTypeNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_HasXmlTypeNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_HasXmlTypeNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_DerivedTypes
// Il2CppName: get_DerivedTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_DerivedTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_DerivedTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_MultiReferenceType
// Il2CppName: get_MultiReferenceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_MultiReferenceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_MultiReferenceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_BaseMap
// Il2CppName: get_BaseMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_BaseMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_BaseMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::set_BaseMap
// Il2CppName: set_BaseMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapping::*)(::System::Xml::Serialization::XmlTypeMapping*)>(&System::Xml::Serialization::XmlTypeMapping::set_BaseMap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlTypeMapping")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "set_BaseMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::set_IncludeInSchema
// Il2CppName: set_IncludeInSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapping::*)(bool)>(&System::Xml::Serialization::XmlTypeMapping::set_IncludeInSchema)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "set_IncludeInSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_IsNullable
// Il2CppName: get_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_IsNullable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::set_IsNullable
// Il2CppName: set_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapping::*)(bool)>(&System::Xml::Serialization::XmlTypeMapping::set_IsNullable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "set_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::get_IsAny
// Il2CppName: get_IsAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapping::*)()>(&System::Xml::Serialization::XmlTypeMapping::get_IsAny)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "get_IsAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::set_IsAny
// Il2CppName: set_IsAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapping::*)(bool)>(&System::Xml::Serialization::XmlTypeMapping::set_IsAny)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "set_IsAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::GetRealTypeMap
// Il2CppName: GetRealTypeMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (System::Xml::Serialization::XmlTypeMapping::*)(::System::Type*)>(&System::Xml::Serialization::XmlTypeMapping::GetRealTypeMap)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "GetRealTypeMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::GetRealElementMap
// Il2CppName: GetRealElementMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (System::Xml::Serialization::XmlTypeMapping::*)(::StringW, ::StringW)>(&System::Xml::Serialization::XmlTypeMapping::GetRealElementMap)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ens = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "GetRealElementMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, ens});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapping::UpdateRoot
// Il2CppName: UpdateRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapping::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Serialization::XmlTypeMapping::UpdateRoot)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapping*), "UpdateRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname});
  }
};
