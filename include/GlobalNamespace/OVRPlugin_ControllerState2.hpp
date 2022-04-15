// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::ControllerState2, "", "OVRPlugin/ControllerState2");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/ControllerState2
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::ControllerState2/*, public ::System::ValueType*/ {
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
    public:
    // Creating value type constructor for type: ControllerState2
    constexpr ControllerState2(uint ConnectedControllers_ = {}, uint Buttons_ = {}, uint Touches_ = {}, uint NearTouches_ = {}, float LIndexTrigger_ = {}, float RIndexTrigger_ = {}, float LHandTrigger_ = {}, float RHandTrigger_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f LThumbstick_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f RThumbstick_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f LTouchpad_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f RTouchpad_ = {}) noexcept : ConnectedControllers{ConnectedControllers_}, Buttons{Buttons_}, Touches{Touches_}, NearTouches{NearTouches_}, LIndexTrigger{LIndexTrigger_}, RIndexTrigger{RIndexTrigger_}, LHandTrigger{LHandTrigger_}, RHandTrigger{RHandTrigger_}, LThumbstick{LThumbstick_}, RThumbstick{RThumbstick_}, LTouchpad{LTouchpad_}, RTouchpad{RTouchpad_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 ConnectedControllers
    [[deprecated("Use field access instead!")]] uint& dyn_ConnectedControllers();
    // Get instance field reference: public System.UInt32 Buttons
    [[deprecated("Use field access instead!")]] uint& dyn_Buttons();
    // Get instance field reference: public System.UInt32 Touches
    [[deprecated("Use field access instead!")]] uint& dyn_Touches();
    // Get instance field reference: public System.UInt32 NearTouches
    [[deprecated("Use field access instead!")]] uint& dyn_NearTouches();
    // Get instance field reference: public System.Single LIndexTrigger
    [[deprecated("Use field access instead!")]] float& dyn_LIndexTrigger();
    // Get instance field reference: public System.Single RIndexTrigger
    [[deprecated("Use field access instead!")]] float& dyn_RIndexTrigger();
    // Get instance field reference: public System.Single LHandTrigger
    [[deprecated("Use field access instead!")]] float& dyn_LHandTrigger();
    // Get instance field reference: public System.Single RHandTrigger
    [[deprecated("Use field access instead!")]] float& dyn_RHandTrigger();
    // Get instance field reference: public OVRPlugin/Vector2f LThumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_LThumbstick();
    // Get instance field reference: public OVRPlugin/Vector2f RThumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_RThumbstick();
    // Get instance field reference: public OVRPlugin/Vector2f LTouchpad
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_LTouchpad();
    // Get instance field reference: public OVRPlugin/Vector2f RTouchpad
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_RTouchpad();
    // public System.Void .ctor(OVRPlugin/ControllerState cs)
    // Offset: 0x855B00
    ControllerState2(::GlobalNamespace::OVRPlugin::ControllerState cs);
  }; // OVRPlugin/ControllerState2
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::ControllerState2), 56 + sizeof(::GlobalNamespace::OVRPlugin::Vector2f)> __GlobalNamespace_OVRPlugin_ControllerState2SizeCheck;
  static_assert(sizeof(OVRPlugin::ControllerState2) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::ControllerState2::ControllerState2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
