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
  // Forward declaring type: CaretPosition
  struct CaretPosition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::CaretPosition, "TMPro", "CaretPosition");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.CaretPosition
  // [TokenAttribute] Offset: FFFFFFFF
  struct CaretPosition/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CaretPosition
    constexpr CaretPosition(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.CaretPosition None
    static constexpr const int None = 0;
    // Get static field: static public TMPro.CaretPosition None
    static ::TMPro::CaretPosition _get_None();
    // Set static field: static public TMPro.CaretPosition None
    static void _set_None(::TMPro::CaretPosition value);
    // static field const value: static public TMPro.CaretPosition Left
    static constexpr const int Left = 1;
    // Get static field: static public TMPro.CaretPosition Left
    static ::TMPro::CaretPosition _get_Left();
    // Set static field: static public TMPro.CaretPosition Left
    static void _set_Left(::TMPro::CaretPosition value);
    // static field const value: static public TMPro.CaretPosition Right
    static constexpr const int Right = 2;
    // Get static field: static public TMPro.CaretPosition Right
    static ::TMPro::CaretPosition _get_Right();
    // Set static field: static public TMPro.CaretPosition Right
    static void _set_Right(::TMPro::CaretPosition value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // TMPro.CaretPosition
  #pragma pack(pop)
  static check_size<sizeof(CaretPosition), 0 + sizeof(int)> __TMPro_CaretPositionSizeCheck;
  static_assert(sizeof(CaretPosition) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
