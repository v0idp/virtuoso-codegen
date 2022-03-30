// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRSkeleton
  class OVRSkeleton;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSkeletonRenderer
  class OVRSkeletonRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer*, "", "OVRSkeletonRenderer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeletonRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: 58A174
  class OVRSkeletonRenderer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider
    class IOVRSkeletonRendererDataProvider;
    // Nested type: ::GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData
    struct SkeletonRendererData;
    // Nested type: ::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior
    struct ConfidenceBehavior;
    // Nested type: ::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior
    struct SystemGestureBehavior;
    // Nested type: ::GlobalNamespace::OVRSkeletonRenderer::BoneVisualization
    class BoneVisualization;
    // Nested type: ::GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization
    class CapsuleVisualization;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: OVRSkeletonRenderer/ConfidenceBehavior
    // [TokenAttribute] Offset: FFFFFFFF
    struct ConfidenceBehavior/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ConfidenceBehavior
      constexpr ConfidenceBehavior(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRSkeletonRenderer/ConfidenceBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRSkeletonRenderer/ConfidenceBehavior None
      static ::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior _get_None();
      // Set static field: static public OVRSkeletonRenderer/ConfidenceBehavior None
      static void _set_None(::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior value);
      // static field const value: static public OVRSkeletonRenderer/ConfidenceBehavior ToggleRenderer
      static constexpr const int ToggleRenderer = 1;
      // Get static field: static public OVRSkeletonRenderer/ConfidenceBehavior ToggleRenderer
      static ::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior _get_ToggleRenderer();
      // Set static field: static public OVRSkeletonRenderer/ConfidenceBehavior ToggleRenderer
      static void _set_ToggleRenderer(::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OVRSkeletonRenderer/ConfidenceBehavior
    #pragma pack(pop)
    static check_size<sizeof(OVRSkeletonRenderer::ConfidenceBehavior), 16 + sizeof(int)> __GlobalNamespace_OVRSkeletonRenderer_ConfidenceBehaviorSizeCheck;
    static_assert(sizeof(OVRSkeletonRenderer::ConfidenceBehavior) == 0x14);
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: OVRSkeletonRenderer/SystemGestureBehavior
    // [TokenAttribute] Offset: FFFFFFFF
    struct SystemGestureBehavior/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SystemGestureBehavior
      constexpr SystemGestureBehavior(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRSkeletonRenderer/SystemGestureBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRSkeletonRenderer/SystemGestureBehavior None
      static ::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior _get_None();
      // Set static field: static public OVRSkeletonRenderer/SystemGestureBehavior None
      static void _set_None(::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior value);
      // static field const value: static public OVRSkeletonRenderer/SystemGestureBehavior SwapMaterial
      static constexpr const int SwapMaterial = 1;
      // Get static field: static public OVRSkeletonRenderer/SystemGestureBehavior SwapMaterial
      static ::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior _get_SwapMaterial();
      // Set static field: static public OVRSkeletonRenderer/SystemGestureBehavior SwapMaterial
      static void _set_SwapMaterial(::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OVRSkeletonRenderer/SystemGestureBehavior
    #pragma pack(pop)
    static check_size<sizeof(OVRSkeletonRenderer::SystemGestureBehavior), 16 + sizeof(int)> __GlobalNamespace_OVRSkeletonRenderer_SystemGestureBehaviorSizeCheck;
    static_assert(sizeof(OVRSkeletonRenderer::SystemGestureBehavior) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*) == 0x8);
    // private OVRSkeletonRenderer/ConfidenceBehavior _confidenceBehavior
    // Size: 0x14
    // Offset: 0x20
    ::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior confidenceBehavior;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior) == 0x14);
    // private OVRSkeletonRenderer/SystemGestureBehavior _systemGestureBehavior
    // Size: 0x14
    // Offset: 0x24
    ::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior systemGestureBehavior;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior) == 0x14);
    // private System.Boolean _renderPhysicsCapsules
    // Size: 0x1
    // Offset: 0x28
    bool renderPhysicsCapsules;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: renderPhysicsCapsules and: skeletonMaterial
    char __padding3[0x7] = {};
    // private UnityEngine.Material _skeletonMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* skeletonMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _skeletonDefaultMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* skeletonDefaultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _capsuleMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* capsuleMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _capsuleDefaultMaterial
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Material* capsuleDefaultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _systemGestureMaterial
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Material* systemGestureMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _systemGestureDefaultMaterial
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Material* systemGestureDefaultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Collections.Generic.List`1<OVRSkeletonRenderer/BoneVisualization> _boneVisualizations
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer::BoneVisualization*>* boneVisualizations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer::BoneVisualization*>*) == 0x8);
    // private System.Collections.Generic.List`1<OVRSkeletonRenderer/CapsuleVisualization> _capsuleVisualizations
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization*>* capsuleVisualizations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization*>*) == 0x8);
    // private OVRSkeleton _ovrSkeleton
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::OVRSkeleton* ovrSkeleton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeleton*) == 0x8);
    // private UnityEngine.GameObject _skeletonGO
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* skeletonGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single _scale
    // Size: 0x4
    // Offset: 0x80
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <IsInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x84
    bool IsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x85
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x86
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Size: 0x1
    // Offset: 0x87
    bool ShouldUseSystemGestureMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single LINE_RENDERER_WIDTH
    static constexpr const float LINE_RENDERER_WIDTH = 0.005;
    // Get static field: static private System.Single LINE_RENDERER_WIDTH
    static float _get_LINE_RENDERER_WIDTH();
    // Set static field: static private System.Single LINE_RENDERER_WIDTH
    static void _set_LINE_RENDERER_WIDTH(float value);
    // Get static field: static private readonly UnityEngine.Quaternion _capsuleRotationOffset
    static ::UnityEngine::Quaternion _get__capsuleRotationOffset();
    // Set static field: static private readonly UnityEngine.Quaternion _capsuleRotationOffset
    static void _set__capsuleRotationOffset(::UnityEngine::Quaternion value);
    // Get instance field reference: private OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider _dataProvider
    ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*& dyn__dataProvider();
    // Get instance field reference: private OVRSkeletonRenderer/ConfidenceBehavior _confidenceBehavior
    ::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior& dyn__confidenceBehavior();
    // Get instance field reference: private OVRSkeletonRenderer/SystemGestureBehavior _systemGestureBehavior
    ::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior& dyn__systemGestureBehavior();
    // Get instance field reference: private System.Boolean _renderPhysicsCapsules
    bool& dyn__renderPhysicsCapsules();
    // Get instance field reference: private UnityEngine.Material _skeletonMaterial
    ::UnityEngine::Material*& dyn__skeletonMaterial();
    // Get instance field reference: private UnityEngine.Material _skeletonDefaultMaterial
    ::UnityEngine::Material*& dyn__skeletonDefaultMaterial();
    // Get instance field reference: private UnityEngine.Material _capsuleMaterial
    ::UnityEngine::Material*& dyn__capsuleMaterial();
    // Get instance field reference: private UnityEngine.Material _capsuleDefaultMaterial
    ::UnityEngine::Material*& dyn__capsuleDefaultMaterial();
    // Get instance field reference: private UnityEngine.Material _systemGestureMaterial
    ::UnityEngine::Material*& dyn__systemGestureMaterial();
    // Get instance field reference: private UnityEngine.Material _systemGestureDefaultMaterial
    ::UnityEngine::Material*& dyn__systemGestureDefaultMaterial();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRSkeletonRenderer/BoneVisualization> _boneVisualizations
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer::BoneVisualization*>*& dyn__boneVisualizations();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRSkeletonRenderer/CapsuleVisualization> _capsuleVisualizations
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization*>*& dyn__capsuleVisualizations();
    // Get instance field reference: private OVRSkeleton _ovrSkeleton
    ::GlobalNamespace::OVRSkeleton*& dyn__ovrSkeleton();
    // Get instance field reference: private UnityEngine.GameObject _skeletonGO
    ::UnityEngine::GameObject*& dyn__skeletonGO();
    // Get instance field reference: private System.Single _scale
    float& dyn__scale();
    // Get instance field reference: private System.Boolean <IsInitialized>k__BackingField
    bool& dyn_$IsInitialized$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataValid>k__BackingField
    bool& dyn_$IsDataValid$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataHighConfidence>k__BackingField
    bool& dyn_$IsDataHighConfidence$k__BackingField();
    // Get instance field reference: private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    bool& dyn_$ShouldUseSystemGestureMaterial$k__BackingField();
    // public System.Boolean get_IsInitialized()
    // Offset: 0x6E8820
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x6E8828
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x6E8834
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x6E883C
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x6E8848
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x6E8850
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0x6E885C
    bool get_ShouldUseSystemGestureMaterial();
    // private System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0x6E8864
    void set_ShouldUseSystemGestureMaterial(bool value);
    // private System.Void Awake()
    // Offset: 0x6E8870
    void Awake();
    // private System.Void Start()
    // Offset: 0x6E8934
    void Start();
    // private System.Boolean ShouldInitialize()
    // Offset: 0x6E89EC
    bool ShouldInitialize();
    // private System.Void Initialize()
    // Offset: 0x6E8A20
    void Initialize();
    // public System.Void Update()
    // Offset: 0x6E9130
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0x6E931C
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x6E9488
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSkeletonRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSkeletonRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSkeletonRenderer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x6E9498
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRSkeletonRenderer
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeletonRenderer), 135 + sizeof(bool)> __GlobalNamespace_OVRSkeletonRendererSizeCheck;
  static_assert(sizeof(OVRSkeletonRenderer) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior, "", "OVRSkeletonRenderer/SystemGestureBehavior");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior, "", "OVRSkeletonRenderer/ConfidenceBehavior");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::get_IsInitialized
// Il2CppName: get_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::get_IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "get_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::set_IsInitialized
// Il2CppName: set_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)(bool)>(&GlobalNamespace::OVRSkeletonRenderer::set_IsInitialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "set_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::get_IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)(bool)>(&GlobalNamespace::OVRSkeletonRenderer::set_IsDataValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::get_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)(bool)>(&GlobalNamespace::OVRSkeletonRenderer::set_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::get_ShouldUseSystemGestureMaterial
// Il2CppName: get_ShouldUseSystemGestureMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::get_ShouldUseSystemGestureMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "get_ShouldUseSystemGestureMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::set_ShouldUseSystemGestureMaterial
// Il2CppName: set_ShouldUseSystemGestureMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)(bool)>(&GlobalNamespace::OVRSkeletonRenderer::set_ShouldUseSystemGestureMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "set_ShouldUseSystemGestureMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::ShouldInitialize
// Il2CppName: ShouldInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::ShouldInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "ShouldInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::*)()>(&GlobalNamespace::OVRSkeletonRenderer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSkeletonRenderer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
