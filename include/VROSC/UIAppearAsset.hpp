// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIAppearBehaviour
  class UIAppearBehaviour;
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
  // Forward declaring type: UIAppearAsset
  class UIAppearAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIAppearAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIAppearAsset*, "VROSC", "UIAppearAsset");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIAppearAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class UIAppearAsset : public ::UnityEngine::Playables::PlayableAsset {
    public:
    public:
    // public VROSC.UIAppearBehaviour template
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UIAppearBehaviour* _template;
    // Field size check
    static_assert(sizeof(::VROSC::UIAppearBehaviour*) == 0x8);
    // public System.Boolean enter
    // Size: 0x1
    // Offset: 0x20
    bool enter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public VROSC.UIAppearBehaviour template
    [[deprecated("Use field access instead!")]] ::VROSC::UIAppearBehaviour*& dyn_template();
    // Get instance field reference: public System.Boolean enter
    [[deprecated("Use field access instead!")]] bool& dyn_enter();
    // public System.Void .ctor()
    // Offset: 0xA3384C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIAppearAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIAppearAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIAppearAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0xA3365C
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);
  }; // VROSC.UIAppearAsset
  #pragma pack(pop)
  static check_size<sizeof(UIAppearAsset), 32 + sizeof(bool)> __VROSC_UIAppearAssetSizeCheck;
  static_assert(sizeof(UIAppearAsset) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIAppearAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UIAppearAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (VROSC::UIAppearAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&VROSC::UIAppearAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIAppearAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, owner});
  }
};
