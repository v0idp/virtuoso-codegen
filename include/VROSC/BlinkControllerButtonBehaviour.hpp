// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: VROSC.HandType
#include "VROSC/HandType.hpp"
// Including type: VROSC.TriggerButton
#include "VROSC/TriggerButton.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Skipping declaration: EventAction because it is already included!
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: BlinkControllerButtonBehaviour
  class BlinkControllerButtonBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BlinkControllerButtonBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BlinkControllerButtonBehaviour*, "VROSC", "BlinkControllerButtonBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BlinkControllerButtonBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class BlinkControllerButtonBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: ::VROSC::BlinkControllerButtonBehaviour::EventAction
    struct EventAction;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction
    // [TokenAttribute] Offset: FFFFFFFF
    struct EventAction/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EventAction
      constexpr EventAction(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction Nothing
      static constexpr const int Nothing = 0;
      // Get static field: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction Nothing
      static ::VROSC::BlinkControllerButtonBehaviour::EventAction _get_Nothing();
      // Set static field: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction Nothing
      static void _set_Nothing(::VROSC::BlinkControllerButtonBehaviour::EventAction value);
      // static field const value: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction Start
      static constexpr const int Start = 1;
      // Get static field: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction Start
      static ::VROSC::BlinkControllerButtonBehaviour::EventAction _get_Start();
      // Set static field: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction Start
      static void _set_Start(::VROSC::BlinkControllerButtonBehaviour::EventAction value);
      // static field const value: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction StopWithFade
      static constexpr const int StopWithFade = 2;
      // Get static field: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction StopWithFade
      static ::VROSC::BlinkControllerButtonBehaviour::EventAction _get_StopWithFade();
      // Set static field: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction StopWithFade
      static void _set_StopWithFade(::VROSC::BlinkControllerButtonBehaviour::EventAction value);
      // static field const value: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction InstantStop
      static constexpr const int InstantStop = 3;
      // Get static field: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction InstantStop
      static ::VROSC::BlinkControllerButtonBehaviour::EventAction _get_InstantStop();
      // Set static field: static public VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction InstantStop
      static void _set_InstantStop(::VROSC::BlinkControllerButtonBehaviour::EventAction value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction
    #pragma pack(pop)
    static check_size<sizeof(BlinkControllerButtonBehaviour::EventAction), 16 + sizeof(int)> __VROSC_BlinkControllerButtonBehaviour_EventActionSizeCheck;
    static_assert(sizeof(BlinkControllerButtonBehaviour::EventAction) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.HandType _hand
    // Size: 0x14
    // Offset: 0x10
    ::VROSC::HandType hand;
    // Field size check
    static_assert(sizeof(::VROSC::HandType) == 0x14);
    // private VROSC.TriggerButton _button
    // Size: 0x14
    // Offset: 0x14
    ::VROSC::TriggerButton button;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x14);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _fadeTime
    // Size: 0x4
    // Offset: 0x28
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction _onAssetStartAction
    // Size: 0x14
    // Offset: 0x2C
    ::VROSC::BlinkControllerButtonBehaviour::EventAction onAssetStartAction;
    // Field size check
    static_assert(sizeof(::VROSC::BlinkControllerButtonBehaviour::EventAction) == 0x14);
    // private VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction _onAssetStopAction
    // Size: 0x14
    // Offset: 0x30
    ::VROSC::BlinkControllerButtonBehaviour::EventAction onAssetStopAction;
    // Field size check
    static_assert(sizeof(::VROSC::BlinkControllerButtonBehaviour::EventAction) == 0x14);
    // private VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction _onTimelineStartAction
    // Size: 0x14
    // Offset: 0x34
    ::VROSC::BlinkControllerButtonBehaviour::EventAction onTimelineStartAction;
    // Field size check
    static_assert(sizeof(::VROSC::BlinkControllerButtonBehaviour::EventAction) == 0x14);
    // private VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction _onTimelineStopAction
    // Size: 0x14
    // Offset: 0x38
    ::VROSC::BlinkControllerButtonBehaviour::EventAction onTimelineStopAction;
    // Field size check
    static_assert(sizeof(::VROSC::BlinkControllerButtonBehaviour::EventAction) == 0x14);
    // private System.Boolean _playing
    // Size: 0x1
    // Offset: 0x3C
    bool playing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private VROSC.HandType _hand
    ::VROSC::HandType& dyn__hand();
    // Get instance field reference: private VROSC.TriggerButton _button
    ::VROSC::TriggerButton& dyn__button();
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _fadeTime
    float& dyn__fadeTime();
    // Get instance field reference: private VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction _onAssetStartAction
    ::VROSC::BlinkControllerButtonBehaviour::EventAction& dyn__onAssetStartAction();
    // Get instance field reference: private VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction _onAssetStopAction
    ::VROSC::BlinkControllerButtonBehaviour::EventAction& dyn__onAssetStopAction();
    // Get instance field reference: private VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction _onTimelineStartAction
    ::VROSC::BlinkControllerButtonBehaviour::EventAction& dyn__onTimelineStartAction();
    // Get instance field reference: private VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction _onTimelineStopAction
    ::VROSC::BlinkControllerButtonBehaviour::EventAction& dyn__onTimelineStopAction();
    // Get instance field reference: private System.Boolean _playing
    bool& dyn__playing();
    // public System.Void Setup(VROSC.HandType hand, VROSC.TriggerButton button, UnityEngine.Color color, System.Single fadeTime, VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction onAssetStartAction, VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction onAssetStopAction, VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction onTimelineStartAction, VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction onTimelineStopAction)
    // Offset: 0x1323C94
    void Setup(::VROSC::HandType hand, ::VROSC::TriggerButton button, ::UnityEngine::Color color, float fadeTime, ::VROSC::BlinkControllerButtonBehaviour::EventAction onAssetStartAction, ::VROSC::BlinkControllerButtonBehaviour::EventAction onAssetStopAction, ::VROSC::BlinkControllerButtonBehaviour::EventAction onTimelineStartAction, ::VROSC::BlinkControllerButtonBehaviour::EventAction onTimelineStopAction);
    // private System.Void StartBlinking()
    // Offset: 0x1323F5C
    void StartBlinking();
    // private System.Void StopBlinking(System.Single time)
    // Offset: 0x132401C
    void StopBlinking(float time);
    // private System.Void ProcessEventAction(VROSC.BlinkControllerButtonBehaviour/VROSC.EventAction eventAction)
    // Offset: 0x1323D1C
    void ProcessEventAction(::VROSC::BlinkControllerButtonBehaviour::EventAction eventAction);
    // public System.Void .ctor()
    // Offset: 0x1324078
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlinkControllerButtonBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BlinkControllerButtonBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlinkControllerButtonBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x1323CD0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x1323D44
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(::UnityEngine::Playables::Playable playable);
    // public override System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x1323D70
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable playable)
    void OnGraphStop(::UnityEngine::Playables::Playable playable);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1323D9C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1323DE8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
  }; // VROSC.BlinkControllerButtonBehaviour
  #pragma pack(pop)
  static check_size<sizeof(BlinkControllerButtonBehaviour), 60 + sizeof(bool)> __VROSC_BlinkControllerButtonBehaviourSizeCheck;
  static_assert(sizeof(BlinkControllerButtonBehaviour) == 0x3D);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BlinkControllerButtonBehaviour::EventAction, "VROSC", "BlinkControllerButtonBehaviour/EventAction");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)(::VROSC::HandType, ::VROSC::TriggerButton, ::UnityEngine::Color, float, ::VROSC::BlinkControllerButtonBehaviour::EventAction, ::VROSC::BlinkControllerButtonBehaviour::EventAction, ::VROSC::BlinkControllerButtonBehaviour::EventAction, ::VROSC::BlinkControllerButtonBehaviour::EventAction)>(&VROSC::BlinkControllerButtonBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* onAssetStartAction = &::il2cpp_utils::GetClassFromName("VROSC", "BlinkControllerButtonBehaviour/EventAction")->byval_arg;
    static auto* onAssetStopAction = &::il2cpp_utils::GetClassFromName("VROSC", "BlinkControllerButtonBehaviour/EventAction")->byval_arg;
    static auto* onTimelineStartAction = &::il2cpp_utils::GetClassFromName("VROSC", "BlinkControllerButtonBehaviour/EventAction")->byval_arg;
    static auto* onTimelineStopAction = &::il2cpp_utils::GetClassFromName("VROSC", "BlinkControllerButtonBehaviour/EventAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, button, color, fadeTime, onAssetStartAction, onAssetStopAction, onTimelineStartAction, onTimelineStopAction});
  }
};
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::StartBlinking
// Il2CppName: StartBlinking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)()>(&VROSC::BlinkControllerButtonBehaviour::StartBlinking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "StartBlinking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::StopBlinking
// Il2CppName: StopBlinking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)(float)>(&VROSC::BlinkControllerButtonBehaviour::StopBlinking)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "StopBlinking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::ProcessEventAction
// Il2CppName: ProcessEventAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)(::VROSC::BlinkControllerButtonBehaviour::EventAction)>(&VROSC::BlinkControllerButtonBehaviour::ProcessEventAction)> {
  static const MethodInfo* get() {
    static auto* eventAction = &::il2cpp_utils::GetClassFromName("VROSC", "BlinkControllerButtonBehaviour/EventAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "ProcessEventAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventAction});
  }
};
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::BlinkControllerButtonBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable)>(&VROSC::BlinkControllerButtonBehaviour::OnGraphStart)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::OnGraphStop
// Il2CppName: OnGraphStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable)>(&VROSC::BlinkControllerButtonBehaviour::OnGraphStop)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "OnGraphStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&VROSC::BlinkControllerButtonBehaviour::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: VROSC::BlinkControllerButtonBehaviour::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&VROSC::BlinkControllerButtonBehaviour::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BlinkControllerButtonBehaviour*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
