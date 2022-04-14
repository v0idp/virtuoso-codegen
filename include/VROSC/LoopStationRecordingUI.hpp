// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.LoopStationLoopHandler/VROSC.LooperState
#include "VROSC/LoopStationLoopHandler_LooperState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SelectionBar
  class SelectionBar;
  // Forward declaring type: LoopStationRecordingButton
  class LoopStationRecordingButton;
  // Forward declaring type: LoopPlayerRecordingState
  class LoopPlayerRecordingState;
  // Forward declaring type: UISlideToggle
  class UISlideToggle;
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: LoopStation
  class LoopStation;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationRecordingUI
  class LoopStationRecordingUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationRecordingUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingUI*, "VROSC", "LoopStationRecordingUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationRecordingUI
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationRecordingUI : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.SelectionBar _loopLengthSelectionBar
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SelectionBar* loopLengthSelectionBar;
    // Field size check
    static_assert(sizeof(::VROSC::SelectionBar*) == 0x8);
    // private UnityEngine.GameObject _noLoopsMode
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* noLoopsMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _gotLoops
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* gotLoops;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _loopLengthAutoText
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* loopLengthAutoText;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private VROSC.LoopStationRecordingButton _recordingButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::LoopStationRecordingButton* recordingButton;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationRecordingButton*) == 0x8);
    // private VROSC.LoopPlayerRecordingState _firstLoopRecordingState
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::LoopPlayerRecordingState* firstLoopRecordingState;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerRecordingState*) == 0x8);
    // private VROSC.UISlideToggle _overdubToggle
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::UISlideToggle* overdubToggle;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // private VROSC.UISlideToggle _matchLengthToggle
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::UISlideToggle* matchLengthToggle;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // private VROSC.UIButton _rerecordButton
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::UIButton* rerecordButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.LoopStationLoopHandler/VROSC.LooperState _state
    // Size: 0x4
    // Offset: 0x60
    ::VROSC::LoopStationLoopHandler::LooperState state;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationLoopHandler::LooperState) == 0x4);
    // Padding between fields: state and: recorder
    char __padding9[0x4] = {};
    // private VROSC.LoopStationRecorder _recorder
    // Size: 0x8
    // Offset: 0x68
    ::VROSC::LoopStationRecorder* recorder;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationRecorder*) == 0x8);
    // private VROSC.LoopStation _loopStation
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::LoopStation* loopStation;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStation*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.SelectionBar _loopLengthSelectionBar
    [[deprecated]] ::VROSC::SelectionBar*& dyn__loopLengthSelectionBar();
    // Get instance field reference: private UnityEngine.GameObject _noLoopsMode
    [[deprecated]] ::UnityEngine::GameObject*& dyn__noLoopsMode();
    // Get instance field reference: private UnityEngine.GameObject _gotLoops
    [[deprecated]] ::UnityEngine::GameObject*& dyn__gotLoops();
    // Get instance field reference: private UnityEngine.GameObject _loopLengthAutoText
    [[deprecated]] ::UnityEngine::GameObject*& dyn__loopLengthAutoText();
    // Get instance field reference: private VROSC.LoopStationRecordingButton _recordingButton
    [[deprecated]] ::VROSC::LoopStationRecordingButton*& dyn__recordingButton();
    // Get instance field reference: private VROSC.LoopPlayerRecordingState _firstLoopRecordingState
    [[deprecated]] ::VROSC::LoopPlayerRecordingState*& dyn__firstLoopRecordingState();
    // Get instance field reference: private VROSC.UISlideToggle _overdubToggle
    [[deprecated]] ::VROSC::UISlideToggle*& dyn__overdubToggle();
    // Get instance field reference: private VROSC.UISlideToggle _matchLengthToggle
    [[deprecated]] ::VROSC::UISlideToggle*& dyn__matchLengthToggle();
    // Get instance field reference: private VROSC.UIButton _rerecordButton
    [[deprecated]] ::VROSC::UIButton*& dyn__rerecordButton();
    // Get instance field reference: private VROSC.LoopStationLoopHandler/VROSC.LooperState _state
    [[deprecated]] ::VROSC::LoopStationLoopHandler::LooperState& dyn__state();
    // Get instance field reference: private VROSC.LoopStationRecorder _recorder
    [[deprecated]] ::VROSC::LoopStationRecorder*& dyn__recorder();
    // Get instance field reference: private VROSC.LoopStation _loopStation
    [[deprecated]] ::VROSC::LoopStation*& dyn__loopStation();
    // public System.Single get_OverDubLength()
    // Offset: 0x1977D50
    float get_OverDubLength();
    // public System.Void Setup(VROSC.LoopStationRecorder recorder, VROSC.LoopStation loopStation)
    // Offset: 0x197464C
    void Setup(::VROSC::LoopStationRecorder* recorder, ::VROSC::LoopStation* loopStation);
    // protected System.Void OnDestroy()
    // Offset: 0x1977E08
    void OnDestroy();
    // private System.Void RecorderStateChanged(VROSC.LoopStationRecorder/VROSC.RecordingState recordingState)
    // Offset: 0x1977D84
    void RecorderStateChanged(::VROSC::LoopStationRecorder::RecordingState recordingState);
    // private System.String GetRecordingTextByState(VROSC.LoopStationRecorder/VROSC.RecordingState state)
    // Offset: 0x19780A4
    ::StringW GetRecordingTextByState(::VROSC::LoopStationRecorder::RecordingState state);
    // public System.Void UpdateLooperState()
    // Offset: 0x1974CE0
    void UpdateLooperState();
    // public System.Void ShowRerecordButton()
    // Offset: 0x1975FE4
    void ShowRerecordButton();
    // private System.Single GetOverdubLength()
    // Offset: 0x1977D54
    float GetOverdubLength();
    // private System.Void OverdubChanged(VROSC.InputDevice inputDevice, System.Boolean state)
    // Offset: 0x197817C
    void OverdubChanged(::VROSC::InputDevice* inputDevice, bool state);
    // private System.Void MatchLengthChanged(VROSC.InputDevice inputDevice, System.Boolean state)
    // Offset: 0x197820C
    void MatchLengthChanged(::VROSC::InputDevice* inputDevice, bool state);
    // private System.Void RerecordPressed()
    // Offset: 0x197829C
    void RerecordPressed();
    // private System.Void UserDataLoaded(VROSC.UserDataControllers dataControllers)
    // Offset: 0x19782E8
    void UserDataLoaded(::VROSC::UserDataControllers* dataControllers);
    // public System.Void .ctor()
    // Offset: 0x1978334
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationRecordingUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationRecordingUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationRecordingUI*, creationType>()));
    }
  }; // VROSC.LoopStationRecordingUI
  #pragma pack(pop)
  static check_size<sizeof(LoopStationRecordingUI), 112 + sizeof(::VROSC::LoopStation*)> __VROSC_LoopStationRecordingUISizeCheck;
  static_assert(sizeof(LoopStationRecordingUI) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::get_OverDubLength
// Il2CppName: get_OverDubLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopStationRecordingUI::*)()>(&VROSC::LoopStationRecordingUI::get_OverDubLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "get_OverDubLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)(::VROSC::LoopStationRecorder*, ::VROSC::LoopStation*)>(&VROSC::LoopStationRecordingUI::Setup)> {
  static const MethodInfo* get() {
    static auto* recorder = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationRecorder")->byval_arg;
    static auto* loopStation = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recorder, loopStation});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)()>(&VROSC::LoopStationRecordingUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::RecorderStateChanged
// Il2CppName: RecorderStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)(::VROSC::LoopStationRecorder::RecordingState)>(&VROSC::LoopStationRecordingUI::RecorderStateChanged)> {
  static const MethodInfo* get() {
    static auto* recordingState = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationRecorder/RecordingState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "RecorderStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingState});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::GetRecordingTextByState
// Il2CppName: GetRecordingTextByState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopStationRecordingUI::*)(::VROSC::LoopStationRecorder::RecordingState)>(&VROSC::LoopStationRecordingUI::GetRecordingTextByState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationRecorder/RecordingState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "GetRecordingTextByState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::UpdateLooperState
// Il2CppName: UpdateLooperState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)()>(&VROSC::LoopStationRecordingUI::UpdateLooperState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "UpdateLooperState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::ShowRerecordButton
// Il2CppName: ShowRerecordButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)()>(&VROSC::LoopStationRecordingUI::ShowRerecordButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "ShowRerecordButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::GetOverdubLength
// Il2CppName: GetOverdubLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopStationRecordingUI::*)()>(&VROSC::LoopStationRecordingUI::GetOverdubLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "GetOverdubLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::OverdubChanged
// Il2CppName: OverdubChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)(::VROSC::InputDevice*, bool)>(&VROSC::LoopStationRecordingUI::OverdubChanged)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "OverdubChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::MatchLengthChanged
// Il2CppName: MatchLengthChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)(::VROSC::InputDevice*, bool)>(&VROSC::LoopStationRecordingUI::MatchLengthChanged)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "MatchLengthChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::RerecordPressed
// Il2CppName: RerecordPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)()>(&VROSC::LoopStationRecordingUI::RerecordPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "RerecordPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingUI::*)(::VROSC::UserDataControllers*)>(&VROSC::LoopStationRecordingUI::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* dataControllers = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingUI*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataControllers});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
