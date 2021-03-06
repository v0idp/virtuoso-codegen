// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.InstrumentController
#include "VROSC/InstrumentController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ScalePanelUI
  class ScalePanelUI;
  // Forward declaring type: EffectsPanel
  class EffectsPanel;
  // Forward declaring type: SynthControlPanelUI
  class SynthControlPanelUI;
  // Forward declaring type: ParameterLinksPreset
  class ParameterLinksPreset;
  // Forward declaring type: SynthDataController
  class SynthDataController;
  // Forward declaring type: PatchSettings
  class PatchSettings;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
  // Forward declaring type: InstrumentDataController
  class InstrumentDataController;
  // Forward declaring type: ScalePreset
  class ScalePreset;
  // Forward declaring type: Note
  struct Note;
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
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
  // Forward declaring type: SynthController
  class SynthController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SynthController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthController*, "VROSC", "SynthController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xF9
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SynthController
  // [TokenAttribute] Offset: FFFFFFFF
  class SynthController : public ::VROSC::InstrumentController {
    public:
    public:
    // private VROSC.ScalePanelUI _scalePanelUI
    // Size: 0x8
    // Offset: 0xB8
    ::VROSC::ScalePanelUI* scalePanelUI;
    // Field size check
    static_assert(sizeof(::VROSC::ScalePanelUI*) == 0x8);
    // private VROSC.EffectsPanel _effectspanel
    // Size: 0x8
    // Offset: 0xC0
    ::VROSC::EffectsPanel* effectspanel;
    // Field size check
    static_assert(sizeof(::VROSC::EffectsPanel*) == 0x8);
    // private VROSC.SynthControlPanelUI _synthControlPanelUI
    // Size: 0x8
    // Offset: 0xC8
    ::VROSC::SynthControlPanelUI* synthControlPanelUI;
    // Field size check
    static_assert(sizeof(::VROSC::SynthControlPanelUI*) == 0x8);
    // private VROSC.ParameterLinksPreset _defaultPreset
    // Size: 0x8
    // Offset: 0xD0
    ::VROSC::ParameterLinksPreset* defaultPreset;
    // Field size check
    static_assert(sizeof(::VROSC::ParameterLinksPreset*) == 0x8);
    // private VROSC.ParameterLinksPreset _classicPreset
    // Size: 0x8
    // Offset: 0xD8
    ::VROSC::ParameterLinksPreset* classicPreset;
    // Field size check
    static_assert(sizeof(::VROSC::ParameterLinksPreset*) == 0x8);
    // private System.Int32 _selectedParameterLinksPreset
    // Size: 0x4
    // Offset: 0xE0
    int selectedParameterLinksPreset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _lastSendTimeLeft
    // Size: 0x4
    // Offset: 0xE4
    float lastSendTimeLeft;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastSendTimeRight
    // Size: 0x4
    // Offset: 0xE8
    float lastSendTimeRight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxExternalSendFrequency
    // Size: 0x4
    // Offset: 0xEC
    float maxExternalSendFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Action OnPatchChanged
    // Size: 0x8
    // Offset: 0xF0
    ::System::Action* OnPatchChanged;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _panelsAreSetup
    // Size: 0x1
    // Offset: 0xF8
    bool panelsAreSetup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private VROSC.ScalePanelUI _scalePanelUI
    [[deprecated("Use field access instead!")]] ::VROSC::ScalePanelUI*& dyn__scalePanelUI();
    // Get instance field reference: private VROSC.EffectsPanel _effectspanel
    [[deprecated("Use field access instead!")]] ::VROSC::EffectsPanel*& dyn__effectspanel();
    // Get instance field reference: private VROSC.SynthControlPanelUI _synthControlPanelUI
    [[deprecated("Use field access instead!")]] ::VROSC::SynthControlPanelUI*& dyn__synthControlPanelUI();
    // Get instance field reference: private VROSC.ParameterLinksPreset _defaultPreset
    [[deprecated("Use field access instead!")]] ::VROSC::ParameterLinksPreset*& dyn__defaultPreset();
    // Get instance field reference: private VROSC.ParameterLinksPreset _classicPreset
    [[deprecated("Use field access instead!")]] ::VROSC::ParameterLinksPreset*& dyn__classicPreset();
    // Get instance field reference: private System.Int32 _selectedParameterLinksPreset
    [[deprecated("Use field access instead!")]] int& dyn__selectedParameterLinksPreset();
    // Get instance field reference: private System.Single _lastSendTimeLeft
    [[deprecated("Use field access instead!")]] float& dyn__lastSendTimeLeft();
    // Get instance field reference: private System.Single _lastSendTimeRight
    [[deprecated("Use field access instead!")]] float& dyn__lastSendTimeRight();
    // Get instance field reference: private System.Single _maxExternalSendFrequency
    [[deprecated("Use field access instead!")]] float& dyn__maxExternalSendFrequency();
    // Get instance field reference: public System.Action OnPatchChanged
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnPatchChanged();
    // Get instance field reference: private System.Boolean _panelsAreSetup
    [[deprecated("Use field access instead!")]] bool& dyn__panelsAreSetup();
    // public VROSC.SynthDataController get_SynthDataController()
    // Offset: 0x1931FA4
    ::VROSC::SynthDataController* get_SynthDataController();
    // public System.Int32 get_CurrentOctave()
    // Offset: 0x19320EC
    int get_CurrentOctave();
    // public System.Int32 get_MinOctave()
    // Offset: 0x1932130
    int get_MinOctave();
    // public System.Boolean get_LinkHands()
    // Offset: 0x1932174
    bool get_LinkHands();
    // public System.Int32 get_MinMidiChannel()
    // Offset: 0x1932214
    int get_MinMidiChannel();
    // public System.Int32 get_MaxMidiChannel()
    // Offset: 0x1932258
    int get_MaxMidiChannel();
    // public System.Collections.Generic.List`1<VROSC.PatchSettings> get_AllPatchSettings()
    // Offset: 0x193229C
    ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* get_AllPatchSettings();
    // public System.Boolean get_ArpeggiatorActive()
    // Offset: 0x19321B8
    bool get_ArpeggiatorActive();
    // protected System.Void SetupPanels(VROSC.UserDataControllers user)
    // Offset: 0x1932554
    void SetupPanels(::VROSC::UserDataControllers* user);
    // protected System.Void SynthsDataLoaded(VROSC.InstrumentDataController dataController)
    // Offset: 0x19325DC
    void SynthsDataLoaded(::VROSC::InstrumentDataController* dataController);
    // public System.Void SetSound(System.Int32 index)
    // Offset: 0x1932B38
    void SetSound(int index);
    // public System.Void SetNextOctave()
    // Offset: 0x19330F0
    void SetNextOctave();
    // public System.Void SetPreviousOctave()
    // Offset: 0x193318C
    void SetPreviousOctave();
    // private System.Void ScalePresetChanged(VROSC.ScalePreset scalePreset, VROSC.Note key)
    // Offset: 0x19332A8
    void ScalePresetChanged(::VROSC::ScalePreset* scalePreset, ::VROSC::Note key);
    // public System.Void UpdateParameters(VROSC.Signal signal)
    // Offset: 0x1933354
    void UpdateParameters(::VROSC::Signal* signal);
    // public override System.Int32 get_CurrentMidiChannel()
    // Offset: 0x1932020
    // Implemented from: VROSC.InstrumentController
    // Base method: System.Int32 InstrumentController::get_CurrentMidiChannel()
    int get_CurrentMidiChannel();
    // public override VROSC.PatchSettings get_CurrentPatchSettings()
    // Offset: 0x1932064
    // Implemented from: VROSC.InstrumentController
    // Base method: VROSC.PatchSettings InstrumentController::get_CurrentPatchSettings()
    ::VROSC::PatchSettings* get_CurrentPatchSettings();
    // public System.Void .ctor()
    // Offset: 0x1933604
    // Implemented from: VROSC.InstrumentController
    // Base method: System.Void InstrumentController::.ctor()
    // Base method: System.Void WidgetController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynthController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SynthController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynthController*, creationType>()));
    }
    // public override System.Void Setup()
    // Offset: 0x19322BC
    // Implemented from: VROSC.InstrumentController
    // Base method: System.Void InstrumentController::Setup()
    void Setup();
    // protected System.Void OnDestroy()
    // Offset: 0x193245C
    // Implemented from: VROSC.InstrumentController
    // Base method: System.Void InstrumentController::OnDestroy()
    // Base method: System.Void WidgetController::OnDestroy()
    void OnDestroy();
    // protected override System.Void UserDataLoaded(VROSC.UserDataControllers user)
    // Offset: 0x193275C
    // Implemented from: VROSC.InstrumentController
    // Base method: System.Void InstrumentController::UserDataLoaded(VROSC.UserDataControllers user)
    void UserDataLoaded(::VROSC::UserDataControllers* user);
    // protected override System.Void UpdateOutput()
    // Offset: 0x1933228
    // Implemented from: VROSC.InstrumentController
    // Base method: System.Void InstrumentController::UpdateOutput()
    void UpdateOutput();
  }; // VROSC.SynthController
  #pragma pack(pop)
  static check_size<sizeof(SynthController), 248 + sizeof(bool)> __VROSC_SynthControllerSizeCheck;
  static_assert(sizeof(SynthController) == 0xF9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SynthController::get_SynthDataController
// Il2CppName: get_SynthDataController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SynthDataController* (VROSC::SynthController::*)()>(&VROSC::SynthController::get_SynthDataController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_SynthDataController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_CurrentOctave
// Il2CppName: get_CurrentOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthController::*)()>(&VROSC::SynthController::get_CurrentOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_CurrentOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_MinOctave
// Il2CppName: get_MinOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthController::*)()>(&VROSC::SynthController::get_MinOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_MinOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_LinkHands
// Il2CppName: get_LinkHands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SynthController::*)()>(&VROSC::SynthController::get_LinkHands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_LinkHands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_MinMidiChannel
// Il2CppName: get_MinMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthController::*)()>(&VROSC::SynthController::get_MinMidiChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_MinMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_MaxMidiChannel
// Il2CppName: get_MaxMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthController::*)()>(&VROSC::SynthController::get_MaxMidiChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_MaxMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_AllPatchSettings
// Il2CppName: get_AllPatchSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* (VROSC::SynthController::*)()>(&VROSC::SynthController::get_AllPatchSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_AllPatchSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_ArpeggiatorActive
// Il2CppName: get_ArpeggiatorActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SynthController::*)()>(&VROSC::SynthController::get_ArpeggiatorActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_ArpeggiatorActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::SetupPanels
// Il2CppName: SetupPanels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)(::VROSC::UserDataControllers*)>(&VROSC::SynthController::SetupPanels)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "SetupPanels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::SynthsDataLoaded
// Il2CppName: SynthsDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)(::VROSC::InstrumentDataController*)>(&VROSC::SynthController::SynthsDataLoaded)> {
  static const MethodInfo* get() {
    static auto* dataController = &::il2cpp_utils::GetClassFromName("VROSC", "InstrumentDataController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "SynthsDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataController});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::SetSound
// Il2CppName: SetSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)(int)>(&VROSC::SynthController::SetSound)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "SetSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::SetNextOctave
// Il2CppName: SetNextOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)()>(&VROSC::SynthController::SetNextOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "SetNextOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::SetPreviousOctave
// Il2CppName: SetPreviousOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)()>(&VROSC::SynthController::SetPreviousOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "SetPreviousOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::ScalePresetChanged
// Il2CppName: ScalePresetChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)(::VROSC::ScalePreset*, ::VROSC::Note)>(&VROSC::SynthController::ScalePresetChanged)> {
  static const MethodInfo* get() {
    static auto* scalePreset = &::il2cpp_utils::GetClassFromName("VROSC", "ScalePreset")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("VROSC", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "ScalePresetChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scalePreset, key});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::UpdateParameters
// Il2CppName: UpdateParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)(::VROSC::Signal*)>(&VROSC::SynthController::UpdateParameters)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "UpdateParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_CurrentMidiChannel
// Il2CppName: get_CurrentMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthController::*)()>(&VROSC::SynthController::get_CurrentMidiChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_CurrentMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::get_CurrentPatchSettings
// Il2CppName: get_CurrentPatchSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchSettings* (VROSC::SynthController::*)()>(&VROSC::SynthController::get_CurrentPatchSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "get_CurrentPatchSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SynthController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)()>(&VROSC::SynthController::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)()>(&VROSC::SynthController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)(::VROSC::UserDataControllers*)>(&VROSC::SynthController::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
// Writing MetadataGetter for method: VROSC::SynthController::UpdateOutput
// Il2CppName: UpdateOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthController::*)()>(&VROSC::SynthController::UpdateOutput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthController*), "UpdateOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
