// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: TooltipData
  class TooltipData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: Interactable
  class Interactable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Interactable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Interactable*, "VROSC", "Interactable");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Interactable
  // [TokenAttribute] Offset: FFFFFFFF
  class Interactable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean <IsHovering>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsHovering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsInteracting>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool IsInteracting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsInteracting and: OnHoverStay
    char __padding1[0x6] = {};
    // public System.Action OnHoverStay
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* OnHoverStay;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<System.Boolean> OnHover
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<bool>* OnHover;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action`1<System.Boolean> OnInteraction
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<bool>* OnInteraction;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action`1<System.Boolean> OnInteractableDisabled
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<bool>* OnInteractableDisabled;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // protected UnityEngine.Vector3 _lastHoverPosition
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 lastHoverPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // protected System.Boolean _lastPointedAt
    // Size: 0x1
    // Offset: 0x4C
    bool lastPointedAt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lastPointedAt and: hoveringControllers
    char __padding7[0x3] = {};
    // private System.Collections.Generic.List`1<VROSC.InputDevice> _hoveringControllers
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::VROSC::InputDevice*>* hoveringControllers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::InputDevice*>*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.TooltipData> _tooltipDatas
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* tooltipDatas;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Object> _disablingObjects
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::Il2CppObject*>* disablingObjects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private System.Boolean _canBeinteractedWith
    // Size: 0x1
    // Offset: 0x68
    bool canBeinteractedWith;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean <IsHovering>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsHovering$k__BackingField();
    // Get instance field reference: private System.Boolean <IsInteracting>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsInteracting$k__BackingField();
    // Get instance field reference: public System.Action OnHoverStay
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnHoverStay();
    // Get instance field reference: public System.Action`1<System.Boolean> OnHover
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_OnHover();
    // Get instance field reference: public System.Action`1<System.Boolean> OnInteraction
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_OnInteraction();
    // Get instance field reference: public System.Action`1<System.Boolean> OnInteractableDisabled
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_OnInteractableDisabled();
    // Get instance field reference: protected UnityEngine.Vector3 _lastHoverPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__lastHoverPosition();
    // Get instance field reference: protected System.Boolean _lastPointedAt
    [[deprecated("Use field access instead!")]] bool& dyn__lastPointedAt();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.InputDevice> _hoveringControllers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::InputDevice*>*& dyn__hoveringControllers();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.TooltipData> _tooltipDatas
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& dyn__tooltipDatas();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Object> _disablingObjects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn__disablingObjects();
    // Get instance field reference: private System.Boolean _canBeinteractedWith
    [[deprecated("Use field access instead!")]] bool& dyn__canBeinteractedWith();
    // public System.Boolean get_IsHovering()
    // Offset: 0x1948D28
    bool get_IsHovering();
    // private System.Void set_IsHovering(System.Boolean value)
    // Offset: 0x1948D1C
    void set_IsHovering(bool value);
    // public System.Boolean get_IsDisabled()
    // Offset: 0x1948D30
    bool get_IsDisabled();
    // public System.Boolean get_IsInteracting()
    // Offset: 0x1948D90
    bool get_IsInteracting();
    // protected System.Void set_IsInteracting(System.Boolean value)
    // Offset: 0x1948D84
    void set_IsInteracting(bool value);
    // public System.Boolean get_CanBeInteractedWith()
    // Offset: 0x1948D98
    bool get_CanBeInteractedWith();
    // protected System.Void .ctor()
    // Offset: 0x1949398
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Interactable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Interactable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Interactable*, creationType>()));
    }
    // public System.Void SetDisabled(System.Object disabler, System.Boolean shouldBeDisabled)
    // Offset: 0x1948DD0
    void SetDisabled(::Il2CppObject* disabler, bool shouldBeDisabled);
    // public System.Void SetCanBeInteractedWith(System.Boolean canBeInteractedWith)
    // Offset: 0x1948EDC
    void SetCanBeInteractedWith(bool canBeInteractedWith);
    // public System.Void SetHovering(VROSC.InputDevice device, UnityEngine.Vector3 position, System.Boolean pointedAt, System.Boolean controllerIsHovering)
    // Offset: 0x1948EE8
    void SetHovering(::VROSC::InputDevice* device, ::UnityEngine::Vector3 position, bool pointedAt, bool controllerIsHovering);
    // public System.Void ContinousHovering(VROSC.InputDevice device, UnityEngine.Vector3 position, System.Boolean pointedAt, System.Boolean v)
    // Offset: 0x19490F8
    void ContinousHovering(::VROSC::InputDevice* device, ::UnityEngine::Vector3 position, bool pointedAt, bool v);
    // protected System.Void UpdateHovering(System.Boolean hovering)
    // Offset: 0x1949274
    void UpdateHovering(bool hovering);
    // protected System.Void OnDisable()
    // Offset: 0x19492FC
    void OnDisable();
    // public System.Void SetTooltipData(VROSC.TooltipData tooltipData)
    // Offset: 0x1942F20
    void SetTooltipData(::VROSC::TooltipData* tooltipData);
    // public System.Void SetTooltipData(System.Collections.Generic.List`1<VROSC.TooltipData> tooltipDatas)
    // Offset: 0x194930C
    void SetTooltipData(::System::Collections::Generic::List_1<::VROSC::TooltipData*>* tooltipDatas);
    // public System.Collections.Generic.List`1<VROSC.TooltipData> GetTooltipDatas()
    // Offset: 0x1949314
    ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* GetTooltipDatas();
  }; // VROSC.Interactable
  #pragma pack(pop)
  static check_size<sizeof(Interactable), 104 + sizeof(bool)> __VROSC_InteractableSizeCheck;
  static_assert(sizeof(Interactable) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Interactable::get_IsHovering
// Il2CppName: get_IsHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::Interactable::*)()>(&VROSC::Interactable::get_IsHovering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "get_IsHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::set_IsHovering
// Il2CppName: set_IsHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(bool)>(&VROSC::Interactable::set_IsHovering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "set_IsHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::get_IsDisabled
// Il2CppName: get_IsDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::Interactable::*)()>(&VROSC::Interactable::get_IsDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "get_IsDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::get_IsInteracting
// Il2CppName: get_IsInteracting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::Interactable::*)()>(&VROSC::Interactable::get_IsInteracting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "get_IsInteracting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::set_IsInteracting
// Il2CppName: set_IsInteracting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(bool)>(&VROSC::Interactable::set_IsInteracting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "set_IsInteracting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::get_CanBeInteractedWith
// Il2CppName: get_CanBeInteractedWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::Interactable::*)()>(&VROSC::Interactable::get_CanBeInteractedWith)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "get_CanBeInteractedWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::Interactable::SetDisabled
// Il2CppName: SetDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(::Il2CppObject*, bool)>(&VROSC::Interactable::SetDisabled)> {
  static const MethodInfo* get() {
    static auto* disabler = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* shouldBeDisabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "SetDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabler, shouldBeDisabled});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::SetCanBeInteractedWith
// Il2CppName: SetCanBeInteractedWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(bool)>(&VROSC::Interactable::SetCanBeInteractedWith)> {
  static const MethodInfo* get() {
    static auto* canBeInteractedWith = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "SetCanBeInteractedWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canBeInteractedWith});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::SetHovering
// Il2CppName: SetHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(::VROSC::InputDevice*, ::UnityEngine::Vector3, bool, bool)>(&VROSC::Interactable::SetHovering)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pointedAt = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* controllerIsHovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "SetHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, position, pointedAt, controllerIsHovering});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::ContinousHovering
// Il2CppName: ContinousHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(::VROSC::InputDevice*, ::UnityEngine::Vector3, bool, bool)>(&VROSC::Interactable::ContinousHovering)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pointedAt = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "ContinousHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, position, pointedAt, v});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::UpdateHovering
// Il2CppName: UpdateHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(bool)>(&VROSC::Interactable::UpdateHovering)> {
  static const MethodInfo* get() {
    static auto* hovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "UpdateHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovering});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)()>(&VROSC::Interactable::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::SetTooltipData
// Il2CppName: SetTooltipData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(::VROSC::TooltipData*)>(&VROSC::Interactable::SetTooltipData)> {
  static const MethodInfo* get() {
    static auto* tooltipData = &::il2cpp_utils::GetClassFromName("VROSC", "TooltipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "SetTooltipData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tooltipData});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::SetTooltipData
// Il2CppName: SetTooltipData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Interactable::*)(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*)>(&VROSC::Interactable::SetTooltipData)> {
  static const MethodInfo* get() {
    static auto* tooltipDatas = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "TooltipData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "SetTooltipData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tooltipDatas});
  }
};
// Writing MetadataGetter for method: VROSC::Interactable::GetTooltipDatas
// Il2CppName: GetTooltipDatas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::TooltipData*>* (VROSC::Interactable::*)()>(&VROSC::Interactable::GetTooltipDatas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Interactable*), "GetTooltipDatas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
