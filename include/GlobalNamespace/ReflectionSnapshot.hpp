// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerSnapshot
  class AudioMixerSnapshot;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReflectionSnapshot
  struct ReflectionSnapshot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionSnapshot, "", "ReflectionSnapshot");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ReflectionSnapshot
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReflectionSnapshot/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Audio.AudioMixerSnapshot mixerSnapshot
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Audio::AudioMixerSnapshot* mixerSnapshot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Audio::AudioMixerSnapshot*) == 0x8);
    // public System.Single fadeTime
    // Size: 0x4
    // Offset: 0x8
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ReflectionSnapshot
    constexpr ReflectionSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* mixerSnapshot_ = {}, float fadeTime_ = {}) noexcept : mixerSnapshot{mixerSnapshot_}, fadeTime{fadeTime_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Audio.AudioMixerSnapshot mixerSnapshot
    [[deprecated]] ::UnityEngine::Audio::AudioMixerSnapshot*& dyn_mixerSnapshot();
    // Get instance field reference: public System.Single fadeTime
    [[deprecated]] float& dyn_fadeTime();
  }; // ReflectionSnapshot
  #pragma pack(pop)
  static check_size<sizeof(ReflectionSnapshot), 8 + sizeof(float)> __GlobalNamespace_ReflectionSnapshotSizeCheck;
  static_assert(sizeof(ReflectionSnapshot) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
