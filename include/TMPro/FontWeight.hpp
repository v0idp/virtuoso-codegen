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
  // Forward declaring type: FontWeight
  struct FontWeight;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FontWeight, "TMPro", "FontWeight");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.FontWeight
  // [TokenAttribute] Offset: FFFFFFFF
  struct FontWeight/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FontWeight
    constexpr FontWeight(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.FontWeight Thin
    static constexpr const int Thin = 100;
    // Get static field: static public TMPro.FontWeight Thin
    static ::TMPro::FontWeight _get_Thin();
    // Set static field: static public TMPro.FontWeight Thin
    static void _set_Thin(::TMPro::FontWeight value);
    // static field const value: static public TMPro.FontWeight ExtraLight
    static constexpr const int ExtraLight = 200;
    // Get static field: static public TMPro.FontWeight ExtraLight
    static ::TMPro::FontWeight _get_ExtraLight();
    // Set static field: static public TMPro.FontWeight ExtraLight
    static void _set_ExtraLight(::TMPro::FontWeight value);
    // static field const value: static public TMPro.FontWeight Light
    static constexpr const int Light = 300;
    // Get static field: static public TMPro.FontWeight Light
    static ::TMPro::FontWeight _get_Light();
    // Set static field: static public TMPro.FontWeight Light
    static void _set_Light(::TMPro::FontWeight value);
    // static field const value: static public TMPro.FontWeight Regular
    static constexpr const int Regular = 400;
    // Get static field: static public TMPro.FontWeight Regular
    static ::TMPro::FontWeight _get_Regular();
    // Set static field: static public TMPro.FontWeight Regular
    static void _set_Regular(::TMPro::FontWeight value);
    // static field const value: static public TMPro.FontWeight Medium
    static constexpr const int Medium = 500;
    // Get static field: static public TMPro.FontWeight Medium
    static ::TMPro::FontWeight _get_Medium();
    // Set static field: static public TMPro.FontWeight Medium
    static void _set_Medium(::TMPro::FontWeight value);
    // static field const value: static public TMPro.FontWeight SemiBold
    static constexpr const int SemiBold = 600;
    // Get static field: static public TMPro.FontWeight SemiBold
    static ::TMPro::FontWeight _get_SemiBold();
    // Set static field: static public TMPro.FontWeight SemiBold
    static void _set_SemiBold(::TMPro::FontWeight value);
    // static field const value: static public TMPro.FontWeight Bold
    static constexpr const int Bold = 700;
    // Get static field: static public TMPro.FontWeight Bold
    static ::TMPro::FontWeight _get_Bold();
    // Set static field: static public TMPro.FontWeight Bold
    static void _set_Bold(::TMPro::FontWeight value);
    // static field const value: static public TMPro.FontWeight Heavy
    static constexpr const int Heavy = 800;
    // Get static field: static public TMPro.FontWeight Heavy
    static ::TMPro::FontWeight _get_Heavy();
    // Set static field: static public TMPro.FontWeight Heavy
    static void _set_Heavy(::TMPro::FontWeight value);
    // static field const value: static public TMPro.FontWeight Black
    static constexpr const int Black = 900;
    // Get static field: static public TMPro.FontWeight Black
    static ::TMPro::FontWeight _get_Black();
    // Set static field: static public TMPro.FontWeight Black
    static void _set_Black(::TMPro::FontWeight value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // TMPro.FontWeight
  #pragma pack(pop)
  static check_size<sizeof(FontWeight), 0 + sizeof(int)> __TMPro_FontWeightSizeCheck;
  static_assert(sizeof(FontWeight) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
