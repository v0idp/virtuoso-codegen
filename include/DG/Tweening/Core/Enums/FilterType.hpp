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
// Type namespace: DG.Tweening.Core.Enums
namespace DG::Tweening::Core::Enums {
  // Forward declaring type: FilterType
  struct FilterType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Enums::FilterType, "DG.Tweening.Core.Enums", "FilterType");
// Type namespace: DG.Tweening.Core.Enums
namespace DG::Tweening::Core::Enums {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.Enums.FilterType
  // [TokenAttribute] Offset: FFFFFFFF
  struct FilterType/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: FilterType
    constexpr FilterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.Core.Enums.FilterType All
    static constexpr const int All = 0;
    // Get static field: static public DG.Tweening.Core.Enums.FilterType All
    static ::DG::Tweening::Core::Enums::FilterType _get_All();
    // Set static field: static public DG.Tweening.Core.Enums.FilterType All
    static void _set_All(::DG::Tweening::Core::Enums::FilterType value);
    // static field const value: static public DG.Tweening.Core.Enums.FilterType TargetOrId
    static constexpr const int TargetOrId = 1;
    // Get static field: static public DG.Tweening.Core.Enums.FilterType TargetOrId
    static ::DG::Tweening::Core::Enums::FilterType _get_TargetOrId();
    // Set static field: static public DG.Tweening.Core.Enums.FilterType TargetOrId
    static void _set_TargetOrId(::DG::Tweening::Core::Enums::FilterType value);
    // static field const value: static public DG.Tweening.Core.Enums.FilterType TargetAndId
    static constexpr const int TargetAndId = 2;
    // Get static field: static public DG.Tweening.Core.Enums.FilterType TargetAndId
    static ::DG::Tweening::Core::Enums::FilterType _get_TargetAndId();
    // Set static field: static public DG.Tweening.Core.Enums.FilterType TargetAndId
    static void _set_TargetAndId(::DG::Tweening::Core::Enums::FilterType value);
    // static field const value: static public DG.Tweening.Core.Enums.FilterType AllExceptTargetsOrIds
    static constexpr const int AllExceptTargetsOrIds = 3;
    // Get static field: static public DG.Tweening.Core.Enums.FilterType AllExceptTargetsOrIds
    static ::DG::Tweening::Core::Enums::FilterType _get_AllExceptTargetsOrIds();
    // Set static field: static public DG.Tweening.Core.Enums.FilterType AllExceptTargetsOrIds
    static void _set_AllExceptTargetsOrIds(::DG::Tweening::Core::Enums::FilterType value);
    // static field const value: static public DG.Tweening.Core.Enums.FilterType DOGetter
    static constexpr const int DOGetter = 4;
    // Get static field: static public DG.Tweening.Core.Enums.FilterType DOGetter
    static ::DG::Tweening::Core::Enums::FilterType _get_DOGetter();
    // Set static field: static public DG.Tweening.Core.Enums.FilterType DOGetter
    static void _set_DOGetter(::DG::Tweening::Core::Enums::FilterType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // DG.Tweening.Core.Enums.FilterType
  #pragma pack(pop)
  static check_size<sizeof(FilterType), 16 + sizeof(int)> __DG_Tweening_Core_Enums_FilterTypeSizeCheck;
  static_assert(sizeof(FilterType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
