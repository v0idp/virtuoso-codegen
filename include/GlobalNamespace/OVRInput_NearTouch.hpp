// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::NearTouch, "", "OVRInput/NearTouch");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/NearTouch
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::NearTouch/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: NearTouch
    constexpr NearTouch(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/NearTouch None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/NearTouch None
    static ::GlobalNamespace::OVRInput::NearTouch _get_None();
    // Set static field: static public OVRInput/NearTouch None
    static void _set_None(::GlobalNamespace::OVRInput::NearTouch value);
    // static field const value: static public OVRInput/NearTouch PrimaryIndexTrigger
    static constexpr const int PrimaryIndexTrigger = 1;
    // Get static field: static public OVRInput/NearTouch PrimaryIndexTrigger
    static ::GlobalNamespace::OVRInput::NearTouch _get_PrimaryIndexTrigger();
    // Set static field: static public OVRInput/NearTouch PrimaryIndexTrigger
    static void _set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput::NearTouch value);
    // static field const value: static public OVRInput/NearTouch PrimaryThumbButtons
    static constexpr const int PrimaryThumbButtons = 2;
    // Get static field: static public OVRInput/NearTouch PrimaryThumbButtons
    static ::GlobalNamespace::OVRInput::NearTouch _get_PrimaryThumbButtons();
    // Set static field: static public OVRInput/NearTouch PrimaryThumbButtons
    static void _set_PrimaryThumbButtons(::GlobalNamespace::OVRInput::NearTouch value);
    // static field const value: static public OVRInput/NearTouch SecondaryIndexTrigger
    static constexpr const int SecondaryIndexTrigger = 4;
    // Get static field: static public OVRInput/NearTouch SecondaryIndexTrigger
    static ::GlobalNamespace::OVRInput::NearTouch _get_SecondaryIndexTrigger();
    // Set static field: static public OVRInput/NearTouch SecondaryIndexTrigger
    static void _set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput::NearTouch value);
    // static field const value: static public OVRInput/NearTouch SecondaryThumbButtons
    static constexpr const int SecondaryThumbButtons = 8;
    // Get static field: static public OVRInput/NearTouch SecondaryThumbButtons
    static ::GlobalNamespace::OVRInput::NearTouch _get_SecondaryThumbButtons();
    // Set static field: static public OVRInput/NearTouch SecondaryThumbButtons
    static void _set_SecondaryThumbButtons(::GlobalNamespace::OVRInput::NearTouch value);
    // static field const value: static public OVRInput/NearTouch Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/NearTouch Any
    static ::GlobalNamespace::OVRInput::NearTouch _get_Any();
    // Set static field: static public OVRInput/NearTouch Any
    static void _set_Any(::GlobalNamespace::OVRInput::NearTouch value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRInput/NearTouch
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::NearTouch), 16 + sizeof(int)> __GlobalNamespace_OVRInput_NearTouchSizeCheck;
  static_assert(sizeof(OVRInput::NearTouch) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
