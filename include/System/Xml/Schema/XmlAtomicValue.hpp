// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XPath.XPathItem
#include "System/Xml/XPath/XPathItem.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.TypeCode
#include "System/TypeCode.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlAtomicValue
  class XmlAtomicValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlAtomicValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAtomicValue*, "System.Xml.Schema", "XmlAtomicValue");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Xml.Schema.XmlAtomicValue
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlAtomicValue : public ::System::Xml::XPath::XPathItem/*, public ::System::ICloneable*/ {
    public:
    // Nested type: ::System::Xml::Schema::XmlAtomicValue::Union
    struct Union;
    // Nested type: ::System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName
    class NamespacePrefixForQName;
    // WARNING Size may be invalid!
    // WARNING Layout: Explicit may not be correctly taken into account!
    // Autogenerated type: System.Xml.Schema.XmlAtomicValue/System.Xml.Schema.Union
    // [TokenAttribute] Offset: FFFFFFFF
    struct Union/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean boolVal
      // Size: 0x1
      // Offset: 0x0
      bool boolVal;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public System.Double dblVal
      // Size: 0x8
      // Offset: 0x0
      double dblVal;
      // Field size check
      static_assert(sizeof(double) == 0x8);
      // public System.Int64 i64Val
      // Size: 0x8
      // Offset: 0x0
      int64_t i64Val;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // public System.Int32 i32Val
      // Size: 0x4
      // Offset: 0x0
      int i32Val;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.DateTime dtVal
      // Size: 0x8
      // Offset: 0x0
      ::System::DateTime dtVal;
      // Field size check
      static_assert(sizeof(::System::DateTime) == 0x8);
      public:
      // Creating value type constructor for type: Union
      constexpr Union(bool boolVal_ = {}, double dblVal_ = {}, int64_t i64Val_ = {}, int i32Val_ = {}, ::System::DateTime dtVal_ = {}) noexcept : boolVal{boolVal_}, dblVal{dblVal_}, i64Val{i64Val_}, i32Val{i32Val_}, dtVal{dtVal_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Boolean boolVal
      [[deprecated("Use field access instead!")]] bool& dyn_boolVal();
      // Get instance field reference: public System.Double dblVal
      [[deprecated("Use field access instead!")]] double& dyn_dblVal();
      // Get instance field reference: public System.Int64 i64Val
      [[deprecated("Use field access instead!")]] int64_t& dyn_i64Val();
      // Get instance field reference: public System.Int32 i32Val
      [[deprecated("Use field access instead!")]] int& dyn_i32Val();
      // Get instance field reference: public System.DateTime dtVal
      [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_dtVal();
    }; // System.Xml.Schema.XmlAtomicValue/System.Xml.Schema.Union
    // WARNING Not writing size check since size may be invalid!
    public:
    // private System.Xml.Schema.XmlSchemaType xmlType
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::XmlSchemaType* xmlType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaType*) == 0x8);
    // private System.Object objVal
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* objVal;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.TypeCode clrType
    // Size: 0x4
    // Offset: 0x20
    ::System::TypeCode clrType;
    // Field size check
    static_assert(sizeof(::System::TypeCode) == 0x4);
    // private System.Xml.Schema.XmlAtomicValue/System.Xml.Schema.Union unionVal
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Xml::Schema::XmlAtomicValue::Union unionVal;
    // private System.Xml.Schema.XmlAtomicValue/System.Xml.Schema.NamespacePrefixForQName nsPrefix
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName* nsPrefix;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.Xml.Schema.XmlSchemaType xmlType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaType*& dyn_xmlType();
    // Get instance field reference: private System.Object objVal
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_objVal();
    // Get instance field reference: private System.TypeCode clrType
    [[deprecated("Use field access instead!")]] ::System::TypeCode& dyn_clrType();
    // Get instance field reference: private System.Xml.Schema.XmlAtomicValue/System.Xml.Schema.Union unionVal
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlAtomicValue::Union& dyn_unionVal();
    // Get instance field reference: private System.Xml.Schema.XmlAtomicValue/System.Xml.Schema.NamespacePrefixForQName nsPrefix
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName*& dyn_nsPrefix();
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.Boolean value)
    // Offset: 0x11B0050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value)));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.DateTime value)
    // Offset: 0x11B0480
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::DateTime value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value)));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.Double value)
    // Offset: 0x11B0A20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, double value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value)));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.Int32 value)
    // Offset: 0x11B0CCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value)));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.Int64 value)
    // Offset: 0x11B0F78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value)));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.String value)
    // Offset: 0x11B1234
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value)));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.String value, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x11B63CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value, nsResolver)));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.Object value)
    // Offset: 0x11B0754
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value)));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaType xmlType, System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x11B2A74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::Il2CppObject* value, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAtomicValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue*, creationType>(xmlType, value, nsResolver)));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x11B6668
    ::Il2CppObject* System_ICloneable_Clone();
    // private System.String GetPrefixFromQName(System.String value)
    // Offset: 0x11B6590
    ::StringW GetPrefixFromQName(::StringW value);
    // public override System.Xml.Schema.XmlSchemaType get_XmlType()
    // Offset: 0x11B666C
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Xml.Schema.XmlSchemaType XPathItem::get_XmlType()
    ::System::Xml::Schema::XmlSchemaType* get_XmlType();
    // public override System.Type get_ValueType()
    // Offset: 0x11B6674
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Type XPathItem::get_ValueType()
    ::System::Type* get_ValueType();
    // public override System.Object get_TypedValue()
    // Offset: 0x11B66A0
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Object XPathItem::get_TypedValue()
    ::Il2CppObject* get_TypedValue();
    // public override System.Boolean get_ValueAsBoolean()
    // Offset: 0x11B6880
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Boolean XPathItem::get_ValueAsBoolean()
    bool get_ValueAsBoolean();
    // public override System.DateTime get_ValueAsDateTime()
    // Offset: 0x11B6968
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.DateTime XPathItem::get_ValueAsDateTime()
    ::System::DateTime get_ValueAsDateTime();
    // public override System.Double get_ValueAsDouble()
    // Offset: 0x11B6A64
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Double XPathItem::get_ValueAsDouble()
    double get_ValueAsDouble();
    // public override System.Int32 get_ValueAsInt()
    // Offset: 0x11B6B58
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Int32 XPathItem::get_ValueAsInt()
    int get_ValueAsInt();
    // public override System.Int64 get_ValueAsLong()
    // Offset: 0x11B6C48
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Int64 XPathItem::get_ValueAsLong()
    int64_t get_ValueAsLong();
    // public override System.String get_Value()
    // Offset: 0x11B6F8C
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.String XPathItem::get_Value()
    ::StringW get_Value();
    // public override System.Object ValueAs(System.Type type, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x11B6D44
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Object XPathItem::ValueAs(System.Type type, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ValueAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.String ToString()
    // Offset: 0x11B709C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Xml.Schema.XmlAtomicValue
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAtomicValue::Union, "System.Xml.Schema", "XmlAtomicValue/Union");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::GetPrefixFromQName
// Il2CppName: GetPrefixFromQName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlAtomicValue::*)(::StringW)>(&System::Xml::Schema::XmlAtomicValue::GetPrefixFromQName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "GetPrefixFromQName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_XmlType
// Il2CppName: get_XmlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_XmlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_XmlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_TypedValue
// Il2CppName: get_TypedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_TypedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_TypedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_ValueAsBoolean
// Il2CppName: get_ValueAsBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsBoolean)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_ValueAsBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_ValueAsDateTime
// Il2CppName: get_ValueAsDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_ValueAsDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_ValueAsDouble
// Il2CppName: get_ValueAsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_ValueAsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_ValueAsInt
// Il2CppName: get_ValueAsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_ValueAsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_ValueAsLong
// Il2CppName: get_ValueAsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_ValueAsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::ValueAs
// Il2CppName: ValueAs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAtomicValue::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlAtomicValue::ValueAs)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "ValueAs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
