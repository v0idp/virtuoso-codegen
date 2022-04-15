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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatar
  class OvrAvatar;
  // Forward declaring type: ovrAvatarVisibilityFlags
  struct ovrAvatarVisibilityFlags;
  // Forward declaring type: ovrAvatarTransform
  struct ovrAvatarTransform;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarRenderComponent
  class OvrAvatarRenderComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarRenderComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarRenderComponent*, "", "OvrAvatarRenderComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarRenderComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarRenderComponent : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean firstSkinnedUpdate
    // Size: 0x1
    // Offset: 0x18
    bool firstSkinnedUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstSkinnedUpdate and: mesh
    char __padding0[0x7] = {};
    // public UnityEngine.SkinnedMeshRenderer mesh
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::SkinnedMeshRenderer* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // public UnityEngine.Transform[] bones
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Transform*> bones;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private System.Boolean isBodyComponent
    // Size: 0x1
    // Offset: 0x30
    bool isBodyComponent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean firstSkinnedUpdate
    [[deprecated("Use field access instead!")]] bool& dyn_firstSkinnedUpdate();
    // Get instance field reference: public UnityEngine.SkinnedMeshRenderer mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::SkinnedMeshRenderer*& dyn_mesh();
    // Get instance field reference: public UnityEngine.Transform[] bones
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_bones();
    // Get instance field reference: private System.Boolean isBodyComponent
    [[deprecated("Use field access instead!")]] bool& dyn_isBodyComponent();
    // public System.Void .ctor()
    // Offset: 0xF90348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarRenderComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarRenderComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarRenderComponent*, creationType>()));
    }
    // protected System.Void UpdateActive(OvrAvatar avatar, ovrAvatarVisibilityFlags mask)
    // Offset: 0xF907E4
    void UpdateActive(::GlobalNamespace::OvrAvatar* avatar, ::GlobalNamespace::ovrAvatarVisibilityFlags mask);
    // protected UnityEngine.SkinnedMeshRenderer CreateSkinnedMesh(System.UInt64 assetID, ovrAvatarVisibilityFlags visibilityMask, System.Int32 thirdPersonLayer, System.Int32 firstPersonLayer)
    // Offset: 0xF908C8
    ::UnityEngine::SkinnedMeshRenderer* CreateSkinnedMesh(uint64_t assetID, ::GlobalNamespace::ovrAvatarVisibilityFlags visibilityMask, int thirdPersonLayer, int firstPersonLayer);
    // protected System.Void UpdateSkinnedMesh(OvrAvatar avatar, UnityEngine.Transform[] bones, ovrAvatarTransform localTransform, ovrAvatarVisibilityFlags visibilityMask, System.IntPtr renderPart)
    // Offset: 0xF90ABC
    void UpdateSkinnedMesh(::GlobalNamespace::OvrAvatar* avatar, ::ArrayW<::UnityEngine::Transform*> bones, ::GlobalNamespace::ovrAvatarTransform localTransform, ::GlobalNamespace::ovrAvatarVisibilityFlags visibilityMask, ::System::IntPtr renderPart);
    // protected UnityEngine.Material CreateAvatarMaterial(System.String name, UnityEngine.Shader shader)
    // Offset: 0xF8FC04
    ::UnityEngine::Material* CreateAvatarMaterial(::StringW name, ::UnityEngine::Shader* shader);
  }; // OvrAvatarRenderComponent
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarRenderComponent), 48 + sizeof(bool)> __GlobalNamespace_OvrAvatarRenderComponentSizeCheck;
  static_assert(sizeof(OvrAvatarRenderComponent) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarRenderComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarRenderComponent::UpdateActive
// Il2CppName: UpdateActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarRenderComponent::*)(::GlobalNamespace::OvrAvatar*, ::GlobalNamespace::ovrAvatarVisibilityFlags)>(&GlobalNamespace::OvrAvatarRenderComponent::UpdateActive)> {
  static const MethodInfo* get() {
    static auto* avatar = &::il2cpp_utils::GetClassFromName("", "OvrAvatar")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "ovrAvatarVisibilityFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarRenderComponent*), "UpdateActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatar, mask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarRenderComponent::CreateSkinnedMesh
// Il2CppName: CreateSkinnedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SkinnedMeshRenderer* (GlobalNamespace::OvrAvatarRenderComponent::*)(uint64_t, ::GlobalNamespace::ovrAvatarVisibilityFlags, int, int)>(&GlobalNamespace::OvrAvatarRenderComponent::CreateSkinnedMesh)> {
  static const MethodInfo* get() {
    static auto* assetID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* visibilityMask = &::il2cpp_utils::GetClassFromName("", "ovrAvatarVisibilityFlags")->byval_arg;
    static auto* thirdPersonLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* firstPersonLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarRenderComponent*), "CreateSkinnedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetID, visibilityMask, thirdPersonLayer, firstPersonLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarRenderComponent::UpdateSkinnedMesh
// Il2CppName: UpdateSkinnedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarRenderComponent::*)(::GlobalNamespace::OvrAvatar*, ::ArrayW<::UnityEngine::Transform*>, ::GlobalNamespace::ovrAvatarTransform, ::GlobalNamespace::ovrAvatarVisibilityFlags, ::System::IntPtr)>(&GlobalNamespace::OvrAvatarRenderComponent::UpdateSkinnedMesh)> {
  static const MethodInfo* get() {
    static auto* avatar = &::il2cpp_utils::GetClassFromName("", "OvrAvatar")->byval_arg;
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* localTransform = &::il2cpp_utils::GetClassFromName("", "ovrAvatarTransform")->byval_arg;
    static auto* visibilityMask = &::il2cpp_utils::GetClassFromName("", "ovrAvatarVisibilityFlags")->byval_arg;
    static auto* renderPart = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarRenderComponent*), "UpdateSkinnedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatar, bones, localTransform, visibilityMask, renderPart});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarRenderComponent::CreateAvatarMaterial
// Il2CppName: CreateAvatarMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (GlobalNamespace::OvrAvatarRenderComponent::*)(::StringW, ::UnityEngine::Shader*)>(&GlobalNamespace::OvrAvatarRenderComponent::CreateAvatarMaterial)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* shader = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarRenderComponent*), "CreateAvatarMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, shader});
  }
};
