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
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Forward declaring type: BEAUTIFY_TMO
  struct BEAUTIFY_TMO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::BEAUTIFY_TMO, "BeautifyEffect", "BEAUTIFY_TMO");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.BEAUTIFY_TMO
  // [TokenAttribute] Offset: FFFFFFFF
  struct BEAUTIFY_TMO/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: BEAUTIFY_TMO
    constexpr BEAUTIFY_TMO(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeautifyEffect.BEAUTIFY_TMO Linear
    static constexpr const int Linear = 0;
    // Get static field: static public BeautifyEffect.BEAUTIFY_TMO Linear
    static ::BeautifyEffect::BEAUTIFY_TMO _get_Linear();
    // Set static field: static public BeautifyEffect.BEAUTIFY_TMO Linear
    static void _set_Linear(::BeautifyEffect::BEAUTIFY_TMO value);
    // static field const value: static public BeautifyEffect.BEAUTIFY_TMO ACES
    static constexpr const int ACES = 10;
    // Get static field: static public BeautifyEffect.BEAUTIFY_TMO ACES
    static ::BeautifyEffect::BEAUTIFY_TMO _get_ACES();
    // Set static field: static public BeautifyEffect.BEAUTIFY_TMO ACES
    static void _set_ACES(::BeautifyEffect::BEAUTIFY_TMO value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // BeautifyEffect.BEAUTIFY_TMO
  #pragma pack(pop)
  static check_size<sizeof(BEAUTIFY_TMO), 16 + sizeof(int)> __BeautifyEffect_BEAUTIFY_TMOSizeCheck;
  static_assert(sizeof(BEAUTIFY_TMO) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
