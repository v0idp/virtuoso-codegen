// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaForm
#include "System/Xml/Schema/XmlSchemaForm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeMapMember
  class XmlTypeMapMember;
  // Forward declaring type: XmlTypeMapping
  class XmlTypeMapping;
  // Forward declaring type: TypeData
  class TypeData;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeMapElementInfo
  class XmlTypeMapElementInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapElementInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapElementInfo*, "System.Xml.Serialization", "XmlTypeMapElementInfo");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlTypeMapElementInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTypeMapElementInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String _elementName
    // Size: 0x8
    // Offset: 0x10
    ::StringW elementName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _namespace
    // Size: 0x8
    // Offset: 0x18
    ::StringW _namespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaForm _form
    // Size: 0x4
    // Offset: 0x20
    ::System::Xml::Schema::XmlSchemaForm form;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaForm) == 0x4);
    // Padding between fields: form and: member
    char __padding2[0x4] = {};
    // private System.Xml.Serialization.XmlTypeMapMember _member
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Serialization::XmlTypeMapMember* member;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlTypeMapMember*) == 0x8);
    // private System.Object _choiceValue
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* choiceValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean _isNullable
    // Size: 0x1
    // Offset: 0x38
    bool isNullable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isNullable and: nestingLevel
    char __padding5[0x3] = {};
    // private System.Int32 _nestingLevel
    // Size: 0x4
    // Offset: 0x3C
    int nestingLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Xml.Serialization.XmlTypeMapping _mappedType
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::Serialization::XmlTypeMapping* mappedType;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlTypeMapping*) == 0x8);
    // private System.Xml.Serialization.TypeData _type
    // Size: 0x8
    // Offset: 0x48
    ::System::Xml::Serialization::TypeData* type;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::TypeData*) == 0x8);
    // private System.Boolean _wrappedElement
    // Size: 0x1
    // Offset: 0x50
    bool wrappedElement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: wrappedElement and: explicitOrder
    char __padding9[0x3] = {};
    // private System.Int32 _explicitOrder
    // Size: 0x4
    // Offset: 0x54
    int explicitOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String _elementName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__elementName();
    // Get instance field reference: private System.String _namespace
    [[deprecated("Use field access instead!")]] ::StringW& dyn__namespace();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaForm _form
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaForm& dyn__form();
    // Get instance field reference: private System.Xml.Serialization.XmlTypeMapMember _member
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlTypeMapMember*& dyn__member();
    // Get instance field reference: private System.Object _choiceValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__choiceValue();
    // Get instance field reference: private System.Boolean _isNullable
    [[deprecated("Use field access instead!")]] bool& dyn__isNullable();
    // Get instance field reference: private System.Int32 _nestingLevel
    [[deprecated("Use field access instead!")]] int& dyn__nestingLevel();
    // Get instance field reference: private System.Xml.Serialization.XmlTypeMapping _mappedType
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlTypeMapping*& dyn__mappedType();
    // Get instance field reference: private System.Xml.Serialization.TypeData _type
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::TypeData*& dyn__type();
    // Get instance field reference: private System.Boolean _wrappedElement
    [[deprecated("Use field access instead!")]] bool& dyn__wrappedElement();
    // Get instance field reference: private System.Int32 _explicitOrder
    [[deprecated("Use field access instead!")]] int& dyn__explicitOrder();
    // public System.Xml.Serialization.TypeData get_TypeData()
    // Offset: 0x10868D0
    ::System::Xml::Serialization::TypeData* get_TypeData();
    // public System.Object get_ChoiceValue()
    // Offset: 0x10868D8
    ::Il2CppObject* get_ChoiceValue();
    // public System.Void set_ChoiceValue(System.Object value)
    // Offset: 0x10868E0
    void set_ChoiceValue(::Il2CppObject* value);
    // public System.String get_ElementName()
    // Offset: 0x10868E8
    ::StringW get_ElementName();
    // public System.Void set_ElementName(System.String value)
    // Offset: 0x10868F0
    void set_ElementName(::StringW value);
    // public System.String get_Namespace()
    // Offset: 0x10868F8
    ::StringW get_Namespace();
    // public System.Void set_Namespace(System.String value)
    // Offset: 0x1086900
    void set_Namespace(::StringW value);
    // public System.String get_DataTypeNamespace()
    // Offset: 0x1086908
    ::StringW get_DataTypeNamespace();
    // public System.String get_DataTypeName()
    // Offset: 0x10869EC
    ::StringW get_DataTypeName();
    // public System.Xml.Schema.XmlSchemaForm get_Form()
    // Offset: 0x1086A1C
    ::System::Xml::Schema::XmlSchemaForm get_Form();
    // public System.Void set_Form(System.Xml.Schema.XmlSchemaForm value)
    // Offset: 0x1086A24
    void set_Form(::System::Xml::Schema::XmlSchemaForm value);
    // public System.Xml.Serialization.XmlTypeMapping get_MappedType()
    // Offset: 0x1086A2C
    ::System::Xml::Serialization::XmlTypeMapping* get_MappedType();
    // public System.Void set_MappedType(System.Xml.Serialization.XmlTypeMapping value)
    // Offset: 0x1086A34
    void set_MappedType(::System::Xml::Serialization::XmlTypeMapping* value);
    // public System.Boolean get_IsNullable()
    // Offset: 0x1086A3C
    bool get_IsNullable();
    // public System.Void set_IsNullable(System.Boolean value)
    // Offset: 0x1086A44
    void set_IsNullable(bool value);
    // public System.Xml.Serialization.XmlTypeMapMember get_Member()
    // Offset: 0x1086A50
    ::System::Xml::Serialization::XmlTypeMapMember* get_Member();
    // public System.Void set_NestingLevel(System.Int32 value)
    // Offset: 0x1086A58
    void set_NestingLevel(int value);
    // public System.Boolean get_MultiReferenceType()
    // Offset: 0x1086A60
    bool get_MultiReferenceType();
    // public System.Boolean get_WrappedElement()
    // Offset: 0x1086A80
    bool get_WrappedElement();
    // public System.Void set_WrappedElement(System.Boolean value)
    // Offset: 0x1086A88
    void set_WrappedElement(bool value);
    // public System.Boolean get_IsTextElement()
    // Offset: 0x1086A94
    bool get_IsTextElement();
    // public System.Void set_IsTextElement(System.Boolean value)
    // Offset: 0x1086AE4
    void set_IsTextElement(bool value);
    // public System.Boolean get_IsUnnamedAnyElement()
    // Offset: 0x1086BAC
    bool get_IsUnnamedAnyElement();
    // public System.Void set_IsUnnamedAnyElement(System.Boolean value)
    // Offset: 0x1086C04
    void set_IsUnnamedAnyElement(bool value);
    // public System.Int32 get_ExplicitOrder()
    // Offset: 0x1086CBC
    int get_ExplicitOrder();
    // public System.Void set_ExplicitOrder(System.Int32 value)
    // Offset: 0x1086CC4
    void set_ExplicitOrder(int value);
    // public System.Void .ctor(System.Xml.Serialization.XmlTypeMapMember member, System.Xml.Serialization.TypeData type)
    // Offset: 0x1086820
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTypeMapElementInfo* New_ctor(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlTypeMapElementInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTypeMapElementInfo*, creationType>(member, type)));
    }
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1086CCC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1086E24
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Xml.Serialization.XmlTypeMapElementInfo
  #pragma pack(pop)
  static check_size<sizeof(XmlTypeMapElementInfo), 84 + sizeof(int)> __System_Xml_Serialization_XmlTypeMapElementInfoSizeCheck;
  static_assert(sizeof(XmlTypeMapElementInfo) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_TypeData
// Il2CppName: get_TypeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::TypeData* (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_TypeData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_TypeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_ChoiceValue
// Il2CppName: get_ChoiceValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_ChoiceValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_ChoiceValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_ChoiceValue
// Il2CppName: set_ChoiceValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(::Il2CppObject*)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_ChoiceValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_ChoiceValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_ElementName
// Il2CppName: set_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(::StringW)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_ElementName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_Namespace
// Il2CppName: set_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(::StringW)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_Namespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_DataTypeNamespace
// Il2CppName: get_DataTypeNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_DataTypeNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_DataTypeNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_DataTypeName
// Il2CppName: get_DataTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_DataTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_DataTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_Form
// Il2CppName: get_Form
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaForm (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_Form)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_Form", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_Form
// Il2CppName: set_Form
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(::System::Xml::Schema::XmlSchemaForm)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_Form)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaForm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_Form", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_MappedType
// Il2CppName: get_MappedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_MappedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_MappedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_MappedType
// Il2CppName: set_MappedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(::System::Xml::Serialization::XmlTypeMapping*)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_MappedType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlTypeMapping")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_MappedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_IsNullable
// Il2CppName: get_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_IsNullable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_IsNullable
// Il2CppName: set_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(bool)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_IsNullable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_Member
// Il2CppName: get_Member
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapMember* (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_Member)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_Member", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_NestingLevel
// Il2CppName: set_NestingLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(int)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_NestingLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_NestingLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_MultiReferenceType
// Il2CppName: get_MultiReferenceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_MultiReferenceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_MultiReferenceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_WrappedElement
// Il2CppName: get_WrappedElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_WrappedElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_WrappedElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_WrappedElement
// Il2CppName: set_WrappedElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(bool)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_WrappedElement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_WrappedElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_IsTextElement
// Il2CppName: get_IsTextElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_IsTextElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_IsTextElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_IsTextElement
// Il2CppName: set_IsTextElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(bool)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_IsTextElement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_IsTextElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_IsUnnamedAnyElement
// Il2CppName: get_IsUnnamedAnyElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_IsUnnamedAnyElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_IsUnnamedAnyElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_IsUnnamedAnyElement
// Il2CppName: set_IsUnnamedAnyElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(bool)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_IsUnnamedAnyElement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_IsUnnamedAnyElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::get_ExplicitOrder
// Il2CppName: get_ExplicitOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::get_ExplicitOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "get_ExplicitOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::set_ExplicitOrder
// Il2CppName: set_ExplicitOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapElementInfo::*)(int)>(&System::Xml::Serialization::XmlTypeMapElementInfo::set_ExplicitOrder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "set_ExplicitOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapElementInfo::*)(::Il2CppObject*)>(&System::Xml::Serialization::XmlTypeMapElementInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapElementInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlTypeMapElementInfo::*)()>(&System::Xml::Serialization::XmlTypeMapElementInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapElementInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
