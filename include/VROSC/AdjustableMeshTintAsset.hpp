// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.ExposedReference`1
#include "UnityEngine/ExposedReference_1.hpp"
// Including type: VROSC.AnimatedAppear/VROSC.Mode
#include "VROSC/AnimatedAppear_Mode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMeshTintBehaviour
  class AdjustableMeshTintBehaviour;
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMeshTintAsset
  class AdjustableMeshTintAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AdjustableMeshTintAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshTintAsset*, "VROSC", "AdjustableMeshTintAsset");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.AdjustableMeshTintAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class AdjustableMeshTintAsset : public ::UnityEngine::Playables::PlayableAsset {
    public:
    public:
    // public VROSC.AdjustableMeshTintBehaviour template
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::AdjustableMeshTintBehaviour* _template;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMeshTintBehaviour*) == 0x8);
    // public UnityEngine.ExposedReference`1<VROSC.AdjustableMesh> _mesh
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::UnityEngine::ExposedReference_1<::VROSC::AdjustableMesh*> mesh;
    // public VROSC.AnimatedAppear/VROSC.Mode mode
    // Size: 0x4
    // Offset: 0x30
    ::VROSC::AnimatedAppear::Mode mode;
    // Field size check
    static_assert(sizeof(::VROSC::AnimatedAppear::Mode) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public VROSC.AdjustableMeshTintBehaviour template
    [[deprecated("Use field access instead!")]] ::VROSC::AdjustableMeshTintBehaviour*& dyn_template();
    // Get instance field reference: public UnityEngine.ExposedReference`1<VROSC.AdjustableMesh> _mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::ExposedReference_1<::VROSC::AdjustableMesh*>& dyn__mesh();
    // Get instance field reference: public VROSC.AnimatedAppear/VROSC.Mode mode
    [[deprecated("Use field access instead!")]] ::VROSC::AnimatedAppear::Mode& dyn_mode();
    // public System.Void .ctor()
    // Offset: 0x9689C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjustableMeshTintAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AdjustableMeshTintAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjustableMeshTintAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0x968844
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);
  }; // VROSC.AdjustableMeshTintAsset
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AdjustableMeshTintAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AdjustableMeshTintAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (VROSC::AdjustableMeshTintAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&VROSC::AdjustableMeshTintAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshTintAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, owner});
  }
};
