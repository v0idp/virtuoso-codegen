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
  // Forward declaring type: ProceduralHeaderBar
  class ProceduralHeaderBar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralHeaderBar);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralHeaderBar*, "VROSC.UI.Meshes", "ProceduralHeaderBar");
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Size: 0x46
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.Meshes.ProceduralHeaderBar
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 78141C
  class ProceduralHeaderBar : public ::VROSC::UI::Meshes::ProceduralMeshData {
    public:
    public:
    // private System.Int32 _edges
    // Size: 0x4
    // Offset: 0x40
    int edges;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _buttonOnLeft
    // Size: 0x1
    // Offset: 0x44
    bool buttonOnLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _buttonOnRight
    // Size: 0x1
    // Offset: 0x45
    bool buttonOnRight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 _edges
    [[deprecated("Use field access instead!")]] int& dyn__edges();
    // Get instance field reference: private System.Boolean _buttonOnLeft
    [[deprecated("Use field access instead!")]] bool& dyn__buttonOnLeft();
    // Get instance field reference: private System.Boolean _buttonOnRight
    [[deprecated("Use field access instead!")]] bool& dyn__buttonOnRight();
    // private System.Int32 get_edgeVertexPairs()
    // Offset: 0xB230EC
    int get_edgeVertexPairs();
    // private System.Void OnValidate()
    // Offset: 0xB230F8
    void OnValidate();
    // private UnityEngine.Vector2 GetCirclePosition(System.Single count, System.Boolean first, System.Boolean flip)
    // Offset: 0xB239A0
    ::UnityEngine::Vector2 GetCirclePosition(float count, bool first, bool flip);
    // protected override System.Int32 get_VertCount()
    // Offset: 0xB230DC
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Int32 ProceduralMeshData::get_VertCount()
    int get_VertCount();
    // public System.Void .ctor()
    // Offset: 0xB23A18
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralHeaderBar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::Meshes::ProceduralHeaderBar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralHeaderBar*, creationType>()));
    }
    // protected override System.Void GetSharedMeshData(UnityEngine.Mesh mesh)
    // Offset: 0xB23110
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::GetSharedMeshData(UnityEngine.Mesh mesh)
    void GetSharedMeshData(::UnityEngine::Mesh* mesh);
    // public override System.Void SetMeshSize(UnityEngine.Mesh mesh, UnityEngine.Rect rect, System.Single depth, System.Single border, System.Single appear, VROSC.AnimatedAppear/VROSC.Mode mode)
    // Offset: 0xB234F0
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::SetMeshSize(UnityEngine.Mesh mesh, UnityEngine.Rect rect, System.Single depth, System.Single border, System.Single appear, VROSC.AnimatedAppear/VROSC.Mode mode)
    void SetMeshSize(::UnityEngine::Mesh* mesh, ::UnityEngine::Rect rect, float depth, float border, float appear, ::VROSC::AnimatedAppear::Mode mode);
  }; // VROSC.UI.Meshes.ProceduralHeaderBar
  #pragma pack(pop)
  static check_size<sizeof(ProceduralHeaderBar), 69 + sizeof(bool)> __VROSC_UI_Meshes_ProceduralHeaderBarSizeCheck;
  static_assert(sizeof(ProceduralHeaderBar) == 0x46);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralHeaderBar::get_edgeVertexPairs
// Il2CppName: get_edgeVertexPairs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralHeaderBar::*)()>(&VROSC::UI::Meshes::ProceduralHeaderBar::get_edgeVertexPairs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralHeaderBar*), "get_edgeVertexPairs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralHeaderBar::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralHeaderBar::*)()>(&VROSC::UI::Meshes::ProceduralHeaderBar::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralHeaderBar*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralHeaderBar::GetCirclePosition
// Il2CppName: GetCirclePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UI::Meshes::ProceduralHeaderBar::*)(float, bool, bool)>(&VROSC::UI::Meshes::ProceduralHeaderBar::GetCirclePosition)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flip = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralHeaderBar*), "GetCirclePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count, first, flip});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralHeaderBar::get_VertCount
// Il2CppName: get_VertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralHeaderBar::*)()>(&VROSC::UI::Meshes::ProceduralHeaderBar::get_VertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralHeaderBar*), "get_VertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralHeaderBar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralHeaderBar::GetSharedMeshData
// Il2CppName: GetSharedMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralHeaderBar::*)(::UnityEngine::Mesh*)>(&VROSC::UI::Meshes::ProceduralHeaderBar::GetSharedMeshData)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralHeaderBar*), "GetSharedMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralHeaderBar::SetMeshSize
// Il2CppName: SetMeshSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralHeaderBar::*)(::UnityEngine::Mesh*, ::UnityEngine::Rect, float, float, float, ::VROSC::AnimatedAppear::Mode)>(&VROSC::UI::Meshes::ProceduralHeaderBar::SetMeshSize)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* border = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* appear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralHeaderBar*), "SetMeshSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, rect, depth, border, appear, mode});
  }
};
