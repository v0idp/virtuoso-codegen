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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarAssetLevelOfDetail
  struct ovrAvatarAssetLevelOfDetail;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarAssetLevelOfDetail, "", "ovrAvatarAssetLevelOfDetail");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ovrAvatarAssetLevelOfDetail
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarAssetLevelOfDetail/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarAssetLevelOfDetail
    constexpr ovrAvatarAssetLevelOfDetail(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ovrAvatarAssetLevelOfDetail Lowest
    static constexpr const int Lowest = 1;
    // Get static field: static public ovrAvatarAssetLevelOfDetail Lowest
    static ::GlobalNamespace::ovrAvatarAssetLevelOfDetail _get_Lowest();
    // Set static field: static public ovrAvatarAssetLevelOfDetail Lowest
    static void _set_Lowest(::GlobalNamespace::ovrAvatarAssetLevelOfDetail value);
    // static field const value: static public ovrAvatarAssetLevelOfDetail Medium
    static constexpr const int Medium = 3;
    // Get static field: static public ovrAvatarAssetLevelOfDetail Medium
    static ::GlobalNamespace::ovrAvatarAssetLevelOfDetail _get_Medium();
    // Set static field: static public ovrAvatarAssetLevelOfDetail Medium
    static void _set_Medium(::GlobalNamespace::ovrAvatarAssetLevelOfDetail value);
    // static field const value: static public ovrAvatarAssetLevelOfDetail Highest
    static constexpr const int Highest = 5;
    // Get static field: static public ovrAvatarAssetLevelOfDetail Highest
    static ::GlobalNamespace::ovrAvatarAssetLevelOfDetail _get_Highest();
    // Set static field: static public ovrAvatarAssetLevelOfDetail Highest
    static void _set_Highest(::GlobalNamespace::ovrAvatarAssetLevelOfDetail value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // ovrAvatarAssetLevelOfDetail
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarAssetLevelOfDetail), 0 + sizeof(int)> __GlobalNamespace_ovrAvatarAssetLevelOfDetailSizeCheck;
  static_assert(sizeof(ovrAvatarAssetLevelOfDetail) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
