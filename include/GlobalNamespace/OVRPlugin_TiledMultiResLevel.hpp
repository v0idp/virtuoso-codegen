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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::TiledMultiResLevel, "", "OVRPlugin/TiledMultiResLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/TiledMultiResLevel
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: 6949C0
  struct OVRPlugin::TiledMultiResLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TiledMultiResLevel
    constexpr TiledMultiResLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/TiledMultiResLevel Off
    static constexpr const int Off = 0;
    // Get static field: static public OVRPlugin/TiledMultiResLevel Off
    static ::GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_Off();
    // Set static field: static public OVRPlugin/TiledMultiResLevel Off
    static void _set_Off(::GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel LMSLow
    static constexpr const int LMSLow = 1;
    // Get static field: static public OVRPlugin/TiledMultiResLevel LMSLow
    static ::GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_LMSLow();
    // Set static field: static public OVRPlugin/TiledMultiResLevel LMSLow
    static void _set_LMSLow(::GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel LMSMedium
    static constexpr const int LMSMedium = 2;
    // Get static field: static public OVRPlugin/TiledMultiResLevel LMSMedium
    static ::GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_LMSMedium();
    // Set static field: static public OVRPlugin/TiledMultiResLevel LMSMedium
    static void _set_LMSMedium(::GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel LMSHigh
    static constexpr const int LMSHigh = 3;
    // Get static field: static public OVRPlugin/TiledMultiResLevel LMSHigh
    static ::GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_LMSHigh();
    // Set static field: static public OVRPlugin/TiledMultiResLevel LMSHigh
    static void _set_LMSHigh(::GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel LMSHighTop
    static constexpr const int LMSHighTop = 4;
    // Get static field: static public OVRPlugin/TiledMultiResLevel LMSHighTop
    static ::GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_LMSHighTop();
    // Set static field: static public OVRPlugin/TiledMultiResLevel LMSHighTop
    static void _set_LMSHighTop(::GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel EnumSize
    static constexpr const int EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/TiledMultiResLevel EnumSize
    static ::GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_EnumSize();
    // Set static field: static public OVRPlugin/TiledMultiResLevel EnumSize
    static void _set_EnumSize(::GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/TiledMultiResLevel
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::TiledMultiResLevel), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_TiledMultiResLevelSizeCheck;
  static_assert(sizeof(OVRPlugin::TiledMultiResLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
