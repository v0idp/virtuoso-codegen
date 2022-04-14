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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: OrganPipeCreationBehaviour
  class OrganPipeCreationBehaviour;
  // Forward declaring type: OrganPipeRow
  class OrganPipeRow;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: OrganPipeCreationAsset
  class OrganPipeCreationAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::OrganPipeCreationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OrganPipeCreationAsset*, "VROSC", "OrganPipeCreationAsset");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.OrganPipeCreationAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class OrganPipeCreationAsset : public ::UnityEngine::Playables::PlayableAsset {
    public:
    public:
    // public VROSC.OrganPipeCreationBehaviour template
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::OrganPipeCreationBehaviour* _template;
    // Field size check
    static_assert(sizeof(::VROSC::OrganPipeCreationBehaviour*) == 0x8);
    // public UnityEngine.ExposedReference`1<VROSC.OrganPipeRow> _row
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::UnityEngine::ExposedReference_1<::VROSC::OrganPipeRow*> row;
    // public UnityEngine.AnimationCurve _startCurve
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* startCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve _endCurve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* endCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public VROSC.OrganPipeCreationBehaviour template
    [[deprecated]] ::VROSC::OrganPipeCreationBehaviour*& dyn_template();
    // Get instance field reference: public UnityEngine.ExposedReference`1<VROSC.OrganPipeRow> _row
    [[deprecated]] ::UnityEngine::ExposedReference_1<::VROSC::OrganPipeRow*>& dyn__row();
    // Get instance field reference: public UnityEngine.AnimationCurve _startCurve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__startCurve();
    // Get instance field reference: public UnityEngine.AnimationCurve _endCurve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__endCurve();
    // public System.Void .ctor()
    // Offset: 0xC68CE0
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrganPipeCreationAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::OrganPipeCreationAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrganPipeCreationAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0xC68AD4
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);
  }; // VROSC.OrganPipeCreationAsset
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::OrganPipeCreationAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::OrganPipeCreationAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (VROSC::OrganPipeCreationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&VROSC::OrganPipeCreationAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::OrganPipeCreationAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, owner});
  }
};
