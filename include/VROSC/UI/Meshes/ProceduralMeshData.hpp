// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: VROSC.AnimatedAppear
#include "VROSC/AnimatedAppear.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: ProceduralMeshData
  class ProceduralMeshData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralMeshData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralMeshData*, "VROSC.UI.Meshes", "ProceduralMeshData");
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.Meshes.ProceduralMeshData
  // [TokenAttribute] Offset: FFFFFFFF
  class ProceduralMeshData : public ::UnityEngine::ScriptableObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // protected System.Int32 _meshDataExistsForVertCount
    // Size: 0x4
    // Offset: 0x18
    int meshDataExistsForVertCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: meshDataExistsForVertCount and: normals
    char __padding0[0x4] = {};
    // protected UnityEngine.Vector3[] _normals
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector3> normals;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // protected UnityEngine.Color[] _colors
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Color> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // protected System.Int32[] _tris
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> tris;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // protected UnityEngine.Vector2[] _uv
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Vector2> uv;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected System.Int32 _meshDataExistsForVertCount
    int& dyn__meshDataExistsForVertCount();
    // Get instance field reference: protected UnityEngine.Vector3[] _normals
    ::ArrayW<::UnityEngine::Vector3>& dyn__normals();
    // Get instance field reference: protected UnityEngine.Color[] _colors
    ::ArrayW<::UnityEngine::Color>& dyn__colors();
    // Get instance field reference: protected System.Int32[] _tris
    ::ArrayW<int>& dyn__tris();
    // Get instance field reference: protected UnityEngine.Vector2[] _uv
    ::ArrayW<::UnityEngine::Vector2>& dyn__uv();
    // protected System.Int32 get_VertCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_VertCount();
    // public UnityEngine.Mesh GenerateMesh(UnityEngine.Rect rect, System.Single depth, System.Single border)
    // Offset: 0x98828C
    ::UnityEngine::Mesh* GenerateMesh(::UnityEngine::Rect rect, float depth, float border);
    // protected System.Void GetSharedMeshData(UnityEngine.Mesh mesh)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetSharedMeshData(::UnityEngine::Mesh* mesh);
    // public System.Void SetMeshSize(UnityEngine.Mesh mesh, UnityEngine.Rect rect, System.Single depth, System.Single border, System.Single appear, VROSC.AnimatedAppear/VROSC.Mode mode)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetMeshSize(::UnityEngine::Mesh* mesh, ::UnityEngine::Rect rect, float depth, float border, float appear, ::VROSC::AnimatedAppear::Mode mode);
    // public System.Boolean Verify(UnityEngine.Mesh mesh)
    // Offset: 0x98895C
    bool Verify(::UnityEngine::Mesh* mesh);
    // public UnityEngine.Vector2[] FlatMapUV(UnityEngine.Mesh mesh, UnityEngine.Rect rect)
    // Offset: 0x9883F4
    ::ArrayW<::UnityEngine::Vector2> FlatMapUV(::UnityEngine::Mesh* mesh, ::UnityEngine::Rect rect);
    // public System.Void RebuildData()
    // Offset: 0x98CE74
    void RebuildData();
    // protected UnityEngine.Rect AnimateFromCenter(UnityEngine.Rect rect, System.Single appear)
    // Offset: 0x98B1E8
    ::UnityEngine::Rect AnimateFromCenter(::UnityEngine::Rect rect, float appear);
    // protected System.Void .ctor()
    // Offset: 0x989E50
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralMeshData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::Meshes::ProceduralMeshData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralMeshData*, creationType>()));
    }
  }; // VROSC.UI.Meshes.ProceduralMeshData
  #pragma pack(pop)
  static check_size<sizeof(ProceduralMeshData), 56 + sizeof(::ArrayW<::UnityEngine::Vector2>)> __VROSC_UI_Meshes_ProceduralMeshDataSizeCheck;
  static_assert(sizeof(ProceduralMeshData) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::get_VertCount
// Il2CppName: get_VertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralMeshData::*)()>(&VROSC::UI::Meshes::ProceduralMeshData::get_VertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralMeshData*), "get_VertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::GenerateMesh
// Il2CppName: GenerateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (VROSC::UI::Meshes::ProceduralMeshData::*)(::UnityEngine::Rect, float, float)>(&VROSC::UI::Meshes::ProceduralMeshData::GenerateMesh)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* border = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralMeshData*), "GenerateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, depth, border});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::GetSharedMeshData
// Il2CppName: GetSharedMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralMeshData::*)(::UnityEngine::Mesh*)>(&VROSC::UI::Meshes::ProceduralMeshData::GetSharedMeshData)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralMeshData*), "GetSharedMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::SetMeshSize
// Il2CppName: SetMeshSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralMeshData::*)(::UnityEngine::Mesh*, ::UnityEngine::Rect, float, float, float, ::VROSC::AnimatedAppear::Mode)>(&VROSC::UI::Meshes::ProceduralMeshData::SetMeshSize)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* border = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* appear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralMeshData*), "SetMeshSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, rect, depth, border, appear, mode});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::Verify
// Il2CppName: Verify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UI::Meshes::ProceduralMeshData::*)(::UnityEngine::Mesh*)>(&VROSC::UI::Meshes::ProceduralMeshData::Verify)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralMeshData*), "Verify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::FlatMapUV
// Il2CppName: FlatMapUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (VROSC::UI::Meshes::ProceduralMeshData::*)(::UnityEngine::Mesh*, ::UnityEngine::Rect)>(&VROSC::UI::Meshes::ProceduralMeshData::FlatMapUV)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralMeshData*), "FlatMapUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, rect});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::RebuildData
// Il2CppName: RebuildData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralMeshData::*)()>(&VROSC::UI::Meshes::ProceduralMeshData::RebuildData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralMeshData*), "RebuildData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::AnimateFromCenter
// Il2CppName: AnimateFromCenter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (VROSC::UI::Meshes::ProceduralMeshData::*)(::UnityEngine::Rect, float)>(&VROSC::UI::Meshes::ProceduralMeshData::AnimateFromCenter)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* appear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralMeshData*), "AnimateFromCenter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, appear});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralMeshData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
