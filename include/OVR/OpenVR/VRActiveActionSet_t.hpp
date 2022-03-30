// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VRActiveActionSet_t
  struct VRActiveActionSet_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRActiveActionSet_t, "OVR.OpenVR", "VRActiveActionSet_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VRActiveActionSet_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRActiveActionSet_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 ulActionSet
    // Size: 0x8
    // Offset: 0x0
    uint64_t ulActionSet;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 ulRestrictedToDevice
    // Size: 0x8
    // Offset: 0x8
    uint64_t ulRestrictedToDevice;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 ulSecondaryActionSet
    // Size: 0x8
    // Offset: 0x10
    uint64_t ulSecondaryActionSet;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt32 unPadding
    // Size: 0x4
    // Offset: 0x18
    uint unPadding;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 nPriority
    // Size: 0x4
    // Offset: 0x1C
    int nPriority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VRActiveActionSet_t
    constexpr VRActiveActionSet_t(uint64_t ulActionSet_ = {}, uint64_t ulRestrictedToDevice_ = {}, uint64_t ulSecondaryActionSet_ = {}, uint unPadding_ = {}, int nPriority_ = {}) noexcept : ulActionSet{ulActionSet_}, ulRestrictedToDevice{ulRestrictedToDevice_}, ulSecondaryActionSet{ulSecondaryActionSet_}, unPadding{unPadding_}, nPriority{nPriority_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 ulActionSet
    uint64_t& dyn_ulActionSet();
    // Get instance field reference: public System.UInt64 ulRestrictedToDevice
    uint64_t& dyn_ulRestrictedToDevice();
    // Get instance field reference: public System.UInt64 ulSecondaryActionSet
    uint64_t& dyn_ulSecondaryActionSet();
    // Get instance field reference: public System.UInt32 unPadding
    uint& dyn_unPadding();
    // Get instance field reference: public System.Int32 nPriority
    int& dyn_nPriority();
  }; // OVR.OpenVR.VRActiveActionSet_t
  #pragma pack(pop)
  static check_size<sizeof(VRActiveActionSet_t), 28 + sizeof(int)> __OVR_OpenVR_VRActiveActionSet_tSizeCheck;
  static_assert(sizeof(VRActiveActionSet_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"