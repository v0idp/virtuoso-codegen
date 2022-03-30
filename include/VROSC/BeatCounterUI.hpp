// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.Metronome
#include "VROSC/Metronome.hpp"
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
  // Forward declaring type: UISlider
  class UISlider;
  // Forward declaring type: UISpinner
  class UISpinner;
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
  // Forward declaring type: BeatCounterUI
  class BeatCounterUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BeatCounterUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BeatCounterUI*, "VROSC", "BeatCounterUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BeatCounterUI
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatCounterUI : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::BeatCounterUI::SyncToggleSource
    struct SyncToggleSource;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.UISlideToggle _syncSourceButton
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UISlideToggle* syncSourceButton;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // private VROSC.UISlider _bpmSlider
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UISlider* bpmSlider;
    // Field size check
    static_assert(sizeof(::VROSC::UISlider*) == 0x8);
    // private VROSC.UISpinner _metronomeMode
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UISpinner* metronomeMode;
    // Field size check
    static_assert(sizeof(::VROSC::UISpinner*) == 0x8);
    // private TMPro.TextMeshPro _bpm
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TextMeshPro* bpm;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private System.Boolean _syncIsInternalDefaultValue
    // Size: 0x1
    // Offset: 0x38
    bool syncIsInternalDefaultValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _syncIsInternal
    // Size: 0x1
    // Offset: 0x39
    bool syncIsInternal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _movingSliderSetsBPM
    // Size: 0x1
    // Offset: 0x3A
    bool movingSliderSetsBPM;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _looperHadLoops
    // Size: 0x1
    // Offset: 0x3B
    bool looperHadLoops;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UISlideToggle _syncSourceButton
    ::VROSC::UISlideToggle*& dyn__syncSourceButton();
    // Get instance field reference: private VROSC.UISlider _bpmSlider
    ::VROSC::UISlider*& dyn__bpmSlider();
    // Get instance field reference: private VROSC.UISpinner _metronomeMode
    ::VROSC::UISpinner*& dyn__metronomeMode();
    // Get instance field reference: private TMPro.TextMeshPro _bpm
    ::TMPro::TextMeshPro*& dyn__bpm();
    // Get instance field reference: private System.Boolean _syncIsInternalDefaultValue
    bool& dyn__syncIsInternalDefaultValue();
    // Get instance field reference: private System.Boolean _syncIsInternal
    bool& dyn__syncIsInternal();
    // Get instance field reference: private System.Boolean _movingSliderSetsBPM
    bool& dyn__movingSliderSetsBPM();
    // Get instance field reference: private System.Boolean _looperHadLoops
    bool& dyn__looperHadLoops();
    // protected System.Void Awake()
    // Offset: 0x1376AC0
    void Awake();
    // public System.Void Setup()
    // Offset: 0x1375C78
    void Setup();
    // protected System.Void Update()
    // Offset: 0x1376D7C
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x1376EB4
    void OnDestroy();
    // private System.Void ResetAll()
    // Offset: 0x1376CD0
    void ResetAll();
    // public System.Void SetSyncIsInternal(System.Boolean isInternal)
    // Offset: 0x13769A8
    void SetSyncIsInternal(bool isInternal);
    // public System.Void SetBpmSliderValue(System.Single bpm, System.Boolean fromDataLoad)
    // Offset: 0x13769CC
    void SetBpmSliderValue(float bpm, bool fromDataLoad);
    // private System.Void BpmSliderGrabbed(System.Boolean isGrabbed)
    // Offset: 0x13773C0
    void BpmSliderGrabbed(bool isGrabbed);
    // private System.Void BpmSliderValueChanged(System.Single value)
    // Offset: 0x13773D0
    void BpmSliderValueChanged(float value);
    // private System.Void SyncSourceToggled(VROSC.InputDevice inputDevice, System.Boolean syncIsInternal)
    // Offset: 0x1377498
    void SyncSourceToggled(::VROSC::InputDevice* inputDevice, bool syncIsInternal);
    // private System.Void SyncSourceToggled(VROSC.InputDevice inputDevice, System.Boolean syncIsInternal, VROSC.BeatCounterUI/VROSC.SyncToggleSource source)
    // Offset: 0x13771B4
    void SyncSourceToggled(::VROSC::InputDevice* inputDevice, bool syncIsInternal, ::VROSC::BeatCounterUI::SyncToggleSource source);
    // private System.Void LoopStationHasLoopsChanged(System.Boolean hasLoops)
    // Offset: 0x1376E34
    void LoopStationHasLoopsChanged(bool hasLoops);
    // private System.Single GetSliderBpm(System.Single sliderValue)
    // Offset: 0x1376D60
    float GetSliderBpm(float sliderValue);
    // private System.Single GetSliderValue(System.Single bpm)
    // Offset: 0x13773A4
    float GetSliderValue(float bpm);
    // private System.Void BpmChanged(System.Single bpm)
    // Offset: 0x13774A4
    void BpmChanged(float bpm);
    // private System.Void UpdateUI()
    // Offset: 0x1377530
    void UpdateUI();
    // private System.Void SetMetronomeMode(System.Int32 mode)
    // Offset: 0x1377634
    void SetMetronomeMode(int mode);
    // System.Void SetMetronomeMode(VROSC.Metronome/VROSC.Mode metronomeMode)
    // Offset: 0x137769C
    void SetMetronomeMode(::VROSC::Metronome::Mode metronomeMode);
    // public System.Void .ctor()
    // Offset: 0x13776C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatCounterUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BeatCounterUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatCounterUI*, creationType>()));
    }
  }; // VROSC.BeatCounterUI
  #pragma pack(pop)
  static check_size<sizeof(BeatCounterUI), 59 + sizeof(bool)> __VROSC_BeatCounterUISizeCheck;
  static_assert(sizeof(BeatCounterUI) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BeatCounterUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)()>(&VROSC::BeatCounterUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)()>(&VROSC::BeatCounterUI::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)()>(&VROSC::BeatCounterUI::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)()>(&VROSC::BeatCounterUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::ResetAll
// Il2CppName: ResetAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)()>(&VROSC::BeatCounterUI::ResetAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "ResetAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::SetSyncIsInternal
// Il2CppName: SetSyncIsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(bool)>(&VROSC::BeatCounterUI::SetSyncIsInternal)> {
  static const MethodInfo* get() {
    static auto* isInternal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "SetSyncIsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isInternal});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::SetBpmSliderValue
// Il2CppName: SetBpmSliderValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(float, bool)>(&VROSC::BeatCounterUI::SetBpmSliderValue)> {
  static const MethodInfo* get() {
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fromDataLoad = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "SetBpmSliderValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpm, fromDataLoad});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::BpmSliderGrabbed
// Il2CppName: BpmSliderGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(bool)>(&VROSC::BeatCounterUI::BpmSliderGrabbed)> {
  static const MethodInfo* get() {
    static auto* isGrabbed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "BpmSliderGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isGrabbed});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::BpmSliderValueChanged
// Il2CppName: BpmSliderValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(float)>(&VROSC::BeatCounterUI::BpmSliderValueChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "BpmSliderValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::SyncSourceToggled
// Il2CppName: SyncSourceToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(::VROSC::InputDevice*, bool)>(&VROSC::BeatCounterUI::SyncSourceToggled)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* syncIsInternal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "SyncSourceToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, syncIsInternal});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::SyncSourceToggled
// Il2CppName: SyncSourceToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(::VROSC::InputDevice*, bool, ::VROSC::BeatCounterUI::SyncToggleSource)>(&VROSC::BeatCounterUI::SyncSourceToggled)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* syncIsInternal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("VROSC", "BeatCounterUI/SyncToggleSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "SyncSourceToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, syncIsInternal, source});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::LoopStationHasLoopsChanged
// Il2CppName: LoopStationHasLoopsChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(bool)>(&VROSC::BeatCounterUI::LoopStationHasLoopsChanged)> {
  static const MethodInfo* get() {
    static auto* hasLoops = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "LoopStationHasLoopsChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasLoops});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::GetSliderBpm
// Il2CppName: GetSliderBpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::BeatCounterUI::*)(float)>(&VROSC::BeatCounterUI::GetSliderBpm)> {
  static const MethodInfo* get() {
    static auto* sliderValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "GetSliderBpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderValue});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::GetSliderValue
// Il2CppName: GetSliderValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::BeatCounterUI::*)(float)>(&VROSC::BeatCounterUI::GetSliderValue)> {
  static const MethodInfo* get() {
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "GetSliderValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpm});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::BpmChanged
// Il2CppName: BpmChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(float)>(&VROSC::BeatCounterUI::BpmChanged)> {
  static const MethodInfo* get() {
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "BpmChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpm});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::UpdateUI
// Il2CppName: UpdateUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)()>(&VROSC::BeatCounterUI::UpdateUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "UpdateUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::SetMetronomeMode
// Il2CppName: SetMetronomeMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(int)>(&VROSC::BeatCounterUI::SetMetronomeMode)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "SetMetronomeMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::SetMetronomeMode
// Il2CppName: SetMetronomeMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BeatCounterUI::*)(::VROSC::Metronome::Mode)>(&VROSC::BeatCounterUI::SetMetronomeMode)> {
  static const MethodInfo* get() {
    static auto* metronomeMode = &::il2cpp_utils::GetClassFromName("VROSC", "Metronome/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BeatCounterUI*), "SetMetronomeMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{metronomeMode});
  }
};
// Writing MetadataGetter for method: VROSC::BeatCounterUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
