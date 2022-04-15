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
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data::SqlTypes
namespace System::Data::SqlTypes {
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
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlDateTime
  struct SqlDateTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlDateTime, "System.Data.SqlTypes", "SqlDateTime");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Data.SqlTypes.SqlDateTime
  // [TokenAttribute] Offset: FFFFFFFF
  // [XmlSchemaProviderAttribute] Offset: 6BA738
  struct SqlDateTime/*, public ::System::ValueType, public ::System::Xml::Serialization::IXmlSerializable, public ::System::IComparable, public ::System::Data::SqlTypes::INullable*/ {
    public:
    public:
    // private System.Boolean m_fNotNull
    // Size: 0x1
    // Offset: 0x0
    bool m_fNotNull;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_fNotNull and: m_day
    char __padding0[0x3] = {};
    // private System.Int32 m_day
    // Size: 0x4
    // Offset: 0x4
    int m_day;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_time
    // Size: 0x4
    // Offset: 0x8
    int m_time;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SqlDateTime
    constexpr SqlDateTime(bool m_fNotNull_ = {}, int m_day_ = {}, int m_time_ = {}) noexcept : m_fNotNull{m_fNotNull_}, m_day{m_day_}, m_time{m_time_} {}
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
    // Get static field: static private readonly System.Double s_SQLTicksPerMillisecond
    static double _get_s_SQLTicksPerMillisecond();
    // Set static field: static private readonly System.Double s_SQLTicksPerMillisecond
    static void _set_s_SQLTicksPerMillisecond(double value);
    // Get static field: static public readonly System.Int32 SQLTicksPerSecond
    static int _get_SQLTicksPerSecond();
    // Set static field: static public readonly System.Int32 SQLTicksPerSecond
    static void _set_SQLTicksPerSecond(int value);
    // Get static field: static public readonly System.Int32 SQLTicksPerMinute
    static int _get_SQLTicksPerMinute();
    // Set static field: static public readonly System.Int32 SQLTicksPerMinute
    static void _set_SQLTicksPerMinute(int value);
    // Get static field: static public readonly System.Int32 SQLTicksPerHour
    static int _get_SQLTicksPerHour();
    // Set static field: static public readonly System.Int32 SQLTicksPerHour
    static void _set_SQLTicksPerHour(int value);
    // Get static field: static private readonly System.Int32 s_SQLTicksPerDay
    static int _get_s_SQLTicksPerDay();
    // Set static field: static private readonly System.Int32 s_SQLTicksPerDay
    static void _set_s_SQLTicksPerDay(int value);
    // Get static field: static private readonly System.Int64 s_ticksPerSecond
    static int64_t _get_s_ticksPerSecond();
    // Set static field: static private readonly System.Int64 s_ticksPerSecond
    static void _set_s_ticksPerSecond(int64_t value);
    // Get static field: static private readonly System.DateTime s_SQLBaseDate
    static ::System::DateTime _get_s_SQLBaseDate();
    // Set static field: static private readonly System.DateTime s_SQLBaseDate
    static void _set_s_SQLBaseDate(::System::DateTime value);
    // Get static field: static private readonly System.Int64 s_SQLBaseDateTicks
    static int64_t _get_s_SQLBaseDateTicks();
    // Set static field: static private readonly System.Int64 s_SQLBaseDateTicks
    static void _set_s_SQLBaseDateTicks(int64_t value);
    // Get static field: static private readonly System.Int32 s_minYear
    static int _get_s_minYear();
    // Set static field: static private readonly System.Int32 s_minYear
    static void _set_s_minYear(int value);
    // Get static field: static private readonly System.Int32 s_maxYear
    static int _get_s_maxYear();
    // Set static field: static private readonly System.Int32 s_maxYear
    static void _set_s_maxYear(int value);
    // Get static field: static private readonly System.Int32 s_minDay
    static int _get_s_minDay();
    // Set static field: static private readonly System.Int32 s_minDay
    static void _set_s_minDay(int value);
    // Get static field: static private readonly System.Int32 s_maxDay
    static int _get_s_maxDay();
    // Set static field: static private readonly System.Int32 s_maxDay
    static void _set_s_maxDay(int value);
    // Get static field: static private readonly System.Int32 s_minTime
    static int _get_s_minTime();
    // Set static field: static private readonly System.Int32 s_minTime
    static void _set_s_minTime(int value);
    // Get static field: static private readonly System.Int32 s_maxTime
    static int _get_s_maxTime();
    // Set static field: static private readonly System.Int32 s_maxTime
    static void _set_s_maxTime(int value);
    // Get static field: static private readonly System.Int32 s_dayBase
    static int _get_s_dayBase();
    // Set static field: static private readonly System.Int32 s_dayBase
    static void _set_s_dayBase(int value);
    // Get static field: static private readonly System.Int32[] s_daysToMonth365
    static ::ArrayW<int> _get_s_daysToMonth365();
    // Set static field: static private readonly System.Int32[] s_daysToMonth365
    static void _set_s_daysToMonth365(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32[] s_daysToMonth366
    static ::ArrayW<int> _get_s_daysToMonth366();
    // Set static field: static private readonly System.Int32[] s_daysToMonth366
    static void _set_s_daysToMonth366(::ArrayW<int> value);
    // Get static field: static private readonly System.DateTime s_minDateTime
    static ::System::DateTime _get_s_minDateTime();
    // Set static field: static private readonly System.DateTime s_minDateTime
    static void _set_s_minDateTime(::System::DateTime value);
    // Get static field: static private readonly System.DateTime s_maxDateTime
    static ::System::DateTime _get_s_maxDateTime();
    // Set static field: static private readonly System.DateTime s_maxDateTime
    static void _set_s_maxDateTime(::System::DateTime value);
    // Get static field: static private readonly System.TimeSpan s_minTimeSpan
    static ::System::TimeSpan _get_s_minTimeSpan();
    // Set static field: static private readonly System.TimeSpan s_minTimeSpan
    static void _set_s_minTimeSpan(::System::TimeSpan value);
    // Get static field: static private readonly System.TimeSpan s_maxTimeSpan
    static ::System::TimeSpan _get_s_maxTimeSpan();
    // Set static field: static private readonly System.TimeSpan s_maxTimeSpan
    static void _set_s_maxTimeSpan(::System::TimeSpan value);
    // Get static field: static private readonly System.String s_ISO8601_DateTimeFormat
    static ::StringW _get_s_ISO8601_DateTimeFormat();
    // Set static field: static private readonly System.String s_ISO8601_DateTimeFormat
    static void _set_s_ISO8601_DateTimeFormat(::StringW value);
    // Get static field: static private readonly System.String[] s_dateTimeFormats
    static ::ArrayW<::StringW> _get_s_dateTimeFormats();
    // Set static field: static private readonly System.String[] s_dateTimeFormats
    static void _set_s_dateTimeFormats(::ArrayW<::StringW> value);
    // Get static field: static public readonly System.Data.SqlTypes.SqlDateTime MinValue
    static ::System::Data::SqlTypes::SqlDateTime _get_MinValue();
    // Set static field: static public readonly System.Data.SqlTypes.SqlDateTime MinValue
    static void _set_MinValue(::System::Data::SqlTypes::SqlDateTime value);
    // Get static field: static public readonly System.Data.SqlTypes.SqlDateTime MaxValue
    static ::System::Data::SqlTypes::SqlDateTime _get_MaxValue();
    // Set static field: static public readonly System.Data.SqlTypes.SqlDateTime MaxValue
    static void _set_MaxValue(::System::Data::SqlTypes::SqlDateTime value);
    // Get static field: static public readonly System.Data.SqlTypes.SqlDateTime Null
    static ::System::Data::SqlTypes::SqlDateTime _get_Null();
    // Set static field: static public readonly System.Data.SqlTypes.SqlDateTime Null
    static void _set_Null(::System::Data::SqlTypes::SqlDateTime value);
    // Get instance field reference: private System.Boolean m_fNotNull
    [[deprecated("Use field access instead!")]] bool& dyn_m_fNotNull();
    // Get instance field reference: private System.Int32 m_day
    [[deprecated("Use field access instead!")]] int& dyn_m_day();
    // Get instance field reference: private System.Int32 m_time
    [[deprecated("Use field access instead!")]] int& dyn_m_time();
    // public System.Boolean get_IsNull()
    // Offset: 0x122FF54
    bool get_IsNull();
    // public System.DateTime get_Value()
    // Offset: 0x122F938
    ::System::DateTime get_Value();
    // public System.Int32 get_DayTicks()
    // Offset: 0x12302D0
    int get_DayTicks();
    // public System.Int32 get_TimeTicks()
    // Offset: 0x1230320
    int get_TimeTicks();
    // private System.Void .ctor(System.Boolean fNull)
    // Offset: 0x122FD04
    SqlDateTime(bool fNull);
    // public System.Void .ctor(System.DateTime value)
    // Offset: 0x122F430
    SqlDateTime(::System::DateTime value);
    // public System.Void .ctor(System.Int32 dayTicks, System.Int32 timeTicks)
    // Offset: 0x122FE0C
    SqlDateTime(int dayTicks, int timeTicks);
    // static private System.Void .cctor()
    // Offset: 0x1230F4C
    static void _cctor();
    // static private System.TimeSpan ToTimeSpan(System.Data.SqlTypes.SqlDateTime value)
    // Offset: 0x122FF64
    static ::System::TimeSpan ToTimeSpan(::System::Data::SqlTypes::SqlDateTime value);
    // static private System.DateTime ToDateTime(System.Data.SqlTypes.SqlDateTime value)
    // Offset: 0x123001C
    static ::System::DateTime ToDateTime(::System::Data::SqlTypes::SqlDateTime value);
    // static private System.Data.SqlTypes.SqlDateTime FromTimeSpan(System.TimeSpan value)
    // Offset: 0x12300B4
    static ::System::Data::SqlTypes::SqlDateTime FromTimeSpan(::System::TimeSpan value);
    // static private System.Data.SqlTypes.SqlDateTime FromDateTime(System.DateTime value)
    // Offset: 0x122FD10
    static ::System::Data::SqlTypes::SqlDateTime FromDateTime(::System::DateTime value);
    // static public System.Data.SqlTypes.SqlBoolean LessThan(System.Data.SqlTypes.SqlDateTime x, System.Data.SqlTypes.SqlDateTime y)
    // Offset: 0x123066C
    static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y);
    // static public System.Data.SqlTypes.SqlBoolean GreaterThan(System.Data.SqlTypes.SqlDateTime x, System.Data.SqlTypes.SqlDateTime y)
    // Offset: 0x12306FC
    static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x123078C
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Data.SqlTypes.SqlDateTime value)
    // Offset: 0x12308D0
    int CompareTo(::System::Data::SqlTypes::SqlDateTime value);
    // private System.Xml.Schema.XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema()
    // Offset: 0x1230B60
    ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();
    // private System.Void System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader reader)
    // Offset: 0x1230B68
    void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);
    // private System.Void System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter writer)
    // Offset: 0x1230D64
    void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);
    // static public System.Xml.XmlQualifiedName GetXsdType(System.Xml.Schema.XmlSchemaSet schemaSet)
    // Offset: 0x1230EC4
    static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);
    // public override System.String ToString()
    // Offset: 0x1230370
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1230A30
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1230B20
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Data.SqlTypes.SqlDateTime
  #pragma pack(pop)
  static check_size<sizeof(SqlDateTime), 8 + sizeof(int)> __System_Data_SqlTypes_SqlDateTimeSizeCheck;
  static_assert(sizeof(SqlDateTime) == 0xC);
  // static public System.Data.SqlTypes.SqlBoolean op_Equality(System.Data.SqlTypes.SqlDateTime x, System.Data.SqlTypes.SqlDateTime y)
  // Offset: 0x1230438
  ::System::Data::SqlTypes::SqlBoolean operator ==(const ::System::Data::SqlTypes::SqlDateTime& x, const ::System::Data::SqlTypes::SqlDateTime& y);
  // static public System.Data.SqlTypes.SqlBoolean op_LessThan(System.Data.SqlTypes.SqlDateTime x, System.Data.SqlTypes.SqlDateTime y)
  // Offset: 0x12304EC
  ::System::Data::SqlTypes::SqlBoolean operator <(const ::System::Data::SqlTypes::SqlDateTime& x, const ::System::Data::SqlTypes::SqlDateTime& y);
  // static public System.Data.SqlTypes.SqlBoolean op_GreaterThan(System.Data.SqlTypes.SqlDateTime x, System.Data.SqlTypes.SqlDateTime y)
  // Offset: 0x12305AC
  ::System::Data::SqlTypes::SqlBoolean operator >(const ::System::Data::SqlTypes::SqlDateTime& x, const ::System::Data::SqlTypes::SqlDateTime& y);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlDateTime::*)()>(&System::Data::SqlTypes::SqlDateTime::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Data::SqlTypes::SqlDateTime::*)()>(&System::Data::SqlTypes::SqlDateTime::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::get_DayTicks
// Il2CppName: get_DayTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlDateTime::*)()>(&System::Data::SqlTypes::SqlDateTime::get_DayTicks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "get_DayTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::get_TimeTicks
// Il2CppName: get_TimeTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlDateTime::*)()>(&System::Data::SqlTypes::SqlDateTime::get_TimeTicks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "get_TimeTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::SqlDateTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::SqlDateTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::SqlDateTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::SqlTypes::SqlDateTime::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::ToTimeSpan
// Il2CppName: ToTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::Data::SqlTypes::SqlDateTime)>(&System::Data::SqlTypes::SqlDateTime::ToTimeSpan)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlDateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "ToTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::Data::SqlTypes::SqlDateTime)>(&System::Data::SqlTypes::SqlDateTime::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlDateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::FromTimeSpan
// Il2CppName: FromTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlDateTime (*)(::System::TimeSpan)>(&System::Data::SqlTypes::SqlDateTime::FromTimeSpan)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "FromTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::FromDateTime
// Il2CppName: FromDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlDateTime (*)(::System::DateTime)>(&System::Data::SqlTypes::SqlDateTime::FromDateTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "FromDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::LessThan
// Il2CppName: LessThan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(&System::Data::SqlTypes::SqlDateTime::LessThan)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlDateTime")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlDateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "LessThan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::GreaterThan
// Il2CppName: GreaterThan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(&System::Data::SqlTypes::SqlDateTime::GreaterThan)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlDateTime")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlDateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "GreaterThan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlDateTime::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlDateTime::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlDateTime::*)(::System::Data::SqlTypes::SqlDateTime)>(&System::Data::SqlTypes::SqlDateTime::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlDateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_GetSchema
// Il2CppName: System.Xml.Serialization.IXmlSerializable.GetSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (System::Data::SqlTypes::SqlDateTime::*)()>(&System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "System.Xml.Serialization.IXmlSerializable.GetSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_ReadXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.ReadXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlDateTime::*)(::System::Xml::XmlReader*)>(&System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_WriteXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.WriteXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlDateTime::*)(::System::Xml::XmlWriter*)>(&System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::GetXsdType
// Il2CppName: GetXsdType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&System::Data::SqlTypes::SqlDateTime::GetXsdType)> {
  static const MethodInfo* get() {
    static auto* schemaSet = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "GetXsdType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaSet});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::SqlTypes::SqlDateTime::*)()>(&System::Data::SqlTypes::SqlDateTime::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlDateTime::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlDateTime::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlDateTime::*)()>(&System::Data::SqlTypes::SqlDateTime::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlDateTime), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlDateTime::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
