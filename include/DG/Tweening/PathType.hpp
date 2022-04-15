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
  // Forward declaring type: PathType
  struct PathType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::PathType, "DG.Tweening", "PathType");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.PathType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PathType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PathType
    constexpr PathType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.PathType Linear
    static constexpr const int Linear = 0;
    // Get static field: static public DG.Tweening.PathType Linear
    static ::DG::Tweening::PathType _get_Linear();
    // Set static field: static public DG.Tweening.PathType Linear
    static void _set_Linear(::DG::Tweening::PathType value);
    // static field const value: static public DG.Tweening.PathType CatmullRom
    static constexpr const int CatmullRom = 1;
    // Get static field: static public DG.Tweening.PathType CatmullRom
    static ::DG::Tweening::PathType _get_CatmullRom();
    // Set static field: static public DG.Tweening.PathType CatmullRom
    static void _set_CatmullRom(::DG::Tweening::PathType value);
    // static field const value: static public DG.Tweening.PathType CubicBezier
    static constexpr const int CubicBezier = 2;
    // Get static field: static public DG.Tweening.PathType CubicBezier
    static ::DG::Tweening::PathType _get_CubicBezier();
    // Set static field: static public DG.Tweening.PathType CubicBezier
    static void _set_CubicBezier(::DG::Tweening::PathType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // DG.Tweening.PathType
  #pragma pack(pop)
  static check_size<sizeof(PathType), 0 + sizeof(int)> __DG_Tweening_PathTypeSizeCheck;
  static_assert(sizeof(PathType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
