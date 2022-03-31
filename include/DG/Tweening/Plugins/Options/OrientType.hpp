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
// Type namespace: DG.Tweening.Plugins.Options
namespace DG::Tweening::Plugins::Options {
  // Forward declaring type: OrientType
  struct OrientType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::OrientType, "DG.Tweening.Plugins.Options", "OrientType");
// Type namespace: DG.Tweening.Plugins.Options
namespace DG::Tweening::Plugins::Options {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Plugins.Options.OrientType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OrientType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OrientType
    constexpr OrientType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.Plugins.Options.OrientType None
    static constexpr const int None = 0;
    // Get static field: static public DG.Tweening.Plugins.Options.OrientType None
    static ::DG::Tweening::Plugins::Options::OrientType _get_None();
    // Set static field: static public DG.Tweening.Plugins.Options.OrientType None
    static void _set_None(::DG::Tweening::Plugins::Options::OrientType value);
    // static field const value: static public DG.Tweening.Plugins.Options.OrientType ToPath
    static constexpr const int ToPath = 1;
    // Get static field: static public DG.Tweening.Plugins.Options.OrientType ToPath
    static ::DG::Tweening::Plugins::Options::OrientType _get_ToPath();
    // Set static field: static public DG.Tweening.Plugins.Options.OrientType ToPath
    static void _set_ToPath(::DG::Tweening::Plugins::Options::OrientType value);
    // static field const value: static public DG.Tweening.Plugins.Options.OrientType LookAtTransform
    static constexpr const int LookAtTransform = 2;
    // Get static field: static public DG.Tweening.Plugins.Options.OrientType LookAtTransform
    static ::DG::Tweening::Plugins::Options::OrientType _get_LookAtTransform();
    // Set static field: static public DG.Tweening.Plugins.Options.OrientType LookAtTransform
    static void _set_LookAtTransform(::DG::Tweening::Plugins::Options::OrientType value);
    // static field const value: static public DG.Tweening.Plugins.Options.OrientType LookAtPosition
    static constexpr const int LookAtPosition = 3;
    // Get static field: static public DG.Tweening.Plugins.Options.OrientType LookAtPosition
    static ::DG::Tweening::Plugins::Options::OrientType _get_LookAtPosition();
    // Set static field: static public DG.Tweening.Plugins.Options.OrientType LookAtPosition
    static void _set_LookAtPosition(::DG::Tweening::Plugins::Options::OrientType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // DG.Tweening.Plugins.Options.OrientType
  #pragma pack(pop)
  static check_size<sizeof(OrientType), 0 + sizeof(int)> __DG_Tweening_Plugins_Options_OrientTypeSizeCheck;
  static_assert(sizeof(OrientType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
