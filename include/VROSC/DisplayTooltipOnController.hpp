// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.HighlightControllerComponents/VROSC.Component
#include "VROSC/HighlightControllerComponents_Component.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerInputNode
  class ControllerInputNode;
  // Forward declaring type: TooltipData
  class TooltipData;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: DisplayTooltipOnController
  class DisplayTooltipOnController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::DisplayTooltipOnController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DisplayTooltipOnController*, "VROSC", "DisplayTooltipOnController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.DisplayTooltipOnController
  // [TokenAttribute] Offset: FFFFFFFF
  class DisplayTooltipOnController : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.HighlightControllerComponents/VROSC.Component _component
    // Size: 0x14
    // Offset: 0x18
    ::VROSC::HighlightControllerComponents::Component component;
    // Field size check
    static_assert(sizeof(::VROSC::HighlightControllerComponents::Component) == 0x14);
    // private VROSC.ControllerInputNode _controllerInputNode
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::ControllerInputNode* controllerInputNode;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerInputNode*) == 0x8);
    // private System.String _text
    // Size: 0x8
    // Offset: 0x28
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private VROSC.TooltipData _tooltipData
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::TooltipData* tooltipData;
    // Field size check
    static_assert(sizeof(::VROSC::TooltipData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.HighlightControllerComponents/VROSC.Component _component
    ::VROSC::HighlightControllerComponents::Component& dyn__component();
    // Get instance field reference: private VROSC.ControllerInputNode _controllerInputNode
    ::VROSC::ControllerInputNode*& dyn__controllerInputNode();
    // Get instance field reference: private System.String _text
    ::StringW& dyn__text();
    // Get instance field reference: private VROSC.TooltipData _tooltipData
    ::VROSC::TooltipData*& dyn__tooltipData();
    // protected System.Void Awake()
    // Offset: 0x130BEA4
    void Awake();
    // private System.Void Setup()
    // Offset: 0x130BF20
    void Setup();
    // private System.Void HoverStart(VROSC.InputDevice device)
    // Offset: 0x130C058
    void HoverStart(::VROSC::InputDevice* device);
    // private System.Void HoverEnd(VROSC.InputDevice device)
    // Offset: 0x130C0A8
    void HoverEnd(::VROSC::InputDevice* device);
    // public System.Void .ctor()
    // Offset: 0x130C0F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisplayTooltipOnController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::DisplayTooltipOnController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisplayTooltipOnController*, creationType>()));
    }
  }; // VROSC.DisplayTooltipOnController
  #pragma pack(pop)
  static check_size<sizeof(DisplayTooltipOnController), 48 + sizeof(::VROSC::TooltipData*)> __VROSC_DisplayTooltipOnControllerSizeCheck;
  static_assert(sizeof(DisplayTooltipOnController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::DisplayTooltipOnController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DisplayTooltipOnController::*)()>(&VROSC::DisplayTooltipOnController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::DisplayTooltipOnController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::DisplayTooltipOnController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DisplayTooltipOnController::*)()>(&VROSC::DisplayTooltipOnController::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::DisplayTooltipOnController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::DisplayTooltipOnController::HoverStart
// Il2CppName: HoverStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DisplayTooltipOnController::*)(::VROSC::InputDevice*)>(&VROSC::DisplayTooltipOnController::HoverStart)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DisplayTooltipOnController*), "HoverStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::DisplayTooltipOnController::HoverEnd
// Il2CppName: HoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DisplayTooltipOnController::*)(::VROSC::InputDevice*)>(&VROSC::DisplayTooltipOnController::HoverEnd)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DisplayTooltipOnController*), "HoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::DisplayTooltipOnController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
