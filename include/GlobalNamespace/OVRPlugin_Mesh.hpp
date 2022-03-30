// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/MeshType
#include "GlobalNamespace/OVRPlugin_MeshType.hpp"
// Including type: OVRPlugin/Vector3f
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Including type: OVRPlugin/Vector4s
#include "GlobalNamespace/OVRPlugin_Vector4s.hpp"
// Including type: OVRPlugin/Vector4f
#include "GlobalNamespace/OVRPlugin_Vector4f.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::Mesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Mesh*, "", "OVRPlugin/Mesh");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Mesh
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::Mesh : public ::Il2CppObject {
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
    // public OVRPlugin/MeshType Type
    // Size: 0x14
    // Offset: 0x10
    ::GlobalNamespace::OVRPlugin::MeshType Type;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::MeshType) == 0x14);
    // public System.UInt32 NumVertices
    // Size: 0x4
    // Offset: 0x14
    uint NumVertices;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 NumIndices
    // Size: 0x4
    // Offset: 0x18
    uint NumIndices;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: NumIndices and: VertexPositions
    char __padding2[0x4] = {};
    // public OVRPlugin/Vector3f[] VertexPositions
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f> VertexPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>) == 0x8);
    // public System.Int16[] Indices
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int16_t> Indices;
    // Field size check
    static_assert(sizeof(::ArrayW<int16_t>) == 0x8);
    // public OVRPlugin/Vector3f[] VertexNormals
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f> VertexNormals;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>) == 0x8);
    // public OVRPlugin/Vector2f[] VertexUV0
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector2f> VertexUV0;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Vector2f>) == 0x8);
    // public OVRPlugin/Vector4s[] BlendIndices
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector4s> BlendIndices;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Vector4s>) == 0x8);
    // public OVRPlugin/Vector4f[] BlendWeights
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector4f> BlendWeights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Vector4f>) == 0x8);
    public:
    // Get instance field reference: public OVRPlugin/MeshType Type
    ::GlobalNamespace::OVRPlugin::MeshType& dyn_Type();
    // Get instance field reference: public System.UInt32 NumVertices
    uint& dyn_NumVertices();
    // Get instance field reference: public System.UInt32 NumIndices
    uint& dyn_NumIndices();
    // Get instance field reference: public OVRPlugin/Vector3f[] VertexPositions
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>& dyn_VertexPositions();
    // Get instance field reference: public System.Int16[] Indices
    ::ArrayW<int16_t>& dyn_Indices();
    // Get instance field reference: public OVRPlugin/Vector3f[] VertexNormals
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>& dyn_VertexNormals();
    // Get instance field reference: public OVRPlugin/Vector2f[] VertexUV0
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector2f>& dyn_VertexUV0();
    // Get instance field reference: public OVRPlugin/Vector4s[] BlendIndices
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector4s>& dyn_BlendIndices();
    // Get instance field reference: public OVRPlugin/Vector4f[] BlendWeights
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector4f>& dyn_BlendWeights();
    // public System.Void .ctor()
    // Offset: 0xF09754
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlugin::Mesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRPlugin::Mesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlugin::Mesh*, creationType>()));
    }
  }; // OVRPlugin/Mesh
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Mesh), 72 + sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Vector4f>)> __GlobalNamespace_OVRPlugin_MeshSizeCheck;
  static_assert(sizeof(OVRPlugin::Mesh) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Mesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
