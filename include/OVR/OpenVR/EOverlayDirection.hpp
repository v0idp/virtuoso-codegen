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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EOverlayDirection
  struct EOverlayDirection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EOverlayDirection, "OVR.OpenVR", "EOverlayDirection");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EOverlayDirection
  // [TokenAttribute] Offset: FFFFFFFF
  struct EOverlayDirection/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: EOverlayDirection
    constexpr EOverlayDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EOverlayDirection Up
    static constexpr const int Up = 0;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Up
    static ::OVR::OpenVR::EOverlayDirection _get_Up();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Up
    static void _set_Up(::OVR::OpenVR::EOverlayDirection value);
    // static field const value: static public OVR.OpenVR.EOverlayDirection Down
    static constexpr const int Down = 1;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Down
    static ::OVR::OpenVR::EOverlayDirection _get_Down();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Down
    static void _set_Down(::OVR::OpenVR::EOverlayDirection value);
    // static field const value: static public OVR.OpenVR.EOverlayDirection Left
    static constexpr const int Left = 2;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Left
    static ::OVR::OpenVR::EOverlayDirection _get_Left();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Left
    static void _set_Left(::OVR::OpenVR::EOverlayDirection value);
    // static field const value: static public OVR.OpenVR.EOverlayDirection Right
    static constexpr const int Right = 3;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Right
    static ::OVR::OpenVR::EOverlayDirection _get_Right();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Right
    static void _set_Right(::OVR::OpenVR::EOverlayDirection value);
    // static field const value: static public OVR.OpenVR.EOverlayDirection Count
    static constexpr const int Count = 4;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Count
    static ::OVR::OpenVR::EOverlayDirection _get_Count();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Count
    static void _set_Count(::OVR::OpenVR::EOverlayDirection value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EOverlayDirection
  #pragma pack(pop)
  static check_size<sizeof(EOverlayDirection), 16 + sizeof(int)> __OVR_OpenVR_EOverlayDirectionSizeCheck;
  static_assert(sizeof(EOverlayDirection) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
