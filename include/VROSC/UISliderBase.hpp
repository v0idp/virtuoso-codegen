// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UIInteractable
#include "VROSC/UIInteractable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIColorGetter
  class UIColorGetter;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UISliderBase
  class UISliderBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UISliderBase);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISliderBase*, "VROSC", "UISliderBase");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xBC
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UISliderBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class UISliderBase : public ::VROSC::UIInteractable {
    public:
    public:
    // private System.Single <Value>k__BackingField
    // Size: 0x4
    // Offset: 0x88
    float Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Value and: OnValueChanged
    char __padding0[0x4] = {};
    // public System.Action`1<System.Single> OnValueChanged
    // Size: 0x8
    // Offset: 0x90
    ::System::Action_1<float>* OnValueChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // public System.Action`1<System.Boolean> OnGrabbed
    // Size: 0x8
    // Offset: 0x98
    ::System::Action_1<bool>* OnGrabbed;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // protected VROSC.UI.UIColorGetter _sliderColor
    // Size: 0x8
    // Offset: 0xA0
    ::VROSC::UI::UIColorGetter* sliderColor;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIColorGetter*) == 0x8);
    // protected VROSC.AdjustableMesh _adjustableMesh
    // Size: 0x8
    // Offset: 0xA8
    ::VROSC::AdjustableMesh* adjustableMesh;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // protected VROSC.MinMaxFloat _uvRange
    // Size: 0x8
    // Offset: 0xB0
    ::VROSC::MinMaxFloat* uvRange;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // [RangeAttribute] Offset: 0x78A2AC
    // private System.Single _preview
    // Size: 0x4
    // Offset: 0xB8
    float preview;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single <Value>k__BackingField
    [[deprecated]] float& dyn_$Value$k__BackingField();
    // Get instance field reference: public System.Action`1<System.Single> OnValueChanged
    [[deprecated]] ::System::Action_1<float>*& dyn_OnValueChanged();
    // Get instance field reference: public System.Action`1<System.Boolean> OnGrabbed
    [[deprecated]] ::System::Action_1<bool>*& dyn_OnGrabbed();
    // Get instance field reference: protected VROSC.UI.UIColorGetter _sliderColor
    [[deprecated]] ::VROSC::UI::UIColorGetter*& dyn__sliderColor();
    // Get instance field reference: protected VROSC.AdjustableMesh _adjustableMesh
    [[deprecated]] ::VROSC::AdjustableMesh*& dyn__adjustableMesh();
    // Get instance field reference: protected VROSC.MinMaxFloat _uvRange
    [[deprecated]] ::VROSC::MinMaxFloat*& dyn__uvRange();
    // Get instance field reference: private System.Single _preview
    [[deprecated]] float& dyn__preview();
    // public System.Single get_Value()
    // Offset: 0x191706C
    float get_Value();
    // private System.Void set_Value(System.Single value)
    // Offset: 0x1917064
    void set_Value(float value);
    // public UnityEngine.Vector2 get_Size()
    // Offset: 0x1916B1C
    ::UnityEngine::Vector2 get_Size();
    // protected System.Void Awake()
    // Offset: 0x191608C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x191631C
    void OnEnable();
    // protected System.Void OnDestroy()
    // Offset: 0x19161D4
    void OnDestroy();
    // public System.Void SetValue(System.Single value, System.Boolean force, System.Boolean useCallback)
    // Offset: 0x1916EAC
    void SetValue(float value, bool force, bool useCallback);
    // private System.Void SetColor()
    // Offset: 0x1917074
    void SetColor();
    // private System.Void OnDrawGizmos()
    // Offset: 0x1917208
    void OnDrawGizmos();
    // protected UnityEngine.Vector2 GetSize()
    // Offset: 0x1916CB8
    ::UnityEngine::Vector2 GetSize();
    // public override System.Boolean get_InteractionStopsLaser()
    // Offset: 0x191705C
    // Implemented from: VROSC.UIInteractable
    // Base method: System.Boolean UIInteractable::get_InteractionStopsLaser()
    bool get_InteractionStopsLaser();
    // public System.Void .ctor()
    // Offset: 0x1917054
    // Implemented from: VROSC.UIInteractable
    // Base method: System.Void UIInteractable::.ctor()
    // Base method: System.Void Clickable::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UISliderBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UISliderBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UISliderBase*, creationType>()));
    }
    // protected override System.Void OnDisable()
    // Offset: 0x1916664
    // Implemented from: VROSC.Interactable
    // Base method: System.Void Interactable::OnDisable()
    void OnDisable();
    // public override System.Void SetDisabled(System.Object disabler, System.Boolean shouldBeDisabled)
    // Offset: 0x19171DC
    // Implemented from: VROSC.Interactable
    // Base method: System.Void Interactable::SetDisabled(System.Object disabler, System.Boolean shouldBeDisabled)
    void SetDisabled(::Il2CppObject* disabler, bool shouldBeDisabled);
  }; // VROSC.UISliderBase
  #pragma pack(pop)
  static check_size<sizeof(UISliderBase), 184 + sizeof(float)> __VROSC_UISliderBaseSizeCheck;
  static_assert(sizeof(UISliderBase) == 0xBC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UISliderBase::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)(float)>(&VROSC::UISliderBase::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)(float, bool, bool)>(&VROSC::UISliderBase::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, force, useCallback});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::SetColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::get_InteractionStopsLaser
// Il2CppName: get_InteractionStopsLaser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::get_InteractionStopsLaser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "get_InteractionStopsLaser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UISliderBase::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)()>(&VROSC::UISliderBase::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderBase::SetDisabled
// Il2CppName: SetDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderBase::*)(::Il2CppObject*, bool)>(&VROSC::UISliderBase::SetDisabled)> {
  static const MethodInfo* get() {
    static auto* disabler = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* shouldBeDisabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderBase*), "SetDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabler, shouldBeDisabled});
  }
};
