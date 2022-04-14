// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EffectLightmapping
  class EffectLightmapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EffectLightmapping);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EffectLightmapping*, "", "EffectLightmapping");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EffectLightmapping
  // [TokenAttribute] Offset: FFFFFFFF
  class EffectLightmapping : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject _normalLighting
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* normalLighting;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _effectLighting
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* effectLighting;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _normalLighting
    [[deprecated]] ::UnityEngine::GameObject*& dyn__normalLighting();
    // Get instance field reference: private UnityEngine.GameObject _effectLighting
    [[deprecated]] ::UnityEngine::GameObject*& dyn__effectLighting();
    // public System.Void ShowEffectLighting(System.Boolean showEffects)
    // Offset: 0x8EAD50
    void ShowEffectLighting(bool showEffects);
    // public System.Void .ctor()
    // Offset: 0x8EAD9C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EffectLightmapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EffectLightmapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EffectLightmapping*, creationType>()));
    }
  }; // EffectLightmapping
  #pragma pack(pop)
  static check_size<sizeof(EffectLightmapping), 32 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_EffectLightmappingSizeCheck;
  static_assert(sizeof(EffectLightmapping) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EffectLightmapping::ShowEffectLighting
// Il2CppName: ShowEffectLighting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EffectLightmapping::*)(bool)>(&GlobalNamespace::EffectLightmapping::ShowEffectLighting)> {
  static const MethodInfo* get() {
    static auto* showEffects = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EffectLightmapping*), "ShowEffectLighting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showEffects});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EffectLightmapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
