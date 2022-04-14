// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Xml.Serialization.IXmlSerializable
#include "System/Xml/Serialization/IXmlSerializable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Data.SqlTypes.INullable
#include "System/Data/SqlTypes/INullable.hpp"
// Including type: System.Data.SqlTypes.SqlCompareOptions
#include "System/Data/SqlTypes/SqlCompareOptions.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: UnicodeEncoding
  class UnicodeEncoding;
}
// Forward declaring namespace: System::Data::SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlBoolean
  struct SqlBoolean;
  // Forward declaring type: EComparison
  struct EComparison;
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
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlString
  struct SqlString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlString, "System.Data.SqlTypes", "SqlString");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Data.SqlTypes.SqlString
  // [TokenAttribute] Offset: FFFFFFFF
  // [XmlSchemaProviderAttribute] Offset: 6BA940
  struct SqlString/*, public ::System::ValueType, public ::System::Xml::Serialization::IXmlSerializable, public ::System::IComparable, public ::System::Data::SqlTypes::INullable*/ {
    public:
    public:
    // private System.String m_value
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Globalization.CompareInfo m_cmpInfo
    // Size: 0x8
    // Offset: 0x8
    ::System::Globalization::CompareInfo* m_cmpInfo;
    // Field size check
    static_assert(sizeof(::System::Globalization::CompareInfo*) == 0x8);
    // private System.Int32 m_lcid
    // Size: 0x4
    // Offset: 0x10
    int m_lcid;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Data.SqlTypes.SqlCompareOptions m_flag
    // Size: 0x4
    // Offset: 0x14
    ::System::Data::SqlTypes::SqlCompareOptions m_flag;
    // Field size check
    static_assert(sizeof(::System::Data::SqlTypes::SqlCompareOptions) == 0x4);
    // private System.Boolean m_fNotNull
    // Size: 0x1
    // Offset: 0x18
    bool m_fNotNull;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: SqlString
    constexpr SqlString(::StringW m_value_ = {}, ::System::Globalization::CompareInfo* m_cmpInfo_ = {}, int m_lcid_ = {}, ::System::Data::SqlTypes::SqlCompareOptions m_flag_ = {}, bool m_fNotNull_ = {}) noexcept : m_value{m_value_}, m_cmpInfo{m_cmpInfo_}, m_lcid{m_lcid_}, m_flag{m_flag_}, m_fNotNull{m_fNotNull_} {}
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
    // Get static field: static public readonly System.Data.SqlTypes.SqlString Null
    static ::System::Data::SqlTypes::SqlString _get_Null();
    // Set static field: static public readonly System.Data.SqlTypes.SqlString Null
    static void _set_Null(::System::Data::SqlTypes::SqlString value);
    // Get static field: static readonly System.Text.UnicodeEncoding s_unicodeEncoding
    static ::System::Text::UnicodeEncoding* _get_s_unicodeEncoding();
    // Set static field: static readonly System.Text.UnicodeEncoding s_unicodeEncoding
    static void _set_s_unicodeEncoding(::System::Text::UnicodeEncoding* value);
    // Get static field: static public readonly System.Int32 IgnoreCase
    static int _get_IgnoreCase();
    // Set static field: static public readonly System.Int32 IgnoreCase
    static void _set_IgnoreCase(int value);
    // Get static field: static public readonly System.Int32 IgnoreWidth
    static int _get_IgnoreWidth();
    // Set static field: static public readonly System.Int32 IgnoreWidth
    static void _set_IgnoreWidth(int value);
    // Get static field: static public readonly System.Int32 IgnoreNonSpace
    static int _get_IgnoreNonSpace();
    // Set static field: static public readonly System.Int32 IgnoreNonSpace
    static void _set_IgnoreNonSpace(int value);
    // Get static field: static public readonly System.Int32 IgnoreKanaType
    static int _get_IgnoreKanaType();
    // Set static field: static public readonly System.Int32 IgnoreKanaType
    static void _set_IgnoreKanaType(int value);
    // Get static field: static public readonly System.Int32 BinarySort
    static int _get_BinarySort();
    // Set static field: static public readonly System.Int32 BinarySort
    static void _set_BinarySort(int value);
    // Get static field: static public readonly System.Int32 BinarySort2
    static int _get_BinarySort2();
    // Set static field: static public readonly System.Int32 BinarySort2
    static void _set_BinarySort2(int value);
    // Get static field: static private readonly System.Data.SqlTypes.SqlCompareOptions s_iDefaultFlag
    static ::System::Data::SqlTypes::SqlCompareOptions _get_s_iDefaultFlag();
    // Set static field: static private readonly System.Data.SqlTypes.SqlCompareOptions s_iDefaultFlag
    static void _set_s_iDefaultFlag(::System::Data::SqlTypes::SqlCompareOptions value);
    // Get static field: static private readonly System.Globalization.CompareOptions s_iValidCompareOptionMask
    static ::System::Globalization::CompareOptions _get_s_iValidCompareOptionMask();
    // Set static field: static private readonly System.Globalization.CompareOptions s_iValidCompareOptionMask
    static void _set_s_iValidCompareOptionMask(::System::Globalization::CompareOptions value);
    // Get static field: static readonly System.Data.SqlTypes.SqlCompareOptions s_iValidSqlCompareOptionMask
    static ::System::Data::SqlTypes::SqlCompareOptions _get_s_iValidSqlCompareOptionMask();
    // Set static field: static readonly System.Data.SqlTypes.SqlCompareOptions s_iValidSqlCompareOptionMask
    static void _set_s_iValidSqlCompareOptionMask(::System::Data::SqlTypes::SqlCompareOptions value);
    // Get static field: static readonly System.Int32 s_lcidUSEnglish
    static int _get_s_lcidUSEnglish();
    // Set static field: static readonly System.Int32 s_lcidUSEnglish
    static void _set_s_lcidUSEnglish(int value);
    // Get static field: static private readonly System.Int32 s_lcidBinary
    static int _get_s_lcidBinary();
    // Set static field: static private readonly System.Int32 s_lcidBinary
    static void _set_s_lcidBinary(int value);
    // Get instance field reference: private System.String m_value
    [[deprecated]] ::StringW& dyn_m_value();
    // Get instance field reference: private System.Globalization.CompareInfo m_cmpInfo
    [[deprecated]] ::System::Globalization::CompareInfo*& dyn_m_cmpInfo();
    // Get instance field reference: private System.Int32 m_lcid
    [[deprecated]] int& dyn_m_lcid();
    // Get instance field reference: private System.Data.SqlTypes.SqlCompareOptions m_flag
    [[deprecated]] ::System::Data::SqlTypes::SqlCompareOptions& dyn_m_flag();
    // Get instance field reference: private System.Boolean m_fNotNull
    [[deprecated]] bool& dyn_m_fNotNull();
    // public System.Boolean get_IsNull()
    // Offset: 0x13DA594
    bool get_IsNull();
    // public System.String get_Value()
    // Offset: 0x13DA5A4
    ::StringW get_Value();
    // private System.Void .ctor(System.Boolean fNull)
    // Offset: 0x13DA2C4
    SqlString(bool fNull);
    // public System.Void .ctor(System.String data, System.Int32 lcid, System.Data.SqlTypes.SqlCompareOptions compareOptions)
    // Offset: 0x13DA2D4
    SqlString(::StringW data, int lcid, ::System::Data::SqlTypes::SqlCompareOptions compareOptions);
    // public System.Void .ctor(System.String data)
    // Offset: 0x13DA424
    SqlString(::StringW data);
    // private System.Void .ctor(System.Int32 lcid, System.Data.SqlTypes.SqlCompareOptions compareOptions, System.String data, System.Globalization.CompareInfo cmpInfo)
    // Offset: 0x13DA4F4
    SqlString(int lcid, ::System::Data::SqlTypes::SqlCompareOptions compareOptions, ::StringW data, ::System::Globalization::CompareInfo* cmpInfo);
    // static private System.Void .cctor()
    // Offset: 0x13DBA4C
    static void _cctor();
    // private System.Void SetCompareInfo()
    // Offset: 0x13DA5F0
    void SetCompareInfo();
    // static private System.Int32 StringCompare(System.Data.SqlTypes.SqlString x, System.Data.SqlTypes.SqlString y)
    // Offset: 0x13DA818
    static int StringCompare(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y);
    // static private System.Data.SqlTypes.SqlBoolean Compare(System.Data.SqlTypes.SqlString x, System.Data.SqlTypes.SqlString y, System.Data.SqlTypes.EComparison ecExpectedResult)
    // Offset: 0x13DAE90
    static ::System::Data::SqlTypes::SqlBoolean Compare(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y, ::System::Data::SqlTypes::EComparison ecExpectedResult);
    // static private System.Void ValidateSqlCompareOptions(System.Data.SqlTypes.SqlCompareOptions compareOptions)
    // Offset: 0x13DA36C
    static void ValidateSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions compareOptions);
    // static public System.Globalization.CompareOptions CompareOptionsFromSqlCompareOptions(System.Data.SqlTypes.SqlCompareOptions compareOptions)
    // Offset: 0x13DADB4
    static ::System::Globalization::CompareOptions CompareOptionsFromSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions compareOptions);
    // private System.Boolean FBinarySort()
    // Offset: 0x13DB08C
    bool FBinarySort();
    // static private System.Int32 CompareBinary(System.Data.SqlTypes.SqlString x, System.Data.SqlTypes.SqlString y)
    // Offset: 0x13DAA64
    static int CompareBinary(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y);
    // static private System.Int32 CompareBinary2(System.Data.SqlTypes.SqlString x, System.Data.SqlTypes.SqlString y)
    // Offset: 0x13DAC38
    static int CompareBinary2(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x13DB0AC
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Data.SqlTypes.SqlString value)
    // Offset: 0x13DB200
    int CompareTo(::System::Data::SqlTypes::SqlString value);
    // private System.Xml.Schema.XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema()
    // Offset: 0x13DB7D8
    ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();
    // private System.Void System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader reader)
    // Offset: 0x13DB7E0
    void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);
    // private System.Void System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter writer)
    // Offset: 0x13DB8E8
    void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);
    // static public System.Xml.XmlQualifiedName GetXsdType(System.Xml.Schema.XmlSchemaSet schemaSet)
    // Offset: 0x13DB9C4
    static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);
    // public override System.String ToString()
    // Offset: 0x13DA690
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x13DB2D4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x13DB448
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Data.SqlTypes.SqlString
  #pragma pack(pop)
  static check_size<sizeof(SqlString), 24 + sizeof(bool)> __System_Data_SqlTypes_SqlStringSizeCheck;
  static_assert(sizeof(SqlString) == 0x19);
  // static public System.Data.SqlTypes.SqlString op_Addition(System.Data.SqlTypes.SqlString x, System.Data.SqlTypes.SqlString y)
  // Offset: 0x13DA6A8
  ::System::Data::SqlTypes::SqlString operator+(const ::System::Data::SqlTypes::SqlString& x, const ::System::Data::SqlTypes::SqlString& y);
  // static public System.Data.SqlTypes.SqlBoolean op_Equality(System.Data.SqlTypes.SqlString x, System.Data.SqlTypes.SqlString y)
  // Offset: 0x13DAFE8
  ::System::Data::SqlTypes::SqlBoolean operator ==(const ::System::Data::SqlTypes::SqlString& x, const ::System::Data::SqlTypes::SqlString& y);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlString::*)()>(&System::Data::SqlTypes::SqlString::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::SqlTypes::SqlString::*)()>(&System::Data::SqlTypes::SqlString::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::SqlString
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::SqlString
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::SqlString
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::SqlString
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::SqlTypes::SqlString::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::SetCompareInfo
// Il2CppName: SetCompareInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlString::*)()>(&System::Data::SqlTypes::SqlString::SetCompareInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "SetCompareInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::StringCompare
// Il2CppName: StringCompare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString)>(&System::Data::SqlTypes::SqlString::StringCompare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "StringCompare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::EComparison)>(&System::Data::SqlTypes::SqlString::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    static auto* ecExpectedResult = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "EComparison")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, ecExpectedResult});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::ValidateSqlCompareOptions
// Il2CppName: ValidateSqlCompareOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Data::SqlTypes::SqlCompareOptions)>(&System::Data::SqlTypes::SqlString::ValidateSqlCompareOptions)> {
  static const MethodInfo* get() {
    static auto* compareOptions = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlCompareOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "ValidateSqlCompareOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compareOptions});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::CompareOptionsFromSqlCompareOptions
// Il2CppName: CompareOptionsFromSqlCompareOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CompareOptions (*)(::System::Data::SqlTypes::SqlCompareOptions)>(&System::Data::SqlTypes::SqlString::CompareOptionsFromSqlCompareOptions)> {
  static const MethodInfo* get() {
    static auto* compareOptions = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlCompareOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "CompareOptionsFromSqlCompareOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compareOptions});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::FBinarySort
// Il2CppName: FBinarySort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlString::*)()>(&System::Data::SqlTypes::SqlString::FBinarySort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "FBinarySort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::CompareBinary
// Il2CppName: CompareBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString)>(&System::Data::SqlTypes::SqlString::CompareBinary)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "CompareBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::CompareBinary2
// Il2CppName: CompareBinary2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString)>(&System::Data::SqlTypes::SqlString::CompareBinary2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "CompareBinary2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlString::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlString::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlString::*)(::System::Data::SqlTypes::SqlString)>(&System::Data::SqlTypes::SqlString::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_GetSchema
// Il2CppName: System.Xml.Serialization.IXmlSerializable.GetSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (System::Data::SqlTypes::SqlString::*)()>(&System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "System.Xml.Serialization.IXmlSerializable.GetSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_ReadXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.ReadXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlString::*)(::System::Xml::XmlReader*)>(&System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_WriteXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.WriteXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlString::*)(::System::Xml::XmlWriter*)>(&System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::GetXsdType
// Il2CppName: GetXsdType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&System::Data::SqlTypes::SqlString::GetXsdType)> {
  static const MethodInfo* get() {
    static auto* schemaSet = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "GetXsdType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaSet});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::SqlTypes::SqlString::*)()>(&System::Data::SqlTypes::SqlString::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlString::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlString::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlString::*)()>(&System::Data::SqlTypes::SqlString::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlString), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlString::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
