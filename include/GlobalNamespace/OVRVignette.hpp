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
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRVignette
  class OVRVignette;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVignette);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVignette*, "", "OVRVignette");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBA
  #pragma pack(push, 1)
  // Autogenerated type: OVRVignette
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 694C8C
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class OVRVignette : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRVignette::MeshComplexityLevel
    struct MeshComplexityLevel;
    // Nested type: ::GlobalNamespace::OVRVignette::FalloffType
    struct FalloffType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRVignette/MeshComplexityLevel
    // [TokenAttribute] Offset: FFFFFFFF
    struct MeshComplexityLevel/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MeshComplexityLevel
      constexpr MeshComplexityLevel(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRVignette/MeshComplexityLevel VerySimple
      static constexpr const int VerySimple = 0;
      // Get static field: static public OVRVignette/MeshComplexityLevel VerySimple
      static ::GlobalNamespace::OVRVignette::MeshComplexityLevel _get_VerySimple();
      // Set static field: static public OVRVignette/MeshComplexityLevel VerySimple
      static void _set_VerySimple(::GlobalNamespace::OVRVignette::MeshComplexityLevel value);
      // static field const value: static public OVRVignette/MeshComplexityLevel Simple
      static constexpr const int Simple = 1;
      // Get static field: static public OVRVignette/MeshComplexityLevel Simple
      static ::GlobalNamespace::OVRVignette::MeshComplexityLevel _get_Simple();
      // Set static field: static public OVRVignette/MeshComplexityLevel Simple
      static void _set_Simple(::GlobalNamespace::OVRVignette::MeshComplexityLevel value);
      // static field const value: static public OVRVignette/MeshComplexityLevel Normal
      static constexpr const int Normal = 2;
      // Get static field: static public OVRVignette/MeshComplexityLevel Normal
      static ::GlobalNamespace::OVRVignette::MeshComplexityLevel _get_Normal();
      // Set static field: static public OVRVignette/MeshComplexityLevel Normal
      static void _set_Normal(::GlobalNamespace::OVRVignette::MeshComplexityLevel value);
      // static field const value: static public OVRVignette/MeshComplexityLevel Detailed
      static constexpr const int Detailed = 3;
      // Get static field: static public OVRVignette/MeshComplexityLevel Detailed
      static ::GlobalNamespace::OVRVignette::MeshComplexityLevel _get_Detailed();
      // Set static field: static public OVRVignette/MeshComplexityLevel Detailed
      static void _set_Detailed(::GlobalNamespace::OVRVignette::MeshComplexityLevel value);
      // static field const value: static public OVRVignette/MeshComplexityLevel VeryDetailed
      static constexpr const int VeryDetailed = 4;
      // Get static field: static public OVRVignette/MeshComplexityLevel VeryDetailed
      static ::GlobalNamespace::OVRVignette::MeshComplexityLevel _get_VeryDetailed();
      // Set static field: static public OVRVignette/MeshComplexityLevel VeryDetailed
      static void _set_VeryDetailed(::GlobalNamespace::OVRVignette::MeshComplexityLevel value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRVignette/MeshComplexityLevel
    #pragma pack(pop)
    static check_size<sizeof(OVRVignette::MeshComplexityLevel), 0 + sizeof(int)> __GlobalNamespace_OVRVignette_MeshComplexityLevelSizeCheck;
    static_assert(sizeof(OVRVignette::MeshComplexityLevel) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRVignette/FalloffType
    // [TokenAttribute] Offset: FFFFFFFF
    struct FalloffType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FalloffType
      constexpr FalloffType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRVignette/FalloffType Linear
      static constexpr const int Linear = 0;
      // Get static field: static public OVRVignette/FalloffType Linear
      static ::GlobalNamespace::OVRVignette::FalloffType _get_Linear();
      // Set static field: static public OVRVignette/FalloffType Linear
      static void _set_Linear(::GlobalNamespace::OVRVignette::FalloffType value);
      // static field const value: static public OVRVignette/FalloffType Quadratic
      static constexpr const int Quadratic = 1;
      // Get static field: static public OVRVignette/FalloffType Quadratic
      static ::GlobalNamespace::OVRVignette::FalloffType _get_Quadratic();
      // Set static field: static public OVRVignette/FalloffType Quadratic
      static void _set_Quadratic(::GlobalNamespace::OVRVignette::FalloffType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRVignette/FalloffType
    #pragma pack(pop)
    static check_size<sizeof(OVRVignette::FalloffType), 0 + sizeof(int)> __GlobalNamespace_OVRVignette_FalloffTypeSizeCheck;
    static_assert(sizeof(OVRVignette::FalloffType) == 0x4);
    public:
    // private UnityEngine.Shader VignetteShader
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Shader* VignetteShader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // [TooltipAttribute] Offset: 0x698330
    // private OVRVignette/MeshComplexityLevel MeshComplexity
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRVignette::MeshComplexityLevel MeshComplexity;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRVignette::MeshComplexityLevel) == 0x4);
    // [TooltipAttribute] Offset: 0x69837C
    // private OVRVignette/FalloffType Falloff
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::OVRVignette::FalloffType Falloff;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRVignette::FalloffType) == 0x4);
    // [TooltipAttribute] Offset: 0x6983C8
    // public System.Single VignetteFieldOfView
    // Size: 0x4
    // Offset: 0x28
    float VignetteFieldOfView;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x698400
    // public System.Single VignetteAspectRatio
    // Size: 0x4
    // Offset: 0x2C
    float VignetteAspectRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x698438
    // public System.Single VignetteFalloffDegrees
    // Size: 0x4
    // Offset: 0x30
    float VignetteFalloffDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [ColorUsageAttribute] Offset: 0x698470
    // [TooltipAttribute] Offset: 0x698470
    // public UnityEngine.Color VignetteColor
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Color VignetteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // Padding between fields: VignetteColor and: Camera
    char __padding6[0x4] = {};
    // private UnityEngine.Camera _Camera
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Camera* Camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.MeshFilter _OpaqueMeshFilter
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::MeshFilter* OpaqueMeshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshFilter _TransparentMeshFilter
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::MeshFilter* TransparentMeshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshRenderer _OpaqueMeshRenderer
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::MeshRenderer* OpaqueMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.MeshRenderer _TransparentMeshRenderer
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::MeshRenderer* TransparentMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Mesh _OpaqueMesh
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Mesh* OpaqueMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Mesh _TransparentMesh
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Mesh* TransparentMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Material _OpaqueMaterial
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Material* OpaqueMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _TransparentMaterial
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::Material* TransparentMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Int32 _ShaderScaleAndOffset0Property
    // Size: 0x4
    // Offset: 0x90
    int ShaderScaleAndOffset0Property;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _ShaderScaleAndOffset1Property
    // Size: 0x4
    // Offset: 0x94
    int ShaderScaleAndOffset1Property;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector4[] _TransparentScaleAndOffset0
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<::UnityEngine::Vector4> TransparentScaleAndOffset0;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Vector4[] _TransparentScaleAndOffset1
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<::UnityEngine::Vector4> TransparentScaleAndOffset1;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Vector4[] _OpaqueScaleAndOffset0
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<::UnityEngine::Vector4> OpaqueScaleAndOffset0;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Vector4[] _OpaqueScaleAndOffset1
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<::UnityEngine::Vector4> OpaqueScaleAndOffset1;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private System.Boolean _OpaqueVignetteVisible
    // Size: 0x1
    // Offset: 0xB8
    bool OpaqueVignetteVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _TransparentVignetteVisible
    // Size: 0x1
    // Offset: 0xB9
    bool TransparentVignetteVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.String QUADRATIC_FALLOFF
    static ::StringW _get_QUADRATIC_FALLOFF();
    // Set static field: static private readonly System.String QUADRATIC_FALLOFF
    static void _set_QUADRATIC_FALLOFF(::StringW value);
    // Get instance field reference: private UnityEngine.Shader VignetteShader
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_VignetteShader();
    // Get instance field reference: private OVRVignette/MeshComplexityLevel MeshComplexity
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRVignette::MeshComplexityLevel& dyn_MeshComplexity();
    // Get instance field reference: private OVRVignette/FalloffType Falloff
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRVignette::FalloffType& dyn_Falloff();
    // Get instance field reference: public System.Single VignetteFieldOfView
    [[deprecated("Use field access instead!")]] float& dyn_VignetteFieldOfView();
    // Get instance field reference: public System.Single VignetteAspectRatio
    [[deprecated("Use field access instead!")]] float& dyn_VignetteAspectRatio();
    // Get instance field reference: public System.Single VignetteFalloffDegrees
    [[deprecated("Use field access instead!")]] float& dyn_VignetteFalloffDegrees();
    // Get instance field reference: public UnityEngine.Color VignetteColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_VignetteColor();
    // Get instance field reference: private UnityEngine.Camera _Camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__Camera();
    // Get instance field reference: private UnityEngine.MeshFilter _OpaqueMeshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__OpaqueMeshFilter();
    // Get instance field reference: private UnityEngine.MeshFilter _TransparentMeshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__TransparentMeshFilter();
    // Get instance field reference: private UnityEngine.MeshRenderer _OpaqueMeshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__OpaqueMeshRenderer();
    // Get instance field reference: private UnityEngine.MeshRenderer _TransparentMeshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__TransparentMeshRenderer();
    // Get instance field reference: private UnityEngine.Mesh _OpaqueMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn__OpaqueMesh();
    // Get instance field reference: private UnityEngine.Mesh _TransparentMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn__TransparentMesh();
    // Get instance field reference: private UnityEngine.Material _OpaqueMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__OpaqueMaterial();
    // Get instance field reference: private UnityEngine.Material _TransparentMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__TransparentMaterial();
    // Get instance field reference: private System.Int32 _ShaderScaleAndOffset0Property
    [[deprecated("Use field access instead!")]] int& dyn__ShaderScaleAndOffset0Property();
    // Get instance field reference: private System.Int32 _ShaderScaleAndOffset1Property
    [[deprecated("Use field access instead!")]] int& dyn__ShaderScaleAndOffset1Property();
    // Get instance field reference: private UnityEngine.Vector4[] _TransparentScaleAndOffset0
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__TransparentScaleAndOffset0();
    // Get instance field reference: private UnityEngine.Vector4[] _TransparentScaleAndOffset1
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__TransparentScaleAndOffset1();
    // Get instance field reference: private UnityEngine.Vector4[] _OpaqueScaleAndOffset0
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__OpaqueScaleAndOffset0();
    // Get instance field reference: private UnityEngine.Vector4[] _OpaqueScaleAndOffset1
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__OpaqueScaleAndOffset1();
    // Get instance field reference: private System.Boolean _OpaqueVignetteVisible
    [[deprecated("Use field access instead!")]] bool& dyn__OpaqueVignetteVisible();
    // Get instance field reference: private System.Boolean _TransparentVignetteVisible
    [[deprecated("Use field access instead!")]] bool& dyn__TransparentVignetteVisible();
    // public System.Void .ctor()
    // Offset: 0x803148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVignette* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVignette::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVignette*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x8031F0
    static void _cctor();
    // private System.Int32 GetTriangleCount()
    // Offset: 0x8019BC
    int GetTriangleCount();
    // private System.Void BuildMeshes()
    // Offset: 0x8019E0
    void BuildMeshes();
    // private System.Void BuildMaterials()
    // Offset: 0x802020
    void BuildMaterials();
    // private System.Void OnEnable()
    // Offset: 0x802428
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x8024E4
    void OnDisable();
    // private System.Void Awake()
    // Offset: 0x8025EC
    void Awake();
    // private System.Void GetTanFovAndOffsetForStereoEye(UnityEngine.Camera/UnityEngine.StereoscopicEye eye, out System.Single tanFovX, out System.Single tanFovY, out System.Single offsetX, out System.Single offsetY)
    // Offset: 0x802904
    void GetTanFovAndOffsetForStereoEye(::UnityEngine::Camera::StereoscopicEye eye, ByRef<float> tanFovX, ByRef<float> tanFovY, ByRef<float> offsetX, ByRef<float> offsetY);
    // private System.Void GetTanFovAndOffsetForMonoEye(out System.Single tanFovX, out System.Single tanFovY, out System.Single offsetX, out System.Single offsetY)
    // Offset: 0x802B78
    void GetTanFovAndOffsetForMonoEye(ByRef<float> tanFovX, ByRef<float> tanFovY, ByRef<float> offsetX, ByRef<float> offsetY);
    // private System.Boolean VisibilityTest(System.Single scaleX, System.Single scaleY, System.Single offsetX, System.Single offsetY)
    // Offset: 0x802C10
    bool VisibilityTest(float scaleX, float scaleY, float offsetX, float offsetY);
    // private System.Void Update()
    // Offset: 0x802C5C
    void Update();
    // private System.Void EnableRenderers()
    // Offset: 0x803064
    void EnableRenderers();
    // private System.Void DisableRenderers()
    // Offset: 0x8025A8
    void DisableRenderers();
    // private System.Void OnPreCull()
    // Offset: 0x8030A8
    void OnPreCull();
    // private System.Void OnPostRender()
    // Offset: 0x8030AC
    void OnPostRender();
    // private System.Void OnBeginCameraRendering(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera camera)
    // Offset: 0x8030B0
    void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);
  }; // OVRVignette
  #pragma pack(pop)
  static check_size<sizeof(OVRVignette), 185 + sizeof(bool)> __GlobalNamespace_OVRVignetteSizeCheck;
  static_assert(sizeof(OVRVignette) == 0xBA);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVignette::FalloffType, "", "OVRVignette/FalloffType");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVignette::MeshComplexityLevel, "", "OVRVignette/MeshComplexityLevel");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRVignette::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::GetTriangleCount
// Il2CppName: GetTriangleCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::GetTriangleCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "GetTriangleCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::BuildMeshes
// Il2CppName: BuildMeshes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::BuildMeshes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "BuildMeshes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::BuildMaterials
// Il2CppName: BuildMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::BuildMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "BuildMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::GetTanFovAndOffsetForStereoEye
// Il2CppName: GetTanFovAndOffsetForStereoEye
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)(::UnityEngine::Camera::StereoscopicEye, ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>)>(&GlobalNamespace::OVRVignette::GetTanFovAndOffsetForStereoEye)> {
  static const MethodInfo* get() {
    static auto* eye = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera/StereoscopicEye")->byval_arg;
    static auto* tanFovX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* tanFovY = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* offsetX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* offsetY = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "GetTanFovAndOffsetForStereoEye", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eye, tanFovX, tanFovY, offsetX, offsetY});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::GetTanFovAndOffsetForMonoEye
// Il2CppName: GetTanFovAndOffsetForMonoEye
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)(ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>)>(&GlobalNamespace::OVRVignette::GetTanFovAndOffsetForMonoEye)> {
  static const MethodInfo* get() {
    static auto* tanFovX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* tanFovY = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* offsetX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* offsetY = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "GetTanFovAndOffsetForMonoEye", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tanFovX, tanFovY, offsetX, offsetY});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::VisibilityTest
// Il2CppName: VisibilityTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRVignette::*)(float, float, float, float)>(&GlobalNamespace::OVRVignette::VisibilityTest)> {
  static const MethodInfo* get() {
    static auto* scaleX = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* scaleY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offsetX = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offsetY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "VisibilityTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleX, scaleY, offsetX, offsetY});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::EnableRenderers
// Il2CppName: EnableRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::EnableRenderers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "EnableRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::DisableRenderers
// Il2CppName: DisableRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::DisableRenderers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "DisableRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::OnPreCull
// Il2CppName: OnPreCull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::OnPreCull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "OnPreCull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::OnPostRender
// Il2CppName: OnPostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)()>(&GlobalNamespace::OVRVignette::OnPostRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "OnPostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVignette::OnBeginCameraRendering
// Il2CppName: OnBeginCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVignette::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&GlobalNamespace::OVRVignette::OnBeginCameraRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVignette*), "OnBeginCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, camera});
  }
};
