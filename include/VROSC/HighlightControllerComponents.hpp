// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.HandType
#include "VROSC/HandType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerComponent
  class ControllerComponent;
  // Forward declaring type: ControllerShaderEffects
  class ControllerShaderEffects;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: TriggerButton
  struct TriggerButton;
  // Forward declaring type: TooltipData
  class TooltipData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: HighlightControllerComponents
  class HighlightControllerComponents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::HighlightControllerComponents);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HighlightControllerComponents*, "VROSC", "HighlightControllerComponents");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.HighlightControllerComponents
  // [TokenAttribute] Offset: FFFFFFFF
  class HighlightControllerComponents : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::HighlightControllerComponents::Component
    struct Component;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.ControllerComponent[] _allButtons
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::VROSC::ControllerComponent*> allButtons;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::ControllerComponent*>) == 0x8);
    // private VROSC.ControllerComponent _triggerButton
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::ControllerComponent* triggerButton;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerComponent*) == 0x8);
    // private VROSC.ControllerComponent _gripButton
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::ControllerComponent* gripButton;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerComponent*) == 0x8);
    // private VROSC.ControllerComponent _thumbstick
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::ControllerComponent* thumbstick;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerComponent*) == 0x8);
    // private VROSC.ControllerComponent _topButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::ControllerComponent* topButton;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerComponent*) == 0x8);
    // private VROSC.ControllerComponent _bottomButton
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::ControllerComponent* bottomButton;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerComponent*) == 0x8);
    // private VROSC.ControllerComponent _menuButton
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::ControllerComponent* menuButton;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerComponent*) == 0x8);
    // private VROSC.ControllerShaderEffects _shaderEffects
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::ControllerShaderEffects* shaderEffects;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerShaderEffects*) == 0x8);
    // private VROSC.HandType _hand
    // Size: 0x14
    // Offset: 0x58
    ::VROSC::HandType hand;
    // Field size check
    static_assert(sizeof(::VROSC::HandType) == 0x14);
    // private System.Boolean _dirty
    // Size: 0x1
    // Offset: 0x5C
    bool dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dirty and: GetControllerComponent
    char __padding9[0x3] = {};
    // private System.Object <GetControllerComponent>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppObject* GetControllerComponent;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.ControllerComponent[] _allButtons
    ::ArrayW<::VROSC::ControllerComponent*>& dyn__allButtons();
    // Get instance field reference: private VROSC.ControllerComponent _triggerButton
    ::VROSC::ControllerComponent*& dyn__triggerButton();
    // Get instance field reference: private VROSC.ControllerComponent _gripButton
    ::VROSC::ControllerComponent*& dyn__gripButton();
    // Get instance field reference: private VROSC.ControllerComponent _thumbstick
    ::VROSC::ControllerComponent*& dyn__thumbstick();
    // Get instance field reference: private VROSC.ControllerComponent _topButton
    ::VROSC::ControllerComponent*& dyn__topButton();
    // Get instance field reference: private VROSC.ControllerComponent _bottomButton
    ::VROSC::ControllerComponent*& dyn__bottomButton();
    // Get instance field reference: private VROSC.ControllerComponent _menuButton
    ::VROSC::ControllerComponent*& dyn__menuButton();
    // Get instance field reference: private VROSC.ControllerShaderEffects _shaderEffects
    ::VROSC::ControllerShaderEffects*& dyn__shaderEffects();
    // Get instance field reference: private VROSC.HandType _hand
    ::VROSC::HandType& dyn__hand();
    // Get instance field reference: private System.Boolean _dirty
    bool& dyn__dirty();
    // Get instance field reference: private System.Object <GetControllerComponent>k__BackingField
    ::Il2CppObject*& dyn_$GetControllerComponent$k__BackingField();
    // public VROSC.ControllerComponent[] get_AllButtons()
    // Offset: 0x89E304
    ::ArrayW<::VROSC::ControllerComponent*> get_AllButtons();
    // public System.Object get_GetControllerComponent()
    // Offset: 0x89E30C
    ::Il2CppObject* get_GetControllerComponent();
    // System.Void set_GetControllerComponent(System.Object value)
    // Offset: 0x89E314
    void set_GetControllerComponent(::Il2CppObject* value);
    // private System.Void Awake()
    // Offset: 0x89E31C
    void Awake();
    // private System.Void Start()
    // Offset: 0x89E4A0
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x89E668
    void OnDestroy();
    // private System.Void ButtonStoppedPressing(VROSC.InputDevice device, VROSC.TriggerButton trigger)
    // Offset: 0x89E7BC
    void ButtonStoppedPressing(::VROSC::InputDevice* device, ::VROSC::TriggerButton trigger);
    // private System.Void ButtonPressing(VROSC.InputDevice device, VROSC.TriggerButton trigger)
    // Offset: 0x89E8EC
    void ButtonPressing(::VROSC::InputDevice* device, ::VROSC::TriggerButton trigger);
    // public System.Void SetButtonColor(VROSC.TriggerButton button, UnityEngine.Color color)
    // Offset: 0x89E9B4
    void SetButtonColor(::VROSC::TriggerButton button, ::UnityEngine::Color color);
    // public System.Void SetActive(VROSC.TooltipData tooltip, System.Boolean active, System.Object requester)
    // Offset: 0x89EA9C
    void SetActive(::VROSC::TooltipData* tooltip, bool active, ::Il2CppObject* requester);
    // public VROSC.ControllerComponent GetComponentByEnum(VROSC.HighlightControllerComponents/VROSC.Component component)
    // Offset: 0x89EB68
    ::VROSC::ControllerComponent* GetComponentByEnum(::VROSC::HighlightControllerComponents::Component component);
    // public VROSC.ControllerComponent GetComponentByTriggerType(VROSC.TriggerButton trigger)
    // Offset: 0x89E884
    ::VROSC::ControllerComponent* GetComponentByTriggerType(::VROSC::TriggerButton trigger);
    // public System.Void DeactivateAll()
    // Offset: 0x89E5FC
    void DeactivateAll();
    // private System.Void Update()
    // Offset: 0x89EBD0
    void Update();
    // public System.Void UpdateShaderEffects()
    // Offset: 0x89EBFC
    void UpdateShaderEffects();
    // public System.Void Transfer()
    // Offset: 0x89EDC0
    void Transfer();
    // public System.Void TransferIndex()
    // Offset: 0x89EFF4
    void TransferIndex();
    // private System.Void TransferShared()
    // Offset: 0x89EE14
    void TransferShared();
    // public System.Void .ctor()
    // Offset: 0x89F048
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HighlightControllerComponents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::HighlightControllerComponents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HighlightControllerComponents*, creationType>()));
    }
  }; // VROSC.HighlightControllerComponents
  #pragma pack(pop)
  static check_size<sizeof(HighlightControllerComponents), 96 + sizeof(::Il2CppObject*)> __VROSC_HighlightControllerComponentsSizeCheck;
  static_assert(sizeof(HighlightControllerComponents) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::get_AllButtons
// Il2CppName: get_AllButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::ControllerComponent*> (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::get_AllButtons)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "get_AllButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::get_GetControllerComponent
// Il2CppName: get_GetControllerComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::get_GetControllerComponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "get_GetControllerComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::set_GetControllerComponent
// Il2CppName: set_GetControllerComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)(::Il2CppObject*)>(&VROSC::HighlightControllerComponents::set_GetControllerComponent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "set_GetControllerComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::ButtonStoppedPressing
// Il2CppName: ButtonStoppedPressing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::HighlightControllerComponents::ButtonStoppedPressing)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* trigger = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "ButtonStoppedPressing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, trigger});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::ButtonPressing
// Il2CppName: ButtonPressing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::HighlightControllerComponents::ButtonPressing)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* trigger = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "ButtonPressing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, trigger});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::SetButtonColor
// Il2CppName: SetButtonColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)(::VROSC::TriggerButton, ::UnityEngine::Color)>(&VROSC::HighlightControllerComponents::SetButtonColor)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "SetButtonColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button, color});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)(::VROSC::TooltipData*, bool, ::Il2CppObject*)>(&VROSC::HighlightControllerComponents::SetActive)> {
  static const MethodInfo* get() {
    static auto* tooltip = &::il2cpp_utils::GetClassFromName("VROSC", "TooltipData")->byval_arg;
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* requester = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tooltip, active, requester});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::GetComponentByEnum
// Il2CppName: GetComponentByEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::ControllerComponent* (VROSC::HighlightControllerComponents::*)(::VROSC::HighlightControllerComponents::Component)>(&VROSC::HighlightControllerComponents::GetComponentByEnum)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("VROSC", "HighlightControllerComponents/Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "GetComponentByEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::GetComponentByTriggerType
// Il2CppName: GetComponentByTriggerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::ControllerComponent* (VROSC::HighlightControllerComponents::*)(::VROSC::TriggerButton)>(&VROSC::HighlightControllerComponents::GetComponentByTriggerType)> {
  static const MethodInfo* get() {
    static auto* trigger = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "GetComponentByTriggerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trigger});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::DeactivateAll
// Il2CppName: DeactivateAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::DeactivateAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "DeactivateAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::UpdateShaderEffects
// Il2CppName: UpdateShaderEffects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::UpdateShaderEffects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "UpdateShaderEffects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::Transfer
// Il2CppName: Transfer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::Transfer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "Transfer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::TransferIndex
// Il2CppName: TransferIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::TransferIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "TransferIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::TransferShared
// Il2CppName: TransferShared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightControllerComponents::*)()>(&VROSC::HighlightControllerComponents::TransferShared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightControllerComponents*), "TransferShared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightControllerComponents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
