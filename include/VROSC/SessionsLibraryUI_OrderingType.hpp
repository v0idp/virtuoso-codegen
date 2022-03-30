// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionsLibraryUI
#include "VROSC/SessionsLibraryUI.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsLibraryUI::OrderingType, "VROSC", "SessionsLibraryUI/OrderingType");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsLibraryUI/VROSC.OrderingType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SessionsLibraryUI::OrderingType/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x10
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OrderingType
    constexpr OrderingType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Date
    static constexpr const int Date = 0;
    // Get static field: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Date
    static ::VROSC::SessionsLibraryUI::OrderingType _get_Date();
    // Set static field: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Date
    static void _set_Date(::VROSC::SessionsLibraryUI::OrderingType value);
    // static field const value: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Alphabetical
    static constexpr const int Alphabetical = 1;
    // Get static field: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Alphabetical
    static ::VROSC::SessionsLibraryUI::OrderingType _get_Alphabetical();
    // Set static field: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Alphabetical
    static void _set_Alphabetical(::VROSC::SessionsLibraryUI::OrderingType value);
    // static field const value: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Popularity
    static constexpr const int Popularity = 2;
    // Get static field: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Popularity
    static ::VROSC::SessionsLibraryUI::OrderingType _get_Popularity();
    // Set static field: static public VROSC.SessionsLibraryUI/VROSC.OrderingType Popularity
    static void _set_Popularity(::VROSC::SessionsLibraryUI::OrderingType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.SessionsLibraryUI/VROSC.OrderingType
  #pragma pack(pop)
  static check_size<sizeof(SessionsLibraryUI::OrderingType), 16 + sizeof(int)> __VROSC_SessionsLibraryUI_OrderingTypeSizeCheck;
  static_assert(sizeof(SessionsLibraryUI::OrderingType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
