// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerGroup
  class AudioMixerGroup;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: Keyzone
  class Keyzone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::Keyzone);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Keyzone*, "AudioHelm", "Keyzone");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.Keyzone
  // [TokenAttribute] Offset: FFFFFFFF
  class Keyzone : public ::Il2CppObject {
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
    // public UnityEngine.AudioClip audioClip
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // public UnityEngine.Audio.AudioMixerGroup mixer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Audio::AudioMixerGroup* mixer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Audio::AudioMixerGroup*) == 0x8);
    // public System.Int32 rootKey
    // Size: 0x4
    // Offset: 0x20
    int rootKey;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 minKey
    // Size: 0x4
    // Offset: 0x24
    int minKey;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxKey
    // Size: 0x4
    // Offset: 0x28
    int maxKey;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single minVelocity
    // Size: 0x4
    // Offset: 0x2C
    float minVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxVelocity
    // Size: 0x4
    // Offset: 0x30
    float maxVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxVelocity and: lastScheduled
    char __padding6[0x4] = {};
    // public System.Double lastScheduled
    // Size: 0x8
    // Offset: 0x38
    double lastScheduled;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AudioClip audioClip
    ::UnityEngine::AudioClip*& dyn_audioClip();
    // Get instance field reference: public UnityEngine.Audio.AudioMixerGroup mixer
    ::UnityEngine::Audio::AudioMixerGroup*& dyn_mixer();
    // Get instance field reference: public System.Int32 rootKey
    int& dyn_rootKey();
    // Get instance field reference: public System.Int32 minKey
    int& dyn_minKey();
    // Get instance field reference: public System.Int32 maxKey
    int& dyn_maxKey();
    // Get instance field reference: public System.Single minVelocity
    float& dyn_minVelocity();
    // Get instance field reference: public System.Single maxVelocity
    float& dyn_maxVelocity();
    // Get instance field reference: public System.Double lastScheduled
    double& dyn_lastScheduled();
    // public System.Boolean ValidForNote(System.Int32 note)
    // Offset: 0x1389108
    bool ValidForNote(int note);
    // public System.Boolean ValidForNote(System.Int32 note, System.Single velocity)
    // Offset: 0x13891AC
    bool ValidForNote(int note, float velocity);
    // public System.Void .ctor()
    // Offset: 0x13891FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Keyzone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::Keyzone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Keyzone*, creationType>()));
    }
  }; // AudioHelm.Keyzone
  #pragma pack(pop)
  static check_size<sizeof(Keyzone), 56 + sizeof(double)> __AudioHelm_KeyzoneSizeCheck;
  static_assert(sizeof(Keyzone) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::Keyzone::ValidForNote
// Il2CppName: ValidForNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AudioHelm::Keyzone::*)(int)>(&AudioHelm::Keyzone::ValidForNote)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Keyzone*), "ValidForNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: AudioHelm::Keyzone::ValidForNote
// Il2CppName: ValidForNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AudioHelm::Keyzone::*)(int, float)>(&AudioHelm::Keyzone::ValidForNote)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Keyzone*), "ValidForNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, velocity});
  }
};
// Writing MetadataGetter for method: AudioHelm::Keyzone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!