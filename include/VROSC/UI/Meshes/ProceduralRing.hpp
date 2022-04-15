// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UI.Meshes.ProceduralMeshData
#include "VROSC/UI/Meshes/ProceduralMeshData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: ProceduralRing
  class ProceduralRing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralRing);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralRing*, "VROSC.UI.Meshes", "ProceduralRing");
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Size: 0x45
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.Meshes.ProceduralRing
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 78156C
  class ProceduralRing : public ::VROSC::UI::Meshes::ProceduralMeshData {
    public:
    public:
    // private System.Int32 _edges
    // Size: 0x4
    // Offset: 0x40
    int edges;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _noVerticalUV
    // Size: 0x1
    // Offset: 0x44
    bool noVerticalUV;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 _edges
    [[deprecated("Use field access instead!")]] int& dyn__edges();
    // Get instance field reference: private System.Boolean _noVerticalUV
    [[deprecated("Use field access instead!")]] bool& dyn__noVerticalUV();
    // private System.Int32 get_vertexPairs()
    // Offset: 0xB25E74
    int get_vertexPairs();
    // private System.Void OnValidate()
    // Offset: 0xB25E90
    void OnValidate();
    // private UnityEngine.Vector2 GetCirclePosition(System.Single count)
    // Offset: 0xB26530
    ::UnityEngine::Vector2 GetCirclePosition(float count);
    // protected override System.Int32 get_VertCount()
    // Offset: 0xB25E80
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Int32 ProceduralMeshData::get_VertCount()
    int get_VertCount();
    // public System.Void .ctor()
    // Offset: 0xB26588
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralRing* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::Meshes::ProceduralRing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralRing*, creationType>()));
    }
    // protected override System.Void GetSharedMeshData(UnityEngine.Mesh mesh)
    // Offset: 0xB25EA8
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::GetSharedMeshData(UnityEngine.Mesh mesh)
    void GetSharedMeshData(::UnityEngine::Mesh* mesh);
    // public override System.Void SetMeshSize(UnityEngine.Mesh mesh, UnityEngine.Rect rect, System.Single depth, System.Single border, System.Single appear, VROSC.AnimatedAppear/VROSC.Mode mode)
    // Offset: 0xB262A8
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::SetMeshSize(UnityEngine.Mesh mesh, UnityEngine.Rect rect, System.Single depth, System.Single border, System.Single appear, VROSC.AnimatedAppear/VROSC.Mode mode)
    void SetMeshSize(::UnityEngine::Mesh* mesh, ::UnityEngine::Rect rect, float depth, float border, float appear, ::VROSC::AnimatedAppear::Mode mode);
  }; // VROSC.UI.Meshes.ProceduralRing
  #pragma pack(pop)
  static check_size<sizeof(ProceduralRing), 68 + sizeof(bool)> __VROSC_UI_Meshes_ProceduralRingSizeCheck;
  static_assert(sizeof(ProceduralRing) == 0x45);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralRing::get_vertexPairs
// Il2CppName: get_vertexPairs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralRing::*)()>(&VROSC::UI::Meshes::ProceduralRing::get_vertexPairs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralRing*), "get_vertexPairs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralRing::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralRing::*)()>(&VROSC::UI::Meshes::ProceduralRing::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralRing*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralRing::GetCirclePosition
// Il2CppName: GetCirclePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UI::Meshes::ProceduralRing::*)(float)>(&VROSC::UI::Meshes::ProceduralRing::GetCirclePosition)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralRing*), "GetCirclePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralRing::get_VertCount
// Il2CppName: get_VertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralRing::*)()>(&VROSC::UI::Meshes::ProceduralRing::get_VertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralRing*), "get_VertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralRing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralRing::GetSharedMeshData
// Il2CppName: GetSharedMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralRing::*)(::UnityEngine::Mesh*)>(&VROSC::UI::Meshes::ProceduralRing::GetSharedMeshData)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralRing*), "GetSharedMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralRing::SetMeshSize
// Il2CppName: SetMeshSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralRing::*)(::UnityEngine::Mesh*, ::UnityEngine::Rect, float, float, float, ::VROSC::AnimatedAppear::Mode)>(&VROSC::UI::Meshes::ProceduralRing::SetMeshSize)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* border = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* appear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralRing*), "SetMeshSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, rect, depth, border, appear, mode});
  }
};
