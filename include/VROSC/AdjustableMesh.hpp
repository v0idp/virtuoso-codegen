// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.AdjustableMeshUvs/VROSC.Channel
#include "VROSC/AdjustableMeshUvs.hpp"
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
  // Forward declaring type: AdjustableMeshColors
  class AdjustableMeshColors;
  // Skipping declaration: AdjustableMeshUvs because it is already included!
  // Forward declaring type: AdjustableMeshVerts
  class AdjustableMeshVerts;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AdjustableMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMesh*, "VROSC", "AdjustableMesh");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AdjustableMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 780574
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: 780574
  class AdjustableMesh : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.AdjustableMeshColors <Colors>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::AdjustableMeshColors* Colors;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMeshColors*) == 0x8);
    // private VROSC.AdjustableMeshUvs <UVs>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::AdjustableMeshUvs* UVs;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMeshUvs*) == 0x8);
    // private VROSC.AdjustableMeshVerts <Verts>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::AdjustableMeshVerts* Verts;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMeshVerts*) == 0x8);
    // protected UnityEngine.Mesh _original
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Mesh* original;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private VROSC.AdjustableMeshUvs/VROSC.Channel _uvChannel
    // Size: 0x4
    // Offset: 0x38
    ::VROSC::AdjustableMeshUvs::Channel uvChannel;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMeshUvs::Channel) == 0x4);
    // private System.Boolean _floatColors
    // Size: 0x1
    // Offset: 0x3C
    bool floatColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: floatColors and: multiplyOriginalVertexColor
    char __padding5[0x3] = {};
    // [RangeAttribute] Offset: 0x78B798
    // private System.Single _multiplyOriginalVertexColor
    // Size: 0x4
    // Offset: 0x40
    float multiplyOriginalVertexColor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x78B7D8
    // private System.Single _appearFlashAmount
    // Size: 0x4
    // Offset: 0x44
    float appearFlashAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single _appearAmount
    // Size: 0x4
    // Offset: 0x48
    float appearAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected VROSC.AnimatedAppear/VROSC.Mode _appearMode
    // Size: 0x4
    // Offset: 0x4C
    ::VROSC::AnimatedAppear::Mode appearMode;
    // Field size check
    static_assert(sizeof(::VROSC::AnimatedAppear::Mode) == 0x4);
    // protected System.Boolean _useFlash
    // Size: 0x1
    // Offset: 0x50
    bool useFlash;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useFlash and: instantiatedMesh
    char __padding10[0x7] = {};
    // protected UnityEngine.Mesh _instantiatedMesh
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Mesh* instantiatedMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // protected UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // protected UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // public System.Action OnMeshCreation
    // Size: 0x8
    // Offset: 0x78
    ::System::Action* OnMeshCreation;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action OnMeshVisible
    // Size: 0x8
    // Offset: 0x80
    ::System::Action* OnMeshVisible;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.AdjustableMeshColors <Colors>k__BackingField
    [[deprecated]] ::VROSC::AdjustableMeshColors*& dyn_$Colors$k__BackingField();
    // Get instance field reference: private VROSC.AdjustableMeshUvs <UVs>k__BackingField
    [[deprecated]] ::VROSC::AdjustableMeshUvs*& dyn_$UVs$k__BackingField();
    // Get instance field reference: private VROSC.AdjustableMeshVerts <Verts>k__BackingField
    [[deprecated]] ::VROSC::AdjustableMeshVerts*& dyn_$Verts$k__BackingField();
    // Get instance field reference: protected UnityEngine.Mesh _original
    [[deprecated]] ::UnityEngine::Mesh*& dyn__original();
    // Get instance field reference: private VROSC.AdjustableMeshUvs/VROSC.Channel _uvChannel
    [[deprecated]] ::VROSC::AdjustableMeshUvs::Channel& dyn__uvChannel();
    // Get instance field reference: private System.Boolean _floatColors
    [[deprecated]] bool& dyn__floatColors();
    // Get instance field reference: private System.Single _multiplyOriginalVertexColor
    [[deprecated]] float& dyn__multiplyOriginalVertexColor();
    // Get instance field reference: private System.Single _appearFlashAmount
    [[deprecated]] float& dyn__appearFlashAmount();
    // Get instance field reference: protected System.Single _appearAmount
    [[deprecated]] float& dyn__appearAmount();
    // Get instance field reference: protected VROSC.AnimatedAppear/VROSC.Mode _appearMode
    [[deprecated]] ::VROSC::AnimatedAppear::Mode& dyn__appearMode();
    // Get instance field reference: protected System.Boolean _useFlash
    [[deprecated]] bool& dyn__useFlash();
    // Get instance field reference: protected UnityEngine.Mesh _instantiatedMesh
    [[deprecated]] ::UnityEngine::Mesh*& dyn__instantiatedMesh();
    // Get instance field reference: protected UnityEngine.MeshFilter _meshFilter
    [[deprecated]] ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: protected UnityEngine.MeshRenderer _meshRenderer
    [[deprecated]] ::UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    [[deprecated]] ::UnityEngine::RectTransform*& dyn__rectTransform();
    // Get instance field reference: public System.Action OnMeshCreation
    [[deprecated]] ::System::Action*& dyn_OnMeshCreation();
    // Get instance field reference: public System.Action OnMeshVisible
    [[deprecated]] ::System::Action*& dyn_OnMeshVisible();
    // public UnityEngine.Mesh get_Mesh()
    // Offset: 0x965FA0
    ::UnityEngine::Mesh* get_Mesh();
    // public UnityEngine.Mesh get_Original()
    // Offset: 0x965FF8
    ::UnityEngine::Mesh* get_Original();
    // public UnityEngine.MeshRenderer get_Renderer()
    // Offset: 0x966000
    ::UnityEngine::MeshRenderer* get_Renderer();
    // public UnityEngine.RectTransform get_RectTransform()
    // Offset: 0x9660A4
    ::UnityEngine::RectTransform* get_RectTransform();
    // public System.Single get_MultiplyOriginalVertexColor()
    // Offset: 0x966148
    float get_MultiplyOriginalVertexColor();
    // public VROSC.AdjustableMeshColors get_Colors()
    // Offset: 0x966158
    ::VROSC::AdjustableMeshColors* get_Colors();
    // private System.Void set_Colors(VROSC.AdjustableMeshColors value)
    // Offset: 0x966150
    void set_Colors(::VROSC::AdjustableMeshColors* value);
    // public VROSC.AdjustableMeshUvs get_UVs()
    // Offset: 0x966168
    ::VROSC::AdjustableMeshUvs* get_UVs();
    // private System.Void set_UVs(VROSC.AdjustableMeshUvs value)
    // Offset: 0x966160
    void set_UVs(::VROSC::AdjustableMeshUvs* value);
    // public VROSC.AdjustableMeshVerts get_Verts()
    // Offset: 0x966178
    ::VROSC::AdjustableMeshVerts* get_Verts();
    // private System.Void set_Verts(VROSC.AdjustableMeshVerts value)
    // Offset: 0x966170
    void set_Verts(::VROSC::AdjustableMeshVerts* value);
    // private UnityEngine.RectTransform GetRectTransform()
    // Offset: 0x9660A8
    ::UnityEngine::RectTransform* GetRectTransform();
    // private UnityEngine.MeshRenderer GetMeshRenderer()
    // Offset: 0x966004
    ::UnityEngine::MeshRenderer* GetMeshRenderer();
    // protected System.Void OnEnable()
    // Offset: 0x966180
    void OnEnable();
    // private UnityEngine.Mesh GetMesh()
    // Offset: 0x965FCC
    ::UnityEngine::Mesh* GetMesh();
    // public System.Void Verify()
    // Offset: 0x9661C0
    void Verify();
    // public System.Void LoadMesh(System.Boolean force)
    // Offset: 0x966250
    void LoadMesh(bool force);
    // private System.Void ClearMesh()
    // Offset: 0x9663E8
    void ClearMesh();
    // protected System.Void PostLoadMesh(System.Boolean useOriginalAsUV)
    // Offset: 0x966498
    void PostLoadMesh(bool useOriginalAsUV);
    // public System.Void UpdateMeshAppearance(System.Single appearAmount, VROSC.AnimatedAppear/VROSC.Mode mode, System.Boolean useFlash)
    // Offset: 0x966B1C
    void UpdateMeshAppearance(float appearAmount, ::VROSC::AnimatedAppear::Mode mode, bool useFlash);
    // protected System.Void OnDisable()
    // Offset: 0x966C10
    void OnDisable();
    // public System.Void UseOriginalMesh()
    // Offset: 0x966CF0
    void UseOriginalMesh();
    // public System.Void SetMesh(UnityEngine.Mesh mesh)
    // Offset: 0x966D9C
    void SetMesh(::UnityEngine::Mesh* mesh);
    // public System.Void AddUIColoring()
    // Offset: 0x966DB0
    void AddUIColoring();
    // public System.Void .ctor()
    // Offset: 0x966E18
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjustableMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AdjustableMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjustableMesh*, creationType>()));
    }
  }; // VROSC.AdjustableMesh
  #pragma pack(pop)
  static check_size<sizeof(AdjustableMesh), 128 + sizeof(::System::Action*)> __VROSC_AdjustableMeshSizeCheck;
  static_assert(sizeof(AdjustableMesh) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AdjustableMesh::get_Mesh
// Il2CppName: get_Mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::get_Mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "get_Mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::get_Original
// Il2CppName: get_Original
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::get_Original)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "get_Original", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::get_Renderer
// Il2CppName: get_Renderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshRenderer* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::get_Renderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "get_Renderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::get_RectTransform
// Il2CppName: get_RectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::get_RectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "get_RectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::get_MultiplyOriginalVertexColor
// Il2CppName: get_MultiplyOriginalVertexColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::get_MultiplyOriginalVertexColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "get_MultiplyOriginalVertexColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::get_Colors
// Il2CppName: get_Colors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AdjustableMeshColors* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::get_Colors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "get_Colors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::set_Colors
// Il2CppName: set_Colors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)(::VROSC::AdjustableMeshColors*)>(&VROSC::AdjustableMesh::set_Colors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "AdjustableMeshColors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "set_Colors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::get_UVs
// Il2CppName: get_UVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AdjustableMeshUvs* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::get_UVs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "get_UVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::set_UVs
// Il2CppName: set_UVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)(::VROSC::AdjustableMeshUvs*)>(&VROSC::AdjustableMesh::set_UVs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "AdjustableMeshUvs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "set_UVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::get_Verts
// Il2CppName: get_Verts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AdjustableMeshVerts* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::get_Verts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "get_Verts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::set_Verts
// Il2CppName: set_Verts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)(::VROSC::AdjustableMeshVerts*)>(&VROSC::AdjustableMesh::set_Verts)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "AdjustableMeshVerts")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "set_Verts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::GetRectTransform
// Il2CppName: GetRectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::GetRectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "GetRectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::GetMeshRenderer
// Il2CppName: GetMeshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshRenderer* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::GetMeshRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "GetMeshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::GetMesh
// Il2CppName: GetMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::GetMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "GetMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::Verify
// Il2CppName: Verify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::Verify)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "Verify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::LoadMesh
// Il2CppName: LoadMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)(bool)>(&VROSC::AdjustableMesh::LoadMesh)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "LoadMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::ClearMesh
// Il2CppName: ClearMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::ClearMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "ClearMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::PostLoadMesh
// Il2CppName: PostLoadMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)(bool)>(&VROSC::AdjustableMesh::PostLoadMesh)> {
  static const MethodInfo* get() {
    static auto* useOriginalAsUV = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "PostLoadMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useOriginalAsUV});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::UpdateMeshAppearance
// Il2CppName: UpdateMeshAppearance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)(float, ::VROSC::AnimatedAppear::Mode, bool)>(&VROSC::AdjustableMesh::UpdateMeshAppearance)> {
  static const MethodInfo* get() {
    static auto* appearAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear/Mode")->byval_arg;
    static auto* useFlash = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "UpdateMeshAppearance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appearAmount, mode, useFlash});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::UseOriginalMesh
// Il2CppName: UseOriginalMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::UseOriginalMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "UseOriginalMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::SetMesh
// Il2CppName: SetMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)(::UnityEngine::Mesh*)>(&VROSC::AdjustableMesh::SetMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "SetMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::AddUIColoring
// Il2CppName: AddUIColoring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMesh::*)()>(&VROSC::AdjustableMesh::AddUIColoring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMesh*), "AddUIColoring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
