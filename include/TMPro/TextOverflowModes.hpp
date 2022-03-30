// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextOverflowModes
  struct TextOverflowModes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextOverflowModes, "TMPro", "TextOverflowModes");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TextOverflowModes
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextOverflowModes/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: TextOverflowModes
    constexpr TextOverflowModes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TextOverflowModes Overflow
    static constexpr const int Overflow = 0;
    // Get static field: static public TMPro.TextOverflowModes Overflow
    static ::TMPro::TextOverflowModes _get_Overflow();
    // Set static field: static public TMPro.TextOverflowModes Overflow
    static void _set_Overflow(::TMPro::TextOverflowModes value);
    // static field const value: static public TMPro.TextOverflowModes Ellipsis
    static constexpr const int Ellipsis = 1;
    // Get static field: static public TMPro.TextOverflowModes Ellipsis
    static ::TMPro::TextOverflowModes _get_Ellipsis();
    // Set static field: static public TMPro.TextOverflowModes Ellipsis
    static void _set_Ellipsis(::TMPro::TextOverflowModes value);
    // static field const value: static public TMPro.TextOverflowModes Masking
    static constexpr const int Masking = 2;
    // Get static field: static public TMPro.TextOverflowModes Masking
    static ::TMPro::TextOverflowModes _get_Masking();
    // Set static field: static public TMPro.TextOverflowModes Masking
    static void _set_Masking(::TMPro::TextOverflowModes value);
    // static field const value: static public TMPro.TextOverflowModes Truncate
    static constexpr const int Truncate = 3;
    // Get static field: static public TMPro.TextOverflowModes Truncate
    static ::TMPro::TextOverflowModes _get_Truncate();
    // Set static field: static public TMPro.TextOverflowModes Truncate
    static void _set_Truncate(::TMPro::TextOverflowModes value);
    // static field const value: static public TMPro.TextOverflowModes ScrollRect
    static constexpr const int ScrollRect = 4;
    // Get static field: static public TMPro.TextOverflowModes ScrollRect
    static ::TMPro::TextOverflowModes _get_ScrollRect();
    // Set static field: static public TMPro.TextOverflowModes ScrollRect
    static void _set_ScrollRect(::TMPro::TextOverflowModes value);
    // static field const value: static public TMPro.TextOverflowModes Page
    static constexpr const int Page = 5;
    // Get static field: static public TMPro.TextOverflowModes Page
    static ::TMPro::TextOverflowModes _get_Page();
    // Set static field: static public TMPro.TextOverflowModes Page
    static void _set_Page(::TMPro::TextOverflowModes value);
    // static field const value: static public TMPro.TextOverflowModes Linked
    static constexpr const int Linked = 6;
    // Get static field: static public TMPro.TextOverflowModes Linked
    static ::TMPro::TextOverflowModes _get_Linked();
    // Set static field: static public TMPro.TextOverflowModes Linked
    static void _set_Linked(::TMPro::TextOverflowModes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.TextOverflowModes
  #pragma pack(pop)
  static check_size<sizeof(TextOverflowModes), 16 + sizeof(int)> __TMPro_TextOverflowModesSizeCheck;
  static_assert(sizeof(TextOverflowModes) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
