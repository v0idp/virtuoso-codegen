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
  // Forward declaring type: PreviewOptionsUI
  class PreviewOptionsUI;
  // Forward declaring type: TimeSlider
  class TimeSlider;
  // Forward declaring type: SessionItemData
  class SessionItemData;
  // Forward declaring type: Error
  struct Error;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
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
  // Forward declaring type: SessionsLibraryPreviewPlayer
  class SessionsLibraryPreviewPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsLibraryPreviewPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsLibraryPreviewPlayer*, "VROSC", "SessionsLibraryPreviewPlayer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsLibraryPreviewPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 669F60
  class SessionsLibraryPreviewPlayer : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.PreviewOptionsUI _previewOptionsUI
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::PreviewOptionsUI* previewOptionsUI;
    // Field size check
    static_assert(sizeof(::VROSC::PreviewOptionsUI*) == 0x8);
    // private UnityEngine.AudioSource _previewAudio
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* previewAudio;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private VROSC.TimeSlider _timeSlider
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::TimeSlider* timeSlider;
    // Field size check
    static_assert(sizeof(::VROSC::TimeSlider*) == 0x8);
    // private System.Single _currentPreviewNormalizeMultiplier
    // Size: 0x4
    // Offset: 0x30
    float currentPreviewNormalizeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: currentPreviewNormalizeMultiplier and: itemData
    char __padding3[0x4] = {};
    // private VROSC.SessionItemData _itemData
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::SessionItemData* itemData;
    // Field size check
    static_assert(sizeof(::VROSC::SessionItemData*) == 0x8);
    // private System.Boolean <IsPlaying>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool IsPlaying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsPlaying and: OnPlayingStateChanged
    char __padding5[0x7] = {};
    // public System.Action`1<System.Boolean> OnPlayingStateChanged
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<bool>* OnPlayingStateChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.PreviewOptionsUI _previewOptionsUI
    ::VROSC::PreviewOptionsUI*& dyn__previewOptionsUI();
    // Get instance field reference: private UnityEngine.AudioSource _previewAudio
    ::UnityEngine::AudioSource*& dyn__previewAudio();
    // Get instance field reference: private VROSC.TimeSlider _timeSlider
    ::VROSC::TimeSlider*& dyn__timeSlider();
    // Get instance field reference: private System.Single _currentPreviewNormalizeMultiplier
    float& dyn__currentPreviewNormalizeMultiplier();
    // Get instance field reference: private VROSC.SessionItemData _itemData
    ::VROSC::SessionItemData*& dyn__itemData();
    // Get instance field reference: private System.Boolean <IsPlaying>k__BackingField
    bool& dyn_$IsPlaying$k__BackingField();
    // Get instance field reference: public System.Action`1<System.Boolean> OnPlayingStateChanged
    ::System::Action_1<bool>*& dyn_OnPlayingStateChanged();
    // public System.Boolean get_IsPlaying()
    // Offset: 0x13EC634
    bool get_IsPlaying();
    // private System.Void set_IsPlaying(System.Boolean value)
    // Offset: 0x13EC63C
    void set_IsPlaying(bool value);
    // protected System.Void OnEnable()
    // Offset: 0x13EC648
    void OnEnable();
    // protected System.Void Update()
    // Offset: 0x13EC7C4
    void Update();
    // protected System.Void OnDisable()
    // Offset: 0x13EC858
    void OnDisable();
    // public System.Void OnSessionSelected(VROSC.SessionItemData item)
    // Offset: 0x13ECB0C
    void OnSessionSelected(::VROSC::SessionItemData* item);
    // public System.Void SetVolume(System.Single volume)
    // Offset: 0x13ECE68
    void SetVolume(float volume);
    // public System.Void PlayPreview()
    // Offset: 0x13ECE90
    void PlayPreview();
    // public System.Void StopPreview()
    // Offset: 0x13ED0B4
    void StopPreview();
    // private System.Void PreviewLoadSucceeded(System.String sessionId, UnityEngine.AudioClip preview, System.Single normalizeMultiplier)
    // Offset: 0x13ED194
    void PreviewLoadSucceeded(::StringW sessionId, ::UnityEngine::AudioClip* preview, float normalizeMultiplier);
    // private System.Void PreviewLoadFailed(System.String sessionId, VROSC.Error error)
    // Offset: 0x13ED360
    void PreviewLoadFailed(::StringW sessionId, ::VROSC::Error error);
    // public System.Single GetPreviewLength()
    // Offset: 0x13ED3E4
    float GetPreviewLength();
    // public System.Void .ctor()
    // Offset: 0x13ED498
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsLibraryPreviewPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsLibraryPreviewPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsLibraryPreviewPlayer*, creationType>()));
    }
  }; // VROSC.SessionsLibraryPreviewPlayer
  #pragma pack(pop)
  static check_size<sizeof(SessionsLibraryPreviewPlayer), 72 + sizeof(::System::Action_1<bool>*)> __VROSC_SessionsLibraryPreviewPlayerSizeCheck;
  static_assert(sizeof(SessionsLibraryPreviewPlayer) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::get_IsPlaying
// Il2CppName: get_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SessionsLibraryPreviewPlayer::*)()>(&VROSC::SessionsLibraryPreviewPlayer::get_IsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "get_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::set_IsPlaying
// Il2CppName: set_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)(bool)>(&VROSC::SessionsLibraryPreviewPlayer::set_IsPlaying)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "set_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)()>(&VROSC::SessionsLibraryPreviewPlayer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)()>(&VROSC::SessionsLibraryPreviewPlayer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)()>(&VROSC::SessionsLibraryPreviewPlayer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::OnSessionSelected
// Il2CppName: OnSessionSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)(::VROSC::SessionItemData*)>(&VROSC::SessionsLibraryPreviewPlayer::OnSessionSelected)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("VROSC", "SessionItemData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "OnSessionSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::SetVolume
// Il2CppName: SetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)(float)>(&VROSC::SessionsLibraryPreviewPlayer::SetVolume)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "SetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::PlayPreview
// Il2CppName: PlayPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)()>(&VROSC::SessionsLibraryPreviewPlayer::PlayPreview)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "PlayPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::StopPreview
// Il2CppName: StopPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)()>(&VROSC::SessionsLibraryPreviewPlayer::StopPreview)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "StopPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::PreviewLoadSucceeded
// Il2CppName: PreviewLoadSucceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)(::StringW, ::UnityEngine::AudioClip*, float)>(&VROSC::SessionsLibraryPreviewPlayer::PreviewLoadSucceeded)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* preview = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* normalizeMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "PreviewLoadSucceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, preview, normalizeMultiplier});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::PreviewLoadFailed
// Il2CppName: PreviewLoadFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryPreviewPlayer::*)(::StringW, ::VROSC::Error)>(&VROSC::SessionsLibraryPreviewPlayer::PreviewLoadFailed)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "PreviewLoadFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, error});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::GetPreviewLength
// Il2CppName: GetPreviewLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::SessionsLibraryPreviewPlayer::*)()>(&VROSC::SessionsLibraryPreviewPlayer::GetPreviewLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryPreviewPlayer*), "GetPreviewLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryPreviewPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
