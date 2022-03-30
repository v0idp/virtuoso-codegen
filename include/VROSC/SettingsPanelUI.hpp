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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UISlideToggle
  class UISlideToggle;
  // Forward declaring type: BeatCounterUI
  class BeatCounterUI;
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SettingsPanelUI
  class SettingsPanelUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SettingsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SettingsPanelUI*, "VROSC", "SettingsPanelUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SettingsPanelUI
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsPanelUI : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.UISlideToggle _internalSoundsButton
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UISlideToggle* internalSoundsButton;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // private VROSC.UISlideToggle _midiButton
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UISlideToggle* midiButton;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // private TMPro.TextMeshPro _midiDownloadInfo
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshPro* midiDownloadInfo;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.BeatCounterUI _beatCounterUI
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::BeatCounterUI* beatCounterUI;
    // Field size check
    static_assert(sizeof(::VROSC::BeatCounterUI*) == 0x8);
    // private VROSC.UIButton _allNotesOffButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIButton* allNotesOffButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UISlideToggle _internalSoundsButton
    ::VROSC::UISlideToggle*& dyn__internalSoundsButton();
    // Get instance field reference: private VROSC.UISlideToggle _midiButton
    ::VROSC::UISlideToggle*& dyn__midiButton();
    // Get instance field reference: private TMPro.TextMeshPro _midiDownloadInfo
    ::TMPro::TextMeshPro*& dyn__midiDownloadInfo();
    // Get instance field reference: private VROSC.BeatCounterUI _beatCounterUI
    ::VROSC::BeatCounterUI*& dyn__beatCounterUI();
    // Get instance field reference: private VROSC.UIButton _allNotesOffButton
    ::VROSC::UIButton*& dyn__allNotesOffButton();
    // public System.Boolean get_IsOpen()
    // Offset: 0x13B2F50
    bool get_IsOpen();
    // protected System.Void Awake()
    // Offset: 0x13B2F74
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x13B32A4
    void OnDestroy();
    // private System.Void OnEnable()
    // Offset: 0x13B34FC
    void OnEnable();
    // private System.Void UserDataLoaded(VROSC.UserDataControllers user)
    // Offset: 0x13B3550
    void UserDataLoaded(::VROSC::UserDataControllers* user);
    // private System.Void MidiButtonPressed(VROSC.InputDevice arg1, System.Boolean arg2)
    // Offset: 0x13B361C
    void MidiButtonPressed(::VROSC::InputDevice* arg1, bool arg2);
    // private System.Void InternalSoundsButtonPressed(VROSC.InputDevice arg1, System.Boolean arg2)
    // Offset: 0x13B375C
    void InternalSoundsButtonPressed(::VROSC::InputDevice* arg1, bool arg2);
    // private System.Void RefreshSoundMidiState(System.Boolean useExternal)
    // Offset: 0x13B3674
    void RefreshSoundMidiState(bool useExternal);
    // private System.Void AllNotesOffButtonPressed()
    // Offset: 0x13B37BC
    void AllNotesOffButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x13B3814
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsPanelUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SettingsPanelUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsPanelUI*, creationType>()));
    }
  }; // VROSC.SettingsPanelUI
  #pragma pack(pop)
  static check_size<sizeof(SettingsPanelUI), 56 + sizeof(::VROSC::UIButton*)> __VROSC_SettingsPanelUISizeCheck;
  static_assert(sizeof(SettingsPanelUI) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::get_IsOpen
// Il2CppName: get_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SettingsPanelUI::*)()>(&VROSC::SettingsPanelUI::get_IsOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "get_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SettingsPanelUI::*)()>(&VROSC::SettingsPanelUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SettingsPanelUI::*)()>(&VROSC::SettingsPanelUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SettingsPanelUI::*)()>(&VROSC::SettingsPanelUI::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SettingsPanelUI::*)(::VROSC::UserDataControllers*)>(&VROSC::SettingsPanelUI::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::MidiButtonPressed
// Il2CppName: MidiButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SettingsPanelUI::*)(::VROSC::InputDevice*, bool)>(&VROSC::SettingsPanelUI::MidiButtonPressed)> {
  static const MethodInfo* get() {
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "MidiButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg1, arg2});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::InternalSoundsButtonPressed
// Il2CppName: InternalSoundsButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SettingsPanelUI::*)(::VROSC::InputDevice*, bool)>(&VROSC::SettingsPanelUI::InternalSoundsButtonPressed)> {
  static const MethodInfo* get() {
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "InternalSoundsButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg1, arg2});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::RefreshSoundMidiState
// Il2CppName: RefreshSoundMidiState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SettingsPanelUI::*)(bool)>(&VROSC::SettingsPanelUI::RefreshSoundMidiState)> {
  static const MethodInfo* get() {
    static auto* useExternal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "RefreshSoundMidiState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useExternal});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::AllNotesOffButtonPressed
// Il2CppName: AllNotesOffButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SettingsPanelUI::*)()>(&VROSC::SettingsPanelUI::AllNotesOffButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SettingsPanelUI*), "AllNotesOffButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SettingsPanelUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!