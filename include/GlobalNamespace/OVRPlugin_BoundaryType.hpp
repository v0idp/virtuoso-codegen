// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::BoundaryType, "", "OVRPlugin/BoundaryType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/BoundaryType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::BoundaryType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BoundaryType
    constexpr BoundaryType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [ObsoleteAttribute] Offset: 0x697A94
    // static field const value: static public OVRPlugin/BoundaryType OuterBoundary
    static constexpr const int OuterBoundary = 1;
    // Get static field: static public OVRPlugin/BoundaryType OuterBoundary
    static ::GlobalNamespace::OVRPlugin::BoundaryType _get_OuterBoundary();
    // Set static field: static public OVRPlugin/BoundaryType OuterBoundary
    static void _set_OuterBoundary(::GlobalNamespace::OVRPlugin::BoundaryType value);
    // static field const value: static public OVRPlugin/BoundaryType PlayArea
    static constexpr const int PlayArea = 256;
    // Get static field: static public OVRPlugin/BoundaryType PlayArea
    static ::GlobalNamespace::OVRPlugin::BoundaryType _get_PlayArea();
    // Set static field: static public OVRPlugin/BoundaryType PlayArea
    static void _set_PlayArea(::GlobalNamespace::OVRPlugin::BoundaryType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // OVRPlugin/BoundaryType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::BoundaryType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_BoundaryTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::BoundaryType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
