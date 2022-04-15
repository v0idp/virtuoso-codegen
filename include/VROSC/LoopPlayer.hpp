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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStation
  class LoopStation;
  // Forward declaring type: LoopPlayerUI
  class LoopPlayerUI;
  // Forward declaring type: InteractionDisabler
  class InteractionDisabler;
  // Forward declaring type: LoopPlayerPlaybackController
  class LoopPlayerPlaybackController;
  // Forward declaring type: LoopPlayerMover
  class LoopPlayerMover;
  // Forward declaring type: LoopPlayerAutoMover
  class LoopPlayerAutoMover;
  // Forward declaring type: LoopStationGroup
  class LoopStationGroup;
  // Forward declaring type: LoopPlaybackConfigOverride
  class LoopPlaybackConfigOverride;
  // Forward declaring type: LoopPlaybackConfig
  class LoopPlaybackConfig;
  // Forward declaring type: PlaybackProgressUIData
  struct PlaybackProgressUIData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayer
  class LoopPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayer*, "VROSC", "LoopPlayer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopPlayer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.LoopStation _loopStation
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::LoopStation* loopStation;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStation*) == 0x8);
    // private VROSC.LoopPlayerUI _ui
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::LoopPlayerUI* ui;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerUI*) == 0x8);
    // private VROSC.InteractionDisabler _disabler
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::InteractionDisabler* disabler;
    // Field size check
    static_assert(sizeof(::VROSC::InteractionDisabler*) == 0x8);
    // private VROSC.LoopPlayerPlaybackController _playBack
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::LoopPlayerPlaybackController* playBack;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerPlaybackController*) == 0x8);
    // private VROSC.LoopPlayerMover _mover
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::LoopPlayerMover* mover;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerMover*) == 0x8);
    // private VROSC.LoopPlayerAutoMover _autoMover
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::LoopPlayerAutoMover* autoMover;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerAutoMover*) == 0x8);
    // private System.String <TrackId>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::StringW TrackId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action`2<VROSC.LoopPlayer,System.Boolean> OnDelete
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_2<::VROSC::LoopPlayer*, bool>* OnDelete;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::LoopPlayer*, bool>*) == 0x8);
    // public System.Action`2<VROSC.LoopPlayer,System.Boolean> OnSoloChanged
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_2<::VROSC::LoopPlayer*, bool>* OnSoloChanged;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::LoopPlayer*, bool>*) == 0x8);
    // public System.Action`2<VROSC.LoopPlayer,System.Boolean> OnGrabbed
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_2<::VROSC::LoopPlayer*, bool>* OnGrabbed;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::LoopPlayer*, bool>*) == 0x8);
    // private System.Boolean <IsShownAsComplete>k__BackingField
    // Size: 0x1
    // Offset: 0x68
    bool IsShownAsComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsBeingRecorded>k__BackingField
    // Size: 0x1
    // Offset: 0x69
    bool IsBeingRecorded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsBeingRecorded and: BelongsToGroup
    char __padding11[0x6] = {};
    // private VROSC.LoopStationGroup <BelongsToGroup>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::LoopStationGroup* BelongsToGroup;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationGroup*) == 0x8);
    // private System.Int32 <PositionInGroup>k__BackingField
    // Size: 0x4
    // Offset: 0x78
    int PositionInGroup;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PositionInGroup and: InstrumentName
    char __padding13[0x4] = {};
    // private System.String <InstrumentName>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    ::StringW InstrumentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.LoopStation _loopStation
    [[deprecated("Use field access instead!")]] ::VROSC::LoopStation*& dyn__loopStation();
    // Get instance field reference: private VROSC.LoopPlayerUI _ui
    [[deprecated("Use field access instead!")]] ::VROSC::LoopPlayerUI*& dyn__ui();
    // Get instance field reference: private VROSC.InteractionDisabler _disabler
    [[deprecated("Use field access instead!")]] ::VROSC::InteractionDisabler*& dyn__disabler();
    // Get instance field reference: private VROSC.LoopPlayerPlaybackController _playBack
    [[deprecated("Use field access instead!")]] ::VROSC::LoopPlayerPlaybackController*& dyn__playBack();
    // Get instance field reference: private VROSC.LoopPlayerMover _mover
    [[deprecated("Use field access instead!")]] ::VROSC::LoopPlayerMover*& dyn__mover();
    // Get instance field reference: private VROSC.LoopPlayerAutoMover _autoMover
    [[deprecated("Use field access instead!")]] ::VROSC::LoopPlayerAutoMover*& dyn__autoMover();
    // Get instance field reference: private System.String <TrackId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$TrackId$k__BackingField();
    // Get instance field reference: public System.Action`2<VROSC.LoopPlayer,System.Boolean> OnDelete
    [[deprecated("Use field access instead!")]] ::System::Action_2<::VROSC::LoopPlayer*, bool>*& dyn_OnDelete();
    // Get instance field reference: public System.Action`2<VROSC.LoopPlayer,System.Boolean> OnSoloChanged
    [[deprecated("Use field access instead!")]] ::System::Action_2<::VROSC::LoopPlayer*, bool>*& dyn_OnSoloChanged();
    // Get instance field reference: public System.Action`2<VROSC.LoopPlayer,System.Boolean> OnGrabbed
    [[deprecated("Use field access instead!")]] ::System::Action_2<::VROSC::LoopPlayer*, bool>*& dyn_OnGrabbed();
    // Get instance field reference: private System.Boolean <IsShownAsComplete>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsShownAsComplete$k__BackingField();
    // Get instance field reference: private System.Boolean <IsBeingRecorded>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsBeingRecorded$k__BackingField();
    // Get instance field reference: private VROSC.LoopStationGroup <BelongsToGroup>k__BackingField
    [[deprecated("Use field access instead!")]] ::VROSC::LoopStationGroup*& dyn_$BelongsToGroup$k__BackingField();
    // Get instance field reference: private System.Int32 <PositionInGroup>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$PositionInGroup$k__BackingField();
    // Get instance field reference: private System.String <InstrumentName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$InstrumentName$k__BackingField();
    // public System.Boolean get_IsSoloActive()
    // Offset: 0x19B92C4
    bool get_IsSoloActive();
    // public System.Boolean get_IsMuteActive()
    // Offset: 0x19B92EC
    bool get_IsMuteActive();
    // public System.Boolean get_IsPlaying()
    // Offset: 0x19B5BF0
    bool get_IsPlaying();
    // public VROSC.LoopPlayerAutoMover get_AutoMover()
    // Offset: 0x19B9330
    ::VROSC::LoopPlayerAutoMover* get_AutoMover();
    // public VROSC.LoopPlayerUI get_UI()
    // Offset: 0x19B9338
    ::VROSC::LoopPlayerUI* get_UI();
    // public System.String get_TrackId()
    // Offset: 0x19B9340
    ::StringW get_TrackId();
    // private System.Void set_TrackId(System.String value)
    // Offset: 0x19B9348
    void set_TrackId(::StringW value);
    // public VROSC.LoopPlayerPlaybackController get_Playback()
    // Offset: 0x19B9350
    ::VROSC::LoopPlayerPlaybackController* get_Playback();
    // public System.Boolean get_IsShownAsComplete()
    // Offset: 0x19B9358
    bool get_IsShownAsComplete();
    // private System.Void set_IsShownAsComplete(System.Boolean value)
    // Offset: 0x19B9360
    void set_IsShownAsComplete(bool value);
    // public System.Boolean get_IsBeingRecorded()
    // Offset: 0x19B936C
    bool get_IsBeingRecorded();
    // private System.Void set_IsBeingRecorded(System.Boolean value)
    // Offset: 0x19B9374
    void set_IsBeingRecorded(bool value);
    // public VROSC.LoopStationGroup get_BelongsToGroup()
    // Offset: 0x19B9380
    ::VROSC::LoopStationGroup* get_BelongsToGroup();
    // private System.Void set_BelongsToGroup(VROSC.LoopStationGroup value)
    // Offset: 0x19B9388
    void set_BelongsToGroup(::VROSC::LoopStationGroup* value);
    // public System.Int32 get_PositionInGroup()
    // Offset: 0x19B9390
    int get_PositionInGroup();
    // private System.Void set_PositionInGroup(System.Int32 value)
    // Offset: 0x19B9398
    void set_PositionInGroup(int value);
    // public System.Int32 get_LoopLength()
    // Offset: 0x19B93A0
    int get_LoopLength();
    // public System.String get_InstrumentName()
    // Offset: 0x19B93CC
    ::StringW get_InstrumentName();
    // private System.Void set_InstrumentName(System.String value)
    // Offset: 0x19B93D4
    void set_InstrumentName(::StringW value);
    // public System.Boolean get_IsGrabbed()
    // Offset: 0x19B93DC
    bool get_IsGrabbed();
    // public System.Void .ctor()
    // Offset: 0x19BACA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayer*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x19B93F8
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x19B974C
    void OnDestroy();
    // public System.Void SetGroup(VROSC.LoopStationGroup loopStationGroup, System.Int32 position)
    // Offset: 0x19B9AA0
    void SetGroup(::VROSC::LoopStationGroup* loopStationGroup, int position);
    // public System.Void SetGroupPosition(System.Int32 position)
    // Offset: 0x19B5504
    void SetGroupPosition(int position);
    // public System.Void Setup(VROSC.LoopStation loopStation, System.String trackId, System.Boolean createdByRecorder, System.Boolean overdub)
    // Offset: 0x19B9C18
    void Setup(::VROSC::LoopStation* loopStation, ::StringW trackId, bool createdByRecorder, bool overdub);
    // public System.Void SetRecordingCompleted(System.Boolean colorize)
    // Offset: 0x19BA250
    void SetRecordingCompleted(bool colorize);
    // public System.Void SetRecordingText(System.String recordingtext)
    // Offset: 0x19BA470
    void SetRecordingText(::StringW recordingtext);
    // private System.Void TogglePlay(System.Boolean play)
    // Offset: 0x19BA4D4
    void TogglePlay(bool play);
    // private System.Void ToggleMute(System.Boolean mute)
    // Offset: 0x19BA540
    void ToggleMute(bool mute);
    // private System.Void ToggleSolo(System.Boolean soloOn)
    // Offset: 0x19BA744
    void ToggleSolo(bool soloOn);
    // private System.Void DeleteFromButton()
    // Offset: 0x19BA7B8
    void DeleteFromButton();
    // System.Void UpdatePlayConfig(VROSC.LoopPlaybackConfigOverride playbackConfig)
    // Offset: 0x19BA81C
    void UpdatePlayConfig(::VROSC::LoopPlaybackConfigOverride* playbackConfig);
    // public System.Void Play(VROSC.LoopPlaybackConfig config)
    // Offset: 0x19BA864
    void Play(::VROSC::LoopPlaybackConfig* config);
    // public System.Void Stop(System.Boolean instant)
    // Offset: 0x19BA8A0
    void Stop(bool instant);
    // public System.Void UpdateAudioSourceVolume()
    // Offset: 0x19BA978
    void UpdateAudioSourceVolume();
    // public System.Void SetInteractableDuringAnimation(System.Boolean interactable)
    // Offset: 0x19BA990
    void SetInteractableDuringAnimation(bool interactable);
    // public System.Void SetVolume(System.Single volume)
    // Offset: 0x19BA1F4
    void SetVolume(float volume);
    // private System.Void OnVolumeSliderChanged(System.Single volume)
    // Offset: 0x19BA9D4
    void OnVolumeSliderChanged(float volume);
    // public System.Void SetIsMutedByLoad(System.Boolean isMuted)
    // Offset: 0x19BAA18
    void SetIsMutedByLoad(bool isMuted);
    // public System.Void SetMutedBySolo(System.Boolean isMutedBySolo)
    // Offset: 0x19BAA5C
    void SetMutedBySolo(bool isMutedBySolo);
    // public VROSC.PlaybackProgressUIData GetPlaybackProgress()
    // Offset: 0x19BAA88
    ::VROSC::PlaybackProgressUIData GetPlaybackProgress();
    // private System.Void SetDisplayName(System.String displayName)
    // Offset: 0x19BAC10
    void SetDisplayName(::StringW displayName);
  }; // VROSC.LoopPlayer
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayer), 128 + sizeof(::StringW)> __VROSC_LoopPlayerSizeCheck;
  static_assert(sizeof(LoopPlayer) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_IsSoloActive
// Il2CppName: get_IsSoloActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_IsSoloActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_IsSoloActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_IsMuteActive
// Il2CppName: get_IsMuteActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_IsMuteActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_IsMuteActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_IsPlaying
// Il2CppName: get_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_IsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_AutoMover
// Il2CppName: get_AutoMover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerAutoMover* (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_AutoMover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_AutoMover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_UI
// Il2CppName: get_UI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerUI* (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_UI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_UI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_TrackId
// Il2CppName: get_TrackId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_TrackId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_TrackId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::set_TrackId
// Il2CppName: set_TrackId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::StringW)>(&VROSC::LoopPlayer::set_TrackId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "set_TrackId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_Playback
// Il2CppName: get_Playback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackController* (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_Playback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_Playback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_IsShownAsComplete
// Il2CppName: get_IsShownAsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_IsShownAsComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_IsShownAsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::set_IsShownAsComplete
// Il2CppName: set_IsShownAsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::set_IsShownAsComplete)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "set_IsShownAsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_IsBeingRecorded
// Il2CppName: get_IsBeingRecorded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_IsBeingRecorded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_IsBeingRecorded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::set_IsBeingRecorded
// Il2CppName: set_IsBeingRecorded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::set_IsBeingRecorded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "set_IsBeingRecorded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_BelongsToGroup
// Il2CppName: get_BelongsToGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationGroup* (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_BelongsToGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_BelongsToGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::set_BelongsToGroup
// Il2CppName: set_BelongsToGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::VROSC::LoopStationGroup*)>(&VROSC::LoopPlayer::set_BelongsToGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "set_BelongsToGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_PositionInGroup
// Il2CppName: get_PositionInGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_PositionInGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_PositionInGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::set_PositionInGroup
// Il2CppName: set_PositionInGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(int)>(&VROSC::LoopPlayer::set_PositionInGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "set_PositionInGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_LoopLength
// Il2CppName: get_LoopLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_LoopLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_LoopLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_InstrumentName
// Il2CppName: get_InstrumentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_InstrumentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_InstrumentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::set_InstrumentName
// Il2CppName: set_InstrumentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::StringW)>(&VROSC::LoopPlayer::set_InstrumentName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "set_InstrumentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::get_IsGrabbed
// Il2CppName: get_IsGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::get_IsGrabbed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "get_IsGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopPlayer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetGroup
// Il2CppName: SetGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::VROSC::LoopStationGroup*, int)>(&VROSC::LoopPlayer::SetGroup)> {
  static const MethodInfo* get() {
    static auto* loopStationGroup = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStationGroup, position});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetGroupPosition
// Il2CppName: SetGroupPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(int)>(&VROSC::LoopPlayer::SetGroupPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetGroupPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::VROSC::LoopStation*, ::StringW, bool, bool)>(&VROSC::LoopPlayer::Setup)> {
  static const MethodInfo* get() {
    static auto* loopStation = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStation")->byval_arg;
    static auto* trackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* createdByRecorder = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* overdub = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStation, trackId, createdByRecorder, overdub});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetRecordingCompleted
// Il2CppName: SetRecordingCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::SetRecordingCompleted)> {
  static const MethodInfo* get() {
    static auto* colorize = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetRecordingCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorize});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetRecordingText
// Il2CppName: SetRecordingText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::StringW)>(&VROSC::LoopPlayer::SetRecordingText)> {
  static const MethodInfo* get() {
    static auto* recordingtext = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetRecordingText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingtext});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::TogglePlay
// Il2CppName: TogglePlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::TogglePlay)> {
  static const MethodInfo* get() {
    static auto* play = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "TogglePlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{play});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::ToggleMute
// Il2CppName: ToggleMute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::ToggleMute)> {
  static const MethodInfo* get() {
    static auto* mute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "ToggleMute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mute});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::ToggleSolo
// Il2CppName: ToggleSolo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::ToggleSolo)> {
  static const MethodInfo* get() {
    static auto* soloOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "ToggleSolo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soloOn});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::DeleteFromButton
// Il2CppName: DeleteFromButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::DeleteFromButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "DeleteFromButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::UpdatePlayConfig
// Il2CppName: UpdatePlayConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::VROSC::LoopPlaybackConfigOverride*)>(&VROSC::LoopPlayer::UpdatePlayConfig)> {
  static const MethodInfo* get() {
    static auto* playbackConfig = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfigOverride")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "UpdatePlayConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playbackConfig});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::VROSC::LoopPlaybackConfig*)>(&VROSC::LoopPlayer::Play)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::Stop)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::UpdateAudioSourceVolume
// Il2CppName: UpdateAudioSourceVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::UpdateAudioSourceVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "UpdateAudioSourceVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetInteractableDuringAnimation
// Il2CppName: SetInteractableDuringAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::SetInteractableDuringAnimation)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetInteractableDuringAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetVolume
// Il2CppName: SetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(float)>(&VROSC::LoopPlayer::SetVolume)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::OnVolumeSliderChanged
// Il2CppName: OnVolumeSliderChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(float)>(&VROSC::LoopPlayer::OnVolumeSliderChanged)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "OnVolumeSliderChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetIsMutedByLoad
// Il2CppName: SetIsMutedByLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::SetIsMutedByLoad)> {
  static const MethodInfo* get() {
    static auto* isMuted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetIsMutedByLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isMuted});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetMutedBySolo
// Il2CppName: SetMutedBySolo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(bool)>(&VROSC::LoopPlayer::SetMutedBySolo)> {
  static const MethodInfo* get() {
    static auto* isMutedBySolo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetMutedBySolo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isMutedBySolo});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::GetPlaybackProgress
// Il2CppName: GetPlaybackProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PlaybackProgressUIData (VROSC::LoopPlayer::*)()>(&VROSC::LoopPlayer::GetPlaybackProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "GetPlaybackProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayer::SetDisplayName
// Il2CppName: SetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayer::*)(::StringW)>(&VROSC::LoopPlayer::SetDisplayName)> {
  static const MethodInfo* get() {
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayer*), "SetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{displayName});
  }
};
