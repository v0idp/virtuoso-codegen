// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.TutorialEvent
#include "VROSC/TutorialEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Tutorial
  class Tutorial;
  // Forward declaring type: TutorialPanel
  class TutorialPanel;
  // Forward declaring type: StateMachine
  class StateMachine;
  // Forward declaring type: TutorialCompletedState
  class TutorialCompletedState;
  // Forward declaring type: TutorialStep
  class TutorialStep;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialSettings
  class TutorialSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialManager
  class TutorialManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TutorialManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialManager*, "VROSC", "TutorialManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TutorialManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialManager : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.Tutorial _tutorial
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::Tutorial* tutorial;
    // Field size check
    static_assert(sizeof(::VROSC::Tutorial*) == 0x8);
    // private TutorialSettings _settings
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::TutorialSettings* settings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialSettings*) == 0x8);
    // private VROSC.TutorialPanel _tutorialPanel
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::TutorialPanel* tutorialPanel;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialPanel*) == 0x8);
    // private UnityEngine.AudioSource _timelineVOSource
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioSource* timelineVOSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioSource _replayVOSource
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AudioSource* replayVOSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private VROSC.StateMachine _stateMachine
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::StateMachine* stateMachine;
    // Field size check
    static_assert(sizeof(::VROSC::StateMachine*) == 0x8);
    // private VROSC.TutorialCompletedState _completedState
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::TutorialCompletedState* completedState;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialCompletedState*) == 0x8);
    // private System.Boolean _isRunning
    // Size: 0x1
    // Offset: 0x50
    bool isRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRunning and: currentStep
    char __padding7[0x7] = {};
    // private VROSC.TutorialStep _currentStep
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::TutorialStep* currentStep;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialStep*) == 0x8);
    // private System.Boolean <HasRecordedCowbell>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool HasRecordedCowbell;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HasRecordedCowbell and: OnEvent
    char __padding9[0x7] = {};
    // public System.Action`1<VROSC.TutorialEvent> OnEvent
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<::VROSC::TutorialEvent>* OnEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::TutorialEvent>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.Tutorial _tutorial
    ::VROSC::Tutorial*& dyn__tutorial();
    // Get instance field reference: private TutorialSettings _settings
    ::GlobalNamespace::TutorialSettings*& dyn__settings();
    // Get instance field reference: private VROSC.TutorialPanel _tutorialPanel
    ::VROSC::TutorialPanel*& dyn__tutorialPanel();
    // Get instance field reference: private UnityEngine.AudioSource _timelineVOSource
    ::UnityEngine::AudioSource*& dyn__timelineVOSource();
    // Get instance field reference: private UnityEngine.AudioSource _replayVOSource
    ::UnityEngine::AudioSource*& dyn__replayVOSource();
    // Get instance field reference: private VROSC.StateMachine _stateMachine
    ::VROSC::StateMachine*& dyn__stateMachine();
    // Get instance field reference: private VROSC.TutorialCompletedState _completedState
    ::VROSC::TutorialCompletedState*& dyn__completedState();
    // Get instance field reference: private System.Boolean _isRunning
    bool& dyn__isRunning();
    // Get instance field reference: private VROSC.TutorialStep _currentStep
    ::VROSC::TutorialStep*& dyn__currentStep();
    // Get instance field reference: private System.Boolean <HasRecordedCowbell>k__BackingField
    bool& dyn_$HasRecordedCowbell$k__BackingField();
    // Get instance field reference: public System.Action`1<VROSC.TutorialEvent> OnEvent
    ::System::Action_1<::VROSC::TutorialEvent>*& dyn_OnEvent();
    // public TutorialSettings get_Settings()
    // Offset: 0x1407F18
    ::GlobalNamespace::TutorialSettings* get_Settings();
    // public UnityEngine.AudioSource get_TimelineVOSource()
    // Offset: 0x1407F20
    ::UnityEngine::AudioSource* get_TimelineVOSource();
    // public UnityEngine.AudioSource get_ReplayVOSource()
    // Offset: 0x1407F28
    ::UnityEngine::AudioSource* get_ReplayVOSource();
    // public System.Boolean get_HasRecordedCowbell()
    // Offset: 0x1407F30
    bool get_HasRecordedCowbell();
    // private System.Void set_HasRecordedCowbell(System.Boolean value)
    // Offset: 0x1407F38
    void set_HasRecordedCowbell(bool value);
    // protected System.Void Awake()
    // Offset: 0x1407F44
    void Awake();
    // public System.Void StartTutorial(UnityEngine.Transform startMenuTransform)
    // Offset: 0x14080D8
    void StartTutorial(::UnityEngine::Transform* startMenuTransform);
    // System.Void SendEvent(VROSC.TutorialEvent tutorialEvent)
    // Offset: 0x14071C8
    void SendEvent(::VROSC::TutorialEvent tutorialEvent);
    // public System.Void StopTutorial(System.Boolean isCancel)
    // Offset: 0x1408828
    void StopTutorial(bool isCancel);
    // public System.Void ReEnableEverything()
    // Offset: 0x1408C70
    void ReEnableEverything();
    // public System.Void ActivateStep(VROSC.TutorialStep tutorialStep)
    // Offset: 0x1408D08
    void ActivateStep(::VROSC::TutorialStep* tutorialStep);
    // protected System.Void Update()
    // Offset: 0x1408FC4
    void Update();
    // private System.Void OnAppPaused(System.Boolean paused)
    // Offset: 0x1409028
    void OnAppPaused(bool paused);
    // private System.Void TutorialEventTriggered(VROSC.TutorialEvent tutorialEvent)
    // Offset: 0x14090B8
    void TutorialEventTriggered(::VROSC::TutorialEvent tutorialEvent);
    // public System.Void SetHasRecordedCowbell(System.Boolean hasRecordedCowbell)
    // Offset: 0x1409174
    void SetHasRecordedCowbell(bool hasRecordedCowbell);
    // public System.Void .ctor()
    // Offset: 0x1409180
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TutorialManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialManager*, creationType>()));
    }
  }; // VROSC.TutorialManager
  #pragma pack(pop)
  static check_size<sizeof(TutorialManager), 104 + sizeof(::System::Action_1<::VROSC::TutorialEvent>*)> __VROSC_TutorialManagerSizeCheck;
  static_assert(sizeof(TutorialManager) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TutorialManager::get_Settings
// Il2CppName: get_Settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TutorialSettings* (VROSC::TutorialManager::*)()>(&VROSC::TutorialManager::get_Settings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "get_Settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::get_TimelineVOSource
// Il2CppName: get_TimelineVOSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSource* (VROSC::TutorialManager::*)()>(&VROSC::TutorialManager::get_TimelineVOSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "get_TimelineVOSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::get_ReplayVOSource
// Il2CppName: get_ReplayVOSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSource* (VROSC::TutorialManager::*)()>(&VROSC::TutorialManager::get_ReplayVOSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "get_ReplayVOSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::get_HasRecordedCowbell
// Il2CppName: get_HasRecordedCowbell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TutorialManager::*)()>(&VROSC::TutorialManager::get_HasRecordedCowbell)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "get_HasRecordedCowbell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::set_HasRecordedCowbell
// Il2CppName: set_HasRecordedCowbell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)(bool)>(&VROSC::TutorialManager::set_HasRecordedCowbell)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "set_HasRecordedCowbell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)()>(&VROSC::TutorialManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::StartTutorial
// Il2CppName: StartTutorial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)(::UnityEngine::Transform*)>(&VROSC::TutorialManager::StartTutorial)> {
  static const MethodInfo* get() {
    static auto* startMenuTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "StartTutorial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startMenuTransform});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::SendEvent
// Il2CppName: SendEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)(::VROSC::TutorialEvent)>(&VROSC::TutorialManager::SendEvent)> {
  static const MethodInfo* get() {
    static auto* tutorialEvent = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "SendEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialEvent});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::StopTutorial
// Il2CppName: StopTutorial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)(bool)>(&VROSC::TutorialManager::StopTutorial)> {
  static const MethodInfo* get() {
    static auto* isCancel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "StopTutorial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isCancel});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::ReEnableEverything
// Il2CppName: ReEnableEverything
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)()>(&VROSC::TutorialManager::ReEnableEverything)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "ReEnableEverything", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::ActivateStep
// Il2CppName: ActivateStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)(::VROSC::TutorialStep*)>(&VROSC::TutorialManager::ActivateStep)> {
  static const MethodInfo* get() {
    static auto* tutorialStep = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialStep")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "ActivateStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialStep});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)()>(&VROSC::TutorialManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::OnAppPaused
// Il2CppName: OnAppPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)(bool)>(&VROSC::TutorialManager::OnAppPaused)> {
  static const MethodInfo* get() {
    static auto* paused = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "OnAppPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paused});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::TutorialEventTriggered
// Il2CppName: TutorialEventTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)(::VROSC::TutorialEvent)>(&VROSC::TutorialManager::TutorialEventTriggered)> {
  static const MethodInfo* get() {
    static auto* tutorialEvent = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "TutorialEventTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialEvent});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::SetHasRecordedCowbell
// Il2CppName: SetHasRecordedCowbell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialManager::*)(bool)>(&VROSC::TutorialManager::SetHasRecordedCowbell)> {
  static const MethodInfo* get() {
    static auto* hasRecordedCowbell = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialManager*), "SetHasRecordedCowbell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasRecordedCowbell});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
