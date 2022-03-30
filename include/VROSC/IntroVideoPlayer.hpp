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
  // Forward declaring type: VRPlayer
  class VRPlayer;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: TriggerButton
  struct TriggerButton;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: IntroVideoPlayer
  class IntroVideoPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IntroVideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntroVideoPlayer*, "VROSC", "IntroVideoPlayer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.IntroVideoPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class IntroVideoPlayer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::IntroVideoPlayer::$PlayVideo$d__10
    struct $PlayVideo$d__10;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.AudioSource _introAudio
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* introAudio;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.Camera _videoCamera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* videoCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Transform _videoPlane
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* videoPlane;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean _skip
    // Size: 0x1
    // Offset: 0x30
    bool skip;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <HasPlaybackFinished>k__BackingField
    // Size: 0x1
    // Offset: 0x31
    bool HasPlaybackFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String SkipIntroPlayerPrefsString
    static constexpr const char* SkipIntroPlayerPrefsString = "SkipIntroVideo";
    // Get static field: static private System.String SkipIntroPlayerPrefsString
    static ::StringW _get_SkipIntroPlayerPrefsString();
    // Set static field: static private System.String SkipIntroPlayerPrefsString
    static void _set_SkipIntroPlayerPrefsString(::StringW value);
    // Get static field: static public System.Action OnIntroVideoPlaybackFinished
    static ::System::Action* _get_OnIntroVideoPlaybackFinished();
    // Set static field: static public System.Action OnIntroVideoPlaybackFinished
    static void _set_OnIntroVideoPlaybackFinished(::System::Action* value);
    // Get instance field reference: private UnityEngine.AudioSource _introAudio
    ::UnityEngine::AudioSource*& dyn__introAudio();
    // Get instance field reference: private UnityEngine.Camera _videoCamera
    ::UnityEngine::Camera*& dyn__videoCamera();
    // Get instance field reference: private UnityEngine.Transform _videoPlane
    ::UnityEngine::Transform*& dyn__videoPlane();
    // Get instance field reference: private System.Boolean _skip
    bool& dyn__skip();
    // Get instance field reference: private System.Boolean <HasPlaybackFinished>k__BackingField
    bool& dyn_$HasPlaybackFinished$k__BackingField();
    // public System.Boolean get_HasPlaybackFinished()
    // Offset: 0x1387744
    bool get_HasPlaybackFinished();
    // private System.Void set_HasPlaybackFinished(System.Boolean value)
    // Offset: 0x138774C
    void set_HasPlaybackFinished(bool value);
    // public System.Threading.Tasks.Task PlayVideo(VROSC.VRPlayer vrPlayer)
    // Offset: 0x1387758
    ::System::Threading::Tasks::Task* PlayVideo(::VROSC::VRPlayer* vrPlayer);
    // private System.Void SkipVideo(VROSC.InputDevice device, VROSC.TriggerButton button)
    // Offset: 0x1387868
    void SkipVideo(::VROSC::InputDevice* device, ::VROSC::TriggerButton button);
    // public System.Void .ctor()
    // Offset: 0x138787C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntroVideoPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IntroVideoPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntroVideoPlayer*, creationType>()));
    }
  }; // VROSC.IntroVideoPlayer
  #pragma pack(pop)
  static check_size<sizeof(IntroVideoPlayer), 49 + sizeof(bool)> __VROSC_IntroVideoPlayerSizeCheck;
  static_assert(sizeof(IntroVideoPlayer) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IntroVideoPlayer::get_HasPlaybackFinished
// Il2CppName: get_HasPlaybackFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::IntroVideoPlayer::*)()>(&VROSC::IntroVideoPlayer::get_HasPlaybackFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntroVideoPlayer*), "get_HasPlaybackFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::IntroVideoPlayer::set_HasPlaybackFinished
// Il2CppName: set_HasPlaybackFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntroVideoPlayer::*)(bool)>(&VROSC::IntroVideoPlayer::set_HasPlaybackFinished)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntroVideoPlayer*), "set_HasPlaybackFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::IntroVideoPlayer::PlayVideo
// Il2CppName: PlayVideo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (VROSC::IntroVideoPlayer::*)(::VROSC::VRPlayer*)>(&VROSC::IntroVideoPlayer::PlayVideo)> {
  static const MethodInfo* get() {
    static auto* vrPlayer = &::il2cpp_utils::GetClassFromName("VROSC", "VRPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntroVideoPlayer*), "PlayVideo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrPlayer});
  }
};
// Writing MetadataGetter for method: VROSC::IntroVideoPlayer::SkipVideo
// Il2CppName: SkipVideo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntroVideoPlayer::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::IntroVideoPlayer::SkipVideo)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntroVideoPlayer*), "SkipVideo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, button});
  }
};
// Writing MetadataGetter for method: VROSC::IntroVideoPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
