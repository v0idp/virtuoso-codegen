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
  // Forward declaring type: ProceduralColorPicker
  class ProceduralColorPicker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralColorPicker);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralColorPicker*, "VROSC.UI.Meshes", "ProceduralColorPicker");
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.Meshes.ProceduralColorPicker
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 7813C8
  class ProceduralColorPicker : public ::VROSC::UI::Meshes::ProceduralMeshData {
    public:
    public:
    // private System.Int32 _edges
    // Size: 0x4
    // Offset: 0x40
    int edges;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [RangeAttribute] Offset: 0x78E004
    // private System.Single _outerSaturation
    // Size: 0x4
    // Offset: 0x44
    float outerSaturation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x78E044
    // private System.Single _outerValue
    // Size: 0x4
    // Offset: 0x48
    float outerValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x78E084
    // private System.Single _centerSaturation
    // Size: 0x4
    // Offset: 0x4C
    float centerSaturation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x78E0C4
    // private System.Single _centerValue
    // Size: 0x4
    // Offset: 0x50
    float centerValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Int32 _edges
    [[deprecated]] int& dyn__edges();
    // Get instance field reference: private System.Single _outerSaturation
    [[deprecated]] float& dyn__outerSaturation();
    // Get instance field reference: private System.Single _outerValue
    [[deprecated]] float& dyn__outerValue();
    // Get instance field reference: private System.Single _centerSaturation
    [[deprecated]] float& dyn__centerSaturation();
    // Get instance field reference: private System.Single _centerValue
    [[deprecated]] float& dyn__centerValue();
    // private System.Int32 GetVertexCount()
    // Offset: 0xB229A0
    int GetVertexCount();
    // private System.Void OnValidate()
    // Offset: 0xB229AC
    void OnValidate();
    // private UnityEngine.Vector2 GetCirclePosition(System.Single count)
    // Offset: 0xB23074
    ::UnityEngine::Vector2 GetCirclePosition(float count);
    // protected override System.Int32 get_VertCount()
    // Offset: 0xB22994
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Int32 ProceduralMeshData::get_VertCount()
    int get_VertCount();
    // public System.Void .ctor()
    // Offset: 0xB230CC
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralColorPicker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::Meshes::ProceduralColorPicker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralColorPicker*, creationType>()));
    }
    // protected override System.Void GetSharedMeshData(UnityEngine.Mesh mesh)
    // Offset: 0xB229C4
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::GetSharedMeshData(UnityEngine.Mesh mesh)
    void GetSharedMeshData(::UnityEngine::Mesh* mesh);
    // public override System.Void SetMeshSize(UnityEngine.Mesh mesh, UnityEngine.Rect rect, System.Single depth, System.Single border, System.Single appear, VROSC.AnimatedAppear/VROSC.Mode mode)
    // Offset: 0xB22D70
    // Implemented from: VROSC.UI.Meshes.ProceduralMeshData
    // Base method: System.Void ProceduralMeshData::SetMeshSize(UnityEngine.Mesh mesh, UnityEngine.Rect rect, System.Single depth, System.Single border, System.Single appear, VROSC.AnimatedAppear/VROSC.Mode mode)
    void SetMeshSize(::UnityEngine::Mesh* mesh, ::UnityEngine::Rect rect, float depth, float border, float appear, ::VROSC::AnimatedAppear::Mode mode);
  }; // VROSC.UI.Meshes.ProceduralColorPicker
  #pragma pack(pop)
  static check_size<sizeof(ProceduralColorPicker), 80 + sizeof(float)> __VROSC_UI_Meshes_ProceduralColorPickerSizeCheck;
  static_assert(sizeof(ProceduralColorPicker) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralColorPicker::GetVertexCount
// Il2CppName: GetVertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralColorPicker::*)()>(&VROSC::UI::Meshes::ProceduralColorPicker::GetVertexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralColorPicker*), "GetVertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralColorPicker::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralColorPicker::*)()>(&VROSC::UI::Meshes::ProceduralColorPicker::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralColorPicker*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralColorPicker::GetCirclePosition
// Il2CppName: GetCirclePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UI::Meshes::ProceduralColorPicker::*)(float)>(&VROSC::UI::Meshes::ProceduralColorPicker::GetCirclePosition)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralColorPicker*), "GetCirclePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralColorPicker::get_VertCount
// Il2CppName: get_VertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UI::Meshes::ProceduralColorPicker::*)()>(&VROSC::UI::Meshes::ProceduralColorPicker::get_VertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralColorPicker*), "get_VertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralColorPicker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralColorPicker::GetSharedMeshData
// Il2CppName: GetSharedMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralColorPicker::*)(::UnityEngine::Mesh*)>(&VROSC::UI::Meshes::ProceduralColorPicker::GetSharedMeshData)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralColorPicker*), "GetSharedMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::ProceduralColorPicker::SetMeshSize
// Il2CppName: SetMeshSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::ProceduralColorPicker::*)(::UnityEngine::Mesh*, ::UnityEngine::Rect, float, float, float, ::VROSC::AnimatedAppear::Mode)>(&VROSC::UI::Meshes::ProceduralColorPicker::SetMeshSize)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* border = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* appear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::ProceduralColorPicker*), "SetMeshSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, rect, depth, border, appear, mode});
  }
};
