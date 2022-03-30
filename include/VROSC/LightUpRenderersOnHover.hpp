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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Interactable
  class Interactable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LightUpRenderersOnHover
  class LightUpRenderersOnHover;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LightUpRenderersOnHover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LightUpRenderersOnHover*, "VROSC", "LightUpRenderersOnHover");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LightUpRenderersOnHover
  // [TokenAttribute] Offset: FFFFFFFF
  class LightUpRenderersOnHover : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::LightUpRenderersOnHover::$HoverFlow$d__9
    class $HoverFlow$d__9;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Renderer[] _renderers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Renderer*> renderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Renderer*>) == 0x8);
    // private VROSC.Interactable _interactable
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::Interactable* interactable;
    // Field size check
    static_assert(sizeof(::VROSC::Interactable*) == 0x8);
    // private UnityEngine.Color _lightUp
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color lightUp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _fallSpeed
    // Size: 0x4
    // Offset: 0x38
    float fallSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fallSpeed and: materialBlocks
    char __padding3[0x4] = {};
    // private UnityEngine.MaterialPropertyBlock[] _materialBlocks
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::MaterialPropertyBlock*> materialBlocks;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MaterialPropertyBlock*>) == 0x8);
    // private System.Boolean _hovering
    // Size: 0x1
    // Offset: 0x48
    bool hovering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hovering and: startColor
    char __padding5[0x7] = {};
    // private UnityEngine.Color[] _startColor
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Color> startColor;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Renderer[] _renderers
    ::ArrayW<::UnityEngine::Renderer*>& dyn__renderers();
    // Get instance field reference: private VROSC.Interactable _interactable
    ::VROSC::Interactable*& dyn__interactable();
    // Get instance field reference: private UnityEngine.Color _lightUp
    ::UnityEngine::Color& dyn__lightUp();
    // Get instance field reference: private System.Single _fallSpeed
    float& dyn__fallSpeed();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock[] _materialBlocks
    ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& dyn__materialBlocks();
    // Get instance field reference: private System.Boolean _hovering
    bool& dyn__hovering();
    // Get instance field reference: private UnityEngine.Color[] _startColor
    ::ArrayW<::UnityEngine::Color>& dyn__startColor();
    // private System.Void Awake()
    // Offset: 0x138D0AC
    void Awake();
    // private System.Void LightUp(System.Boolean hovering)
    // Offset: 0x138D2AC
    void LightUp(bool hovering);
    // private System.Collections.IEnumerator HoverFlow()
    // Offset: 0x138D2FC
    ::System::Collections::IEnumerator* HoverFlow();
    // private System.Void SetColor(System.Single amount)
    // Offset: 0x138D368
    void SetColor(float amount);
    // public System.Void .ctor()
    // Offset: 0x138D4A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightUpRenderersOnHover* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LightUpRenderersOnHover::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightUpRenderersOnHover*, creationType>()));
    }
  }; // VROSC.LightUpRenderersOnHover
  #pragma pack(pop)
  static check_size<sizeof(LightUpRenderersOnHover), 80 + sizeof(::ArrayW<::UnityEngine::Color>)> __VROSC_LightUpRenderersOnHoverSizeCheck;
  static_assert(sizeof(LightUpRenderersOnHover) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LightUpRenderersOnHover::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LightUpRenderersOnHover::*)()>(&VROSC::LightUpRenderersOnHover::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LightUpRenderersOnHover*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LightUpRenderersOnHover::LightUp
// Il2CppName: LightUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LightUpRenderersOnHover::*)(bool)>(&VROSC::LightUpRenderersOnHover::LightUp)> {
  static const MethodInfo* get() {
    static auto* hovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LightUpRenderersOnHover*), "LightUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovering});
  }
};
// Writing MetadataGetter for method: VROSC::LightUpRenderersOnHover::HoverFlow
// Il2CppName: HoverFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::LightUpRenderersOnHover::*)()>(&VROSC::LightUpRenderersOnHover::HoverFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LightUpRenderersOnHover*), "HoverFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LightUpRenderersOnHover::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LightUpRenderersOnHover::*)(float)>(&VROSC::LightUpRenderersOnHover::SetColor)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LightUpRenderersOnHover*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
// Writing MetadataGetter for method: VROSC::LightUpRenderersOnHover::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
