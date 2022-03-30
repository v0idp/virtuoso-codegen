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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::EyeTextureFormat, "", "OVRPlugin/EyeTextureFormat");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/EyeTextureFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::EyeTextureFormat/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: EyeTextureFormat
    constexpr EyeTextureFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/EyeTextureFormat Default
    static constexpr const int Default = 0;
    // Get static field: static public OVRPlugin/EyeTextureFormat Default
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_Default();
    // Set static field: static public OVRPlugin/EyeTextureFormat Default
    static void _set_Default(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // static field const value: static public OVRPlugin/EyeTextureFormat R8G8B8A8_sRGB
    static constexpr const int R8G8B8A8_sRGB = 0;
    // Get static field: static public OVRPlugin/EyeTextureFormat R8G8B8A8_sRGB
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_R8G8B8A8_sRGB();
    // Set static field: static public OVRPlugin/EyeTextureFormat R8G8B8A8_sRGB
    static void _set_R8G8B8A8_sRGB(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // static field const value: static public OVRPlugin/EyeTextureFormat R8G8B8A8
    static constexpr const int R8G8B8A8 = 1;
    // Get static field: static public OVRPlugin/EyeTextureFormat R8G8B8A8
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_R8G8B8A8();
    // Set static field: static public OVRPlugin/EyeTextureFormat R8G8B8A8
    static void _set_R8G8B8A8(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // static field const value: static public OVRPlugin/EyeTextureFormat R16G16B16A16_FP
    static constexpr const int R16G16B16A16_FP = 2;
    // Get static field: static public OVRPlugin/EyeTextureFormat R16G16B16A16_FP
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_R16G16B16A16_FP();
    // Set static field: static public OVRPlugin/EyeTextureFormat R16G16B16A16_FP
    static void _set_R16G16B16A16_FP(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // static field const value: static public OVRPlugin/EyeTextureFormat R11G11B10_FP
    static constexpr const int R11G11B10_FP = 3;
    // Get static field: static public OVRPlugin/EyeTextureFormat R11G11B10_FP
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_R11G11B10_FP();
    // Set static field: static public OVRPlugin/EyeTextureFormat R11G11B10_FP
    static void _set_R11G11B10_FP(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // static field const value: static public OVRPlugin/EyeTextureFormat B8G8R8A8_sRGB
    static constexpr const int B8G8R8A8_sRGB = 4;
    // Get static field: static public OVRPlugin/EyeTextureFormat B8G8R8A8_sRGB
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_B8G8R8A8_sRGB();
    // Set static field: static public OVRPlugin/EyeTextureFormat B8G8R8A8_sRGB
    static void _set_B8G8R8A8_sRGB(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // static field const value: static public OVRPlugin/EyeTextureFormat B8G8R8A8
    static constexpr const int B8G8R8A8 = 5;
    // Get static field: static public OVRPlugin/EyeTextureFormat B8G8R8A8
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_B8G8R8A8();
    // Set static field: static public OVRPlugin/EyeTextureFormat B8G8R8A8
    static void _set_B8G8R8A8(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // static field const value: static public OVRPlugin/EyeTextureFormat R5G6B5
    static constexpr const int R5G6B5 = 11;
    // Get static field: static public OVRPlugin/EyeTextureFormat R5G6B5
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_R5G6B5();
    // Set static field: static public OVRPlugin/EyeTextureFormat R5G6B5
    static void _set_R5G6B5(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // static field const value: static public OVRPlugin/EyeTextureFormat EnumSize
    static constexpr const int EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/EyeTextureFormat EnumSize
    static ::GlobalNamespace::OVRPlugin::EyeTextureFormat _get_EnumSize();
    // Set static field: static public OVRPlugin/EyeTextureFormat EnumSize
    static void _set_EnumSize(::GlobalNamespace::OVRPlugin::EyeTextureFormat value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/EyeTextureFormat
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::EyeTextureFormat), 16 + sizeof(int)> __GlobalNamespace_OVRPlugin_EyeTextureFormatSizeCheck;
  static_assert(sizeof(OVRPlugin::EyeTextureFormat) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
