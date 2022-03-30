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
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Fovf, "", "OVRPlugin/Fovf");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Fovf
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Fovf/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single UpTan
    // Size: 0x4
    // Offset: 0x0
    float UpTan;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single DownTan
    // Size: 0x4
    // Offset: 0x4
    float DownTan;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LeftTan
    // Size: 0x4
    // Offset: 0x8
    float LeftTan;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RightTan
    // Size: 0x4
    // Offset: 0xC
    float RightTan;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Fovf
    constexpr Fovf(float UpTan_ = {}, float DownTan_ = {}, float LeftTan_ = {}, float RightTan_ = {}) noexcept : UpTan{UpTan_}, DownTan{DownTan_}, LeftTan{LeftTan_}, RightTan{RightTan_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single UpTan
    float& dyn_UpTan();
    // Get instance field reference: public System.Single DownTan
    float& dyn_DownTan();
    // Get instance field reference: public System.Single LeftTan
    float& dyn_LeftTan();
    // Get instance field reference: public System.Single RightTan
    float& dyn_RightTan();
  }; // OVRPlugin/Fovf
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Fovf), 12 + sizeof(float)> __GlobalNamespace_OVRPlugin_FovfSizeCheck;
  static_assert(sizeof(OVRPlugin::Fovf) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"