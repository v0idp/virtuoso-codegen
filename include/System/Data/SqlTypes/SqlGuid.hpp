// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Xml.Serialization.IXmlSerializable
#include "System/Xml/Serialization/IXmlSerializable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Data.SqlTypes.INullable
#include "System/Data/SqlTypes/INullable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Data::SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: EComparison
  struct EComparison;
  // Forward declaring type: SqlBoolean
  struct SqlBoolean;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchema
  class XmlSchema;
  // Forward declaring type: XmlSchemaSet
  class XmlSchemaSet;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlWriter
  class XmlWriter;
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlGuid
  struct SqlGuid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlGuid, "System.Data.SqlTypes", "SqlGuid");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Data.SqlTypes.SqlGuid
  // [TokenAttribute] Offset: FFFFFFFF
  // [XmlSchemaProviderAttribute] Offset: 6BA7E0
  struct SqlGuid/*, public ::System::ValueType, public ::System::Xml::Serialization::IXmlSerializable, public ::System::IComparable, public ::System::Data::SqlTypes::INullable*/ {
    public:
    public:
    // private System.Byte[] m_value
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> m_value;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: SqlGuid
    constexpr SqlGuid(::ArrayW<uint8_t> m_value_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Xml::Serialization::IXmlSerializable
    operator ::System::Xml::Serialization::IXmlSerializable() noexcept {
      return *reinterpret_cast<::System::Xml::Serialization::IXmlSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Data::SqlTypes::INullable
    operator ::System::Data::SqlTypes::INullable() noexcept {
      return *reinterpret_cast<::System::Data::SqlTypes::INullable*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return m_value;
    }
    // Get static field: static private readonly System.Int32 s_sizeOfGuid
    static int _get_s_sizeOfGuid();
    // Set static field: static private readonly System.Int32 s_sizeOfGuid
    static void _set_s_sizeOfGuid(int value);
    // Get static field: static private readonly System.Int32[] s_rgiGuidOrder
    static ::ArrayW<int> _get_s_rgiGuidOrder();
    // Set static field: static private readonly System.Int32[] s_rgiGuidOrder
    static void _set_s_rgiGuidOrder(::ArrayW<int> value);
    // Get static field: static public readonly System.Data.SqlTypes.SqlGuid Null
    static ::System::Data::SqlTypes::SqlGuid _get_Null();
    // Set static field: static public readonly System.Data.SqlTypes.SqlGuid Null
    static void _set_Null(::System::Data::SqlTypes::SqlGuid value);
    // Get instance field reference: private System.Byte[] m_value
    [[deprecated]] ::ArrayW<uint8_t>& dyn_m_value();
    // public System.Boolean get_IsNull()
    // Offset: 0x13C9530
    bool get_IsNull();
    // public System.Guid get_Value()
    // Offset: 0x13C9540
    ::System::Guid get_Value();
    // private System.Void .ctor(System.Boolean fNull)
    // Offset: 0x13C94F0
    SqlGuid(bool fNull);
    // public System.Void .ctor(System.Guid g)
    // Offset: 0x13C94F8
    SqlGuid(::System::Guid g);
    // static private System.Void .cctor()
    // Offset: 0x13CA03C
    static void _cctor();
    // static private System.Data.SqlTypes.EComparison Compare(System.Data.SqlTypes.SqlGuid x, System.Data.SqlTypes.SqlGuid y)
    // Offset: 0x13C961C
    static ::System::Data::SqlTypes::EComparison Compare(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x13C99B8
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Data.SqlTypes.SqlGuid value)
    // Offset: 0x13C9AF8
    int CompareTo(::System::Data::SqlTypes::SqlGuid value);
    // private System.Xml.Schema.XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema()
    // Offset: 0x13C9D44
    ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();
    // private System.Void System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader reader)
    // Offset: 0x13C9D4C
    void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);
    // private System.Void System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter writer)
    // Offset: 0x13C9E80
    void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);
    // static public System.Xml.XmlQualifiedName GetXsdType(System.Xml.Schema.XmlSchemaSet schemaSet)
    // Offset: 0x13C9FB4
    static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);
    // public override System.String ToString()
    // Offset: 0x13C95D4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x13C9C38
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x13C9D04
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Data.SqlTypes.SqlGuid
  #pragma pack(pop)
  static check_size<sizeof(SqlGuid), 0 + sizeof(::ArrayW<uint8_t>)> __System_Data_SqlTypes_SqlGuidSizeCheck;
  static_assert(sizeof(SqlGuid) == 0x8);
  // static public System.Data.SqlTypes.SqlBoolean op_Equality(System.Data.SqlTypes.SqlGuid x, System.Data.SqlTypes.SqlGuid y)
  // Offset: 0x13C9730
  ::System::Data::SqlTypes::SqlBoolean operator ==(const ::System::Data::SqlTypes::SqlGuid& x, const ::System::Data::SqlTypes::SqlGuid& y);
  // static public System.Data.SqlTypes.SqlBoolean op_LessThan(System.Data.SqlTypes.SqlGuid x, System.Data.SqlTypes.SqlGuid y)
  // Offset: 0x13C9808
  ::System::Data::SqlTypes::SqlBoolean operator <(const ::System::Data::SqlTypes::SqlGuid& x, const ::System::Data::SqlTypes::SqlGuid& y);
  // static public System.Data.SqlTypes.SqlBoolean op_GreaterThan(System.Data.SqlTypes.SqlGuid x, System.Data.SqlTypes.SqlGuid y)
  // Offset: 0x13C98E0
  ::System::Data::SqlTypes::SqlBoolean operator >(const ::System::Data::SqlTypes::SqlGuid& x, const ::System::Data::SqlTypes::SqlGuid& y);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlGuid::*)()>(&System::Data::SqlTypes::SqlGuid::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (System::Data::SqlTypes::SqlGuid::*)()>(&System::Data::SqlTypes::SqlGuid::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::SqlGuid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::SqlGuid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::SqlTypes::SqlGuid::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::EComparison (*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid)>(&System::Data::SqlTypes::SqlGuid::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlGuid")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlGuid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlGuid::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlGuid::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlGuid::*)(::System::Data::SqlTypes::SqlGuid)>(&System::Data::SqlTypes::SqlGuid::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlGuid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::System_Xml_Serialization_IXmlSerializable_GetSchema
// Il2CppName: System.Xml.Serialization.IXmlSerializable.GetSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (System::Data::SqlTypes::SqlGuid::*)()>(&System::Data::SqlTypes::SqlGuid::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "System.Xml.Serialization.IXmlSerializable.GetSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::System_Xml_Serialization_IXmlSerializable_ReadXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.ReadXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlGuid::*)(::System::Xml::XmlReader*)>(&System::Data::SqlTypes::SqlGuid::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::System_Xml_Serialization_IXmlSerializable_WriteXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.WriteXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlGuid::*)(::System::Xml::XmlWriter*)>(&System::Data::SqlTypes::SqlGuid::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::GetXsdType
// Il2CppName: GetXsdType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&System::Data::SqlTypes::SqlGuid::GetXsdType)> {
  static const MethodInfo* get() {
    static auto* schemaSet = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "GetXsdType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaSet});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::SqlTypes::SqlGuid::*)()>(&System::Data::SqlTypes::SqlGuid::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlGuid::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlGuid::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlGuid::*)()>(&System::Data::SqlTypes::SqlGuid::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlGuid), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlGuid::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!