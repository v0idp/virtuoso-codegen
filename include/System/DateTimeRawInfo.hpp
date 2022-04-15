// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTimeParse/System.TM
#include "System/DateTimeParse_TM.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: DateTimeRawInfo
  struct DateTimeRawInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeRawInfo, "System", "DateTimeRawInfo");
// Type namespace: System
namespace System {
  // Size: 0x2A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.DateTimeRawInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct DateTimeRawInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32* num
    // Size: 0x8
    // Offset: 0x0
    int* num;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // System.Int32 numCount
    // Size: 0x4
    // Offset: 0x8
    int numCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 month
    // Size: 0x4
    // Offset: 0xC
    int month;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 year
    // Size: 0x4
    // Offset: 0x10
    int year;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 dayOfWeek
    // Size: 0x4
    // Offset: 0x14
    int dayOfWeek;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 era
    // Size: 0x4
    // Offset: 0x18
    int era;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.DateTimeParse/System.TM timeMark
    // Size: 0x4
    // Offset: 0x1C
    ::System::DateTimeParse::TM timeMark;
    // Field size check
    static_assert(sizeof(::System::DateTimeParse::TM) == 0x4);
    // System.Double fraction
    // Size: 0x8
    // Offset: 0x20
    double fraction;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Boolean hasSameDateAndTimeSeparators
    // Size: 0x1
    // Offset: 0x28
    bool hasSameDateAndTimeSeparators;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean timeZone
    // Size: 0x1
    // Offset: 0x29
    bool timeZone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: DateTimeRawInfo
    constexpr DateTimeRawInfo(int* num_ = {}, int numCount_ = {}, int month_ = {}, int year_ = {}, int dayOfWeek_ = {}, int era_ = {}, ::System::DateTimeParse::TM timeMark_ = {}, double fraction_ = {}, bool hasSameDateAndTimeSeparators_ = {}, bool timeZone_ = {}) noexcept : num{num_}, numCount{numCount_}, month{month_}, year{year_}, dayOfWeek{dayOfWeek_}, era{era_}, timeMark{timeMark_}, fraction{fraction_}, hasSameDateAndTimeSeparators{hasSameDateAndTimeSeparators_}, timeZone{timeZone_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32* num
    [[deprecated("Use field access instead!")]] int*& dyn_num();
    // Get instance field reference: System.Int32 numCount
    [[deprecated("Use field access instead!")]] int& dyn_numCount();
    // Get instance field reference: System.Int32 month
    [[deprecated("Use field access instead!")]] int& dyn_month();
    // Get instance field reference: System.Int32 year
    [[deprecated("Use field access instead!")]] int& dyn_year();
    // Get instance field reference: System.Int32 dayOfWeek
    [[deprecated("Use field access instead!")]] int& dyn_dayOfWeek();
    // Get instance field reference: System.Int32 era
    [[deprecated("Use field access instead!")]] int& dyn_era();
    // Get instance field reference: System.DateTimeParse/System.TM timeMark
    [[deprecated("Use field access instead!")]] ::System::DateTimeParse::TM& dyn_timeMark();
    // Get instance field reference: System.Double fraction
    [[deprecated("Use field access instead!")]] double& dyn_fraction();
    // Get instance field reference: System.Boolean hasSameDateAndTimeSeparators
    [[deprecated("Use field access instead!")]] bool& dyn_hasSameDateAndTimeSeparators();
    // Get instance field reference: System.Boolean timeZone
    [[deprecated("Use field access instead!")]] bool& dyn_timeZone();
    // System.Void Init(System.Int32* numberBuffer)
    // Offset: 0x128F9D0
    void Init(int* numberBuffer);
    // System.Void AddNumber(System.Int32 value)
    // Offset: 0x128F9F4
    void AddNumber(int value);
    // System.Int32 GetNumber(System.Int32 index)
    // Offset: 0x128FA0C
    int GetNumber(int index);
  }; // System.DateTimeRawInfo
  #pragma pack(pop)
  static check_size<sizeof(DateTimeRawInfo), 41 + sizeof(bool)> __System_DateTimeRawInfoSizeCheck;
  static_assert(sizeof(DateTimeRawInfo) == 0x2A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DateTimeRawInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeRawInfo::*)(int*)>(&System::DateTimeRawInfo::Init)> {
  static const MethodInfo* get() {
    static auto* numberBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeRawInfo), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numberBuffer});
  }
};
// Writing MetadataGetter for method: System::DateTimeRawInfo::AddNumber
// Il2CppName: AddNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeRawInfo::*)(int)>(&System::DateTimeRawInfo::AddNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeRawInfo), "AddNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::DateTimeRawInfo::GetNumber
// Il2CppName: GetNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::DateTimeRawInfo::*)(int)>(&System::DateTimeRawInfo::GetNumber)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeRawInfo), "GetNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
