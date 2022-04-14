// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: ProceduralArc
  class ProceduralArc;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralArc);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralArc*, "VROSC.UI.Meshes", "ProceduralArc");
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.Meshes.ProceduralArc
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 781228
  // [RequireComponent] Offset: 781228
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class ProceduralArc : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 _edges
    // Size: 0x4
    // Offset: 0x18
    int edges;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _depth
    // Size: 0x4
    // Offset: 0x1C
    float depth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x20
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _startColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color startColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // Padding between fields: startColor and: rectTransform
    char __padding3[0x4] = {};
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.Vector3[] _vertices
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Vector3> vertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] _normals
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector3> normals;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Color[] _colors
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Color> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Int32[] _tris
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<int> tris;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private UnityEngine.Vector2[] _uv
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Vector2> uv;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _edges
    [[deprecated]] int& dyn__edges();
    // Get instance field reference: private System.Single _depth
    [[deprecated]] float& dyn__depth();
    // Get instance field reference: private System.Single _width
    [[deprecated]] float& dyn__width();
    // Get instance field reference: private UnityEngine.Color _startColor
    [[deprecated]] ::UnityEngine::Color& dyn__startColor();
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    [[deprecated]] ::UnityEngine::RectTransform*& dyn__rectTransform();
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    [[deprecated]] ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: private UnityEngine.Vector3[] _vertices
    [[deprecated]] ::ArrayW<::UnityEngine::Vector3>& dyn__vertices();
    // Get instance field reference: private UnityEngine.Vector3[] _normals
    [[deprecated]] ::ArrayW<::UnityEngine::Vector3>& dyn__normals();
    // Get instance field reference: private UnityEngine.Color[] _colors
    [[deprecated]] ::ArrayW<::UnityEngine::Color>& dyn__colors();
    // Get instance field reference: private System.Int32[] _tris
    [[deprecated]] ::ArrayW<int>& dyn__tris();
    // Get instance field reference: private UnityEngine.Vector2[] _uv
    [[deprecated]] ::ArrayW<::UnityEngine::Vector2>& dyn__uv();
    // Get instance field reference: private UnityEngine.Mesh _mesh
    [[deprecated]] ::UnityEngine::Mesh*& dyn__mesh();
    // private System.Int32 get__vertexPairs()
    // Offset: 0xAE70E0
    int get__vertexPairs();
    // private System.Int32 get__vertCount()
    // Offset: 0xAE70EC
    int get__vertCount();
    // private System.Void GetRequiredCompontents()
    // Offset: 0xAE70FC
    void GetRequiredCompontents();
    // public System.Void Create()
    // Offset: 0xAE7200
    void Create();
    // private System.Void Generate()
    // Offset: 0xAE72B4
    void Generate();
    // public System.Void UpdateVerts(System.Single from, System.Single to)
    // Offset: 0xAE76C0
    void UpdateVerts(float from, float to);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0xAE7938
    void SetColor(::UnityEngine::Color color);
    // private UnityEngine.Vector2 GetCirclePosition(System.Single progress)
    // Offset: 0xAE78EC
    ::UnityEngine::Vector2 GetCirclePosition(float progress);
    // public System.Void .ctor()
    // Offset: 0xAE79C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralArc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::Meshes::ProceduralArc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralArc*, creationType>()));
    }
  }; // VROSC.UI.Meshes.ProceduralArc
  #pragma pack(pop)
  static check_size<sizeof(ProceduralArc), 112 + sizeof(::UnityEngine::Mesh*)> __VROSC_UI_Meshes_ProceduralArcSizeCheck;
  static_assert(sizeof(ProceduralArc) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::get__vertexPairs
// Il2CppName: get__vertexPairs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralArc::*)()>(&VROSC::UI::Meshes::ProceduralArc::get__vertexPairs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralArc*), "get__vertexPairs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::get__vertCount
// Il2CppName: get__vertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralArc::*)()>(&VROSC::UI::Meshes::ProceduralArc::get__vertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralArc*), "get__vertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::GetRequiredCompontents
// Il2CppName: GetRequiredCompontents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralArc::*)()>(&VROSC::UI::Meshes::ProceduralArc::GetRequiredCompontents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralArc*), "GetRequiredCompontents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralArc::*)()>(&VROSC::UI::Meshes::ProceduralArc::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralArc*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::Generate
// Il2CppName: Generate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralArc::*)()>(&VROSC::UI::Meshes::ProceduralArc::Generate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralArc*), "Generate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::UpdateVerts
// Il2CppName: UpdateVerts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralArc::*)(float, float)>(&VROSC::UI::Meshes::ProceduralArc::UpdateVerts)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralArc*), "UpdateVerts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralArc::*)(::UnityEngine::Color)>(&VROSC::UI::Meshes::ProceduralArc::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralArc*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::GetCirclePosition
// Il2CppName: GetCirclePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UI::Meshes::ProceduralArc::*)(float)>(&VROSC::UI::Meshes::ProceduralArc::GetCirclePosition)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralArc*), "GetCirclePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralArc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
