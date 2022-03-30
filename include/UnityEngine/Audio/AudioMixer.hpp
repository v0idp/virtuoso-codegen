// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerSnapshot
  class AudioMixerSnapshot;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixer
  class AudioMixer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Audio::AudioMixer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixer*, "UnityEngine.Audio", "AudioMixer");
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Audio.AudioMixer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5ABAE0
  // [ExcludeFromObjectFactoryAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5ABAE0
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class AudioMixer : public ::UnityEngine::Object {
    public:
    // System.Void TransitionToSnapshot(UnityEngine.Audio.AudioMixerSnapshot snapshot, System.Single timeToReach)
    // Offset: 0x12D5CD0
    void TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, float timeToReach);
    // private System.Void TransitionToSnapshotInternal(UnityEngine.Audio.AudioMixerSnapshot snapshot, System.Single timeToReach)
    // Offset: 0x12D5FEC
    void TransitionToSnapshotInternal(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, float timeToReach);
    // public System.Void TransitionToSnapshots(UnityEngine.Audio.AudioMixerSnapshot[] snapshots, System.Single[] weights, System.Single timeToReach)
    // Offset: 0x12D604C
    void TransitionToSnapshots(::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*> snapshots, ::ArrayW<float> weights, float timeToReach);
    // public System.Boolean SetFloat(System.String name, System.Single value)
    // Offset: 0x12D60B4
    bool SetFloat(::StringW name, float value);
    // public System.Boolean GetFloat(System.String name, out System.Single value)
    // Offset: 0x12D6114
    bool GetFloat(::StringW name, ByRef<float> value);
    // System.Void .ctor()
    // Offset: 0x12D5C6C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioMixer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Audio::AudioMixer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioMixer*, creationType>()));
    }
  }; // UnityEngine.Audio.AudioMixer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::TransitionToSnapshot
// Il2CppName: TransitionToSnapshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioMixer::*)(::UnityEngine::Audio::AudioMixerSnapshot*, float)>(&UnityEngine::Audio::AudioMixer::TransitionToSnapshot)> {
  static const MethodInfo* get() {
    static auto* snapshot = &::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioMixerSnapshot")->byval_arg;
    static auto* timeToReach = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "TransitionToSnapshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{snapshot, timeToReach});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::TransitionToSnapshotInternal
// Il2CppName: TransitionToSnapshotInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioMixer::*)(::UnityEngine::Audio::AudioMixerSnapshot*, float)>(&UnityEngine::Audio::AudioMixer::TransitionToSnapshotInternal)> {
  static const MethodInfo* get() {
    static auto* snapshot = &::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioMixerSnapshot")->byval_arg;
    static auto* timeToReach = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "TransitionToSnapshotInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{snapshot, timeToReach});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::TransitionToSnapshots
// Il2CppName: TransitionToSnapshots
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioMixer::*)(::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*>, ::ArrayW<float>, float)>(&UnityEngine::Audio::AudioMixer::TransitionToSnapshots)> {
  static const MethodInfo* get() {
    static auto* snapshots = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioMixerSnapshot"), 1)->byval_arg;
    static auto* weights = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* timeToReach = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "TransitionToSnapshots", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{snapshots, weights, timeToReach});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Audio::AudioMixer::*)(::StringW, float)>(&UnityEngine::Audio::AudioMixer::SetFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Audio::AudioMixer::*)(::StringW, ByRef<float>)>(&UnityEngine::Audio::AudioMixer::GetFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!