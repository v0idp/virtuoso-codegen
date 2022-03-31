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
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
// Including type: OVRPlugin/Sizei
#include "GlobalNamespace/OVRPlugin_Sizei.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::CameraIntrinsics, "", "OVRPlugin/CameraIntrinsics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/CameraIntrinsics
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::CameraIntrinsics/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/Bool IsValid
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::Bool IsValid;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // Padding between fields: IsValid and: LastChangedTimeSeconds
    char __padding0[0x4] = {};
    // public System.Double LastChangedTimeSeconds
    // Size: 0x8
    // Offset: 0x8
    double LastChangedTimeSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public OVRPlugin/Fovf FOVPort
    // Size: 0x10
    // Offset: 0x10
    ::GlobalNamespace::OVRPlugin::Fovf FOVPort;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Fovf) == 0x10);
    // public System.Single VirtualNearPlaneDistanceMeters
    // Size: 0x4
    // Offset: 0x20
    float VirtualNearPlaneDistanceMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single VirtualFarPlaneDistanceMeters
    // Size: 0x4
    // Offset: 0x24
    float VirtualFarPlaneDistanceMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRPlugin/Sizei ImageSensorPixelResolution
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRPlugin::Sizei ImageSensorPixelResolution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Sizei) == 0x8);
    public:
    // Creating value type constructor for type: CameraIntrinsics
    constexpr CameraIntrinsics(::GlobalNamespace::OVRPlugin::Bool IsValid_ = {}, double LastChangedTimeSeconds_ = {}, ::GlobalNamespace::OVRPlugin::Fovf FOVPort_ = {}, float VirtualNearPlaneDistanceMeters_ = {}, float VirtualFarPlaneDistanceMeters_ = {}, ::GlobalNamespace::OVRPlugin::Sizei ImageSensorPixelResolution_ = {}) noexcept : IsValid{IsValid_}, LastChangedTimeSeconds{LastChangedTimeSeconds_}, FOVPort{FOVPort_}, VirtualNearPlaneDistanceMeters{VirtualNearPlaneDistanceMeters_}, VirtualFarPlaneDistanceMeters{VirtualFarPlaneDistanceMeters_}, ImageSensorPixelResolution{ImageSensorPixelResolution_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/Bool IsValid
    ::GlobalNamespace::OVRPlugin::Bool& dyn_IsValid();
    // Get instance field reference: public System.Double LastChangedTimeSeconds
    double& dyn_LastChangedTimeSeconds();
    // Get instance field reference: public OVRPlugin/Fovf FOVPort
    ::GlobalNamespace::OVRPlugin::Fovf& dyn_FOVPort();
    // Get instance field reference: public System.Single VirtualNearPlaneDistanceMeters
    float& dyn_VirtualNearPlaneDistanceMeters();
    // Get instance field reference: public System.Single VirtualFarPlaneDistanceMeters
    float& dyn_VirtualFarPlaneDistanceMeters();
    // Get instance field reference: public OVRPlugin/Sizei ImageSensorPixelResolution
    ::GlobalNamespace::OVRPlugin::Sizei& dyn_ImageSensorPixelResolution();
  }; // OVRPlugin/CameraIntrinsics
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraIntrinsics), 40 + sizeof(::GlobalNamespace::OVRPlugin::Sizei)> __GlobalNamespace_OVRPlugin_CameraIntrinsicsSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraIntrinsics) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
