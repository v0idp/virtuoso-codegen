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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::Button, "", "OVRInput/Button");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/Button
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::Button/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Button
    constexpr Button(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/Button None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/Button None
    static ::GlobalNamespace::OVRInput::Button _get_None();
    // Set static field: static public OVRInput/Button None
    static void _set_None(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button One
    static constexpr const int One = 1;
    // Get static field: static public OVRInput/Button One
    static ::GlobalNamespace::OVRInput::Button _get_One();
    // Set static field: static public OVRInput/Button One
    static void _set_One(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Two
    static constexpr const int Two = 2;
    // Get static field: static public OVRInput/Button Two
    static ::GlobalNamespace::OVRInput::Button _get_Two();
    // Set static field: static public OVRInput/Button Two
    static void _set_Two(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Three
    static constexpr const int Three = 4;
    // Get static field: static public OVRInput/Button Three
    static ::GlobalNamespace::OVRInput::Button _get_Three();
    // Set static field: static public OVRInput/Button Three
    static void _set_Three(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Four
    static constexpr const int Four = 8;
    // Get static field: static public OVRInput/Button Four
    static ::GlobalNamespace::OVRInput::Button _get_Four();
    // Set static field: static public OVRInput/Button Four
    static void _set_Four(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Start
    static constexpr const int Start = 256;
    // Get static field: static public OVRInput/Button Start
    static ::GlobalNamespace::OVRInput::Button _get_Start();
    // Set static field: static public OVRInput/Button Start
    static void _set_Start(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Back
    static constexpr const int Back = 512;
    // Get static field: static public OVRInput/Button Back
    static ::GlobalNamespace::OVRInput::Button _get_Back();
    // Set static field: static public OVRInput/Button Back
    static void _set_Back(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryShoulder
    static constexpr const int PrimaryShoulder = 4096;
    // Get static field: static public OVRInput/Button PrimaryShoulder
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryShoulder();
    // Set static field: static public OVRInput/Button PrimaryShoulder
    static void _set_PrimaryShoulder(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryIndexTrigger
    static constexpr const int PrimaryIndexTrigger = 8192;
    // Get static field: static public OVRInput/Button PrimaryIndexTrigger
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryIndexTrigger();
    // Set static field: static public OVRInput/Button PrimaryIndexTrigger
    static void _set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryHandTrigger
    static constexpr const int PrimaryHandTrigger = 16384;
    // Get static field: static public OVRInput/Button PrimaryHandTrigger
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryHandTrigger();
    // Set static field: static public OVRInput/Button PrimaryHandTrigger
    static void _set_PrimaryHandTrigger(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryThumbstick
    static constexpr const int PrimaryThumbstick = 32768;
    // Get static field: static public OVRInput/Button PrimaryThumbstick
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryThumbstick();
    // Set static field: static public OVRInput/Button PrimaryThumbstick
    static void _set_PrimaryThumbstick(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryThumbstickUp
    static constexpr const int PrimaryThumbstickUp = 65536;
    // Get static field: static public OVRInput/Button PrimaryThumbstickUp
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryThumbstickUp();
    // Set static field: static public OVRInput/Button PrimaryThumbstickUp
    static void _set_PrimaryThumbstickUp(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryThumbstickDown
    static constexpr const int PrimaryThumbstickDown = 131072;
    // Get static field: static public OVRInput/Button PrimaryThumbstickDown
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryThumbstickDown();
    // Set static field: static public OVRInput/Button PrimaryThumbstickDown
    static void _set_PrimaryThumbstickDown(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryThumbstickLeft
    static constexpr const int PrimaryThumbstickLeft = 262144;
    // Get static field: static public OVRInput/Button PrimaryThumbstickLeft
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryThumbstickLeft();
    // Set static field: static public OVRInput/Button PrimaryThumbstickLeft
    static void _set_PrimaryThumbstickLeft(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryThumbstickRight
    static constexpr const int PrimaryThumbstickRight = 524288;
    // Get static field: static public OVRInput/Button PrimaryThumbstickRight
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryThumbstickRight();
    // Set static field: static public OVRInput/Button PrimaryThumbstickRight
    static void _set_PrimaryThumbstickRight(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button PrimaryTouchpad
    static constexpr const int PrimaryTouchpad = 1024;
    // Get static field: static public OVRInput/Button PrimaryTouchpad
    static ::GlobalNamespace::OVRInput::Button _get_PrimaryTouchpad();
    // Set static field: static public OVRInput/Button PrimaryTouchpad
    static void _set_PrimaryTouchpad(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryShoulder
    static constexpr const int SecondaryShoulder = 1048576;
    // Get static field: static public OVRInput/Button SecondaryShoulder
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryShoulder();
    // Set static field: static public OVRInput/Button SecondaryShoulder
    static void _set_SecondaryShoulder(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryIndexTrigger
    static constexpr const int SecondaryIndexTrigger = 2097152;
    // Get static field: static public OVRInput/Button SecondaryIndexTrigger
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryIndexTrigger();
    // Set static field: static public OVRInput/Button SecondaryIndexTrigger
    static void _set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryHandTrigger
    static constexpr const int SecondaryHandTrigger = 4194304;
    // Get static field: static public OVRInput/Button SecondaryHandTrigger
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryHandTrigger();
    // Set static field: static public OVRInput/Button SecondaryHandTrigger
    static void _set_SecondaryHandTrigger(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryThumbstick
    static constexpr const int SecondaryThumbstick = 8388608;
    // Get static field: static public OVRInput/Button SecondaryThumbstick
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryThumbstick();
    // Set static field: static public OVRInput/Button SecondaryThumbstick
    static void _set_SecondaryThumbstick(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryThumbstickUp
    static constexpr const int SecondaryThumbstickUp = 16777216;
    // Get static field: static public OVRInput/Button SecondaryThumbstickUp
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryThumbstickUp();
    // Set static field: static public OVRInput/Button SecondaryThumbstickUp
    static void _set_SecondaryThumbstickUp(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryThumbstickDown
    static constexpr const int SecondaryThumbstickDown = 33554432;
    // Get static field: static public OVRInput/Button SecondaryThumbstickDown
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryThumbstickDown();
    // Set static field: static public OVRInput/Button SecondaryThumbstickDown
    static void _set_SecondaryThumbstickDown(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryThumbstickLeft
    static constexpr const int SecondaryThumbstickLeft = 67108864;
    // Get static field: static public OVRInput/Button SecondaryThumbstickLeft
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryThumbstickLeft();
    // Set static field: static public OVRInput/Button SecondaryThumbstickLeft
    static void _set_SecondaryThumbstickLeft(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryThumbstickRight
    static constexpr const int SecondaryThumbstickRight = 134217728;
    // Get static field: static public OVRInput/Button SecondaryThumbstickRight
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryThumbstickRight();
    // Set static field: static public OVRInput/Button SecondaryThumbstickRight
    static void _set_SecondaryThumbstickRight(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button SecondaryTouchpad
    static constexpr const int SecondaryTouchpad = 2048;
    // Get static field: static public OVRInput/Button SecondaryTouchpad
    static ::GlobalNamespace::OVRInput::Button _get_SecondaryTouchpad();
    // Set static field: static public OVRInput/Button SecondaryTouchpad
    static void _set_SecondaryTouchpad(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button DpadUp
    static constexpr const int DpadUp = 16;
    // Get static field: static public OVRInput/Button DpadUp
    static ::GlobalNamespace::OVRInput::Button _get_DpadUp();
    // Set static field: static public OVRInput/Button DpadUp
    static void _set_DpadUp(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button DpadDown
    static constexpr const int DpadDown = 32;
    // Get static field: static public OVRInput/Button DpadDown
    static ::GlobalNamespace::OVRInput::Button _get_DpadDown();
    // Set static field: static public OVRInput/Button DpadDown
    static void _set_DpadDown(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button DpadLeft
    static constexpr const int DpadLeft = 64;
    // Get static field: static public OVRInput/Button DpadLeft
    static ::GlobalNamespace::OVRInput::Button _get_DpadLeft();
    // Set static field: static public OVRInput/Button DpadLeft
    static void _set_DpadLeft(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button DpadRight
    static constexpr const int DpadRight = 128;
    // Get static field: static public OVRInput/Button DpadRight
    static ::GlobalNamespace::OVRInput::Button _get_DpadRight();
    // Set static field: static public OVRInput/Button DpadRight
    static void _set_DpadRight(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Up
    static constexpr const int Up = 268435456;
    // Get static field: static public OVRInput/Button Up
    static ::GlobalNamespace::OVRInput::Button _get_Up();
    // Set static field: static public OVRInput/Button Up
    static void _set_Up(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Down
    static constexpr const int Down = 536870912;
    // Get static field: static public OVRInput/Button Down
    static ::GlobalNamespace::OVRInput::Button _get_Down();
    // Set static field: static public OVRInput/Button Down
    static void _set_Down(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Left
    static constexpr const int Left = 1073741824;
    // Get static field: static public OVRInput/Button Left
    static ::GlobalNamespace::OVRInput::Button _get_Left();
    // Set static field: static public OVRInput/Button Left
    static void _set_Left(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Right
    static constexpr const int Right = -2147483648;
    // Get static field: static public OVRInput/Button Right
    static ::GlobalNamespace::OVRInput::Button _get_Right();
    // Set static field: static public OVRInput/Button Right
    static void _set_Right(::GlobalNamespace::OVRInput::Button value);
    // static field const value: static public OVRInput/Button Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/Button Any
    static ::GlobalNamespace::OVRInput::Button _get_Any();
    // Set static field: static public OVRInput/Button Any
    static void _set_Any(::GlobalNamespace::OVRInput::Button value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRInput/Button
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::Button), 0 + sizeof(int)> __GlobalNamespace_OVRInput_ButtonSizeCheck;
  static_assert(sizeof(OVRInput::Button) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
