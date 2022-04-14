// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: BitSet
  class BitSet;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: RangePositionInfo
  struct RangePositionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RangePositionInfo, "System.Xml.Schema", "RangePositionInfo");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.Schema.RangePositionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct RangePositionInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Xml.Schema.BitSet curpos
    // Size: 0x8
    // Offset: 0x0
    ::System::Xml::Schema::BitSet* curpos;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::BitSet*) == 0x8);
    // public System.Decimal[] rangeCounters
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::System::Decimal> rangeCounters;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Decimal>) == 0x8);
    public:
    // Creating value type constructor for type: RangePositionInfo
    constexpr RangePositionInfo(::System::Xml::Schema::BitSet* curpos_ = {}, ::ArrayW<::System::Decimal> rangeCounters_ = ::ArrayW<::System::Decimal>(static_cast<void*>(nullptr))) noexcept : curpos{curpos_}, rangeCounters{rangeCounters_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Xml.Schema.BitSet curpos
    [[deprecated]] ::System::Xml::Schema::BitSet*& dyn_curpos();
    // Get instance field reference: public System.Decimal[] rangeCounters
    [[deprecated]] ::ArrayW<::System::Decimal>& dyn_rangeCounters();
  }; // System.Xml.Schema.RangePositionInfo
  #pragma pack(pop)
  static check_size<sizeof(RangePositionInfo), 8 + sizeof(::ArrayW<::System::Decimal>)> __System_Xml_Schema_RangePositionInfoSizeCheck;
  static_assert(sizeof(RangePositionInfo) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
