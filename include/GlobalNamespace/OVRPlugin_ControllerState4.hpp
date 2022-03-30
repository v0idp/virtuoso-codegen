// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::ControllerState4, "", "OVRPlugin/ControllerState4");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/ControllerState4
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::ControllerState4/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 ConnectedControllers
    // Size: 0x4
    // Offset: 0x0
    uint ConnectedControllers;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 Buttons
    // Size: 0x4
    // Offset: 0x4
    uint Buttons;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 Touches
    // Size: 0x4
    // Offset: 0x8
    uint Touches;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 NearTouches
    // Size: 0x4
    // Offset: 0xC
    uint NearTouches;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Single LIndexTrigger
    // Size: 0x4
    // Offset: 0x10
    float LIndexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RIndexTrigger
    // Size: 0x4
    // Offset: 0x14
    float RIndexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LHandTrigger
    // Size: 0x4
    // Offset: 0x18
    float LHandTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RHandTrigger
    // Size: 0x4
    // Offset: 0x1C
    float RHandTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRPlugin/Vector2f LThumbstick
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRPlugin::Vector2f LThumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f RThumbstick
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRPlugin::Vector2f RThumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f LTouchpad
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::OVRPlugin::Vector2f LTouchpad;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f RTouchpad
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OVRPlugin::Vector2f RTouchpad;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public System.Byte LBatteryPercentRemaining
    // Size: 0x1
    // Offset: 0x40
    uint8_t LBatteryPercentRemaining;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte RBatteryPercentRemaining
    // Size: 0x1
    // Offset: 0x41
    uint8_t RBatteryPercentRemaining;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte LRecenterCount
    // Size: 0x1
    // Offset: 0x42
    uint8_t LRecenterCount;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte RRecenterCount
    // Size: 0x1
    // Offset: 0x43
    uint8_t RRecenterCount;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_27
    // Size: 0x1
    // Offset: 0x44
    uint8_t Reserved_27;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_26
    // Size: 0x1
    // Offset: 0x45
    uint8_t Reserved_26;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_25
    // Size: 0x1
    // Offset: 0x46
    uint8_t Reserved_25;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_24
    // Size: 0x1
    // Offset: 0x47
    uint8_t Reserved_24;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_23
    // Size: 0x1
    // Offset: 0x48
    uint8_t Reserved_23;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_22
    // Size: 0x1
    // Offset: 0x49
    uint8_t Reserved_22;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_21
    // Size: 0x1
    // Offset: 0x4A
    uint8_t Reserved_21;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_20
    // Size: 0x1
    // Offset: 0x4B
    uint8_t Reserved_20;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_19
    // Size: 0x1
    // Offset: 0x4C
    uint8_t Reserved_19;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_18
    // Size: 0x1
    // Offset: 0x4D
    uint8_t Reserved_18;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_17
    // Size: 0x1
    // Offset: 0x4E
    uint8_t Reserved_17;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_16
    // Size: 0x1
    // Offset: 0x4F
    uint8_t Reserved_16;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_15
    // Size: 0x1
    // Offset: 0x50
    uint8_t Reserved_15;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_14
    // Size: 0x1
    // Offset: 0x51
    uint8_t Reserved_14;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_13
    // Size: 0x1
    // Offset: 0x52
    uint8_t Reserved_13;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_12
    // Size: 0x1
    // Offset: 0x53
    uint8_t Reserved_12;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_11
    // Size: 0x1
    // Offset: 0x54
    uint8_t Reserved_11;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_10
    // Size: 0x1
    // Offset: 0x55
    uint8_t Reserved_10;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_09
    // Size: 0x1
    // Offset: 0x56
    uint8_t Reserved_09;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_08
    // Size: 0x1
    // Offset: 0x57
    uint8_t Reserved_08;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_07
    // Size: 0x1
    // Offset: 0x58
    uint8_t Reserved_07;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_06
    // Size: 0x1
    // Offset: 0x59
    uint8_t Reserved_06;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_05
    // Size: 0x1
    // Offset: 0x5A
    uint8_t Reserved_05;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_04
    // Size: 0x1
    // Offset: 0x5B
    uint8_t Reserved_04;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_03
    // Size: 0x1
    // Offset: 0x5C
    uint8_t Reserved_03;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_02
    // Size: 0x1
    // Offset: 0x5D
    uint8_t Reserved_02;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_01
    // Size: 0x1
    // Offset: 0x5E
    uint8_t Reserved_01;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved_00
    // Size: 0x1
    // Offset: 0x5F
    uint8_t Reserved_00;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ControllerState4
    constexpr ControllerState4(uint ConnectedControllers_ = {}, uint Buttons_ = {}, uint Touches_ = {}, uint NearTouches_ = {}, float LIndexTrigger_ = {}, float RIndexTrigger_ = {}, float LHandTrigger_ = {}, float RHandTrigger_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f LThumbstick_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f RThumbstick_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f LTouchpad_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f RTouchpad_ = {}, uint8_t LBatteryPercentRemaining_ = {}, uint8_t RBatteryPercentRemaining_ = {}, uint8_t LRecenterCount_ = {}, uint8_t RRecenterCount_ = {}, uint8_t Reserved_27_ = {}, uint8_t Reserved_26_ = {}, uint8_t Reserved_25_ = {}, uint8_t Reserved_24_ = {}, uint8_t Reserved_23_ = {}, uint8_t Reserved_22_ = {}, uint8_t Reserved_21_ = {}, uint8_t Reserved_20_ = {}, uint8_t Reserved_19_ = {}, uint8_t Reserved_18_ = {}, uint8_t Reserved_17_ = {}, uint8_t Reserved_16_ = {}, uint8_t Reserved_15_ = {}, uint8_t Reserved_14_ = {}, uint8_t Reserved_13_ = {}, uint8_t Reserved_12_ = {}, uint8_t Reserved_11_ = {}, uint8_t Reserved_10_ = {}, uint8_t Reserved_09_ = {}, uint8_t Reserved_08_ = {}, uint8_t Reserved_07_ = {}, uint8_t Reserved_06_ = {}, uint8_t Reserved_05_ = {}, uint8_t Reserved_04_ = {}, uint8_t Reserved_03_ = {}, uint8_t Reserved_02_ = {}, uint8_t Reserved_01_ = {}, uint8_t Reserved_00_ = {}) noexcept : ConnectedControllers{ConnectedControllers_}, Buttons{Buttons_}, Touches{Touches_}, NearTouches{NearTouches_}, LIndexTrigger{LIndexTrigger_}, RIndexTrigger{RIndexTrigger_}, LHandTrigger{LHandTrigger_}, RHandTrigger{RHandTrigger_}, LThumbstick{LThumbstick_}, RThumbstick{RThumbstick_}, LTouchpad{LTouchpad_}, RTouchpad{RTouchpad_}, LBatteryPercentRemaining{LBatteryPercentRemaining_}, RBatteryPercentRemaining{RBatteryPercentRemaining_}, LRecenterCount{LRecenterCount_}, RRecenterCount{RRecenterCount_}, Reserved_27{Reserved_27_}, Reserved_26{Reserved_26_}, Reserved_25{Reserved_25_}, Reserved_24{Reserved_24_}, Reserved_23{Reserved_23_}, Reserved_22{Reserved_22_}, Reserved_21{Reserved_21_}, Reserved_20{Reserved_20_}, Reserved_19{Reserved_19_}, Reserved_18{Reserved_18_}, Reserved_17{Reserved_17_}, Reserved_16{Reserved_16_}, Reserved_15{Reserved_15_}, Reserved_14{Reserved_14_}, Reserved_13{Reserved_13_}, Reserved_12{Reserved_12_}, Reserved_11{Reserved_11_}, Reserved_10{Reserved_10_}, Reserved_09{Reserved_09_}, Reserved_08{Reserved_08_}, Reserved_07{Reserved_07_}, Reserved_06{Reserved_06_}, Reserved_05{Reserved_05_}, Reserved_04{Reserved_04_}, Reserved_03{Reserved_03_}, Reserved_02{Reserved_02_}, Reserved_01{Reserved_01_}, Reserved_00{Reserved_00_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 ConnectedControllers
    uint& dyn_ConnectedControllers();
    // Get instance field reference: public System.UInt32 Buttons
    uint& dyn_Buttons();
    // Get instance field reference: public System.UInt32 Touches
    uint& dyn_Touches();
    // Get instance field reference: public System.UInt32 NearTouches
    uint& dyn_NearTouches();
    // Get instance field reference: public System.Single LIndexTrigger
    float& dyn_LIndexTrigger();
    // Get instance field reference: public System.Single RIndexTrigger
    float& dyn_RIndexTrigger();
    // Get instance field reference: public System.Single LHandTrigger
    float& dyn_LHandTrigger();
    // Get instance field reference: public System.Single RHandTrigger
    float& dyn_RHandTrigger();
    // Get instance field reference: public OVRPlugin/Vector2f LThumbstick
    ::GlobalNamespace::OVRPlugin::Vector2f& dyn_LThumbstick();
    // Get instance field reference: public OVRPlugin/Vector2f RThumbstick
    ::GlobalNamespace::OVRPlugin::Vector2f& dyn_RThumbstick();
    // Get instance field reference: public OVRPlugin/Vector2f LTouchpad
    ::GlobalNamespace::OVRPlugin::Vector2f& dyn_LTouchpad();
    // Get instance field reference: public OVRPlugin/Vector2f RTouchpad
    ::GlobalNamespace::OVRPlugin::Vector2f& dyn_RTouchpad();
    // Get instance field reference: public System.Byte LBatteryPercentRemaining
    uint8_t& dyn_LBatteryPercentRemaining();
    // Get instance field reference: public System.Byte RBatteryPercentRemaining
    uint8_t& dyn_RBatteryPercentRemaining();
    // Get instance field reference: public System.Byte LRecenterCount
    uint8_t& dyn_LRecenterCount();
    // Get instance field reference: public System.Byte RRecenterCount
    uint8_t& dyn_RRecenterCount();
    // Get instance field reference: public System.Byte Reserved_27
    uint8_t& dyn_Reserved_27();
    // Get instance field reference: public System.Byte Reserved_26
    uint8_t& dyn_Reserved_26();
    // Get instance field reference: public System.Byte Reserved_25
    uint8_t& dyn_Reserved_25();
    // Get instance field reference: public System.Byte Reserved_24
    uint8_t& dyn_Reserved_24();
    // Get instance field reference: public System.Byte Reserved_23
    uint8_t& dyn_Reserved_23();
    // Get instance field reference: public System.Byte Reserved_22
    uint8_t& dyn_Reserved_22();
    // Get instance field reference: public System.Byte Reserved_21
    uint8_t& dyn_Reserved_21();
    // Get instance field reference: public System.Byte Reserved_20
    uint8_t& dyn_Reserved_20();
    // Get instance field reference: public System.Byte Reserved_19
    uint8_t& dyn_Reserved_19();
    // Get instance field reference: public System.Byte Reserved_18
    uint8_t& dyn_Reserved_18();
    // Get instance field reference: public System.Byte Reserved_17
    uint8_t& dyn_Reserved_17();
    // Get instance field reference: public System.Byte Reserved_16
    uint8_t& dyn_Reserved_16();
    // Get instance field reference: public System.Byte Reserved_15
    uint8_t& dyn_Reserved_15();
    // Get instance field reference: public System.Byte Reserved_14
    uint8_t& dyn_Reserved_14();
    // Get instance field reference: public System.Byte Reserved_13
    uint8_t& dyn_Reserved_13();
    // Get instance field reference: public System.Byte Reserved_12
    uint8_t& dyn_Reserved_12();
    // Get instance field reference: public System.Byte Reserved_11
    uint8_t& dyn_Reserved_11();
    // Get instance field reference: public System.Byte Reserved_10
    uint8_t& dyn_Reserved_10();
    // Get instance field reference: public System.Byte Reserved_09
    uint8_t& dyn_Reserved_09();
    // Get instance field reference: public System.Byte Reserved_08
    uint8_t& dyn_Reserved_08();
    // Get instance field reference: public System.Byte Reserved_07
    uint8_t& dyn_Reserved_07();
    // Get instance field reference: public System.Byte Reserved_06
    uint8_t& dyn_Reserved_06();
    // Get instance field reference: public System.Byte Reserved_05
    uint8_t& dyn_Reserved_05();
    // Get instance field reference: public System.Byte Reserved_04
    uint8_t& dyn_Reserved_04();
    // Get instance field reference: public System.Byte Reserved_03
    uint8_t& dyn_Reserved_03();
    // Get instance field reference: public System.Byte Reserved_02
    uint8_t& dyn_Reserved_02();
    // Get instance field reference: public System.Byte Reserved_01
    uint8_t& dyn_Reserved_01();
    // Get instance field reference: public System.Byte Reserved_00
    uint8_t& dyn_Reserved_00();
    // public System.Void .ctor(OVRPlugin/ControllerState2 cs)
    // Offset: 0x73F454
    ControllerState4(::GlobalNamespace::OVRPlugin::ControllerState2 cs);
  }; // OVRPlugin/ControllerState4
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::ControllerState4), 95 + sizeof(uint8_t)> __GlobalNamespace_OVRPlugin_ControllerState4SizeCheck;
  static_assert(sizeof(OVRPlugin::ControllerState4) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::ControllerState4::ControllerState4
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
