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
  // Forward declaring type: IndividualHintNoteBehaviour
  class IndividualHintNoteBehaviour;
  // Forward declaring type: TouchableObject
  class TouchableObject;
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
  // Forward declaring type: IndividualHintNoteAsset
  class IndividualHintNoteAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IndividualHintNoteAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IndividualHintNoteAsset*, "VROSC", "IndividualHintNoteAsset");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.IndividualHintNoteAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class IndividualHintNoteAsset : public ::UnityEngine::Playables::PlayableAsset {
    public:
    public:
    // public VROSC.IndividualHintNoteBehaviour template
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::IndividualHintNoteBehaviour* _template;
    // Field size check
    static_assert(sizeof(::VROSC::IndividualHintNoteBehaviour*) == 0x8);
    // public UnityEngine.ExposedReference`1<VROSC.TouchableObject> _target
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::UnityEngine::ExposedReference_1<::VROSC::TouchableObject*> target;
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public VROSC.IndividualHintNoteBehaviour template
    [[deprecated]] ::VROSC::IndividualHintNoteBehaviour*& dyn_template();
    // Get instance field reference: public UnityEngine.ExposedReference`1<VROSC.TouchableObject> _target
    [[deprecated]] ::UnityEngine::ExposedReference_1<::VROSC::TouchableObject*>& dyn__target();
    // public System.Void .ctor()
    // Offset: 0x1943300
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IndividualHintNoteAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IndividualHintNoteAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IndividualHintNoteAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0x19431CC
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);
  }; // VROSC.IndividualHintNoteAsset
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IndividualHintNoteAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::IndividualHintNoteAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (VROSC::IndividualHintNoteAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&VROSC::IndividualHintNoteAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IndividualHintNoteAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, owner});
  }
};
