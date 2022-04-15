// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AdjustableMeshEffect
#include "VROSC/AdjustableMeshEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI::Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: AdjustableMeshData
  class AdjustableMeshData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMeshResizeEffect
  class AdjustableMeshResizeEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AdjustableMeshResizeEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshResizeEffect*, "VROSC", "AdjustableMeshResizeEffect");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AdjustableMeshResizeEffect
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 780628
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class AdjustableMeshResizeEffect : public ::VROSC::AdjustableMeshEffect {
    public:
    public:
    // private VROSC.UI.Meshes.AdjustableMeshData _data
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UI::Meshes::AdjustableMeshData* data;
    // Field size check
    static_assert(sizeof(::VROSC::UI::Meshes::AdjustableMeshData*) == 0x8);
    // private System.Single _height
    // Size: 0x4
    // Offset: 0x28
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x2C
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _alwaysUpdate
    // Size: 0x1
    // Offset: 0x30
    bool alwaysUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: alwaysUpdate and: rectTransform
    char __padding3[0x7] = {};
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private System.Single _lastHeight
    // Size: 0x4
    // Offset: 0x40
    float lastHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastWidth
    // Size: 0x4
    // Offset: 0x44
    float lastWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] _originalPositions
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Vector3> originalPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] _modifiedPositions
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector3> modifiedPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Get instance field reference: private VROSC.UI.Meshes.AdjustableMeshData _data
    [[deprecated("Use field access instead!")]] ::VROSC::UI::Meshes::AdjustableMeshData*& dyn__data();
    // Get instance field reference: private System.Single _height
    [[deprecated("Use field access instead!")]] float& dyn__height();
    // Get instance field reference: private System.Single _width
    [[deprecated("Use field access instead!")]] float& dyn__width();
    // Get instance field reference: private System.Boolean _alwaysUpdate
    [[deprecated("Use field access instead!")]] bool& dyn__alwaysUpdate();
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__rectTransform();
    // Get instance field reference: private System.Single _lastHeight
    [[deprecated("Use field access instead!")]] float& dyn__lastHeight();
    // Get instance field reference: private System.Single _lastWidth
    [[deprecated("Use field access instead!")]] float& dyn__lastWidth();
    // Get instance field reference: private UnityEngine.Vector3[] _originalPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__originalPositions();
    // Get instance field reference: private UnityEngine.Vector3[] _modifiedPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__modifiedPositions();
    // private System.Single get_Height()
    // Offset: 0x968348
    float get_Height();
    // private System.Single get_Width()
    // Offset: 0x9683F8
    float get_Width();
    // private System.Void GetMeshData()
    // Offset: 0x968574
    void GetMeshData();
    // public System.Void UpdateMesh()
    // Offset: 0x96863C
    void UpdateMesh();
    // private System.Void OnDrawGizmos()
    // Offset: 0x9687A0
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x96883C
    // Implemented from: VROSC.AdjustableMeshEffect
    // Base method: System.Void AdjustableMeshEffect::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjustableMeshResizeEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AdjustableMeshResizeEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjustableMeshResizeEffect*, creationType>()));
    }
    // private System.Void OnEnable()
    // Offset: 0x9684A8
    // Implemented from: VROSC.AdjustableMeshEffect
    // Base method: System.Void AdjustableMeshEffect::OnEnable()
    void OnEnable();
    // protected override System.Void OnCreation()
    // Offset: 0x968618
    // Implemented from: VROSC.AdjustableMeshEffect
    // Base method: System.Void AdjustableMeshEffect::OnCreation()
    void OnCreation();
  }; // VROSC.AdjustableMeshResizeEffect
  #pragma pack(pop)
  static check_size<sizeof(AdjustableMeshResizeEffect), 80 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __VROSC_AdjustableMeshResizeEffectSizeCheck;
  static_assert(sizeof(AdjustableMeshResizeEffect) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AdjustableMeshResizeEffect::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AdjustableMeshResizeEffect::*)()>(&VROSC::AdjustableMeshResizeEffect::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshResizeEffect*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshResizeEffect::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AdjustableMeshResizeEffect::*)()>(&VROSC::AdjustableMeshResizeEffect::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshResizeEffect*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshResizeEffect::GetMeshData
// Il2CppName: GetMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshResizeEffect::*)()>(&VROSC::AdjustableMeshResizeEffect::GetMeshData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshResizeEffect*), "GetMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshResizeEffect::UpdateMesh
// Il2CppName: UpdateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshResizeEffect::*)()>(&VROSC::AdjustableMeshResizeEffect::UpdateMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshResizeEffect*), "UpdateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshResizeEffect::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshResizeEffect::*)()>(&VROSC::AdjustableMeshResizeEffect::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshResizeEffect*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshResizeEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AdjustableMeshResizeEffect::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshResizeEffect::*)()>(&VROSC::AdjustableMeshResizeEffect::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshResizeEffect*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshResizeEffect::OnCreation
// Il2CppName: OnCreation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshResizeEffect::*)()>(&VROSC::AdjustableMeshResizeEffect::OnCreation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshResizeEffect*), "OnCreation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
