// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayer
  class LoopPlayer;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LooperProgressSliderUpdater
  class LooperProgressSliderUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LooperProgressSliderUpdater);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LooperProgressSliderUpdater*, "VROSC", "LooperProgressSliderUpdater");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LooperProgressSliderUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class LooperProgressSliderUpdater : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Renderer _slider
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Renderer* slider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _mutedColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color mutedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [RangeAttribute] Offset: 0x788A54
    // private System.Single _beatLength
    // Size: 0x4
    // Offset: 0x40
    float beatLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x44
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Renderer _timing
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Renderer* timing;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Color _waitingColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color waitingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [HeaderAttribute] Offset: 0x788AC4
    // [RangeAttribute] Offset: 0x788AC4
    // private System.Single _previewValue
    // Size: 0x4
    // Offset: 0x60
    float previewValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x788B28
    // private System.Single _fadeValue
    // Size: 0x4
    // Offset: 0x64
    float fadeValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x788B68
    // private System.Single _timingValue
    // Size: 0x4
    // Offset: 0x68
    float timingValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: timingValue and: playButtonIcon
    char __padding9[0x4] = {};
    // private UnityEngine.GameObject _playButtonIcon
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* playButtonIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _stopButtonIcon
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* stopButtonIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private VROSC.LoopPlayer _loopPlayer
    // Size: 0x8
    // Offset: 0x80
    ::VROSC::LoopPlayer* loopPlayer;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayer*) == 0x8);
    // private System.Single _progress
    // Size: 0x4
    // Offset: 0x88
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _loops
    // Size: 0x4
    // Offset: 0x8C
    int loops;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _muted
    // Size: 0x1
    // Offset: 0x90
    bool muted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: muted and: propBlockSlider
    char __padding15[0x7] = {};
    // private UnityEngine.MaterialPropertyBlock _propBlockSlider
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::MaterialPropertyBlock* propBlockSlider;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _propBlockTiming
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::MaterialPropertyBlock* propBlockTiming;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Renderer _slider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__slider();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private UnityEngine.Color _mutedColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__mutedColor();
    // Get instance field reference: private System.Single _beatLength
    [[deprecated("Use field access instead!")]] float& dyn__beatLength();
    // Get instance field reference: private System.Single _length
    [[deprecated("Use field access instead!")]] float& dyn__length();
    // Get instance field reference: private UnityEngine.Renderer _timing
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__timing();
    // Get instance field reference: private UnityEngine.Color _waitingColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__waitingColor();
    // Get instance field reference: private System.Single _previewValue
    [[deprecated("Use field access instead!")]] float& dyn__previewValue();
    // Get instance field reference: private System.Single _fadeValue
    [[deprecated("Use field access instead!")]] float& dyn__fadeValue();
    // Get instance field reference: private System.Single _timingValue
    [[deprecated("Use field access instead!")]] float& dyn__timingValue();
    // Get instance field reference: private UnityEngine.GameObject _playButtonIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__playButtonIcon();
    // Get instance field reference: private UnityEngine.GameObject _stopButtonIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__stopButtonIcon();
    // Get instance field reference: private VROSC.LoopPlayer _loopPlayer
    [[deprecated("Use field access instead!")]] ::VROSC::LoopPlayer*& dyn__loopPlayer();
    // Get instance field reference: private System.Single _progress
    [[deprecated("Use field access instead!")]] float& dyn__progress();
    // Get instance field reference: private System.Int32 _loops
    [[deprecated("Use field access instead!")]] int& dyn__loops();
    // Get instance field reference: private System.Boolean _muted
    [[deprecated("Use field access instead!")]] bool& dyn__muted();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _propBlockSlider
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__propBlockSlider();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _propBlockTiming
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__propBlockTiming();
    // public UnityEngine.Renderer get_Slider()
    // Offset: 0x197A32C
    ::UnityEngine::Renderer* get_Slider();
    // public UnityEngine.Renderer get_Timing()
    // Offset: 0x197A334
    ::UnityEngine::Renderer* get_Timing();
    // public UnityEngine.MaterialPropertyBlock get_SliderMaterialPropertyBlock()
    // Offset: 0x197A33C
    ::UnityEngine::MaterialPropertyBlock* get_SliderMaterialPropertyBlock();
    // public UnityEngine.MaterialPropertyBlock get_TimingMaterialPropertyBlock()
    // Offset: 0x197A344
    ::UnityEngine::MaterialPropertyBlock* get_TimingMaterialPropertyBlock();
    // public UnityEngine.GameObject get_PlayButtonIcon()
    // Offset: 0x197A34C
    ::UnityEngine::GameObject* get_PlayButtonIcon();
    // public UnityEngine.GameObject get_StopButtonIcon()
    // Offset: 0x197A354
    ::UnityEngine::GameObject* get_StopButtonIcon();
    // public System.Void .ctor()
    // Offset: 0x197ACEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LooperProgressSliderUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LooperProgressSliderUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LooperProgressSliderUpdater*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x197A35C
    void Awake();
    // public System.Void SetPlaybackActive(System.Boolean playing)
    // Offset: 0x197A84C
    void SetPlaybackActive(bool playing);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x197A640
    void SetColor(::UnityEngine::Color color);
    // System.Void SetLoopPlayer(VROSC.LoopPlayer loopPlayer)
    // Offset: 0x197A948
    void SetLoopPlayer(::VROSC::LoopPlayer* loopPlayer);
    // protected System.Void Update()
    // Offset: 0x197A9F0
    void Update();
    // private System.Void UpdateRenderers()
    // Offset: 0x197A770
    void UpdateRenderers();
    // private System.Void CreatePropBlock()
    // Offset: 0x197A3D0
    void CreatePropBlock();
    // private System.Void SetFadeValue(System.Single value, System.Single fadeValue)
    // Offset: 0x197A4F0
    void SetFadeValue(float value, float fadeValue);
    // private System.Void SetApproachingValue(System.Single value)
    // Offset: 0x197AB88
    void SetApproachingValue(float value);
    // private System.Void UpdateIcons(System.Boolean blink, System.Boolean showPlayButton)
    // Offset: 0x197A880
    void UpdateIcons(bool blink, bool showPlayButton);
    // public System.Void SetMuted(System.Boolean isMuted)
    // Offset: 0x197ACD8
    void SetMuted(bool isMuted);
  }; // VROSC.LooperProgressSliderUpdater
  #pragma pack(pop)
  static check_size<sizeof(LooperProgressSliderUpdater), 160 + sizeof(::UnityEngine::MaterialPropertyBlock*)> __VROSC_LooperProgressSliderUpdaterSizeCheck;
  static_assert(sizeof(LooperProgressSliderUpdater) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::get_Slider
// Il2CppName: get_Slider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::get_Slider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "get_Slider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::get_Timing
// Il2CppName: get_Timing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::get_Timing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "get_Timing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::get_SliderMaterialPropertyBlock
// Il2CppName: get_SliderMaterialPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::get_SliderMaterialPropertyBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "get_SliderMaterialPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::get_TimingMaterialPropertyBlock
// Il2CppName: get_TimingMaterialPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::get_TimingMaterialPropertyBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "get_TimingMaterialPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::get_PlayButtonIcon
// Il2CppName: get_PlayButtonIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::get_PlayButtonIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "get_PlayButtonIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::get_StopButtonIcon
// Il2CppName: get_StopButtonIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::get_StopButtonIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "get_StopButtonIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::SetPlaybackActive
// Il2CppName: SetPlaybackActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)(bool)>(&VROSC::LooperProgressSliderUpdater::SetPlaybackActive)> {
  static const MethodInfo* get() {
    static auto* playing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "SetPlaybackActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playing});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)(::UnityEngine::Color)>(&VROSC::LooperProgressSliderUpdater::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::SetLoopPlayer
// Il2CppName: SetLoopPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)(::VROSC::LoopPlayer*)>(&VROSC::LooperProgressSliderUpdater::SetLoopPlayer)> {
  static const MethodInfo* get() {
    static auto* loopPlayer = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "SetLoopPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopPlayer});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::UpdateRenderers
// Il2CppName: UpdateRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::UpdateRenderers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "UpdateRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::CreatePropBlock
// Il2CppName: CreatePropBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)()>(&VROSC::LooperProgressSliderUpdater::CreatePropBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "CreatePropBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::SetFadeValue
// Il2CppName: SetFadeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)(float, float)>(&VROSC::LooperProgressSliderUpdater::SetFadeValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "SetFadeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, fadeValue});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::SetApproachingValue
// Il2CppName: SetApproachingValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)(float)>(&VROSC::LooperProgressSliderUpdater::SetApproachingValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "SetApproachingValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::UpdateIcons
// Il2CppName: UpdateIcons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)(bool, bool)>(&VROSC::LooperProgressSliderUpdater::UpdateIcons)> {
  static const MethodInfo* get() {
    static auto* blink = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* showPlayButton = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "UpdateIcons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blink, showPlayButton});
  }
};
// Writing MetadataGetter for method: VROSC::LooperProgressSliderUpdater::SetMuted
// Il2CppName: SetMuted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperProgressSliderUpdater::*)(bool)>(&VROSC::LooperProgressSliderUpdater::SetMuted)> {
  static const MethodInfo* get() {
    static auto* isMuted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperProgressSliderUpdater*), "SetMuted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isMuted});
  }
};
