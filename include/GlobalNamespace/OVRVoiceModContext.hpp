// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Including type: OVRTouchpad
#include "GlobalNamespace/OVRTouchpad.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRVoiceModContext
  class OVRVoiceModContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVoiceModContext);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVoiceModContext*, "", "OVRVoiceModContext");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OVRVoiceModContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 668438
  class OVRVoiceModContext : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRVoiceModContext::ovrVoiceModParams
    struct ovrVoiceModParams;
    // Nested type: ::GlobalNamespace::OVRVoiceModContext::VMPreset
    struct VMPreset;
    // Size: 0x60
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRVoiceModContext/VMPreset
    // [TokenAttribute] Offset: FFFFFFFF
    struct VMPreset/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.String info
      // Size: 0x8
      // Offset: 0x0
      ::StringW info;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public UnityEngine.Color color
      // Size: 0x10
      // Offset: 0x8
      ::UnityEngine::Color color;
      // Field size check
      static_assert(sizeof(::UnityEngine::Color) == 0x10);
      // public System.Single mix
      // Size: 0x4
      // Offset: 0x18
      float mix;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single pitch
      // Size: 0x4
      // Offset: 0x1C
      float pitch;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Int32 bands
      // Size: 0x4
      // Offset: 0x20
      int bands;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 formant
      // Size: 0x4
      // Offset: 0x24
      int formant;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 c1PTrack
      // Size: 0x4
      // Offset: 0x28
      int c1PTrack;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 c1Type
      // Size: 0x4
      // Offset: 0x2C
      int c1Type;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Single c1Gain
      // Size: 0x4
      // Offset: 0x30
      float c1Gain;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single c1Freq
      // Size: 0x4
      // Offset: 0x34
      float c1Freq;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Int32 c1Note
      // Size: 0x4
      // Offset: 0x38
      int c1Note;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Single c1PW
      // Size: 0x4
      // Offset: 0x3C
      float c1PW;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Int32 c1CNS
      // Size: 0x4
      // Offset: 0x40
      int c1CNS;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 c2PTrack
      // Size: 0x4
      // Offset: 0x44
      int c2PTrack;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 c2Type
      // Size: 0x4
      // Offset: 0x48
      int c2Type;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Single c2Gain
      // Size: 0x4
      // Offset: 0x4C
      float c2Gain;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single c2Freq
      // Size: 0x4
      // Offset: 0x50
      float c2Freq;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Int32 c2Note
      // Size: 0x4
      // Offset: 0x54
      int c2Note;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Single c2PW
      // Size: 0x4
      // Offset: 0x58
      float c2PW;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Int32 c2CNS
      // Size: 0x4
      // Offset: 0x5C
      int c2CNS;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: VMPreset
      constexpr VMPreset(::StringW info_ = {}, ::UnityEngine::Color color_ = {}, float mix_ = {}, float pitch_ = {}, int bands_ = {}, int formant_ = {}, int c1PTrack_ = {}, int c1Type_ = {}, float c1Gain_ = {}, float c1Freq_ = {}, int c1Note_ = {}, float c1PW_ = {}, int c1CNS_ = {}, int c2PTrack_ = {}, int c2Type_ = {}, float c2Gain_ = {}, float c2Freq_ = {}, int c2Note_ = {}, float c2PW_ = {}, int c2CNS_ = {}) noexcept : info{info_}, color{color_}, mix{mix_}, pitch{pitch_}, bands{bands_}, formant{formant_}, c1PTrack{c1PTrack_}, c1Type{c1Type_}, c1Gain{c1Gain_}, c1Freq{c1Freq_}, c1Note{c1Note_}, c1PW{c1PW_}, c1CNS{c1CNS_}, c2PTrack{c2PTrack_}, c2Type{c2Type_}, c2Gain{c2Gain_}, c2Freq{c2Freq_}, c2Note{c2Note_}, c2PW{c2PW_}, c2CNS{c2CNS_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.String info
      ::StringW& dyn_info();
      // Get instance field reference: public UnityEngine.Color color
      ::UnityEngine::Color& dyn_color();
      // Get instance field reference: public System.Single mix
      float& dyn_mix();
      // Get instance field reference: public System.Single pitch
      float& dyn_pitch();
      // Get instance field reference: public System.Int32 bands
      int& dyn_bands();
      // Get instance field reference: public System.Int32 formant
      int& dyn_formant();
      // Get instance field reference: public System.Int32 c1PTrack
      int& dyn_c1PTrack();
      // Get instance field reference: public System.Int32 c1Type
      int& dyn_c1Type();
      // Get instance field reference: public System.Single c1Gain
      float& dyn_c1Gain();
      // Get instance field reference: public System.Single c1Freq
      float& dyn_c1Freq();
      // Get instance field reference: public System.Int32 c1Note
      int& dyn_c1Note();
      // Get instance field reference: public System.Single c1PW
      float& dyn_c1PW();
      // Get instance field reference: public System.Int32 c1CNS
      int& dyn_c1CNS();
      // Get instance field reference: public System.Int32 c2PTrack
      int& dyn_c2PTrack();
      // Get instance field reference: public System.Int32 c2Type
      int& dyn_c2Type();
      // Get instance field reference: public System.Single c2Gain
      float& dyn_c2Gain();
      // Get instance field reference: public System.Single c2Freq
      float& dyn_c2Freq();
      // Get instance field reference: public System.Int32 c2Note
      int& dyn_c2Note();
      // Get instance field reference: public System.Single c2PW
      float& dyn_c2PW();
      // Get instance field reference: public System.Int32 c2CNS
      int& dyn_c2CNS();
    }; // OVRVoiceModContext/VMPreset
    #pragma pack(pop)
    static check_size<sizeof(OVRVoiceModContext::VMPreset), 92 + sizeof(int)> __GlobalNamespace_OVRVoiceModContext_VMPresetSizeCheck;
    static_assert(sizeof(OVRVoiceModContext::VMPreset) == 0x60);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public System.Single gain
    // Size: 0x4
    // Offset: 0x20
    float gain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean audioMute
    // Size: 0x1
    // Offset: 0x24
    bool audioMute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: audioMute and: loopback
    char __padding2[0x3] = {};
    // public UnityEngine.KeyCode loopback
    // Size: 0x14
    // Offset: 0x28
    ::UnityEngine::KeyCode loopback;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x14);
    // private OVRVoiceModContext/VMPreset[] VMPresets
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::OVRVoiceModContext::VMPreset> VMPresets;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRVoiceModContext::VMPreset>) == 0x8);
    // public System.Single VM_MixAudio
    // Size: 0x4
    // Offset: 0x38
    float VM_MixAudio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single VM_Pitch
    // Size: 0x4
    // Offset: 0x3C
    float VM_Pitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 VM_Bands
    // Size: 0x4
    // Offset: 0x40
    int VM_Bands;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 VM_FormantCorrect
    // Size: 0x4
    // Offset: 0x44
    int VM_FormantCorrect;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 VM_C1_TrackPitch
    // Size: 0x4
    // Offset: 0x48
    int VM_C1_TrackPitch;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 VM_C1_Type
    // Size: 0x4
    // Offset: 0x4C
    int VM_C1_Type;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single VM_C1_Gain
    // Size: 0x4
    // Offset: 0x50
    float VM_C1_Gain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single VM_C1_Freq
    // Size: 0x4
    // Offset: 0x54
    float VM_C1_Freq;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 VM_C1_Note
    // Size: 0x4
    // Offset: 0x58
    int VM_C1_Note;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single VM_C1_PulseWidth
    // Size: 0x4
    // Offset: 0x5C
    float VM_C1_PulseWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 VM_C1_CycledNoiseSize
    // Size: 0x4
    // Offset: 0x60
    int VM_C1_CycledNoiseSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 VM_C2_TrackPitch
    // Size: 0x4
    // Offset: 0x64
    int VM_C2_TrackPitch;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 VM_C2_Type
    // Size: 0x4
    // Offset: 0x68
    int VM_C2_Type;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single VM_C2_Gain
    // Size: 0x4
    // Offset: 0x6C
    float VM_C2_Gain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single VM_C2_Freq
    // Size: 0x4
    // Offset: 0x70
    float VM_C2_Freq;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 VM_C2_Note
    // Size: 0x4
    // Offset: 0x74
    int VM_C2_Note;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single VM_C2_PulseWidth
    // Size: 0x4
    // Offset: 0x78
    float VM_C2_PulseWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 VM_C2_CycledNoiseSize
    // Size: 0x4
    // Offset: 0x7C
    int VM_C2_CycledNoiseSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 context
    // Size: 0x4
    // Offset: 0x80
    uint context;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Single prevVol
    // Size: 0x4
    // Offset: 0x84
    float prevVol;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.AudioSource audioSource
    ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: public System.Single gain
    float& dyn_gain();
    // Get instance field reference: public System.Boolean audioMute
    bool& dyn_audioMute();
    // Get instance field reference: public UnityEngine.KeyCode loopback
    ::UnityEngine::KeyCode& dyn_loopback();
    // Get instance field reference: private OVRVoiceModContext/VMPreset[] VMPresets
    ::ArrayW<::GlobalNamespace::OVRVoiceModContext::VMPreset>& dyn_VMPresets();
    // Get instance field reference: public System.Single VM_MixAudio
    float& dyn_VM_MixAudio();
    // Get instance field reference: public System.Single VM_Pitch
    float& dyn_VM_Pitch();
    // Get instance field reference: public System.Int32 VM_Bands
    int& dyn_VM_Bands();
    // Get instance field reference: public System.Int32 VM_FormantCorrect
    int& dyn_VM_FormantCorrect();
    // Get instance field reference: public System.Int32 VM_C1_TrackPitch
    int& dyn_VM_C1_TrackPitch();
    // Get instance field reference: public System.Int32 VM_C1_Type
    int& dyn_VM_C1_Type();
    // Get instance field reference: public System.Single VM_C1_Gain
    float& dyn_VM_C1_Gain();
    // Get instance field reference: public System.Single VM_C1_Freq
    float& dyn_VM_C1_Freq();
    // Get instance field reference: public System.Int32 VM_C1_Note
    int& dyn_VM_C1_Note();
    // Get instance field reference: public System.Single VM_C1_PulseWidth
    float& dyn_VM_C1_PulseWidth();
    // Get instance field reference: public System.Int32 VM_C1_CycledNoiseSize
    int& dyn_VM_C1_CycledNoiseSize();
    // Get instance field reference: public System.Int32 VM_C2_TrackPitch
    int& dyn_VM_C2_TrackPitch();
    // Get instance field reference: public System.Int32 VM_C2_Type
    int& dyn_VM_C2_Type();
    // Get instance field reference: public System.Single VM_C2_Gain
    float& dyn_VM_C2_Gain();
    // Get instance field reference: public System.Single VM_C2_Freq
    float& dyn_VM_C2_Freq();
    // Get instance field reference: public System.Int32 VM_C2_Note
    int& dyn_VM_C2_Note();
    // Get instance field reference: public System.Single VM_C2_PulseWidth
    float& dyn_VM_C2_PulseWidth();
    // Get instance field reference: public System.Int32 VM_C2_CycledNoiseSize
    int& dyn_VM_C2_CycledNoiseSize();
    // Get instance field reference: private System.UInt32 context
    uint& dyn_context();
    // Get instance field reference: private System.Single prevVol
    float& dyn_prevVol();
    // private System.Void Awake()
    // Offset: 0xA1CE1C
    void Awake();
    // private System.Void Start()
    // Offset: 0xA1CEE4
    void Start();
    // private System.Void Update()
    // Offset: 0xA1D520
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0xA1D780
    void OnDestroy();
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0xA1D8E4
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
    // public System.Int32 SendParameter(OVRVoiceModContext/ovrVoiceModParams parameter, System.Int32 value)
    // Offset: 0xA1DB40
    int SendParameter(::GlobalNamespace::OVRVoiceModContext::ovrVoiceModParams parameter, int value);
    // public System.Boolean SetPreset(System.Int32 preset)
    // Offset: 0xA1DC38
    bool SetPreset(int preset);
    // public System.Int32 GetNumPresets()
    // Offset: 0xA1DF04
    int GetNumPresets();
    // public UnityEngine.Color GetPresetColor(System.Int32 preset)
    // Offset: 0xA1DF20
    ::UnityEngine::Color GetPresetColor(int preset);
    // public System.Single GetAverageAbsVolume()
    // Offset: 0xA1DF78
    float GetAverageAbsVolume();
    // private System.Void LocalTouchEventCallback(OVRTouchpad/TouchEvent touchEvent)
    // Offset: 0xA1E018
    void LocalTouchEventCallback(::GlobalNamespace::OVRTouchpad::TouchEvent touchEvent);
    // private System.Void UpdateVoiceModUpdate()
    // Offset: 0xA1D6DC
    void UpdateVoiceModUpdate();
    // private System.Void SendVoiceModUpdate()
    // Offset: 0xA1D12C
    void SendVoiceModUpdate();
    // public System.Void .ctor()
    // Offset: 0xA1E10C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVoiceModContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVoiceModContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVoiceModContext*, creationType>()));
    }
  }; // OVRVoiceModContext
  #pragma pack(pop)
  static check_size<sizeof(OVRVoiceModContext), 132 + sizeof(float)> __GlobalNamespace_OVRVoiceModContextSizeCheck;
  static_assert(sizeof(OVRVoiceModContext) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVoiceModContext::VMPreset, "", "OVRVoiceModContext/VMPreset");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceModContext::*)()>(&GlobalNamespace::OVRVoiceModContext::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceModContext::*)()>(&GlobalNamespace::OVRVoiceModContext::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceModContext::*)()>(&GlobalNamespace::OVRVoiceModContext::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceModContext::*)()>(&GlobalNamespace::OVRVoiceModContext::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceModContext::*)(::ArrayW<float>, int)>(&GlobalNamespace::OVRVoiceModContext::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::SendParameter
// Il2CppName: SendParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRVoiceModContext::*)(::GlobalNamespace::OVRVoiceModContext::ovrVoiceModParams, int)>(&GlobalNamespace::OVRVoiceModContext::SendParameter)> {
  static const MethodInfo* get() {
    static auto* parameter = &::il2cpp_utils::GetClassFromName("", "OVRVoiceModContext/ovrVoiceModParams")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "SendParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameter, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::SetPreset
// Il2CppName: SetPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRVoiceModContext::*)(int)>(&GlobalNamespace::OVRVoiceModContext::SetPreset)> {
  static const MethodInfo* get() {
    static auto* preset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "SetPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::GetNumPresets
// Il2CppName: GetNumPresets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRVoiceModContext::*)()>(&GlobalNamespace::OVRVoiceModContext::GetNumPresets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "GetNumPresets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::GetPresetColor
// Il2CppName: GetPresetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::OVRVoiceModContext::*)(int)>(&GlobalNamespace::OVRVoiceModContext::GetPresetColor)> {
  static const MethodInfo* get() {
    static auto* preset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "GetPresetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::GetAverageAbsVolume
// Il2CppName: GetAverageAbsVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRVoiceModContext::*)()>(&GlobalNamespace::OVRVoiceModContext::GetAverageAbsVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "GetAverageAbsVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::LocalTouchEventCallback
// Il2CppName: LocalTouchEventCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceModContext::*)(::GlobalNamespace::OVRTouchpad::TouchEvent)>(&GlobalNamespace::OVRVoiceModContext::LocalTouchEventCallback)> {
  static const MethodInfo* get() {
    static auto* touchEvent = &::il2cpp_utils::GetClassFromName("", "OVRTouchpad/TouchEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "LocalTouchEventCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{touchEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::UpdateVoiceModUpdate
// Il2CppName: UpdateVoiceModUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceModContext::*)()>(&GlobalNamespace::OVRVoiceModContext::UpdateVoiceModUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "UpdateVoiceModUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::SendVoiceModUpdate
// Il2CppName: SendVoiceModUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceModContext::*)()>(&GlobalNamespace::OVRVoiceModContext::SendVoiceModUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceModContext*), "SendVoiceModUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceModContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
