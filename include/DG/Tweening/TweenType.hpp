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
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: TweenType
  struct TweenType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::TweenType, "DG.Tweening", "TweenType");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.TweenType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TweenType/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: TweenType
    constexpr TweenType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.TweenType Tweener
    static constexpr const int Tweener = 0;
    // Get static field: static public DG.Tweening.TweenType Tweener
    static ::DG::Tweening::TweenType _get_Tweener();
    // Set static field: static public DG.Tweening.TweenType Tweener
    static void _set_Tweener(::DG::Tweening::TweenType value);
    // static field const value: static public DG.Tweening.TweenType Sequence
    static constexpr const int Sequence = 1;
    // Get static field: static public DG.Tweening.TweenType Sequence
    static ::DG::Tweening::TweenType _get_Sequence();
    // Set static field: static public DG.Tweening.TweenType Sequence
    static void _set_Sequence(::DG::Tweening::TweenType value);
    // static field const value: static public DG.Tweening.TweenType Callback
    static constexpr const int Callback = 2;
    // Get static field: static public DG.Tweening.TweenType Callback
    static ::DG::Tweening::TweenType _get_Callback();
    // Set static field: static public DG.Tweening.TweenType Callback
    static void _set_Callback(::DG::Tweening::TweenType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // DG.Tweening.TweenType
  #pragma pack(pop)
  static check_size<sizeof(TweenType), 16 + sizeof(int)> __DG_Tweening_TweenTypeSizeCheck;
  static_assert(sizeof(TweenType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"