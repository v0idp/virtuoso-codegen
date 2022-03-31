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
  // Forward declaring type: OVRMesh
  class OVRMesh;
  // Forward declaring type: OVRSkeleton
  class OVRSkeleton;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRMeshRenderer
  class OVRMeshRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer*, "", "OVRMeshRenderer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: OVRMeshRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRMeshRenderer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider
    class IOVRMeshRendererDataProvider;
    // Nested type: ::GlobalNamespace::OVRMeshRenderer::MeshRendererData
    struct MeshRendererData;
    // Nested type: ::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior
    struct ConfidenceBehavior;
    // Nested type: ::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior
    struct SystemGestureBehavior;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRMeshRenderer/ConfidenceBehavior
    // [TokenAttribute] Offset: FFFFFFFF
    struct ConfidenceBehavior/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
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
      // static field const value: static public OVRMeshRenderer/ConfidenceBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRMeshRenderer/ConfidenceBehavior None
      static ::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior _get_None();
      // Set static field: static public OVRMeshRenderer/ConfidenceBehavior None
      static void _set_None(::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior value);
      // static field const value: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static constexpr const int ToggleRenderer = 1;
      // Get static field: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static ::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior _get_ToggleRenderer();
      // Set static field: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static void _set_ToggleRenderer(::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OVRMeshRenderer/ConfidenceBehavior
    #pragma pack(pop)
    static check_size<sizeof(OVRMeshRenderer::ConfidenceBehavior), 0 + sizeof(int)> __GlobalNamespace_OVRMeshRenderer_ConfidenceBehaviorSizeCheck;
    static_assert(sizeof(OVRMeshRenderer::ConfidenceBehavior) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRMeshRenderer/SystemGestureBehavior
    // [TokenAttribute] Offset: FFFFFFFF
    struct SystemGestureBehavior/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
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
      // static field const value: static public OVRMeshRenderer/SystemGestureBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRMeshRenderer/SystemGestureBehavior None
      static ::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior _get_None();
      // Set static field: static public OVRMeshRenderer/SystemGestureBehavior None
      static void _set_None(::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior value);
      // static field const value: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static constexpr const int SwapMaterial = 1;
      // Get static field: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static ::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior _get_SwapMaterial();
      // Set static field: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static void _set_SwapMaterial(::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OVRMeshRenderer/SystemGestureBehavior
    #pragma pack(pop)
    static check_size<sizeof(OVRMeshRenderer::SystemGestureBehavior), 0 + sizeof(int)> __GlobalNamespace_OVRMeshRenderer_SystemGestureBehaviorSizeCheck;
    static_assert(sizeof(OVRMeshRenderer::SystemGestureBehavior) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private OVRMeshRenderer/IOVRMeshRendererDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*) == 0x8);
    // private OVRMesh _ovrMesh
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRMesh* ovrMesh;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRMesh*) == 0x8);
    // private OVRSkeleton _ovrSkeleton
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRSkeleton* ovrSkeleton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeleton*) == 0x8);
    // private OVRMeshRenderer/ConfidenceBehavior _confidenceBehavior
    // Size: 0x4
    // Offset: 0x30
    ::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior confidenceBehavior;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior) == 0x4);
    // private OVRMeshRenderer/SystemGestureBehavior _systemGestureBehavior
    // Size: 0x4
    // Offset: 0x34
    ::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior systemGestureBehavior;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior) == 0x4);
    // private UnityEngine.Material _systemGestureMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* systemGestureMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _originalMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* originalMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.SkinnedMeshRenderer _skinnedMeshRenderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // private System.Boolean <IsInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool IsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x51
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x52
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Size: 0x1
    // Offset: 0x53
    bool ShouldUseSystemGestureMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private OVRMeshRenderer/IOVRMeshRendererDataProvider _dataProvider
    ::GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*& dyn__dataProvider();
    // Get instance field reference: private OVRMesh _ovrMesh
    ::GlobalNamespace::OVRMesh*& dyn__ovrMesh();
    // Get instance field reference: private OVRSkeleton _ovrSkeleton
    ::GlobalNamespace::OVRSkeleton*& dyn__ovrSkeleton();
    // Get instance field reference: private OVRMeshRenderer/ConfidenceBehavior _confidenceBehavior
    ::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior& dyn__confidenceBehavior();
    // Get instance field reference: private OVRMeshRenderer/SystemGestureBehavior _systemGestureBehavior
    ::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior& dyn__systemGestureBehavior();
    // Get instance field reference: private UnityEngine.Material _systemGestureMaterial
    ::UnityEngine::Material*& dyn__systemGestureMaterial();
    // Get instance field reference: private UnityEngine.Material _originalMaterial
    ::UnityEngine::Material*& dyn__originalMaterial();
    // Get instance field reference: private UnityEngine.SkinnedMeshRenderer _skinnedMeshRenderer
    ::UnityEngine::SkinnedMeshRenderer*& dyn__skinnedMeshRenderer();
    // Get instance field reference: private System.Boolean <IsInitialized>k__BackingField
    bool& dyn_$IsInitialized$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataValid>k__BackingField
    bool& dyn_$IsDataValid$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataHighConfidence>k__BackingField
    bool& dyn_$IsDataHighConfidence$k__BackingField();
    // Get instance field reference: private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    bool& dyn_$ShouldUseSystemGestureMaterial$k__BackingField();
    // public System.Boolean get_IsInitialized()
    // Offset: 0xB220F0
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0xB220F8
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0xB22104
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xB2210C
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xB22118
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xB22120
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0xB2212C
    bool get_ShouldUseSystemGestureMaterial();
    // private System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0xB22134
    void set_ShouldUseSystemGestureMaterial(bool value);
    // private System.Void Awake()
    // Offset: 0xB22140
    void Awake();
    // private System.Void Start()
    // Offset: 0xB22260
    void Start();
    // private System.Boolean ShouldInitialize()
    // Offset: 0xB22308
    bool ShouldInitialize();
    // private System.Void Initialize()
    // Offset: 0xB2241C
    void Initialize();
    // private System.Void Update()
    // Offset: 0xB228DC
    void Update();
    // public System.Void .ctor()
    // Offset: 0xB22BC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMeshRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRMeshRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMeshRenderer*, creationType>()));
    }
  }; // OVRMeshRenderer
  #pragma pack(pop)
  static check_size<sizeof(OVRMeshRenderer), 83 + sizeof(bool)> __GlobalNamespace_OVRMeshRendererSizeCheck;
  static_assert(sizeof(OVRMeshRenderer) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior, "", "OVRMeshRenderer/SystemGestureBehavior");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior, "", "OVRMeshRenderer/ConfidenceBehavior");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::get_IsInitialized
// Il2CppName: get_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::get_IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "get_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::set_IsInitialized
// Il2CppName: set_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::*)(bool)>(&GlobalNamespace::OVRMeshRenderer::set_IsInitialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "set_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::get_IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::*)(bool)>(&GlobalNamespace::OVRMeshRenderer::set_IsDataValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::get_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::*)(bool)>(&GlobalNamespace::OVRMeshRenderer::set_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::get_ShouldUseSystemGestureMaterial
// Il2CppName: get_ShouldUseSystemGestureMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::get_ShouldUseSystemGestureMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "get_ShouldUseSystemGestureMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::set_ShouldUseSystemGestureMaterial
// Il2CppName: set_ShouldUseSystemGestureMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::*)(bool)>(&GlobalNamespace::OVRMeshRenderer::set_ShouldUseSystemGestureMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "set_ShouldUseSystemGestureMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::ShouldInitialize
// Il2CppName: ShouldInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::ShouldInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "ShouldInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::*)()>(&GlobalNamespace::OVRMeshRenderer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
