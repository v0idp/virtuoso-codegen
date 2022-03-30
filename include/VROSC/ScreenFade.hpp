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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ScreenFade
  class ScreenFade;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ScreenFade);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScreenFade*, "VROSC", "ScreenFade");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ScreenFade
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenFade : public ::UnityEngine::MonoBehaviour {
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
    // private System.Single <Progress>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    float Progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Progress and: adjustableMesh
    char __padding0[0x4] = {};
    // private VROSC.AdjustableMesh _adjustableMesh
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::AdjustableMesh* adjustableMesh;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // private UnityEngine.Color _targetColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color targetColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _startColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color startColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _currentColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color currentColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.AnimationCurve _fadeCurve
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::AnimationCurve* fadeCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x60
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: OnColor
    char __padding6[0x4] = {};
    // public System.Action`1<UnityEngine.Color> OnColor
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<::UnityEngine::Color>* OnColor;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Color>*) == 0x8);
    // public System.Action`2<System.Boolean,UnityEngine.Color> IsFading
    // Size: 0x8
    // Offset: 0x70
    ::System::Action_2<bool, ::UnityEngine::Color>* IsFading;
    // Field size check
    static_assert(sizeof(::System::Action_2<bool, ::UnityEngine::Color>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single <Progress>k__BackingField
    float& dyn_$Progress$k__BackingField();
    // Get instance field reference: private VROSC.AdjustableMesh _adjustableMesh
    ::VROSC::AdjustableMesh*& dyn__adjustableMesh();
    // Get instance field reference: private UnityEngine.Color _targetColor
    ::UnityEngine::Color& dyn__targetColor();
    // Get instance field reference: private UnityEngine.Color _startColor
    ::UnityEngine::Color& dyn__startColor();
    // Get instance field reference: private UnityEngine.Color _currentColor
    ::UnityEngine::Color& dyn__currentColor();
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeCurve
    ::UnityEngine::AnimationCurve*& dyn__fadeCurve();
    // Get instance field reference: private System.Single _duration
    float& dyn__duration();
    // Get instance field reference: public System.Action`1<UnityEngine.Color> OnColor
    ::System::Action_1<::UnityEngine::Color>*& dyn_OnColor();
    // Get instance field reference: public System.Action`2<System.Boolean,UnityEngine.Color> IsFading
    ::System::Action_2<bool, ::UnityEngine::Color>*& dyn_IsFading();
    // public System.Single get_Progress()
    // Offset: 0x13E158C
    float get_Progress();
    // private System.Void set_Progress(System.Single value)
    // Offset: 0x13E1584
    void set_Progress(float value);
    // private System.Void Awake()
    // Offset: 0x13E1594
    void Awake();
    // public System.Void Fade(UnityEngine.Color targetColor, System.Single duration, UnityEngine.AnimationCurve fadeCurve)
    // Offset: 0x13E1638
    void Fade(::UnityEngine::Color targetColor, float duration, ::UnityEngine::AnimationCurve* fadeCurve);
    // public System.Void SetColor(UnityEngine.Color color, System.Boolean alphaCheck)
    // Offset: 0x13E165C
    void SetColor(::UnityEngine::Color color, bool alphaCheck);
    // private System.Void LateUpdate()
    // Offset: 0x13E17B0
    void LateUpdate();
    // private System.Void SetActive(System.Boolean active)
    // Offset: 0x13E159C
    void SetActive(bool active);
    // public System.Void .ctor()
    // Offset: 0x13E18A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenFade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ScreenFade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenFade*, creationType>()));
    }
  }; // VROSC.ScreenFade
  #pragma pack(pop)
  static check_size<sizeof(ScreenFade), 112 + sizeof(::System::Action_2<bool, ::UnityEngine::Color>*)> __VROSC_ScreenFadeSizeCheck;
  static_assert(sizeof(ScreenFade) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ScreenFade::get_Progress
// Il2CppName: get_Progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::ScreenFade::*)()>(&VROSC::ScreenFade::get_Progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScreenFade*), "get_Progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScreenFade::set_Progress
// Il2CppName: set_Progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScreenFade::*)(float)>(&VROSC::ScreenFade::set_Progress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScreenFade*), "set_Progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::ScreenFade::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScreenFade::*)()>(&VROSC::ScreenFade::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScreenFade*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScreenFade::Fade
// Il2CppName: Fade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScreenFade::*)(::UnityEngine::Color, float, ::UnityEngine::AnimationCurve*)>(&VROSC::ScreenFade::Fade)> {
  static const MethodInfo* get() {
    static auto* targetColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScreenFade*), "Fade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetColor, duration, fadeCurve});
  }
};
// Writing MetadataGetter for method: VROSC::ScreenFade::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScreenFade::*)(::UnityEngine::Color, bool)>(&VROSC::ScreenFade::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* alphaCheck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScreenFade*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, alphaCheck});
  }
};
// Writing MetadataGetter for method: VROSC::ScreenFade::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScreenFade::*)()>(&VROSC::ScreenFade::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScreenFade*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScreenFade::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScreenFade::*)(bool)>(&VROSC::ScreenFade::SetActive)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScreenFade*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: VROSC::ScreenFade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
