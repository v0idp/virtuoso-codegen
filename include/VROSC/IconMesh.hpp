// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AdjustableMesh
#include "VROSC/AdjustableMesh.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: IconData
  class IconData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: IconMesh
  class IconMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IconMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IconMesh*, "VROSC", "IconMesh");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.IconMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: 7808B8
  class IconMesh : public ::VROSC::AdjustableMesh {
    public:
    public:
    // private VROSC.UI.IconData _data
    // Size: 0x8
    // Offset: 0x88
    ::VROSC::UI::IconData* data;
    // Field size check
    static_assert(sizeof(::VROSC::UI::IconData*) == 0x8);
    // private System.Boolean _alwaysUpdate
    // Size: 0x1
    // Offset: 0x90
    bool alwaysUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: alwaysUpdate and: scale
    char __padding1[0x3] = {};
    // [RangeAttribute] Offset: 0x78BA98
    // private System.Single _scale
    // Size: 0x4
    // Offset: 0x94
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastHeight
    // Size: 0x4
    // Offset: 0x98
    float lastHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastWidth
    // Size: 0x4
    // Offset: 0x9C
    float lastWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private VROSC.UI.IconData _data
    [[deprecated]] ::VROSC::UI::IconData*& dyn__data();
    // Get instance field reference: private System.Boolean _alwaysUpdate
    [[deprecated]] bool& dyn__alwaysUpdate();
    // Get instance field reference: private System.Single _scale
    [[deprecated]] float& dyn__scale();
    // Get instance field reference: private System.Single _lastHeight
    [[deprecated]] float& dyn__lastHeight();
    // Get instance field reference: private System.Single _lastWidth
    [[deprecated]] float& dyn__lastWidth();
    // public System.Void SetIcon(VROSC.UI.IconData data)
    // Offset: 0x194284C
    void SetIcon(::VROSC::UI::IconData* data);
    // public System.Void UpdateMesh(System.Boolean force)
    // Offset: 0x1942890
    void UpdateMesh(bool force);
    // private System.Void SetMeshSize(UnityEngine.Rect rect)
    // Offset: 0x19429F8
    void SetMeshSize(::UnityEngine::Rect rect);
    // private System.Void Update()
    // Offset: 0x1942A7C
    void Update();
    // private System.Void OnDrawGizmos()
    // Offset: 0x1942B84
    void OnDrawGizmos();
    // public override UnityEngine.Mesh get_Original()
    // Offset: 0x19427AC
    // Implemented from: VROSC.AdjustableMesh
    // Base method: UnityEngine.Mesh AdjustableMesh::get_Original()
    ::UnityEngine::Mesh* get_Original();
    // public System.Void .ctor()
    // Offset: 0x1942C14
    // Implemented from: VROSC.AdjustableMesh
    // Base method: System.Void AdjustableMesh::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IconMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IconMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IconMesh*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1942838
    // Implemented from: VROSC.AdjustableMesh
    // Base method: System.Void AdjustableMesh::OnEnable()
    void OnEnable();
    // public override System.Void LoadMesh(System.Boolean force)
    // Offset: 0x1942860
    // Implemented from: VROSC.AdjustableMesh
    // Base method: System.Void AdjustableMesh::LoadMesh(System.Boolean force)
    void LoadMesh(bool force);
    // public override System.Void UpdateMeshAppearance(System.Single appearAmount, VROSC.AnimatedAppear/VROSC.Mode mode, System.Boolean useFlash)
    // Offset: 0x1942A84
    // Implemented from: VROSC.AdjustableMesh
    // Base method: System.Void AdjustableMesh::UpdateMeshAppearance(System.Single appearAmount, VROSC.AnimatedAppear/VROSC.Mode mode, System.Boolean useFlash)
    void UpdateMeshAppearance(float appearAmount, ::VROSC::AnimatedAppear::Mode mode, bool useFlash);
  }; // VROSC.IconMesh
  #pragma pack(pop)
  static check_size<sizeof(IconMesh), 156 + sizeof(float)> __VROSC_IconMeshSizeCheck;
  static_assert(sizeof(IconMesh) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IconMesh::SetIcon
// Il2CppName: SetIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconMesh::*)(::VROSC::UI::IconData*)>(&VROSC::IconMesh::SetIcon)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC.UI", "IconData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "SetIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: VROSC::IconMesh::UpdateMesh
// Il2CppName: UpdateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconMesh::*)(bool)>(&VROSC::IconMesh::UpdateMesh)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "UpdateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: VROSC::IconMesh::SetMeshSize
// Il2CppName: SetMeshSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconMesh::*)(::UnityEngine::Rect)>(&VROSC::IconMesh::SetMeshSize)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "SetMeshSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: VROSC::IconMesh::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconMesh::*)()>(&VROSC::IconMesh::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::IconMesh::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconMesh::*)()>(&VROSC::IconMesh::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::IconMesh::get_Original
// Il2CppName: get_Original
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (VROSC::IconMesh::*)()>(&VROSC::IconMesh::get_Original)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "get_Original", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::IconMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::IconMesh::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconMesh::*)()>(&VROSC::IconMesh::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::IconMesh::LoadMesh
// Il2CppName: LoadMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconMesh::*)(bool)>(&VROSC::IconMesh::LoadMesh)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "LoadMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: VROSC::IconMesh::UpdateMeshAppearance
// Il2CppName: UpdateMeshAppearance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconMesh::*)(float, ::VROSC::AnimatedAppear::Mode, bool)>(&VROSC::IconMesh::UpdateMeshAppearance)> {
  static const MethodInfo* get() {
    static auto* appearAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear/Mode")->byval_arg;
    static auto* useFlash = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconMesh*), "UpdateMeshAppearance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appearAmount, mode, useFlash});
  }
};
