// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: VROSC.TriggerButton
#include "VROSC/TriggerButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: PointingLaser
  class PointingLaser;
  // Forward declaring type: SimpleHaptic
  class SimpleHaptic;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: IconData
  class IconData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputSettings
  class InputSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InputSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputSettings*, "VROSC", "InputSettings");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InputSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 77F40C
  class InputSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private VROSC.PointingLaser _pointerPrefab
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::PointingLaser* pointerPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::PointingLaser*) == 0x8);
    // [HeaderAttribute] Offset: 0x783CF0
    // [RangeAttribute] Offset: 0x783CF0
    // private System.Single _pointingDistance
    // Size: 0x4
    // Offset: 0x20
    float pointingDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x783D54
    // private System.Single _overlapDistance
    // Size: 0x4
    // Offset: 0x24
    float overlapDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x783D98
    // private System.Int32 _maxOverlapColliders
    // Size: 0x4
    // Offset: 0x28
    int maxOverlapColliders;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [RangeAttribute] Offset: 0x783DD8
    // [HeaderAttribute] Offset: 0x783DD8
    // private System.Single _positionSmoothing
    // Size: 0x4
    // Offset: 0x2C
    float positionSmoothing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x783E3C
    // private System.Single _grabSmoothing
    // Size: 0x4
    // Offset: 0x30
    float grabSmoothing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x783E7C
    // private System.Single _rotationSmoothing
    // Size: 0x4
    // Offset: 0x34
    float rotationSmoothing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x783EBC
    // private UnityEngine.LayerMask _uiInteractionMask
    // Size: 0x4
    // Offset: 0x38
    ::UnityEngine::LayerMask uiInteractionMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // private UnityEngine.LayerMask _overlapLayerMask
    // Size: 0x4
    // Offset: 0x3C
    ::UnityEngine::LayerMask overlapLayerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // private UnityEngine.LayerMask _gripOnlyLayerMask
    // Size: 0x4
    // Offset: 0x40
    ::UnityEngine::LayerMask gripOnlyLayerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // [HeaderAttribute] Offset: 0x783F28
    // private VROSC.TriggerButton _pinButton
    // Size: 0x4
    // Offset: 0x44
    ::VROSC::TriggerButton pinButton;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x4);
    // private VROSC.TriggerButton _attractButton
    // Size: 0x4
    // Offset: 0x48
    ::VROSC::TriggerButton attractButton;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x4);
    // private System.Single _attractInDuration
    // Size: 0x4
    // Offset: 0x4C
    float attractInDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _attractAnimationInCurve
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* attractAnimationInCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _isPinnedHapticWarningDistance
    // Size: 0x4
    // Offset: 0x58
    float isPinnedHapticWarningDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: isPinnedHapticWarningDistance and: isPinnedHapticWarning
    char __padding14[0x4] = {};
    // private VROSC.SimpleHaptic _isPinnedHapticWarning
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::SimpleHaptic* isPinnedHapticWarning;
    // Field size check
    static_assert(sizeof(::VROSC::SimpleHaptic*) == 0x8);
    // [HeaderAttribute] Offset: 0x783FC4
    // private System.Single _activationTime
    // Size: 0x4
    // Offset: 0x68
    float activationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: activationTime and: pinIcon
    char __padding16[0x4] = {};
    // [HeaderAttribute] Offset: 0x784010
    // private VROSC.UI.IconData _pinIcon
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::UI::IconData* pinIcon;
    // Field size check
    static_assert(sizeof(::VROSC::UI::IconData*) == 0x8);
    // private VROSC.UI.IconData _grabIcon
    // Size: 0x8
    // Offset: 0x78
    ::VROSC::UI::IconData* grabIcon;
    // Field size check
    static_assert(sizeof(::VROSC::UI::IconData*) == 0x8);
    // private VROSC.UI.IconData _attractIcon
    // Size: 0x8
    // Offset: 0x80
    ::VROSC::UI::IconData* attractIcon;
    // Field size check
    static_assert(sizeof(::VROSC::UI::IconData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.PointingLaser _pointerPrefab
    [[deprecated("Use field access instead!")]] ::VROSC::PointingLaser*& dyn__pointerPrefab();
    // Get instance field reference: private System.Single _pointingDistance
    [[deprecated("Use field access instead!")]] float& dyn__pointingDistance();
    // Get instance field reference: private System.Single _overlapDistance
    [[deprecated("Use field access instead!")]] float& dyn__overlapDistance();
    // Get instance field reference: private System.Int32 _maxOverlapColliders
    [[deprecated("Use field access instead!")]] int& dyn__maxOverlapColliders();
    // Get instance field reference: private System.Single _positionSmoothing
    [[deprecated("Use field access instead!")]] float& dyn__positionSmoothing();
    // Get instance field reference: private System.Single _grabSmoothing
    [[deprecated("Use field access instead!")]] float& dyn__grabSmoothing();
    // Get instance field reference: private System.Single _rotationSmoothing
    [[deprecated("Use field access instead!")]] float& dyn__rotationSmoothing();
    // Get instance field reference: private UnityEngine.LayerMask _uiInteractionMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn__uiInteractionMask();
    // Get instance field reference: private UnityEngine.LayerMask _overlapLayerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn__overlapLayerMask();
    // Get instance field reference: private UnityEngine.LayerMask _gripOnlyLayerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn__gripOnlyLayerMask();
    // Get instance field reference: private VROSC.TriggerButton _pinButton
    [[deprecated("Use field access instead!")]] ::VROSC::TriggerButton& dyn__pinButton();
    // Get instance field reference: private VROSC.TriggerButton _attractButton
    [[deprecated("Use field access instead!")]] ::VROSC::TriggerButton& dyn__attractButton();
    // Get instance field reference: private System.Single _attractInDuration
    [[deprecated("Use field access instead!")]] float& dyn__attractInDuration();
    // Get instance field reference: private UnityEngine.AnimationCurve _attractAnimationInCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__attractAnimationInCurve();
    // Get instance field reference: private System.Single _isPinnedHapticWarningDistance
    [[deprecated("Use field access instead!")]] float& dyn__isPinnedHapticWarningDistance();
    // Get instance field reference: private VROSC.SimpleHaptic _isPinnedHapticWarning
    [[deprecated("Use field access instead!")]] ::VROSC::SimpleHaptic*& dyn__isPinnedHapticWarning();
    // Get instance field reference: private System.Single _activationTime
    [[deprecated("Use field access instead!")]] float& dyn__activationTime();
    // Get instance field reference: private VROSC.UI.IconData _pinIcon
    [[deprecated("Use field access instead!")]] ::VROSC::UI::IconData*& dyn__pinIcon();
    // Get instance field reference: private VROSC.UI.IconData _grabIcon
    [[deprecated("Use field access instead!")]] ::VROSC::UI::IconData*& dyn__grabIcon();
    // Get instance field reference: private VROSC.UI.IconData _attractIcon
    [[deprecated("Use field access instead!")]] ::VROSC::UI::IconData*& dyn__attractIcon();
    // public VROSC.PointingLaser get_PointerPrefab()
    // Offset: 0x1945D60
    ::VROSC::PointingLaser* get_PointerPrefab();
    // public System.Single get_PointingDistance()
    // Offset: 0x1945D68
    float get_PointingDistance();
    // public System.Single get_OverlapDistance()
    // Offset: 0x1945D70
    float get_OverlapDistance();
    // public System.Int32 get_MaxOverlapColliders()
    // Offset: 0x1945D78
    int get_MaxOverlapColliders();
    // public System.Single get_PositionSmoothing()
    // Offset: 0x1945D80
    float get_PositionSmoothing();
    // public System.Single get_GrabSmoothing()
    // Offset: 0x1945D88
    float get_GrabSmoothing();
    // public System.Single get_RotationSmoothing()
    // Offset: 0x1945D90
    float get_RotationSmoothing();
    // public UnityEngine.LayerMask get_UIInteractionMask()
    // Offset: 0x1945D98
    ::UnityEngine::LayerMask get_UIInteractionMask();
    // public UnityEngine.LayerMask get_OverlapLayerMask()
    // Offset: 0x1945DA0
    ::UnityEngine::LayerMask get_OverlapLayerMask();
    // public UnityEngine.LayerMask get_GripOnlyLayerMask()
    // Offset: 0x1945DA8
    ::UnityEngine::LayerMask get_GripOnlyLayerMask();
    // public VROSC.TriggerButton get_AttractButton()
    // Offset: 0x1945DB0
    ::VROSC::TriggerButton get_AttractButton();
    // public VROSC.TriggerButton get_PinButton()
    // Offset: 0x1945DB8
    ::VROSC::TriggerButton get_PinButton();
    // public System.Single get_AttractDuration()
    // Offset: 0x1945DC0
    float get_AttractDuration();
    // public UnityEngine.AnimationCurve get_AttractAnimationCurve()
    // Offset: 0x1945DC8
    ::UnityEngine::AnimationCurve* get_AttractAnimationCurve();
    // public System.Single get_IsPinnedHapticWarningDistance()
    // Offset: 0x1945DD0
    float get_IsPinnedHapticWarningDistance();
    // public VROSC.SimpleHaptic get_IsPinnedHapticWarning()
    // Offset: 0x1945DD8
    ::VROSC::SimpleHaptic* get_IsPinnedHapticWarning();
    // public VROSC.UI.IconData get_PinIcon()
    // Offset: 0x1945DE0
    ::VROSC::UI::IconData* get_PinIcon();
    // public VROSC.UI.IconData get_GrabIcon()
    // Offset: 0x1945DE8
    ::VROSC::UI::IconData* get_GrabIcon();
    // public VROSC.UI.IconData get_AttractIcon()
    // Offset: 0x1945DF0
    ::VROSC::UI::IconData* get_AttractIcon();
    // public System.Single get_ActivationTime()
    // Offset: 0x1945DF8
    float get_ActivationTime();
    // public System.Void .ctor()
    // Offset: 0x1945E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InputSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputSettings*, creationType>()));
    }
  }; // VROSC.InputSettings
  #pragma pack(pop)
  static check_size<sizeof(InputSettings), 128 + sizeof(::VROSC::UI::IconData*)> __VROSC_InputSettingsSizeCheck;
  static_assert(sizeof(InputSettings) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InputSettings::get_PointerPrefab
// Il2CppName: get_PointerPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PointingLaser* (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_PointerPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_PointerPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_PointingDistance
// Il2CppName: get_PointingDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_PointingDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_PointingDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_OverlapDistance
// Il2CppName: get_OverlapDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_OverlapDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_OverlapDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_MaxOverlapColliders
// Il2CppName: get_MaxOverlapColliders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_MaxOverlapColliders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_MaxOverlapColliders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_PositionSmoothing
// Il2CppName: get_PositionSmoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_PositionSmoothing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_PositionSmoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_GrabSmoothing
// Il2CppName: get_GrabSmoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_GrabSmoothing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_GrabSmoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_RotationSmoothing
// Il2CppName: get_RotationSmoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_RotationSmoothing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_RotationSmoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_UIInteractionMask
// Il2CppName: get_UIInteractionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_UIInteractionMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_UIInteractionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_OverlapLayerMask
// Il2CppName: get_OverlapLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_OverlapLayerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_OverlapLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_GripOnlyLayerMask
// Il2CppName: get_GripOnlyLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_GripOnlyLayerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_GripOnlyLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_AttractButton
// Il2CppName: get_AttractButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TriggerButton (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_AttractButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_AttractButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_PinButton
// Il2CppName: get_PinButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TriggerButton (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_PinButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_PinButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_AttractDuration
// Il2CppName: get_AttractDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_AttractDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_AttractDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_AttractAnimationCurve
// Il2CppName: get_AttractAnimationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_AttractAnimationCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_AttractAnimationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_IsPinnedHapticWarningDistance
// Il2CppName: get_IsPinnedHapticWarningDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_IsPinnedHapticWarningDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_IsPinnedHapticWarningDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_IsPinnedHapticWarning
// Il2CppName: get_IsPinnedHapticWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SimpleHaptic* (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_IsPinnedHapticWarning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_IsPinnedHapticWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_PinIcon
// Il2CppName: get_PinIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::IconData* (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_PinIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_PinIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_GrabIcon
// Il2CppName: get_GrabIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::IconData* (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_GrabIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_GrabIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_AttractIcon
// Il2CppName: get_AttractIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::IconData* (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_AttractIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_AttractIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::get_ActivationTime
// Il2CppName: get_ActivationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InputSettings::*)()>(&VROSC::InputSettings::get_ActivationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InputSettings*), "get_ActivationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InputSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
