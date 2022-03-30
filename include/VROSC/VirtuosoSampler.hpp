// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioHelmInstrumentWrapper
#include "VROSC/AudioHelmInstrumentWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerGroup
  class AudioMixerGroup;
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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InternalSynthesizer
  class InternalSynthesizer;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: VirtuosoSampler
  class VirtuosoSampler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::VirtuosoSampler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VirtuosoSampler*, "VROSC", "VirtuosoSampler");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.VirtuosoSampler
  // [TokenAttribute] Offset: FFFFFFFF
  class VirtuosoSampler : public ::VROSC::AudioHelmInstrumentWrapper {
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
    // private UnityEngine.Audio.AudioMixerGroup _audioMixerGroup
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Audio::AudioMixerGroup* audioMixerGroup;
    // Field size check
    static_assert(sizeof(::UnityEngine::Audio::AudioMixerGroup*) == 0x8);
    // private System.Int32 _numberOfSources
    // Size: 0x4
    // Offset: 0x20
    int numberOfSources;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _sourceIndex
    // Size: 0x4
    // Offset: 0x24
    int sourceIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.AudioSource[] _audioSources
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::AudioSource*> audioSources;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioSource*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public System.Action`1<UnityEngine.AudioClip> OnSamplePlayed
    static ::System::Action_1<::UnityEngine::AudioClip*>* _get_OnSamplePlayed();
    // Set static field: static public System.Action`1<UnityEngine.AudioClip> OnSamplePlayed
    static void _set_OnSamplePlayed(::System::Action_1<::UnityEngine::AudioClip*>* value);
    // Get instance field reference: private UnityEngine.Audio.AudioMixerGroup _audioMixerGroup
    ::UnityEngine::Audio::AudioMixerGroup*& dyn__audioMixerGroup();
    // Get instance field reference: private System.Int32 _numberOfSources
    int& dyn__numberOfSources();
    // Get instance field reference: private System.Int32 _sourceIndex
    int& dyn__sourceIndex();
    // Get instance field reference: private UnityEngine.AudioSource[] _audioSources
    ::ArrayW<::UnityEngine::AudioSource*>& dyn__audioSources();
    // private UnityEngine.AudioClip GetAudioClip(System.Int32 id)
    // Offset: 0x13520AC
    ::UnityEngine::AudioClip* GetAudioClip(int id);
    // public System.Void .ctor()
    // Offset: 0x135211C
    // Implemented from: VROSC.AudioHelmInstrumentWrapper
    // Base method: System.Void AudioHelmInstrumentWrapper::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VirtuosoSampler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::VirtuosoSampler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VirtuosoSampler*, creationType>()));
    }
    // public override System.Void Setup(VROSC.InternalSynthesizer internalSynthesizer)
    // Offset: 0x1351CA0
    // Implemented from: VROSC.AudioHelmInstrumentWrapper
    // Base method: System.Void AudioHelmInstrumentWrapper::Setup(VROSC.InternalSynthesizer internalSynthesizer)
    void Setup(::VROSC::InternalSynthesizer* internalSynthesizer);
    // public override System.Void AllNotesOff()
    // Offset: 0x1351E6C
    // Implemented from: VROSC.AudioHelmInstrumentWrapper
    // Base method: System.Void AudioHelmInstrumentWrapper::AllNotesOff()
    void AllNotesOff();
    // public override System.Void NoteOff(System.Int32 note)
    // Offset: 0x1351ED8
    // Implemented from: VROSC.AudioHelmInstrumentWrapper
    // Base method: System.Void AudioHelmInstrumentWrapper::NoteOff(System.Int32 note)
    void NoteOff(int note);
    // public override System.Void NoteOn(System.Int32 note, System.Single velocity, System.Double predictedDspTime, System.Single pitch)
    // Offset: 0x1351EDC
    // Implemented from: VROSC.AudioHelmInstrumentWrapper
    // Base method: System.Void AudioHelmInstrumentWrapper::NoteOn(System.Int32 note, System.Single velocity, System.Double predictedDspTime, System.Single pitch)
    void NoteOn(int note, float velocity, double predictedDspTime, float pitch);
    // public override System.Void SetMidiCC(System.Single midiCCValue, System.Int32 midiCC)
    // Offset: 0x1352114
    // Implemented from: VROSC.AudioHelmInstrumentWrapper
    // Base method: System.Void AudioHelmInstrumentWrapper::SetMidiCC(System.Single midiCCValue, System.Int32 midiCC)
    void SetMidiCC(float midiCCValue, int midiCC);
    // public override System.Void SetPitchBend(System.Single pitchBendValue)
    // Offset: 0x1352118
    // Implemented from: VROSC.AudioHelmInstrumentWrapper
    // Base method: System.Void AudioHelmInstrumentWrapper::SetPitchBend(System.Single pitchBendValue)
    void SetPitchBend(float pitchBendValue);
  }; // VROSC.VirtuosoSampler
  #pragma pack(pop)
  static check_size<sizeof(VirtuosoSampler), 40 + sizeof(::ArrayW<::UnityEngine::AudioSource*>)> __VROSC_VirtuosoSamplerSizeCheck;
  static_assert(sizeof(VirtuosoSampler) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::VirtuosoSampler::GetAudioClip
// Il2CppName: GetAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (VROSC::VirtuosoSampler::*)(int)>(&VROSC::VirtuosoSampler::GetAudioClip)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VirtuosoSampler*), "GetAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VROSC::VirtuosoSampler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::VirtuosoSampler::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VirtuosoSampler::*)(::VROSC::InternalSynthesizer*)>(&VROSC::VirtuosoSampler::Setup)> {
  static const MethodInfo* get() {
    static auto* internalSynthesizer = &::il2cpp_utils::GetClassFromName("VROSC", "InternalSynthesizer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VirtuosoSampler*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalSynthesizer});
  }
};
// Writing MetadataGetter for method: VROSC::VirtuosoSampler::AllNotesOff
// Il2CppName: AllNotesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VirtuosoSampler::*)()>(&VROSC::VirtuosoSampler::AllNotesOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VirtuosoSampler*), "AllNotesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VirtuosoSampler::NoteOff
// Il2CppName: NoteOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VirtuosoSampler::*)(int)>(&VROSC::VirtuosoSampler::NoteOff)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VirtuosoSampler*), "NoteOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: VROSC::VirtuosoSampler::NoteOn
// Il2CppName: NoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VirtuosoSampler::*)(int, float, double, float)>(&VROSC::VirtuosoSampler::NoteOn)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* predictedDspTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* pitch = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VirtuosoSampler*), "NoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, velocity, predictedDspTime, pitch});
  }
};
// Writing MetadataGetter for method: VROSC::VirtuosoSampler::SetMidiCC
// Il2CppName: SetMidiCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VirtuosoSampler::*)(float, int)>(&VROSC::VirtuosoSampler::SetMidiCC)> {
  static const MethodInfo* get() {
    static auto* midiCCValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* midiCC = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VirtuosoSampler*), "SetMidiCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{midiCCValue, midiCC});
  }
};
// Writing MetadataGetter for method: VROSC::VirtuosoSampler::SetPitchBend
// Il2CppName: SetPitchBend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VirtuosoSampler::*)(float)>(&VROSC::VirtuosoSampler::SetPitchBend)> {
  static const MethodInfo* get() {
    static auto* pitchBendValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VirtuosoSampler*), "SetPitchBend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pitchBendValue});
  }
};
