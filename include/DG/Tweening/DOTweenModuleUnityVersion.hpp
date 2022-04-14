// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: DG.Tweening.Plugins.Options.VectorOptions
#include "DG/Tweening/Plugins/Options/VectorOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Sequence
  class Sequence;
  // Forward declaring type: Tween
  class Tween;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: CustomYieldInstruction
  class CustomYieldInstruction;
}
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: TweenerCore`3<T1, T2, TPlugOptions>
  template<typename T1, typename T2, typename TPlugOptions>
  class TweenerCore_3;
}
// Completed forward declares
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: DOTweenModuleUnityVersion
  class DOTweenModuleUnityVersion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUnityVersion);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUnityVersion*, "DG.Tweening", "DOTweenModuleUnityVersion");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModuleUnityVersion
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class DOTweenModuleUnityVersion : public ::Il2CppObject {
    public:
    // Nested type: ::DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: ::DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // static public DG.Tweening.Sequence DOGradientColor(UnityEngine.Material target, UnityEngine.Gradient gradient, System.Single duration)
    // Offset: 0x17E18B8
    static ::DG::Tweening::Sequence* DOGradientColor(::UnityEngine::Material* target, ::UnityEngine::Gradient* gradient, float duration);
    // static public DG.Tweening.Sequence DOGradientColor(UnityEngine.Material target, UnityEngine.Gradient gradient, System.String property, System.Single duration)
    // Offset: 0x17E1AA8
    static ::DG::Tweening::Sequence* DOGradientColor(::UnityEngine::Material* target, ::UnityEngine::Gradient* gradient, ::StringW property, float duration);
    // static public UnityEngine.CustomYieldInstruction WaitForCompletion(DG.Tweening.Tween t, System.Boolean returnCustomYieldInstruction)
    // Offset: 0x17E1CAC
    static ::UnityEngine::CustomYieldInstruction* WaitForCompletion(::DG::Tweening::Tween* t, bool returnCustomYieldInstruction);
    // static public UnityEngine.CustomYieldInstruction WaitForRewind(DG.Tweening.Tween t, System.Boolean returnCustomYieldInstruction)
    // Offset: 0x17E1D98
    static ::UnityEngine::CustomYieldInstruction* WaitForRewind(::DG::Tweening::Tween* t, bool returnCustomYieldInstruction);
    // static public UnityEngine.CustomYieldInstruction WaitForKill(DG.Tweening.Tween t, System.Boolean returnCustomYieldInstruction)
    // Offset: 0x17E1E84
    static ::UnityEngine::CustomYieldInstruction* WaitForKill(::DG::Tweening::Tween* t, bool returnCustomYieldInstruction);
    // static public UnityEngine.CustomYieldInstruction WaitForElapsedLoops(DG.Tweening.Tween t, System.Int32 elapsedLoops, System.Boolean returnCustomYieldInstruction)
    // Offset: 0x17E1F70
    static ::UnityEngine::CustomYieldInstruction* WaitForElapsedLoops(::DG::Tweening::Tween* t, int elapsedLoops, bool returnCustomYieldInstruction);
    // static public UnityEngine.CustomYieldInstruction WaitForPosition(DG.Tweening.Tween t, System.Single position, System.Boolean returnCustomYieldInstruction)
    // Offset: 0x17E207C
    static ::UnityEngine::CustomYieldInstruction* WaitForPosition(::DG::Tweening::Tween* t, float position, bool returnCustomYieldInstruction);
    // static public UnityEngine.CustomYieldInstruction WaitForStart(DG.Tweening.Tween t, System.Boolean returnCustomYieldInstruction)
    // Offset: 0x17E2188
    static ::UnityEngine::CustomYieldInstruction* WaitForStart(::DG::Tweening::Tween* t, bool returnCustomYieldInstruction);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DOOffset(UnityEngine.Material target, UnityEngine.Vector2 endValue, System.Int32 propertyID, System.Single duration)
    // Offset: 0x17E2274
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* DOOffset(::UnityEngine::Material* target, ::UnityEngine::Vector2 endValue, int propertyID, float duration);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DOTiling(UnityEngine.Material target, UnityEngine.Vector2 endValue, System.Int32 propertyID, System.Single duration)
    // Offset: 0x17E2494
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* DOTiling(::UnityEngine::Material* target, ::UnityEngine::Vector2 endValue, int propertyID, float duration);
  }; // DG.Tweening.DOTweenModuleUnityVersion
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::DOGradientColor
// Il2CppName: DOGradientColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::UnityEngine::Material*, ::UnityEngine::Gradient*, float)>(&DG::Tweening::DOTweenModuleUnityVersion::DOGradientColor)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* gradient = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "DOGradientColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, gradient, duration});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::DOGradientColor
// Il2CppName: DOGradientColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::UnityEngine::Material*, ::UnityEngine::Gradient*, ::StringW, float)>(&DG::Tweening::DOTweenModuleUnityVersion::DOGradientColor)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* gradient = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "DOGradientColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, gradient, property, duration});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::WaitForCompletion
// Il2CppName: WaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CustomYieldInstruction* (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::DOTweenModuleUnityVersion::WaitForCompletion)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* returnCustomYieldInstruction = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "WaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, returnCustomYieldInstruction});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::WaitForRewind
// Il2CppName: WaitForRewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CustomYieldInstruction* (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::DOTweenModuleUnityVersion::WaitForRewind)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* returnCustomYieldInstruction = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "WaitForRewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, returnCustomYieldInstruction});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::WaitForKill
// Il2CppName: WaitForKill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CustomYieldInstruction* (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::DOTweenModuleUnityVersion::WaitForKill)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* returnCustomYieldInstruction = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "WaitForKill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, returnCustomYieldInstruction});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::WaitForElapsedLoops
// Il2CppName: WaitForElapsedLoops
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CustomYieldInstruction* (*)(::DG::Tweening::Tween*, int, bool)>(&DG::Tweening::DOTweenModuleUnityVersion::WaitForElapsedLoops)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* elapsedLoops = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* returnCustomYieldInstruction = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "WaitForElapsedLoops", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, elapsedLoops, returnCustomYieldInstruction});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::WaitForPosition
// Il2CppName: WaitForPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CustomYieldInstruction* (*)(::DG::Tweening::Tween*, float, bool)>(&DG::Tweening::DOTweenModuleUnityVersion::WaitForPosition)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* returnCustomYieldInstruction = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "WaitForPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, position, returnCustomYieldInstruction});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::WaitForStart
// Il2CppName: WaitForStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CustomYieldInstruction* (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::DOTweenModuleUnityVersion::WaitForStart)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* returnCustomYieldInstruction = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "WaitForStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, returnCustomYieldInstruction});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::DOOffset
// Il2CppName: DOOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Material*, ::UnityEngine::Vector2, int, float)>(&DG::Tweening::DOTweenModuleUnityVersion::DOOffset)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "DOOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, propertyID, duration});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::DOTiling
// Il2CppName: DOTiling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Material*, ::UnityEngine::Vector2, int, float)>(&DG::Tweening::DOTweenModuleUnityVersion::DOTiling)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion*), "DOTiling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, propertyID, duration});
  }
};
