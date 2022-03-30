// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRInput::HapticInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::HapticInfo*, "", "OVRInput/HapticInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/HapticInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRInput::HapticInfo : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Boolean playingHaptics
    // Size: 0x1
    // Offset: 0x10
    bool playingHaptics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playingHaptics and: hapticsDurationPlayed
    char __padding0[0x3] = {};
    // public System.Single hapticsDurationPlayed
    // Size: 0x4
    // Offset: 0x14
    float hapticsDurationPlayed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hapticsDuration
    // Size: 0x4
    // Offset: 0x18
    float hapticsDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hapticAmplitude
    // Size: 0x4
    // Offset: 0x1C
    float hapticAmplitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.XR.XRNode node
    // Size: 0x14
    // Offset: 0x20
    ::UnityEngine::XR::XRNode node;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::XRNode) == 0x14);
    public:
    // Get instance field reference: public System.Boolean playingHaptics
    bool& dyn_playingHaptics();
    // Get instance field reference: public System.Single hapticsDurationPlayed
    float& dyn_hapticsDurationPlayed();
    // Get instance field reference: public System.Single hapticsDuration
    float& dyn_hapticsDuration();
    // Get instance field reference: public System.Single hapticAmplitude
    float& dyn_hapticAmplitude();
    // Get instance field reference: public UnityEngine.XR.XRNode node
    ::UnityEngine::XR::XRNode& dyn_node();
    // public System.Void .ctor()
    // Offset: 0x7384F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::HapticInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRInput::HapticInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::HapticInfo*, creationType>()));
    }
  }; // OVRInput/HapticInfo
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::HapticInfo), 32 + sizeof(::UnityEngine::XR::XRNode)> __GlobalNamespace_OVRInput_HapticInfoSizeCheck;
  static_assert(sizeof(OVRInput::HapticInfo) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::HapticInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!