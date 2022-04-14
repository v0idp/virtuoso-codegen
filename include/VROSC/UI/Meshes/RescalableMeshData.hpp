// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI::Meshes
namespace VROSC::UI::Meshes {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: RescalableMeshData
  class RescalableMeshData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::Meshes::RescalableMeshData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::RescalableMeshData*, "VROSC.UI.Meshes", "RescalableMeshData");
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.Meshes.RescalableMeshData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 781120
  class RescalableMeshData : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::VROSC::UI::Meshes::RescalableMeshData::VertexData
    class VertexData;
    // Nested type: ::VROSC::UI::Meshes::RescalableMeshData::$$c
    class $$c;
    public:
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private System.Single _height
    // Size: 0x4
    // Offset: 0x20
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x24
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _flipX
    // Size: 0x1
    // Offset: 0x28
    bool flipX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _flipY
    // Size: 0x1
    // Offset: 0x29
    bool flipY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: flipY and: data
    char __padding4[0x6] = {};
    // private VROSC.UI.Meshes.RescalableMeshData/VROSC.UI.Meshes.VertexData[] _data
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::VROSC::UI::Meshes::RescalableMeshData::VertexData*> data;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::UI::Meshes::RescalableMeshData::VertexData*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Mesh _mesh
    [[deprecated]] ::UnityEngine::Mesh*& dyn__mesh();
    // Get instance field reference: private System.Single _height
    [[deprecated]] float& dyn__height();
    // Get instance field reference: private System.Single _width
    [[deprecated]] float& dyn__width();
    // Get instance field reference: private System.Boolean _flipX
    [[deprecated]] bool& dyn__flipX();
    // Get instance field reference: private System.Boolean _flipY
    [[deprecated]] bool& dyn__flipY();
    // Get instance field reference: private VROSC.UI.Meshes.RescalableMeshData/VROSC.UI.Meshes.VertexData[] _data
    [[deprecated]] ::ArrayW<::VROSC::UI::Meshes::RescalableMeshData::VertexData*>& dyn__data();
    // public UnityEngine.Mesh get_Mesh()
    // Offset: 0xB335FC
    ::UnityEngine::Mesh* get_Mesh();
    // public System.Single get_Width()
    // Offset: 0xB33604
    float get_Width();
    // public System.Single get_Height()
    // Offset: 0xB3360C
    float get_Height();
    // public System.Void GetScaledMesh(UnityEngine.Vector3[] positions, System.Single targetWidth, System.Single targetHeight)
    // Offset: 0xB334BC
    void GetScaledMesh(::ArrayW<::UnityEngine::Vector3> positions, float targetWidth, float targetHeight);
    // public System.Void Analyze()
    // Offset: 0xB33614
    void Analyze();
    // public System.Void .ctor()
    // Offset: 0xB33B38
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RescalableMeshData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::Meshes::RescalableMeshData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RescalableMeshData*, creationType>()));
    }
  }; // VROSC.UI.Meshes.RescalableMeshData
  #pragma pack(pop)
  static check_size<sizeof(RescalableMeshData), 48 + sizeof(::ArrayW<::VROSC::UI::Meshes::RescalableMeshData::VertexData*>)> __VROSC_UI_Meshes_RescalableMeshDataSizeCheck;
  static_assert(sizeof(RescalableMeshData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMeshData::get_Mesh
// Il2CppName: get_Mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (VROSC::UI::Meshes::RescalableMeshData::*)()>(&VROSC::UI::Meshes::RescalableMeshData::get_Mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMeshData*), "get_Mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMeshData::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UI::Meshes::RescalableMeshData::*)()>(&VROSC::UI::Meshes::RescalableMeshData::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMeshData*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMeshData::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UI::Meshes::RescalableMeshData::*)()>(&VROSC::UI::Meshes::RescalableMeshData::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMeshData*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMeshData::GetScaledMesh
// Il2CppName: GetScaledMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::RescalableMeshData::*)(::ArrayW<::UnityEngine::Vector3>, float, float)>(&VROSC::UI::Meshes::RescalableMeshData::GetScaledMesh)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* targetWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMeshData*), "GetScaledMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, targetWidth, targetHeight});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMeshData::Analyze
// Il2CppName: Analyze
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::RescalableMeshData::*)()>(&VROSC::UI::Meshes::RescalableMeshData::Analyze)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMeshData*), "Analyze", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMeshData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
