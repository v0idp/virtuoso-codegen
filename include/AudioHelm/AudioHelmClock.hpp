// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Double
#include "System/Double.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: AudioHelmClock
  class AudioHelmClock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::AudioHelmClock);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::AudioHelmClock*, "AudioHelm", "AudioHelmClock");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.AudioHelmClock
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 7824B4
  // [AddComponentMenu] Offset: 7824B4
  class AudioHelmClock : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::AudioHelm::AudioHelmClock::ResetAction
    class ResetAction;
    public:
    // private AudioHelm.AudioHelmClock/AudioHelm.ResetAction OnReset
    // Size: 0x8
    // Offset: 0x18
    ::AudioHelm::AudioHelmClock::ResetAction* OnReset;
    // Field size check
    static_assert(sizeof(::AudioHelm::AudioHelmClock::ResetAction*) == 0x8);
    // private System.Single bpm_
    // Size: 0x4
    // Offset: 0x20
    float bpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean pause_
    // Size: 0x1
    // Offset: 0x24
    bool pause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Single globalBpm
    static float _get_globalBpm();
    // Set static field: static private System.Single globalBpm
    static void _set_globalBpm(float value);
    // Get static field: static private System.Boolean globalPause
    static bool _get_globalPause();
    // Set static field: static private System.Boolean globalPause
    static void _set_globalPause(bool value);
    // Get static field: static private System.Double globalBeatTime
    static double _get_globalBeatTime();
    // Set static field: static private System.Double globalBeatTime
    static void _set_globalBeatTime(double value);
    // Get static field: static private System.Double lastSampledTime
    static double _get_lastSampledTime();
    // Set static field: static private System.Double lastSampledTime
    static void _set_lastSampledTime(double value);
    // Get static field: static private AudioHelm.AudioHelmClock singleton
    static ::AudioHelm::AudioHelmClock* _get_singleton();
    // Set static field: static private AudioHelm.AudioHelmClock singleton
    static void _set_singleton(::AudioHelm::AudioHelmClock* value);
    // static field const value: static private System.Double waitToSync
    static constexpr const double waitToSync = 1;
    // Get static field: static private System.Double waitToSync
    static double _get_waitToSync();
    // Set static field: static private System.Double waitToSync
    static void _set_waitToSync(double value);
    // static field const value: static private System.Double SECONDS_PER_MIN
    static constexpr const double SECONDS_PER_MIN = 60;
    // Get static field: static private System.Double SECONDS_PER_MIN
    static double _get_SECONDS_PER_MIN();
    // Set static field: static private System.Double SECONDS_PER_MIN
    static void _set_SECONDS_PER_MIN(double value);
    // Get instance field reference: private AudioHelm.AudioHelmClock/AudioHelm.ResetAction OnReset
    [[deprecated("Use field access instead!")]] ::AudioHelm::AudioHelmClock::ResetAction*& dyn_OnReset();
    // Get instance field reference: private System.Single bpm_
    [[deprecated("Use field access instead!")]] float& dyn_bpm_();
    // Get instance field reference: private System.Boolean pause_
    [[deprecated("Use field access instead!")]] bool& dyn_pause_();
    // public System.Single get_bpm()
    // Offset: 0x96F578
    float get_bpm();
    // public System.Void set_bpm(System.Single value)
    // Offset: 0x96F580
    void set_bpm(float value);
    // public System.Boolean get_pause()
    // Offset: 0x96F608
    bool get_pause();
    // public System.Void set_pause(System.Boolean value)
    // Offset: 0x96F610
    void set_pause(bool value);
    // public System.Void add_OnReset(AudioHelm.AudioHelmClock/AudioHelm.ResetAction value)
    // Offset: 0x96F438
    void add_OnReset(::AudioHelm::AudioHelmClock::ResetAction* value);
    // public System.Void remove_OnReset(AudioHelm.AudioHelmClock/AudioHelm.ResetAction value)
    // Offset: 0x96F4D8
    void remove_OnReset(::AudioHelm::AudioHelmClock::ResetAction* value);
    // public System.Void .ctor()
    // Offset: 0x96FB68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioHelmClock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::AudioHelmClock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioHelmClock*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x96FB78
    static void _cctor();
    // static public AudioHelm.AudioHelmClock GetInstance()
    // Offset: 0x96F6B8
    static ::AudioHelm::AudioHelmClock* GetInstance();
    // private System.Void Awake()
    // Offset: 0x96F71C
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x96F84C
    void OnDestroy();
    // private System.Void SetGlobalBpm()
    // Offset: 0x96F588
    void SetGlobalBpm();
    // private System.Void SetGlobalPause()
    // Offset: 0x96F61C
    void SetGlobalPause();
    // public System.Void StartScheduled(System.Double timeToStart)
    // Offset: 0x96F858
    void StartScheduled(double timeToStart);
    // public System.Void Reset()
    // Offset: 0x96F7A4
    void Reset();
    // static public System.Single GetGlobalBpm()
    // Offset: 0x96F908
    static float GetGlobalBpm();
    // static public System.Double GetGlobalBeatTime()
    // Offset: 0x96F96C
    static double GetGlobalBeatTime();
    // static public System.Boolean GetGlobalPause()
    // Offset: 0x96F9D0
    static bool GetGlobalPause();
    // static public System.Double GetLastSampledTime()
    // Offset: 0x96FA34
    static double GetLastSampledTime();
    // private System.Void FixedUpdate()
    // Offset: 0x96FA98
    void FixedUpdate();
  }; // AudioHelm.AudioHelmClock
  #pragma pack(pop)
  static check_size<sizeof(AudioHelmClock), 36 + sizeof(bool)> __AudioHelm_AudioHelmClockSizeCheck;
  static_assert(sizeof(AudioHelmClock) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::get_bpm
// Il2CppName: get_bpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AudioHelm::AudioHelmClock::*)()>(&AudioHelm::AudioHelmClock::get_bpm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "get_bpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::set_bpm
// Il2CppName: set_bpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)(float)>(&AudioHelm::AudioHelmClock::set_bpm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "set_bpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::get_pause
// Il2CppName: get_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AudioHelm::AudioHelmClock::*)()>(&AudioHelm::AudioHelmClock::get_pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "get_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::set_pause
// Il2CppName: set_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)(bool)>(&AudioHelm::AudioHelmClock::set_pause)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "set_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::add_OnReset
// Il2CppName: add_OnReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)(::AudioHelm::AudioHelmClock::ResetAction*)>(&AudioHelm::AudioHelmClock::add_OnReset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AudioHelm", "AudioHelmClock/ResetAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "add_OnReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::remove_OnReset
// Il2CppName: remove_OnReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)(::AudioHelm::AudioHelmClock::ResetAction*)>(&AudioHelm::AudioHelmClock::remove_OnReset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AudioHelm", "AudioHelmClock/ResetAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "remove_OnReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&AudioHelm::AudioHelmClock::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::AudioHelmClock* (*)()>(&AudioHelm::AudioHelmClock::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)()>(&AudioHelm::AudioHelmClock::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)()>(&AudioHelm::AudioHelmClock::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::SetGlobalBpm
// Il2CppName: SetGlobalBpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)()>(&AudioHelm::AudioHelmClock::SetGlobalBpm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "SetGlobalBpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::SetGlobalPause
// Il2CppName: SetGlobalPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)()>(&AudioHelm::AudioHelmClock::SetGlobalPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "SetGlobalPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::StartScheduled
// Il2CppName: StartScheduled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)(double)>(&AudioHelm::AudioHelmClock::StartScheduled)> {
  static const MethodInfo* get() {
    static auto* timeToStart = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "StartScheduled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeToStart});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)()>(&AudioHelm::AudioHelmClock::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::GetGlobalBpm
// Il2CppName: GetGlobalBpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&AudioHelm::AudioHelmClock::GetGlobalBpm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "GetGlobalBpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::GetGlobalBeatTime
// Il2CppName: GetGlobalBeatTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&AudioHelm::AudioHelmClock::GetGlobalBeatTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "GetGlobalBeatTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::GetGlobalPause
// Il2CppName: GetGlobalPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&AudioHelm::AudioHelmClock::GetGlobalPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "GetGlobalPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::GetLastSampledTime
// Il2CppName: GetLastSampledTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&AudioHelm::AudioHelmClock::GetLastSampledTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "GetLastSampledTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::AudioHelmClock::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::AudioHelmClock::*)()>(&AudioHelm::AudioHelmClock::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::AudioHelmClock*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
