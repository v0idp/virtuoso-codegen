// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: InternalEncodingDataItem
  struct InternalEncodingDataItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::InternalEncodingDataItem, "System.Globalization", "InternalEncodingDataItem");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0xA
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.InternalEncodingDataItem
  // [TokenAttribute] Offset: FFFFFFFF
  struct InternalEncodingDataItem/*, public ::System::ValueType*/ {
    public:
    public:
    // System.String webName
    // Size: 0x8
    // Offset: 0x0
    ::StringW webName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.UInt16 codePage
    // Size: 0x2
    // Offset: 0x8
    uint16_t codePage;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: InternalEncodingDataItem
    constexpr InternalEncodingDataItem(::StringW webName_ = {}, uint16_t codePage_ = {}) noexcept : webName{webName_}, codePage{codePage_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.String webName
    [[deprecated]] ::StringW& dyn_webName();
    // Get instance field reference: System.UInt16 codePage
    [[deprecated]] uint16_t& dyn_codePage();
  }; // System.Globalization.InternalEncodingDataItem
  #pragma pack(pop)
  static check_size<sizeof(InternalEncodingDataItem), 8 + sizeof(uint16_t)> __System_Globalization_InternalEncodingDataItemSizeCheck;
  static_assert(sizeof(InternalEncodingDataItem) == 0xA);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
