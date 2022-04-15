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
  // Forward declaring type: VirtualGreenScreenType
  struct OVRManager_VirtualGreenScreenType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_VirtualGreenScreenType, "", "OVRManager/VirtualGreenScreenType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/VirtualGreenScreenType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_VirtualGreenScreenType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRManager_VirtualGreenScreenType
    constexpr OVRManager_VirtualGreenScreenType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/VirtualGreenScreenType Off
    static constexpr const int Off = 0;
    // Get static field: static public OVRManager/VirtualGreenScreenType Off
    static ::GlobalNamespace::OVRManager_VirtualGreenScreenType _get_Off();
    // Set static field: static public OVRManager/VirtualGreenScreenType Off
    static void _set_Off(::GlobalNamespace::OVRManager_VirtualGreenScreenType value);
    // [ObsoleteAttribute] Offset: 0x697748
    // static field const value: static public OVRManager/VirtualGreenScreenType OuterBoundary
    static constexpr const int OuterBoundary = 1;
    // Get static field: static public OVRManager/VirtualGreenScreenType OuterBoundary
    static ::GlobalNamespace::OVRManager_VirtualGreenScreenType _get_OuterBoundary();
    // Set static field: static public OVRManager/VirtualGreenScreenType OuterBoundary
    static void _set_OuterBoundary(::GlobalNamespace::OVRManager_VirtualGreenScreenType value);
    // static field const value: static public OVRManager/VirtualGreenScreenType PlayArea
    static constexpr const int PlayArea = 2;
    // Get static field: static public OVRManager/VirtualGreenScreenType PlayArea
    static ::GlobalNamespace::OVRManager_VirtualGreenScreenType _get_PlayArea();
    // Set static field: static public OVRManager/VirtualGreenScreenType PlayArea
    static void _set_PlayArea(::GlobalNamespace::OVRManager_VirtualGreenScreenType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRManager/VirtualGreenScreenType
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_VirtualGreenScreenType), 0 + sizeof(int)> __GlobalNamespace_OVRManager_VirtualGreenScreenTypeSizeCheck;
  static_assert(sizeof(OVRManager_VirtualGreenScreenType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
