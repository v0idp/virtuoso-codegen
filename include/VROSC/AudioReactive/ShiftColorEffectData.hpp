// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.AudioReactiveEffectData
#include "VROSC/AudioReactive/AudioReactiveEffectData.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ShiftColorEffectData
  class ShiftColorEffectData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::ShiftColorEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShiftColorEffectData*, "VROSC.AudioReactive", "ShiftColorEffectData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.ShiftColorEffectData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 780A7C
  class ShiftColorEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
    public:
    public:
    // [HeaderAttribute] Offset: 0x78C818
    // [ColorUsageAttribute] Offset: 0x78C818
    // private UnityEngine.Color[] _startColors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Color> startColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // [HeaderAttribute] Offset: 0x78C87C
    // private System.Single _hueShift
    // Size: 0x4
    // Offset: 0x20
    float hueShift;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: hueShift and: gradient
    char __padding1[0x4] = {};
    // [GradientUsageAttribute] Offset: 0x78C8C8
    // private UnityEngine.Gradient _gradient
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Gradient* gradient;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // private System.Boolean _useGradient
    // Size: 0x1
    // Offset: 0x30
    bool useGradient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [HeaderAttribute] Offset: 0x78C914
    // private System.Boolean _switchToRandomStartColor
    // Size: 0x1
    // Offset: 0x31
    bool switchToRandomStartColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: switchToRandomStartColor and: duration
    char __padding4[0x2] = {};
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x34
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _hueChange
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* hueChange;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _saturationChange
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationCurve* saturationChange;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _valueChange
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* valueChange;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color[] _startColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn__startColors();
    // Get instance field reference: private System.Single _hueShift
    [[deprecated("Use field access instead!")]] float& dyn__hueShift();
    // Get instance field reference: private UnityEngine.Gradient _gradient
    [[deprecated("Use field access instead!")]] ::UnityEngine::Gradient*& dyn__gradient();
    // Get instance field reference: private System.Boolean _useGradient
    [[deprecated("Use field access instead!")]] bool& dyn__useGradient();
    // Get instance field reference: private System.Boolean _switchToRandomStartColor
    [[deprecated("Use field access instead!")]] bool& dyn__switchToRandomStartColor();
    // Get instance field reference: private System.Single _duration
    [[deprecated("Use field access instead!")]] float& dyn__duration();
    // Get instance field reference: private UnityEngine.AnimationCurve _hueChange
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__hueChange();
    // Get instance field reference: private UnityEngine.AnimationCurve _saturationChange
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__saturationChange();
    // Get instance field reference: private UnityEngine.AnimationCurve _valueChange
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__valueChange();
    // public UnityEngine.Color[] get_StartColors()
    // Offset: 0x19277E0
    ::ArrayW<::UnityEngine::Color> get_StartColors();
    // public System.Single get_HueShift()
    // Offset: 0x19277E8
    float get_HueShift();
    // public UnityEngine.Gradient get_Gradient()
    // Offset: 0x19277F0
    ::UnityEngine::Gradient* get_Gradient();
    // public System.Boolean get_UseGradient()
    // Offset: 0x19277F8
    bool get_UseGradient();
    // public System.Boolean get_SwitchToRandomStartColor()
    // Offset: 0x1927800
    bool get_SwitchToRandomStartColor();
    // public System.Single get_Duration()
    // Offset: 0x1927808
    float get_Duration();
    // public UnityEngine.AnimationCurve get_HueCurve()
    // Offset: 0x1927810
    ::UnityEngine::AnimationCurve* get_HueCurve();
    // public UnityEngine.AnimationCurve get_SaturationCurve()
    // Offset: 0x1927818
    ::UnityEngine::AnimationCurve* get_SaturationCurve();
    // public UnityEngine.AnimationCurve get_ValueCurve()
    // Offset: 0x1927820
    ::UnityEngine::AnimationCurve* get_ValueCurve();
    // public System.Void .ctor()
    // Offset: 0x1927828
    // Implemented from: VROSC.AudioReactive.AudioReactiveEffectData
    // Base method: System.Void AudioReactiveEffectData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShiftColorEffectData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::ShiftColorEffectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShiftColorEffectData*, creationType>()));
    }
  }; // VROSC.AudioReactive.ShiftColorEffectData
  #pragma pack(pop)
  static check_size<sizeof(ShiftColorEffectData), 72 + sizeof(::UnityEngine::AnimationCurve*)> __VROSC_AudioReactive_ShiftColorEffectDataSizeCheck;
  static_assert(sizeof(ShiftColorEffectData) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_StartColors
// Il2CppName: get_StartColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color> (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_StartColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_StartColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_HueShift
// Il2CppName: get_HueShift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_HueShift)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_HueShift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_Gradient
// Il2CppName: get_Gradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Gradient* (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_Gradient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_Gradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_UseGradient
// Il2CppName: get_UseGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_UseGradient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_UseGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_SwitchToRandomStartColor
// Il2CppName: get_SwitchToRandomStartColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_SwitchToRandomStartColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_SwitchToRandomStartColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_HueCurve
// Il2CppName: get_HueCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_HueCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_HueCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_SaturationCurve
// Il2CppName: get_SaturationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_SaturationCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_SaturationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::get_ValueCurve
// Il2CppName: get_ValueCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::AudioReactive::ShiftColorEffectData::*)()>(&VROSC::AudioReactive::ShiftColorEffectData::get_ValueCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShiftColorEffectData*), "get_ValueCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShiftColorEffectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
