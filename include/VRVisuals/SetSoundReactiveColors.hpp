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
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
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
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: VRVisuals
namespace VRVisuals {
  // Forward declaring type: SetSoundReactiveColors
  class SetSoundReactiveColors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRVisuals::SetSoundReactiveColors);
DEFINE_IL2CPP_ARG_TYPE(::VRVisuals::SetSoundReactiveColors*, "VRVisuals", "SetSoundReactiveColors");
// Type namespace: VRVisuals
namespace VRVisuals {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VRVisuals.SetSoundReactiveColors
  // [TokenAttribute] Offset: FFFFFFFF
  class SetSoundReactiveColors : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [ColorUsageAttribute] Offset: 0x7830D0
    // private UnityEngine.Color _baseColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color baseColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x783110
    // private UnityEngine.Color _midColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color midColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x783150
    // private UnityEngine.Color _topColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color topColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x48
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationSpeed
    // Size: 0x4
    // Offset: 0x4C
    float rotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bobbing
    // Size: 0x4
    // Offset: 0x50
    float bobbing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bobbingSpeed
    // Size: 0x4
    // Offset: 0x54
    float bobbingSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector4 _jumpOnSound
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Vector4 jumpOnSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _materialBlock
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::MaterialPropertyBlock* materialBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _baseColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__baseColor();
    // Get instance field reference: private UnityEngine.Color _midColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__midColor();
    // Get instance field reference: private UnityEngine.Color _topColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__topColor();
    // Get instance field reference: private System.Single _rotation
    [[deprecated("Use field access instead!")]] float& dyn__rotation();
    // Get instance field reference: private System.Single _rotationSpeed
    [[deprecated("Use field access instead!")]] float& dyn__rotationSpeed();
    // Get instance field reference: private System.Single _bobbing
    [[deprecated("Use field access instead!")]] float& dyn__bobbing();
    // Get instance field reference: private System.Single _bobbingSpeed
    [[deprecated("Use field access instead!")]] float& dyn__bobbingSpeed();
    // Get instance field reference: private UnityEngine.Vector4 _jumpOnSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn__jumpOnSound();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _materialBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__materialBlock();
    // public System.Void .ctor()
    // Offset: 0x1924E24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSoundReactiveColors* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRVisuals::SetSoundReactiveColors::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSoundReactiveColors*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x1924BD0
    void Awake();
    // private System.Void Start()
    // Offset: 0x1924C64
    void Start();
    // private System.Void SetColors()
    // Offset: 0x1924C68
    void SetColors();
  }; // VRVisuals.SetSoundReactiveColors
  #pragma pack(pop)
  static check_size<sizeof(SetSoundReactiveColors), 112 + sizeof(::UnityEngine::MaterialPropertyBlock*)> __VRVisuals_SetSoundReactiveColorsSizeCheck;
  static_assert(sizeof(SetSoundReactiveColors) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRVisuals::SetSoundReactiveColors::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRVisuals::SetSoundReactiveColors::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRVisuals::SetSoundReactiveColors::*)()>(&VRVisuals::SetSoundReactiveColors::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSoundReactiveColors*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRVisuals::SetSoundReactiveColors::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRVisuals::SetSoundReactiveColors::*)()>(&VRVisuals::SetSoundReactiveColors::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSoundReactiveColors*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRVisuals::SetSoundReactiveColors::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRVisuals::SetSoundReactiveColors::*)()>(&VRVisuals::SetSoundReactiveColors::SetColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSoundReactiveColors*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
