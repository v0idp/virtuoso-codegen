// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: TypedObject
  class TypedObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::TypedObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::TypedObject*, "System.Xml.Schema", "TypedObject");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.TypedObject
  // [TokenAttribute] Offset: FFFFFFFF
  class TypedObject : public ::Il2CppObject {
    public:
    // Nested type: ::System::Xml::Schema::TypedObject::DecimalStruct
    class DecimalStruct;
    public:
    // private System.Xml.Schema.TypedObject/System.Xml.Schema.DecimalStruct dstruct
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::TypedObject::DecimalStruct* dstruct;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::TypedObject::DecimalStruct*) == 0x8);
    // private System.Object ovalue
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* ovalue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String svalue
    // Size: 0x8
    // Offset: 0x20
    ::StringW svalue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaDatatype xsdtype
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::XmlSchemaDatatype* xsdtype;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDatatype*) == 0x8);
    // private System.Int32 dim
    // Size: 0x4
    // Offset: 0x30
    int dim;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean isList
    // Size: 0x1
    // Offset: 0x34
    bool isList;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Xml.Schema.TypedObject/System.Xml.Schema.DecimalStruct dstruct
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::TypedObject::DecimalStruct*& dyn_dstruct();
    // Get instance field reference: private System.Object ovalue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_ovalue();
    // Get instance field reference: private System.String svalue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_svalue();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDatatype xsdtype
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaDatatype*& dyn_xsdtype();
    // Get instance field reference: private System.Int32 dim
    [[deprecated("Use field access instead!")]] int& dyn_dim();
    // Get instance field reference: private System.Boolean isList
    [[deprecated("Use field access instead!")]] bool& dyn_isList();
    // public System.Int32 get_Dim()
    // Offset: 0xF75FD0
    int get_Dim();
    // public System.Boolean get_IsList()
    // Offset: 0xF75FD8
    bool get_IsList();
    // public System.Boolean get_IsDecimal()
    // Offset: 0xF75FE0
    bool get_IsDecimal();
    // public System.Decimal[] get_Dvalue()
    // Offset: 0xF75FFC
    ::ArrayW<::System::Decimal> get_Dvalue();
    // public System.Object get_Value()
    // Offset: 0xF76018
    ::Il2CppObject* get_Value();
    // public System.Xml.Schema.XmlSchemaDatatype get_Type()
    // Offset: 0xF76020
    ::System::Xml::Schema::XmlSchemaDatatype* get_Type();
    // public System.Void .ctor(System.Object obj, System.String svalue, System.Xml.Schema.XmlSchemaDatatype xsdtype)
    // Offset: 0xF76028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypedObject* New_ctor(::Il2CppObject* obj, ::StringW svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::TypedObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypedObject*, creationType>(obj, svalue, xsdtype)));
    }
    // public System.Void SetDecimal()
    // Offset: 0xF76198
    void SetDecimal();
    // private System.Boolean ListDValueEquals(System.Xml.Schema.TypedObject other)
    // Offset: 0xF76434
    bool ListDValueEquals(::System::Xml::Schema::TypedObject* other);
    // public System.Boolean Equals(System.Xml.Schema.TypedObject other)
    // Offset: 0xF76560
    bool Equals(::System::Xml::Schema::TypedObject* other);
    // public override System.String ToString()
    // Offset: 0xF76190
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Xml.Schema.TypedObject
  #pragma pack(pop)
  static check_size<sizeof(TypedObject), 52 + sizeof(bool)> __System_Xml_Schema_TypedObjectSizeCheck;
  static_assert(sizeof(TypedObject) == 0x35);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::get_Dim
// Il2CppName: get_Dim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::TypedObject::*)()>(&System::Xml::Schema::TypedObject::get_Dim)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "get_Dim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::get_IsList
// Il2CppName: get_IsList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::TypedObject::*)()>(&System::Xml::Schema::TypedObject::get_IsList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "get_IsList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::get_IsDecimal
// Il2CppName: get_IsDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::TypedObject::*)()>(&System::Xml::Schema::TypedObject::get_IsDecimal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "get_IsDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::get_Dvalue
// Il2CppName: get_Dvalue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Decimal> (System::Xml::Schema::TypedObject::*)()>(&System::Xml::Schema::TypedObject::get_Dvalue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "get_Dvalue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::TypedObject::*)()>(&System::Xml::Schema::TypedObject::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (System::Xml::Schema::TypedObject::*)()>(&System::Xml::Schema::TypedObject::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::SetDecimal
// Il2CppName: SetDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::TypedObject::*)()>(&System::Xml::Schema::TypedObject::SetDecimal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "SetDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::ListDValueEquals
// Il2CppName: ListDValueEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::TypedObject::*)(::System::Xml::Schema::TypedObject*)>(&System::Xml::Schema::TypedObject::ListDValueEquals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "TypedObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "ListDValueEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::TypedObject::*)(::System::Xml::Schema::TypedObject*)>(&System::Xml::Schema::TypedObject::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "TypedObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::TypedObject::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::TypedObject::*)()>(&System::Xml::Schema::TypedObject::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::TypedObject*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
