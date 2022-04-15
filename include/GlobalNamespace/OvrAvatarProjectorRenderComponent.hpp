// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarRenderComponent
#include "GlobalNamespace/OvrAvatarRenderComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarRenderPart_ProjectorRender
  struct ovrAvatarRenderPart_ProjectorRender;
  // Forward declaring type: OvrAvatarComponent
  class OvrAvatarComponent_;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarProjectorRenderComponent
  class OvrAvatarProjectorRenderComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarProjectorRenderComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarProjectorRenderComponent*, "", "OvrAvatarProjectorRenderComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarProjectorRenderComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarProjectorRenderComponent : public ::GlobalNamespace::OvrAvatarRenderComponent {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    public:
    // private UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // System.Void InitializeProjectorRender(ovrAvatarRenderPart_ProjectorRender render, UnityEngine.Shader shader, OvrAvatarRenderComponent target)
    // Offset: 0xF8F9DC
    void InitializeProjectorRender(::GlobalNamespace::ovrAvatarRenderPart_ProjectorRender render, ::UnityEngine::Shader* shader, ::GlobalNamespace::OvrAvatarRenderComponent* target);
    // System.Void UpdateProjectorRender(OvrAvatarComponent component, ovrAvatarRenderPart_ProjectorRender render)
    // Offset: 0xF8FD10
    void UpdateProjectorRender(::GlobalNamespace::OvrAvatarComponent_* component, ::GlobalNamespace::ovrAvatarRenderPart_ProjectorRender render);
    // private System.Void OnDrawGizmos()
    // Offset: 0xF8FEAC
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0xF90338
    // Implemented from: OvrAvatarRenderComponent
    // Base method: System.Void OvrAvatarRenderComponent::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarProjectorRenderComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarProjectorRenderComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarProjectorRenderComponent*, creationType>()));
    }
  }; // OvrAvatarProjectorRenderComponent
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarProjectorRenderComponent), 56 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_OvrAvatarProjectorRenderComponentSizeCheck;
  static_assert(sizeof(OvrAvatarProjectorRenderComponent) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarProjectorRenderComponent::InitializeProjectorRender
// Il2CppName: InitializeProjectorRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarProjectorRenderComponent::*)(::GlobalNamespace::ovrAvatarRenderPart_ProjectorRender, ::UnityEngine::Shader*, ::GlobalNamespace::OvrAvatarRenderComponent*)>(&GlobalNamespace::OvrAvatarProjectorRenderComponent::InitializeProjectorRender)> {
  static const MethodInfo* get() {
    static auto* render = &::il2cpp_utils::GetClassFromName("", "ovrAvatarRenderPart_ProjectorRender")->byval_arg;
    static auto* shader = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("", "OvrAvatarRenderComponent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarProjectorRenderComponent*), "InitializeProjectorRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{render, shader, target});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarProjectorRenderComponent::UpdateProjectorRender
// Il2CppName: UpdateProjectorRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarProjectorRenderComponent::*)(::GlobalNamespace::OvrAvatarComponent_*, ::GlobalNamespace::ovrAvatarRenderPart_ProjectorRender)>(&GlobalNamespace::OvrAvatarProjectorRenderComponent::UpdateProjectorRender)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("", "OvrAvatarComponent")->byval_arg;
    static auto* render = &::il2cpp_utils::GetClassFromName("", "ovrAvatarRenderPart_ProjectorRender")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarProjectorRenderComponent*), "UpdateProjectorRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, render});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarProjectorRenderComponent::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarProjectorRenderComponent::*)()>(&GlobalNamespace::OvrAvatarProjectorRenderComponent::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarProjectorRenderComponent*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarProjectorRenderComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
