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
// Including type: DG.Tweening.Plugins.Options.FloatOptions
#include "DG/Tweening/Plugins/Options/FloatOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Sequence
  class Sequence;
}
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: TweenerCore`3<T1, T2, TPlugOptions>
  template<typename T1, typename T2, typename TPlugOptions>
  class TweenerCore_3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
}
// Completed forward declares
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: DOTweenModulePhysics2D
  class DOTweenModulePhysics2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics2D);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics2D*, "DG.Tweening", "DOTweenModulePhysics2D");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModulePhysics2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class DOTweenModulePhysics2D : public ::Il2CppObject {
    public:
    // Nested type: ::DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DOMove(UnityEngine.Rigidbody2D target, UnityEngine.Vector2 endValue, System.Single duration, System.Boolean snapping)
    // Offset: 0x74CEB8
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* DOMove(::UnityEngine::Rigidbody2D* target, ::UnityEngine::Vector2 endValue, float duration, bool snapping);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DOMoveX(UnityEngine.Rigidbody2D target, System.Single endValue, System.Single duration, System.Boolean snapping)
    // Offset: 0x74D07C
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveX(::UnityEngine::Rigidbody2D* target, float endValue, float duration, bool snapping);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DOMoveY(UnityEngine.Rigidbody2D target, System.Single endValue, System.Single duration, System.Boolean snapping)
    // Offset: 0x74D238
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveY(::UnityEngine::Rigidbody2D* target, float endValue, float duration, bool snapping);
    // static public DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DORotate(UnityEngine.Rigidbody2D target, System.Single endValue, System.Single duration)
    // Offset: 0x74D3F4
    static ::DG::Tweening::Core::TweenerCore_3<float, float, ::DG::Tweening::Plugins::Options::FloatOptions>* DORotate(::UnityEngine::Rigidbody2D* target, float endValue, float duration);
    // static public DG.Tweening.Sequence DOJump(UnityEngine.Rigidbody2D target, UnityEngine.Vector2 endValue, System.Single jumpPower, System.Int32 numJumps, System.Single duration, System.Boolean snapping)
    // Offset: 0x74D590
    static ::DG::Tweening::Sequence* DOJump(::UnityEngine::Rigidbody2D* target, ::UnityEngine::Vector2 endValue, float jumpPower, int numJumps, float duration, bool snapping);
  }; // DG.Tweening.DOTweenModulePhysics2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics2D::DOMove
// Il2CppName: DOMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::Vector2, float, bool)>(&DG::Tweening::DOTweenModulePhysics2D::DOMove)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody2D")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics2D*), "DOMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration, snapping});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics2D::DOMoveX
// Il2CppName: DOMoveX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody2D*, float, float, bool)>(&DG::Tweening::DOTweenModulePhysics2D::DOMoveX)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody2D")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics2D*), "DOMoveX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration, snapping});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics2D::DOMoveY
// Il2CppName: DOMoveY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody2D*, float, float, bool)>(&DG::Tweening::DOTweenModulePhysics2D::DOMoveY)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody2D")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics2D*), "DOMoveY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration, snapping});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics2D::DORotate
// Il2CppName: DORotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<float, float, ::DG::Tweening::Plugins::Options::FloatOptions>* (*)(::UnityEngine::Rigidbody2D*, float, float)>(&DG::Tweening::DOTweenModulePhysics2D::DORotate)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody2D")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics2D*), "DORotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics2D::DOJump
// Il2CppName: DOJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::Vector2, float, int, float, bool)>(&DG::Tweening::DOTweenModulePhysics2D::DOJump)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody2D")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* jumpPower = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* numJumps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics2D*), "DOJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, jumpPower, numJumps, duration, snapping});
  }
};