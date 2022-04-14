// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.InputDevice
#include "VROSC/InputDevice.hpp"
// Including type: VROSC.TriggerButton
#include "VROSC/TriggerButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerInputNode
  class ControllerInputNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InputDevice::HeldInputNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputDevice::HeldInputNode*, "VROSC", "InputDevice/HeldInputNode");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InputDevice/VROSC.HeldInputNode
  // [TokenAttribute] Offset: FFFFFFFF
  class InputDevice::HeldInputNode : public ::Il2CppObject {
    public:
    public:
    // public VROSC.ControllerInputNode InputNode
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::ControllerInputNode* InputNode;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerInputNode*) == 0x8);
    // public VROSC.TriggerButton HoldingButton
    // Size: 0x4
    // Offset: 0x18
    ::VROSC::TriggerButton HoldingButton;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x4);
    public:
    // Get instance field reference: public VROSC.ControllerInputNode InputNode
    [[deprecated]] ::VROSC::ControllerInputNode*& dyn_InputNode();
    // Get instance field reference: public VROSC.TriggerButton HoldingButton
    [[deprecated]] ::VROSC::TriggerButton& dyn_HoldingButton();
    // public System.Void .ctor(VROSC.ControllerInputNode inputNode, VROSC.TriggerButton holdingButton)
    // Offset: 0x1958944
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputDevice::HeldInputNode* New_ctor(::VROSC::ControllerInputNode* inputNode, ::VROSC::TriggerButton holdingButton) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InputDevice::HeldInputNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputDevice::HeldInputNode*, creationType>(inputNode, holdingButton)));
    }
  }; // VROSC.InputDevice/VROSC.HeldInputNode
  #pragma pack(pop)
  static check_size<sizeof(InputDevice::HeldInputNode), 24 + sizeof(::VROSC::TriggerButton)> __VROSC_InputDevice_HeldInputNodeSizeCheck;
  static_assert(sizeof(InputDevice::HeldInputNode) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InputDevice::HeldInputNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
