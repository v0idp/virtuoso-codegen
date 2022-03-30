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
// Forward declaring namespace: VROSC::Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsData
  class CreditsData;
  // Forward declaring type: CreditsSection
  class CreditsSection;
  // Forward declaring type: CreditsObject
  class CreditsObject;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Clickable
  class Clickable;
  // Forward declaring type: SmoothMovement
  class SmoothMovement;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: ClickData
  class ClickData;
  // Forward declaring type: TriggerButton
  struct TriggerButton;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Forward declaring type: ScrollingCredits
  class ScrollingCredits;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Credits::ScrollingCredits);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::ScrollingCredits*, "VROSC.Credits", "ScrollingCredits");
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Credits.ScrollingCredits
  // [TokenAttribute] Offset: FFFFFFFF
  class ScrollingCredits : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::Credits::ScrollingCredits::$GrabbingCoroutine$d__22
    class $GrabbingCoroutine$d__22;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.Credits.CreditsData _data
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::Credits::CreditsData* data;
    // Field size check
    static_assert(sizeof(::VROSC::Credits::CreditsData*) == 0x8);
    // private VROSC.Credits.CreditsSection _sectionPrefab
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::Credits::CreditsSection* sectionPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::Credits::CreditsSection*) == 0x8);
    // private UnityEngine.RectTransform _background
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RectTransform* background;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.Transform _mover
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* mover;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.Clickable _dragObject
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::Clickable* dragObject;
    // Field size check
    static_assert(sizeof(::VROSC::Clickable*) == 0x8);
    // private System.Single _startFade
    // Size: 0x4
    // Offset: 0x40
    float startFade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: startFade and: dragging
    char __padding5[0x4] = {};
    // private VROSC.SmoothMovement _dragging
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::SmoothMovement* dragging;
    // Field size check
    static_assert(sizeof(::VROSC::SmoothMovement*) == 0x8);
    // private System.Single _maxHeight
    // Size: 0x4
    // Offset: 0x50
    float maxHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _scrollAmount
    // Size: 0x4
    // Offset: 0x54
    float scrollAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveTimer
    // Size: 0x4
    // Offset: 0x58
    float moveTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _setupComplete
    // Size: 0x1
    // Offset: 0x5C
    bool setupComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _grabbed
    // Size: 0x1
    // Offset: 0x5D
    bool grabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: grabbed and: grabbingDevice
    char __padding11[0x2] = {};
    // private VROSC.InputDevice _grabbingDevice
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::InputDevice* grabbingDevice;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private VROSC.Credits.CreditsObject _postCreditsObject
    // Size: 0x8
    // Offset: 0x68
    ::VROSC::Credits::CreditsObject* postCreditsObject;
    // Field size check
    static_assert(sizeof(::VROSC::Credits::CreditsObject*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.Credits.CreditsObject> _objects
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>* objects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.Credits.CreditsData _data
    ::VROSC::Credits::CreditsData*& dyn__data();
    // Get instance field reference: private VROSC.Credits.CreditsSection _sectionPrefab
    ::VROSC::Credits::CreditsSection*& dyn__sectionPrefab();
    // Get instance field reference: private UnityEngine.RectTransform _background
    ::UnityEngine::RectTransform*& dyn__background();
    // Get instance field reference: private UnityEngine.Transform _mover
    ::UnityEngine::Transform*& dyn__mover();
    // Get instance field reference: private VROSC.Clickable _dragObject
    ::VROSC::Clickable*& dyn__dragObject();
    // Get instance field reference: private System.Single _startFade
    float& dyn__startFade();
    // Get instance field reference: private VROSC.SmoothMovement _dragging
    ::VROSC::SmoothMovement*& dyn__dragging();
    // Get instance field reference: private System.Single _maxHeight
    float& dyn__maxHeight();
    // Get instance field reference: private System.Single _scrollAmount
    float& dyn__scrollAmount();
    // Get instance field reference: private System.Single _moveTimer
    float& dyn__moveTimer();
    // Get instance field reference: private System.Boolean _setupComplete
    bool& dyn__setupComplete();
    // Get instance field reference: private System.Boolean _grabbed
    bool& dyn__grabbed();
    // Get instance field reference: private VROSC.InputDevice _grabbingDevice
    ::VROSC::InputDevice*& dyn__grabbingDevice();
    // Get instance field reference: private VROSC.Credits.CreditsObject _postCreditsObject
    ::VROSC::Credits::CreditsObject*& dyn__postCreditsObject();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.Credits.CreditsObject> _objects
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>*& dyn__objects();
    // private System.Void Awake()
    // Offset: 0x13E18B8
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x13E19E8
    void OnDestroy();
    // private System.Void OnEnable()
    // Offset: 0x13E1ABC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13E1FC0
    void OnDisable();
    // public System.Void Setup()
    // Offset: 0x13E1BC0
    void Setup();
    // private System.Void OnPressed(VROSC.ClickData clickData, System.Boolean pressed)
    // Offset: 0x13E2178
    void OnPressed(::VROSC::ClickData* clickData, bool pressed);
    // private System.Void StopGrab(VROSC.InputDevice device, VROSC.TriggerButton button)
    // Offset: 0x13E20C0
    void StopGrab(::VROSC::InputDevice* device, ::VROSC::TriggerButton button);
    // private System.Collections.IEnumerator GrabbingCoroutine(VROSC.InputDevice device)
    // Offset: 0x13E225C
    ::System::Collections::IEnumerator* GrabbingCoroutine(::VROSC::InputDevice* device);
    // private System.Void Reset()
    // Offset: 0x13E1F4C
    void Reset();
    // private System.Void Update()
    // Offset: 0x13E22D4
    void Update();
    // private System.Void UpdateVisibility()
    // Offset: 0x13E23E8
    void UpdateVisibility();
    // private System.Void UpdatePostCreditsObject()
    // Offset: 0x13E2664
    void UpdatePostCreditsObject();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x13E2708
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x13E2850
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollingCredits* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Credits::ScrollingCredits::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollingCredits*, creationType>()));
    }
  }; // VROSC.Credits.ScrollingCredits
  #pragma pack(pop)
  static check_size<sizeof(ScrollingCredits), 112 + sizeof(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>*)> __VROSC_Credits_ScrollingCreditsSizeCheck;
  static_assert(sizeof(ScrollingCredits) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::OnPressed
// Il2CppName: OnPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)(::VROSC::ClickData*, bool)>(&VROSC::Credits::ScrollingCredits::OnPressed)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    static auto* pressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "OnPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData, pressed});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::StopGrab
// Il2CppName: StopGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::Credits::ScrollingCredits::StopGrab)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "StopGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, button});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::GrabbingCoroutine
// Il2CppName: GrabbingCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::Credits::ScrollingCredits::*)(::VROSC::InputDevice*)>(&VROSC::Credits::ScrollingCredits::GrabbingCoroutine)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "GrabbingCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::UpdateVisibility
// Il2CppName: UpdateVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::UpdateVisibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "UpdateVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::UpdatePostCreditsObject
// Il2CppName: UpdatePostCreditsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::UpdatePostCreditsObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "UpdatePostCreditsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::ScrollingCredits::*)()>(&VROSC::Credits::ScrollingCredits::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::ScrollingCredits*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::ScrollingCredits::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
