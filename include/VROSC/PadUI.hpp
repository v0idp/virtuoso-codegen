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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIHoldButton
  class UIHoldButton;
  // Forward declaring type: TransformMover
  class TransformMover;
  // Forward declaring type: Grabable
  class Grabable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PadUI
  class PadUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PadUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PadUI*, "VROSC", "PadUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PadUI
  // [TokenAttribute] Offset: FFFFFFFF
  class PadUI : public ::UnityEngine::MonoBehaviour {
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
    // protected UnityEngine.Transform _alignment
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* alignment;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // protected System.Boolean _align
    // Size: 0x1
    // Offset: 0x20
    bool align;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: align and: deleteButton
    char __padding1[0x7] = {};
    // protected VROSC.UIHoldButton _deleteButton
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UIHoldButton* deleteButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIHoldButton*) == 0x8);
    // protected VROSC.TransformMover _drumMover
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::TransformMover* drumMover;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMover*) == 0x8);
    // protected VROSC.Grabable _extendedHover
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::Grabable* extendedHover;
    // Field size check
    static_assert(sizeof(::VROSC::Grabable*) == 0x8);
    // protected UnityEngine.Transform _UIContent
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* UIContent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // protected System.Boolean _drumHovered
    // Size: 0x1
    // Offset: 0x48
    bool drumHovered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _settingsHovered
    // Size: 0x1
    // Offset: 0x49
    bool settingsHovered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _drumgrabbed
    // Size: 0x1
    // Offset: 0x4A
    bool drumgrabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _active
    // Size: 0x1
    // Offset: 0x4B
    bool active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _shouldBeActiveThisFrame
    // Size: 0x1
    // Offset: 0x4C
    bool shouldBeActiveThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shouldBeActiveThisFrame and: OnDeletePressed
    char __padding10[0x3] = {};
    // public System.Action OnDeletePressed
    // Size: 0x8
    // Offset: 0x50
    ::System::Action* OnDeletePressed;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected UnityEngine.Transform _alignment
    ::UnityEngine::Transform*& dyn__alignment();
    // Get instance field reference: protected System.Boolean _align
    bool& dyn__align();
    // Get instance field reference: protected VROSC.UIHoldButton _deleteButton
    ::VROSC::UIHoldButton*& dyn__deleteButton();
    // Get instance field reference: protected VROSC.TransformMover _drumMover
    ::VROSC::TransformMover*& dyn__drumMover();
    // Get instance field reference: protected VROSC.Grabable _extendedHover
    ::VROSC::Grabable*& dyn__extendedHover();
    // Get instance field reference: protected UnityEngine.Transform _UIContent
    ::UnityEngine::Transform*& dyn__UIContent();
    // Get instance field reference: protected System.Boolean _drumHovered
    bool& dyn__drumHovered();
    // Get instance field reference: protected System.Boolean _settingsHovered
    bool& dyn__settingsHovered();
    // Get instance field reference: protected System.Boolean _drumgrabbed
    bool& dyn__drumgrabbed();
    // Get instance field reference: protected System.Boolean _active
    bool& dyn__active();
    // Get instance field reference: protected System.Boolean _shouldBeActiveThisFrame
    bool& dyn__shouldBeActiveThisFrame();
    // Get instance field reference: public System.Action OnDeletePressed
    ::System::Action*& dyn_OnDeletePressed();
    // protected System.Void OnDestroy()
    // Offset: 0x8F6A70
    void OnDestroy();
    // public System.Void Setup()
    // Offset: 0x8F6C84
    void Setup();
    // protected System.Void DrumGrabbed(System.Boolean grabbed)
    // Offset: 0x8F6EB4
    void DrumGrabbed(bool grabbed);
    // protected System.Void SettingsHovered(System.Boolean hovered)
    // Offset: 0x8F6EC8
    void SettingsHovered(bool hovered);
    // protected System.Void DrumHovered(System.Boolean drumHovered)
    // Offset: 0x8F6EDC
    void DrumHovered(bool drumHovered);
    // protected System.Void UpdateHover()
    // Offset: 0x8F6EF0
    void UpdateHover();
    // protected System.Void LateUpdate()
    // Offset: 0x8F6F1C
    void LateUpdate();
    // public System.Void Delete()
    // Offset: 0x8F70F0
    void Delete();
    // public System.Void .ctor()
    // Offset: 0x8F7104
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PadUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PadUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PadUI*, creationType>()));
    }
  }; // VROSC.PadUI
  #pragma pack(pop)
  static check_size<sizeof(PadUI), 80 + sizeof(::System::Action*)> __VROSC_PadUISizeCheck;
  static_assert(sizeof(PadUI) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PadUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PadUI::*)()>(&VROSC::PadUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PadUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PadUI::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PadUI::*)()>(&VROSC::PadUI::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PadUI*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PadUI::DrumGrabbed
// Il2CppName: DrumGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PadUI::*)(bool)>(&VROSC::PadUI::DrumGrabbed)> {
  static const MethodInfo* get() {
    static auto* grabbed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PadUI*), "DrumGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbed});
  }
};
// Writing MetadataGetter for method: VROSC::PadUI::SettingsHovered
// Il2CppName: SettingsHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PadUI::*)(bool)>(&VROSC::PadUI::SettingsHovered)> {
  static const MethodInfo* get() {
    static auto* hovered = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PadUI*), "SettingsHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovered});
  }
};
// Writing MetadataGetter for method: VROSC::PadUI::DrumHovered
// Il2CppName: DrumHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PadUI::*)(bool)>(&VROSC::PadUI::DrumHovered)> {
  static const MethodInfo* get() {
    static auto* drumHovered = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PadUI*), "DrumHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{drumHovered});
  }
};
// Writing MetadataGetter for method: VROSC::PadUI::UpdateHover
// Il2CppName: UpdateHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PadUI::*)()>(&VROSC::PadUI::UpdateHover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PadUI*), "UpdateHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PadUI::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PadUI::*)()>(&VROSC::PadUI::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PadUI*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PadUI::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PadUI::*)()>(&VROSC::PadUI::Delete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PadUI*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PadUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!