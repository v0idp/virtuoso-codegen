// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
// Including type: System.Globalization.GregorianCalendarTypes
#include "System/Globalization/GregorianCalendarTypes.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: GregorianCalendar
  class GregorianCalendar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::GregorianCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::GregorianCalendar*, "System.Globalization", "GregorianCalendar");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.GregorianCalendar
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57AAB0
  class GregorianCalendar : public ::System::Globalization::Calendar {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Globalization.GregorianCalendarTypes m_type
    // Size: 0x14
    // Offset: 0x1C
    ::System::Globalization::GregorianCalendarTypes m_type;
    // Field size check
    static_assert(sizeof(::System::Globalization::GregorianCalendarTypes) == 0x14);
    public:
    // Creating conversion operator: operator ::System::Globalization::GregorianCalendarTypes
    constexpr operator ::System::Globalization::GregorianCalendarTypes() const noexcept {
      return m_type;
    }
    // Get static field: static readonly System.Int32[] DaysToMonth365
    static ::ArrayW<int> _get_DaysToMonth365();
    // Set static field: static readonly System.Int32[] DaysToMonth365
    static void _set_DaysToMonth365(::ArrayW<int> value);
    // Get static field: static readonly System.Int32[] DaysToMonth366
    static ::ArrayW<int> _get_DaysToMonth366();
    // Set static field: static readonly System.Int32[] DaysToMonth366
    static void _set_DaysToMonth366(::ArrayW<int> value);
    // Get static field: static private System.Globalization.Calendar s_defaultInstance
    static ::System::Globalization::Calendar* _get_s_defaultInstance();
    // Set static field: static private System.Globalization.Calendar s_defaultInstance
    static void _set_s_defaultInstance(::System::Globalization::Calendar* value);
    // Get instance field reference: System.Globalization.GregorianCalendarTypes m_type
    ::System::Globalization::GregorianCalendarTypes& dyn_m_type();
    // public System.Void .ctor(System.Globalization.GregorianCalendarTypes type)
    // Offset: 0xC1F1F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GregorianCalendar* New_ctor(::System::Globalization::GregorianCalendarTypes type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::GregorianCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GregorianCalendar*, creationType>(type)));
    }
    // static private System.Void .cctor()
    // Offset: 0xC20030
    static void _cctor();
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xC1EF2C
    void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);
    // static System.Globalization.Calendar GetDefaultInstance()
    // Offset: 0xC1F0EC
    static ::System::Globalization::Calendar* GetDefaultInstance();
    // System.Int32 GetDatePart(System.Int64 ticks, System.Int32 part)
    // Offset: 0xC1F33C
    int GetDatePart(int64_t ticks, int part);
    // public override System.DateTime get_MinSupportedDateTime()
    // Offset: 0xC1F024
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MinSupportedDateTime()
    ::System::DateTime get_MinSupportedDateTime();
    // public override System.DateTime get_MaxSupportedDateTime()
    // Offset: 0xC1F088
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MaxSupportedDateTime()
    ::System::DateTime get_MaxSupportedDateTime();
    // override System.Int32 get_ID()
    // Offset: 0xC1F334
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_ID()
    int get_ID();
    // public override System.Int32[] get_Eras()
    // Offset: 0xC1F8E4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32[] Calendar::get_Eras()
    ::ArrayW<int> get_Eras();
    // public override System.Int32 get_TwoDigitYearMax()
    // Offset: 0xC1FEA4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_TwoDigitYearMax()
    int get_TwoDigitYearMax();
    // public System.Void .ctor()
    // Offset: 0xC1F1C4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GregorianCalendar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::GregorianCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GregorianCalendar*, creationType>()));
    }
    // public override System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0xC1F574
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDayOfMonth(System.DateTime time)
    int GetDayOfMonth(::System::DateTime time);
    // public override System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0xC1F5BC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DayOfWeek Calendar::GetDayOfWeek(System.DateTime time)
    ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);
    // public override System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0xC1F630
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    int GetDaysInMonth(int year, int month, int era);
    // public override System.Int32 GetEra(System.DateTime time)
    // Offset: 0xC1F8DC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetEra(System.DateTime time)
    int GetEra(::System::DateTime time);
    // public override System.Int32 GetMonth(System.DateTime time)
    // Offset: 0xC1F954
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonth(System.DateTime time)
    int GetMonth(::System::DateTime time);
    // public override System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0xC1F99C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonthsInYear(System.Int32 year, System.Int32 era)
    int GetMonthsInYear(int year, int era);
    // public override System.Int32 GetYear(System.DateTime time)
    // Offset: 0xC1FB08
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetYear(System.DateTime time)
    int GetYear(::System::DateTime time);
    // public override System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0xC1FB50
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsLeapYear(System.Int32 year, System.Int32 era)
    bool IsLeapYear(int year, int era);
    // public override System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0xC1FD04
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    ::System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // override System.Boolean TryToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era, out System.DateTime result)
    // Offset: 0xC1FD9C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::TryToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era, out System.DateTime result)
    bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, ByRef<::System::DateTime> result);
    // public override System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0xC1FEEC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::ToFourDigitYear(System.Int32 year)
    int ToFourDigitYear(int year);
  }; // System.Globalization.GregorianCalendar
  #pragma pack(pop)
  static check_size<sizeof(GregorianCalendar), 28 + sizeof(::System::Globalization::GregorianCalendarTypes)> __System_Globalization_GregorianCalendarSizeCheck;
  static_assert(sizeof(GregorianCalendar) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::GregorianCalendar::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::OnDeserialized
// Il2CppName: OnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::GregorianCalendar::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Globalization::GregorianCalendar::OnDeserialized)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "OnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetDefaultInstance
// Il2CppName: GetDefaultInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::Calendar* (*)()>(&System::Globalization::GregorianCalendar::GetDefaultInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetDefaultInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetDatePart
// Il2CppName: GetDatePart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)(int64_t, int)>(&System::Globalization::GregorianCalendar::GetDatePart)> {
  static const MethodInfo* get() {
    static auto* ticks = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* part = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetDatePart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticks, part});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::get_MinSupportedDateTime
// Il2CppName: get_MinSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Globalization::GregorianCalendar::*)()>(&System::Globalization::GregorianCalendar::get_MinSupportedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "get_MinSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::get_MaxSupportedDateTime
// Il2CppName: get_MaxSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Globalization::GregorianCalendar::*)()>(&System::Globalization::GregorianCalendar::get_MaxSupportedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "get_MaxSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)()>(&System::Globalization::GregorianCalendar::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::get_Eras
// Il2CppName: get_Eras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (System::Globalization::GregorianCalendar::*)()>(&System::Globalization::GregorianCalendar::get_Eras)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "get_Eras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::get_TwoDigitYearMax
// Il2CppName: get_TwoDigitYearMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)()>(&System::Globalization::GregorianCalendar::get_TwoDigitYearMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "get_TwoDigitYearMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetDayOfMonth
// Il2CppName: GetDayOfMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&System::Globalization::GregorianCalendar::GetDayOfMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetDayOfMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetDayOfWeek
// Il2CppName: GetDayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DayOfWeek (System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&System::Globalization::GregorianCalendar::GetDayOfWeek)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetDayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetDaysInMonth
// Il2CppName: GetDaysInMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)(int, int, int)>(&System::Globalization::GregorianCalendar::GetDaysInMonth)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetDaysInMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetEra
// Il2CppName: GetEra
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&System::Globalization::GregorianCalendar::GetEra)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetEra", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetMonth
// Il2CppName: GetMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&System::Globalization::GregorianCalendar::GetMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetMonthsInYear
// Il2CppName: GetMonthsInYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)(int, int)>(&System::Globalization::GregorianCalendar::GetMonthsInYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetMonthsInYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::GetYear
// Il2CppName: GetYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&System::Globalization::GregorianCalendar::GetYear)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "GetYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::IsLeapYear
// Il2CppName: IsLeapYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::GregorianCalendar::*)(int, int)>(&System::Globalization::GregorianCalendar::IsLeapYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "IsLeapYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Globalization::GregorianCalendar::*)(int, int, int, int, int, int, int, int)>(&System::Globalization::GregorianCalendar::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, hour, minute, second, millisecond, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::TryToDateTime
// Il2CppName: TryToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::GregorianCalendar::*)(int, int, int, int, int, int, int, int, ByRef<::System::DateTime>)>(&System::Globalization::GregorianCalendar::TryToDateTime)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "DateTime")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "TryToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, hour, minute, second, millisecond, era, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendar::ToFourDigitYear
// Il2CppName: ToFourDigitYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendar::*)(int)>(&System::Globalization::GregorianCalendar::ToFourDigitYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendar*), "ToFourDigitYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year});
  }
};