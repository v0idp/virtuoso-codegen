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
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: GlobalDrumPadEffect
  class GlobalDrumPadEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::GlobalDrumPadEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalDrumPadEffect*, "VROSC", "GlobalDrumPadEffect");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.GlobalDrumPadEffect
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class GlobalDrumPadEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [HeaderAttribute] Offset: 0x787780
    // private VROSC.AdjustableMesh _padRenderer
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::AdjustableMesh* padRenderer;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // [HeaderAttribute] Offset: 0x7877CC
    // private System.Boolean _preview
    // Size: 0x1
    // Offset: 0x20
    bool preview;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: preview and: previewColor
    char __padding1[0x3] = {};
    // private UnityEngine.Color _previewColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color previewColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [RangeAttribute] Offset: 0x787828
    // private System.Single _previewTiming
    // Size: 0x4
    // Offset: 0x34
    float previewTiming;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _powerCurve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* powerCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _meshesVerified
    // Size: 0x1
    // Offset: 0x50
    bool meshesVerified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.AdjustableMesh _padRenderer
    [[deprecated("Use field access instead!")]] ::VROSC::AdjustableMesh*& dyn__padRenderer();
    // Get instance field reference: private System.Boolean _preview
    [[deprecated("Use field access instead!")]] bool& dyn__preview();
    // Get instance field reference: private UnityEngine.Color _previewColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__previewColor();
    // Get instance field reference: private System.Single _previewTiming
    [[deprecated("Use field access instead!")]] float& dyn__previewTiming();
    // Get instance field reference: private UnityEngine.AnimationCurve _powerCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__powerCurve();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Boolean _meshesVerified
    [[deprecated("Use field access instead!")]] bool& dyn__meshesVerified();
    // public System.Void .ctor()
    // Offset: 0x19A51CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlobalDrumPadEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::GlobalDrumPadEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlobalDrumPadEffect*, creationType>()));
    }
    // public System.Void SetColor(UnityEngine.Color color, System.Boolean affectVisual)
    // Offset: 0x19A51C8
    void SetColor(::UnityEngine::Color color, bool affectVisual);
  }; // VROSC.GlobalDrumPadEffect
  #pragma pack(pop)
  static check_size<sizeof(GlobalDrumPadEffect), 80 + sizeof(bool)> __VROSC_GlobalDrumPadEffectSizeCheck;
  static_assert(sizeof(GlobalDrumPadEffect) == 0x51);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::GlobalDrumPadEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::GlobalDrumPadEffect::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GlobalDrumPadEffect::*)(::UnityEngine::Color, bool)>(&VROSC::GlobalDrumPadEffect::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* affectVisual = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GlobalDrumPadEffect*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, affectVisual});
  }
};
