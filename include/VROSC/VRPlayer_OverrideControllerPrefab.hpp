// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.VRPlayer
#include "VROSC/VRPlayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::VRPlayer::OverrideControllerPrefab);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VRPlayer::OverrideControllerPrefab*, "VROSC", "VRPlayer/OverrideControllerPrefab");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.VRPlayer/VROSC.OverrideControllerPrefab
  // [TokenAttribute] Offset: FFFFFFFF
  class VRPlayer::OverrideControllerPrefab : public ::Il2CppObject {
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
    // public VROSC.VRPlayer/VROSC.ControllerType controllerType
    // Size: 0x4
    // Offset: 0x10
    ::VROSC::VRPlayer::ControllerType controllerType;
    // Field size check
    static_assert(sizeof(::VROSC::VRPlayer::ControllerType) == 0x4);
    // Padding between fields: controllerType and: name
    char __padding0[0x4] = {};
    // public System.String name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public VROSC.InputDevice leftPrefab
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::InputDevice* leftPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // public VROSC.InputDevice rightPrefab
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::InputDevice* rightPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    public:
    // Get instance field reference: public VROSC.VRPlayer/VROSC.ControllerType controllerType
    ::VROSC::VRPlayer::ControllerType& dyn_controllerType();
    // Get instance field reference: public System.String name
    ::StringW& dyn_name();
    // Get instance field reference: public VROSC.InputDevice leftPrefab
    ::VROSC::InputDevice*& dyn_leftPrefab();
    // Get instance field reference: public VROSC.InputDevice rightPrefab
    ::VROSC::InputDevice*& dyn_rightPrefab();
    // public System.Void .ctor()
    // Offset: 0x1416DB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRPlayer::OverrideControllerPrefab* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::VRPlayer::OverrideControllerPrefab::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRPlayer::OverrideControllerPrefab*, creationType>()));
    }
  }; // VROSC.VRPlayer/VROSC.OverrideControllerPrefab
  #pragma pack(pop)
  static check_size<sizeof(VRPlayer::OverrideControllerPrefab), 40 + sizeof(::VROSC::InputDevice*)> __VROSC_VRPlayer_OverrideControllerPrefabSizeCheck;
  static_assert(sizeof(VRPlayer::OverrideControllerPrefab) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::VRPlayer::OverrideControllerPrefab::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
