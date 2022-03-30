// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeOffset, "System", "DateTimeOffset");
// Type namespace: System
namespace System {
  // Size: 0xA
  #pragma pack(push, 1)
  // Autogenerated type: System.DateTimeOffset
  // [TokenAttribute] Offset: FFFFFFFF
  struct DateTimeOffset/*, public ::System::ValueType, public ::System::IComparable_1<::System::DateTimeOffset>, public ::System::IEquatable_1<::System::DateTimeOffset>, public ::System::Runtime::Serialization::ISerializable, public ::System::IComparable, public ::System::IFormattable, public ::System::Runtime::Serialization::IDeserializationCallback*/ {
    public:
    public:
    // private System.DateTime m_dateTime
    // Size: 0x8
    // Offset: 0x0
    ::System::DateTime m_dateTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Int16 m_offsetMinutes
    // Size: 0x2
    // Offset: 0x8
    int16_t m_offsetMinutes;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Creating value type constructor for type: DateTimeOffset
    constexpr DateTimeOffset(::System::DateTime m_dateTime_ = {}, int16_t m_offsetMinutes_ = {}) noexcept : m_dateTime{m_dateTime_}, m_offsetMinutes{m_offsetMinutes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::DateTimeOffset>
    operator ::System::IComparable_1<::System::DateTimeOffset>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::DateTimeOffset>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::DateTimeOffset>
    operator ::System::IEquatable_1<::System::DateTimeOffset>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::DateTimeOffset>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IDeserializationCallback
    operator ::System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Get static field: static public readonly System.DateTimeOffset MinValue
    static ::System::DateTimeOffset _get_MinValue();
    // Set static field: static public readonly System.DateTimeOffset MinValue
    static void _set_MinValue(::System::DateTimeOffset value);
    // Get static field: static public readonly System.DateTimeOffset MaxValue
    static ::System::DateTimeOffset _get_MaxValue();
    // Set static field: static public readonly System.DateTimeOffset MaxValue
    static void _set_MaxValue(::System::DateTimeOffset value);
    // Get instance field reference: private System.DateTime m_dateTime
    ::System::DateTime& dyn_m_dateTime();
    // Get instance field reference: private System.Int16 m_offsetMinutes
    int16_t& dyn_m_offsetMinutes();
    // static public System.DateTimeOffset get_Now()
    // Offset: 0xE24DF0
    static ::System::DateTimeOffset get_Now();
    // public System.DateTime get_DateTime()
    // Offset: 0xE24E68
    ::System::DateTime get_DateTime();
    // public System.DateTime get_UtcDateTime()
    // Offset: 0xE24F18
    ::System::DateTime get_UtcDateTime();
    // private System.DateTime get_ClockDateTime()
    // Offset: 0xE24E6C
    ::System::DateTime get_ClockDateTime();
    // public System.TimeSpan get_Offset()
    // Offset: 0xE24F98
    ::System::TimeSpan get_Offset();
    // public System.Void .ctor(System.Int64 ticks, System.TimeSpan offset)
    // Offset: 0xE24944
    DateTimeOffset(int64_t ticks, ::System::TimeSpan offset);
    // public System.Void .ctor(System.DateTime dateTime)
    // Offset: 0xE24BA4
    DateTimeOffset(::System::DateTime dateTime);
    // public System.Void .ctor(System.DateTime dateTime, System.TimeSpan offset)
    // Offset: 0xE24C50
    DateTimeOffset(::System::DateTime dateTime, ::System::TimeSpan offset);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xE25560
    DateTimeOffset(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // static private System.Void .cctor()
    // Offset: 0xE2593C
    static void _cctor();
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0xE24FD0
    int System_IComparable_CompareTo(::Il2CppObject* obj);
    // public System.Int32 CompareTo(System.DateTimeOffset other)
    // Offset: 0xE25120
    int CompareTo(::System::DateTimeOffset other);
    // public System.Boolean Equals(System.DateTimeOffset other)
    // Offset: 0xE252AC
    bool Equals(::System::DateTimeOffset other);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xE252EC
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xE2548C
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xE25820
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // static private System.Int16 ValidateOffset(System.TimeSpan offset)
    // Offset: 0xE249E4
    static int16_t ValidateOffset(::System::TimeSpan offset);
    // static private System.DateTime ValidateDate(System.DateTime dateTime, System.TimeSpan offset)
    // Offset: 0xE24AEC
    static ::System::DateTime ValidateDate(::System::DateTime dateTime, ::System::TimeSpan offset);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE251E4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE25728
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xE25744
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.DateTimeOffset
  #pragma pack(pop)
  static check_size<sizeof(DateTimeOffset), 8 + sizeof(int16_t)> __System_DateTimeOffsetSizeCheck;
  static_assert(sizeof(DateTimeOffset) == 0xA);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DateTimeOffset::get_Now
// Il2CppName: get_Now
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)()>(&System::DateTimeOffset::get_Now)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "get_Now", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::get_DateTime
// Il2CppName: get_DateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::DateTimeOffset::*)()>(&System::DateTimeOffset::get_DateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "get_DateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::get_UtcDateTime
// Il2CppName: get_UtcDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::DateTimeOffset::*)()>(&System::DateTimeOffset::get_UtcDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "get_UtcDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::get_ClockDateTime
// Il2CppName: get_ClockDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::DateTimeOffset::*)()>(&System::DateTimeOffset::get_ClockDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "get_ClockDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::get_Offset
// Il2CppName: get_Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::DateTimeOffset::*)()>(&System::DateTimeOffset::get_Offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "get_Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::DateTimeOffset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeOffset::DateTimeOffset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeOffset::DateTimeOffset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeOffset::DateTimeOffset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeOffset::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::DateTimeOffset::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::System_IComparable_CompareTo
// Il2CppName: System.IComparable.CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::DateTimeOffset::*)(::Il2CppObject*)>(&System::DateTimeOffset::System_IComparable_CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "System.IComparable.CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::DateTimeOffset::*)(::System::DateTimeOffset)>(&System::DateTimeOffset::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::DateTimeOffset::*)(::System::DateTimeOffset)>(&System::DateTimeOffset::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeOffset::*)(::Il2CppObject*)>(&System::DateTimeOffset::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeOffset::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::DateTimeOffset::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::DateTimeOffset::*)(::StringW, ::System::IFormatProvider*)>(&System::DateTimeOffset::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ValidateOffset
// Il2CppName: ValidateOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::TimeSpan)>(&System::DateTimeOffset::ValidateOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ValidateOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ValidateDate
// Il2CppName: ValidateDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeSpan)>(&System::DateTimeOffset::ValidateDate)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ValidateDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime, offset});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::DateTimeOffset::*)(::Il2CppObject*)>(&System::DateTimeOffset::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::DateTimeOffset::*)()>(&System::DateTimeOffset::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::DateTimeOffset::*)()>(&System::DateTimeOffset::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
