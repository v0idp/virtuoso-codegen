// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: VROSC.HighlightControllerComponents/VROSC.Component
#include "VROSC/HighlightControllerComponents_Component.hpp"
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
  // Forward declaring type: ControllerHintUI
  class ControllerHintUI;
  // Forward declaring type: TooltipData
  class TooltipData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerComponent
  class ControllerComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ControllerComponent);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerComponent*, "VROSC", "ControllerComponent");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ControllerComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class ControllerComponent : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::ControllerComponent::TooltipRequest
    class TooltipRequest;
    public:
    // private UnityEngine.Color <CurrentColor>k__BackingField
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color CurrentColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private VROSC.ControllerHintUI _hintUI
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::ControllerHintUI* hintUI;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerHintUI*) == 0x8);
    // private VROSC.HighlightControllerComponents/VROSC.Component _componentType
    // Size: 0x4
    // Offset: 0x30
    ::VROSC::HighlightControllerComponents::Component componentType;
    // Field size check
    static_assert(sizeof(::VROSC::HighlightControllerComponents::Component) == 0x4);
    // private VROSC.TriggerButton _triggerButton
    // Size: 0x4
    // Offset: 0x34
    ::VROSC::TriggerButton triggerButton;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x4);
    // private System.Boolean _tooltipActive
    // Size: 0x1
    // Offset: 0x38
    bool tooltipActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: tooltipActive and: pressing
    char __padding4[0x3] = {};
    // protected System.Single _pressing
    // Size: 0x4
    // Offset: 0x3C
    float pressing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Collections.Generic.List`1<VROSC.ControllerComponent/VROSC.TooltipRequest> _tooltipRequests
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::VROSC::ControllerComponent::TooltipRequest*>* tooltipRequests;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::ControllerComponent::TooltipRequest*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color <CurrentColor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_$CurrentColor$k__BackingField();
    // Get instance field reference: private VROSC.ControllerHintUI _hintUI
    [[deprecated("Use field access instead!")]] ::VROSC::ControllerHintUI*& dyn__hintUI();
    // Get instance field reference: private VROSC.HighlightControllerComponents/VROSC.Component _componentType
    [[deprecated("Use field access instead!")]] ::VROSC::HighlightControllerComponents::Component& dyn__componentType();
    // Get instance field reference: private VROSC.TriggerButton _triggerButton
    [[deprecated("Use field access instead!")]] ::VROSC::TriggerButton& dyn__triggerButton();
    // Get instance field reference: private System.Boolean _tooltipActive
    [[deprecated("Use field access instead!")]] bool& dyn__tooltipActive();
    // Get instance field reference: protected System.Single _pressing
    [[deprecated("Use field access instead!")]] float& dyn__pressing();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.ControllerComponent/VROSC.TooltipRequest> _tooltipRequests
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::ControllerComponent::TooltipRequest*>*& dyn__tooltipRequests();
    // public UnityEngine.Color get_CurrentColor()
    // Offset: 0x94DAA4
    ::UnityEngine::Color get_CurrentColor();
    // private System.Void set_CurrentColor(UnityEngine.Color value)
    // Offset: 0x94DA98
    void set_CurrentColor(::UnityEngine::Color value);
    // public VROSC.HighlightControllerComponents/VROSC.Component get_ComponentType()
    // Offset: 0x94DAB0
    ::VROSC::HighlightControllerComponents::Component get_ComponentType();
    // public VROSC.TriggerButton get_TriggerButton()
    // Offset: 0x94DAB8
    ::VROSC::TriggerButton get_TriggerButton();
    // public System.Void .ctor()
    // Offset: 0x94DA20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllerComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ControllerComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllerComponent*, creationType>()));
    }
    // public System.Void SetTooltipActive(System.Boolean active, VROSC.TooltipData tooltip, System.Object requester)
    // Offset: 0x94DAC0
    void SetTooltipActive(bool active, ::VROSC::TooltipData* tooltip, ::Il2CppObject* requester);
    // public System.Void ClearTooltip()
    // Offset: 0x94DE98
    void ClearTooltip();
    // private System.Void UpdateTooltipDisplay()
    // Offset: 0x94DD48
    void UpdateTooltipDisplay();
    // public System.Void SetButtonColor(UnityEngine.Color color)
    // Offset: 0x94E0AC
    void SetButtonColor(::UnityEngine::Color color);
    // public System.Void SetPressing(System.Single pressing)
    // Offset: 0x94E0B8
    void SetPressing(float pressing);
    // public UnityEngine.Color GetColor()
    // Offset: 0x94E040
    ::UnityEngine::Color GetColor();
    // public System.Void SetType(VROSC.HighlightControllerComponents/VROSC.Component componentType, VROSC.TriggerButton triggerButton)
    // Offset: 0x94E0E4
    void SetType(::VROSC::HighlightControllerComponents::Component componentType, ::VROSC::TriggerButton triggerButton);
  }; // VROSC.ControllerComponent
  #pragma pack(pop)
  static check_size<sizeof(ControllerComponent), 64 + sizeof(::System::Collections::Generic::List_1<::VROSC::ControllerComponent::TooltipRequest*>*)> __VROSC_ControllerComponentSizeCheck;
  static_assert(sizeof(ControllerComponent) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ControllerComponent::get_CurrentColor
// Il2CppName: get_CurrentColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::ControllerComponent::*)()>(&VROSC::ControllerComponent::get_CurrentColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "get_CurrentColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::set_CurrentColor
// Il2CppName: set_CurrentColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerComponent::*)(::UnityEngine::Color)>(&VROSC::ControllerComponent::set_CurrentColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "set_CurrentColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::get_ComponentType
// Il2CppName: get_ComponentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HighlightControllerComponents::Component (VROSC::ControllerComponent::*)()>(&VROSC::ControllerComponent::get_ComponentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "get_ComponentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::get_TriggerButton
// Il2CppName: get_TriggerButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TriggerButton (VROSC::ControllerComponent::*)()>(&VROSC::ControllerComponent::get_TriggerButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "get_TriggerButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ControllerComponent::SetTooltipActive
// Il2CppName: SetTooltipActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerComponent::*)(bool, ::VROSC::TooltipData*, ::Il2CppObject*)>(&VROSC::ControllerComponent::SetTooltipActive)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tooltip = &::il2cpp_utils::GetClassFromName("VROSC", "TooltipData")->byval_arg;
    static auto* requester = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "SetTooltipActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active, tooltip, requester});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::ClearTooltip
// Il2CppName: ClearTooltip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerComponent::*)()>(&VROSC::ControllerComponent::ClearTooltip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "ClearTooltip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::UpdateTooltipDisplay
// Il2CppName: UpdateTooltipDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerComponent::*)()>(&VROSC::ControllerComponent::UpdateTooltipDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "UpdateTooltipDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::SetButtonColor
// Il2CppName: SetButtonColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerComponent::*)(::UnityEngine::Color)>(&VROSC::ControllerComponent::SetButtonColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "SetButtonColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::SetPressing
// Il2CppName: SetPressing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerComponent::*)(float)>(&VROSC::ControllerComponent::SetPressing)> {
  static const MethodInfo* get() {
    static auto* pressing = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "SetPressing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pressing});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::ControllerComponent::*)()>(&VROSC::ControllerComponent::GetColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerComponent::SetType
// Il2CppName: SetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerComponent::*)(::VROSC::HighlightControllerComponents::Component, ::VROSC::TriggerButton)>(&VROSC::ControllerComponent::SetType)> {
  static const MethodInfo* get() {
    static auto* componentType = &::il2cpp_utils::GetClassFromName("VROSC", "HighlightControllerComponents/Component")->byval_arg;
    static auto* triggerButton = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerComponent*), "SetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{componentType, triggerButton});
  }
};
