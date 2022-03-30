// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: LIV.SDK.Unity.INVALIDATION_FLAGS
#include "LIV/SDK/Unity/INVALIDATION_FLAGS.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LIV::SDK::Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKRender
  class SDKRender;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: LIV
  class LIV;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LIV::SDK::Unity::LIV);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::LIV*, "LIV.SDK.Unity", "LIV");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.LIV
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 66BDB4
  // [AddComponentMenu] Offset: 66BDB4
  class LIV : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::LIV::SDK::Unity::LIV::$WaitForUnityEndOfFrame$d__68
    class $WaitForUnityEndOfFrame$d__68;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Action onActivate
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* onActivate;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<LIV.SDK.Unity.SDKRender> onPreRender
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPreRender;
    // Field size check
    static_assert(sizeof(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*) == 0x8);
    // public System.Action`1<LIV.SDK.Unity.SDKRender> onPreRenderBackground
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPreRenderBackground;
    // Field size check
    static_assert(sizeof(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*) == 0x8);
    // public System.Action`1<LIV.SDK.Unity.SDKRender> onPostRenderBackground
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPostRenderBackground;
    // Field size check
    static_assert(sizeof(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*) == 0x8);
    // public System.Action`1<LIV.SDK.Unity.SDKRender> onPreRenderForeground
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPreRenderForeground;
    // Field size check
    static_assert(sizeof(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*) == 0x8);
    // public System.Action`1<LIV.SDK.Unity.SDKRender> onPostRenderForeground
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPostRenderForeground;
    // Field size check
    static_assert(sizeof(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*) == 0x8);
    // public System.Action`1<LIV.SDK.Unity.SDKRender> onPostRender
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPostRender;
    // Field size check
    static_assert(sizeof(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*) == 0x8);
    // public System.Action onDeactivate
    // Size: 0x8
    // Offset: 0x50
    ::System::Action* onDeactivate;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x678340
    // [TooltipAttribute] Offset: 0x678340
    // private UnityEngine.Transform _stage
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* stage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x6783B0
    // [TooltipAttribute] Offset: 0x6783B0
    // private UnityEngine.Transform _stageTransform
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Transform* stageTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x678420
    // [FormerlySerializedAsAttribute] Offset: 0x678420
    // private UnityEngine.Camera _HMDCamera
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Camera* HMDCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x678490
    // [TooltipAttribute] Offset: 0x678490
    // private UnityEngine.Camera _MRCameraPrefab
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Camera* MRCameraPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // [TooltipAttribute] Offset: 0x678500
    // [FormerlySerializedAsAttribute] Offset: 0x678500
    // private System.Boolean _disableStandardAssets
    // Size: 0x1
    // Offset: 0x78
    bool disableStandardAssets;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableStandardAssets and: spectatorLayerMask
    char __padding12[0x3] = {};
    // [TooltipAttribute] Offset: 0x678570
    // [FormerlySerializedAsAttribute] Offset: 0x678570
    // private UnityEngine.LayerMask _spectatorLayerMask
    // Size: 0x4
    // Offset: 0x7C
    ::UnityEngine::LayerMask spectatorLayerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0x6785E0
    // [TooltipAttribute] Offset: 0x6785E0
    // private System.String[] _excludeBehaviours
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::StringW> excludeBehaviours;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // [TooltipAttribute] Offset: 0x678650
    // [FormerlySerializedAsAttribute] Offset: 0x678650
    // private System.Boolean _fixPostEffectsAlpha
    // Size: 0x1
    // Offset: 0x88
    bool fixPostEffectsAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isActive
    // Size: 0x1
    // Offset: 0x89
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isActive and: render
    char __padding16[0x6] = {};
    // private LIV.SDK.Unity.SDKRender _render
    // Size: 0x8
    // Offset: 0x90
    ::LIV::SDK::Unity::SDKRender* render;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKRender*) == 0x8);
    // private System.Boolean _wasReady
    // Size: 0x1
    // Offset: 0x98
    bool wasReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: wasReady and: invalidate
    char __padding18[0x3] = {};
    // private LIV.SDK.Unity.INVALIDATION_FLAGS _invalidate
    // Size: 0x14
    // Offset: 0x9C
    ::LIV::SDK::Unity::INVALIDATION_FLAGS invalidate;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::INVALIDATION_FLAGS) == 0x14);
    // private UnityEngine.Transform _stageCandidate
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Transform* stageCandidate;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Camera _HMDCameraCandidate
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::Camera* HMDCameraCandidate;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Camera _MRCameraPrefabCandidate
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Camera* MRCameraPrefabCandidate;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private System.String[] _excludeBehavioursCandidate
    // Size: 0x8
    // Offset: 0xB8
    ::ArrayW<::StringW> excludeBehavioursCandidate;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Boolean _enabled
    // Size: 0x1
    // Offset: 0xC0
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: waitForEndOfFrameCoroutine
    char __padding24[0x7] = {};
    // private UnityEngine.Coroutine _waitForEndOfFrameCoroutine
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::Coroutine* waitForEndOfFrameCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Action onActivate
    ::System::Action*& dyn_onActivate();
    // Get instance field reference: public System.Action`1<LIV.SDK.Unity.SDKRender> onPreRender
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& dyn_onPreRender();
    // Get instance field reference: public System.Action`1<LIV.SDK.Unity.SDKRender> onPreRenderBackground
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& dyn_onPreRenderBackground();
    // Get instance field reference: public System.Action`1<LIV.SDK.Unity.SDKRender> onPostRenderBackground
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& dyn_onPostRenderBackground();
    // Get instance field reference: public System.Action`1<LIV.SDK.Unity.SDKRender> onPreRenderForeground
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& dyn_onPreRenderForeground();
    // Get instance field reference: public System.Action`1<LIV.SDK.Unity.SDKRender> onPostRenderForeground
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& dyn_onPostRenderForeground();
    // Get instance field reference: public System.Action`1<LIV.SDK.Unity.SDKRender> onPostRender
    ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& dyn_onPostRender();
    // Get instance field reference: public System.Action onDeactivate
    ::System::Action*& dyn_onDeactivate();
    // Get instance field reference: private UnityEngine.Transform _stage
    ::UnityEngine::Transform*& dyn__stage();
    // Get instance field reference: private UnityEngine.Transform _stageTransform
    ::UnityEngine::Transform*& dyn__stageTransform();
    // Get instance field reference: private UnityEngine.Camera _HMDCamera
    ::UnityEngine::Camera*& dyn__HMDCamera();
    // Get instance field reference: private UnityEngine.Camera _MRCameraPrefab
    ::UnityEngine::Camera*& dyn__MRCameraPrefab();
    // Get instance field reference: private System.Boolean _disableStandardAssets
    bool& dyn__disableStandardAssets();
    // Get instance field reference: private UnityEngine.LayerMask _spectatorLayerMask
    ::UnityEngine::LayerMask& dyn__spectatorLayerMask();
    // Get instance field reference: private System.String[] _excludeBehaviours
    ::ArrayW<::StringW>& dyn__excludeBehaviours();
    // Get instance field reference: private System.Boolean _fixPostEffectsAlpha
    bool& dyn__fixPostEffectsAlpha();
    // Get instance field reference: private System.Boolean _isActive
    bool& dyn__isActive();
    // Get instance field reference: private LIV.SDK.Unity.SDKRender _render
    ::LIV::SDK::Unity::SDKRender*& dyn__render();
    // Get instance field reference: private System.Boolean _wasReady
    bool& dyn__wasReady();
    // Get instance field reference: private LIV.SDK.Unity.INVALIDATION_FLAGS _invalidate
    ::LIV::SDK::Unity::INVALIDATION_FLAGS& dyn__invalidate();
    // Get instance field reference: private UnityEngine.Transform _stageCandidate
    ::UnityEngine::Transform*& dyn__stageCandidate();
    // Get instance field reference: private UnityEngine.Camera _HMDCameraCandidate
    ::UnityEngine::Camera*& dyn__HMDCameraCandidate();
    // Get instance field reference: private UnityEngine.Camera _MRCameraPrefabCandidate
    ::UnityEngine::Camera*& dyn__MRCameraPrefabCandidate();
    // Get instance field reference: private System.String[] _excludeBehavioursCandidate
    ::ArrayW<::StringW>& dyn__excludeBehavioursCandidate();
    // Get instance field reference: private System.Boolean _enabled
    bool& dyn__enabled();
    // Get instance field reference: private UnityEngine.Coroutine _waitForEndOfFrameCoroutine
    ::UnityEngine::Coroutine*& dyn__waitForEndOfFrameCoroutine();
    // public UnityEngine.Transform get_stage()
    // Offset: 0x138921C
    ::UnityEngine::Transform* get_stage();
    // public System.Void set_stage(UnityEngine.Transform value)
    // Offset: 0x13892B8
    void set_stage(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_trackedSpaceOrigin()
    // Offset: 0x13893CC
    ::UnityEngine::Transform* get_trackedSpaceOrigin();
    // public System.Void set_trackedSpaceOrigin(UnityEngine.Transform value)
    // Offset: 0x13893D0
    void set_trackedSpaceOrigin(::UnityEngine::Transform* value);
    // public UnityEngine.Matrix4x4 get_stageLocalToWorldMatrix()
    // Offset: 0x13893D4
    ::UnityEngine::Matrix4x4 get_stageLocalToWorldMatrix();
    // public UnityEngine.Matrix4x4 get_stageWorldToLocalMatrix()
    // Offset: 0x13894A4
    ::UnityEngine::Matrix4x4 get_stageWorldToLocalMatrix();
    // public UnityEngine.Transform get_stageTransform()
    // Offset: 0x1389574
    ::UnityEngine::Transform* get_stageTransform();
    // public System.Void set_stageTransform(UnityEngine.Transform value)
    // Offset: 0x138957C
    void set_stageTransform(::UnityEngine::Transform* value);
    // public UnityEngine.Camera get_HMDCamera()
    // Offset: 0x1389584
    ::UnityEngine::Camera* get_HMDCamera();
    // public System.Void set_HMDCamera(UnityEngine.Camera value)
    // Offset: 0x138958C
    void set_HMDCamera(::UnityEngine::Camera* value);
    // public UnityEngine.Camera get_MRCameraPrefab()
    // Offset: 0x13896A0
    ::UnityEngine::Camera* get_MRCameraPrefab();
    // public System.Void set_MRCameraPrefab(UnityEngine.Camera value)
    // Offset: 0x13896A8
    void set_MRCameraPrefab(::UnityEngine::Camera* value);
    // public System.Boolean get_disableStandardAssets()
    // Offset: 0x1389744
    bool get_disableStandardAssets();
    // public System.Void set_disableStandardAssets(System.Boolean value)
    // Offset: 0x138974C
    void set_disableStandardAssets(bool value);
    // public UnityEngine.LayerMask get_spectatorLayerMask()
    // Offset: 0x1389758
    ::UnityEngine::LayerMask get_spectatorLayerMask();
    // public System.Void set_spectatorLayerMask(UnityEngine.LayerMask value)
    // Offset: 0x1389760
    void set_spectatorLayerMask(::UnityEngine::LayerMask value);
    // public System.String[] get_excludeBehaviours()
    // Offset: 0x1389768
    ::ArrayW<::StringW> get_excludeBehaviours();
    // public System.Void set_excludeBehaviours(System.String[] value)
    // Offset: 0x1389770
    void set_excludeBehaviours(::ArrayW<::StringW> value);
    // public System.Boolean get_fixPostEffectsAlpha()
    // Offset: 0x13897B4
    bool get_fixPostEffectsAlpha();
    // public System.Void set_fixPostEffectsAlpha(System.Boolean value)
    // Offset: 0x13897BC
    void set_fixPostEffectsAlpha(bool value);
    // public System.Boolean get_isValid()
    // Offset: 0x13897C8
    bool get_isValid();
    // public System.Boolean get_isActive()
    // Offset: 0x1389964
    bool get_isActive();
    // private System.Boolean get__isReady()
    // Offset: 0x138996C
    bool get__isReady();
    // public LIV.SDK.Unity.SDKRender get_render()
    // Offset: 0x13899F0
    ::LIV::SDK::Unity::SDKRender* get_render();
    // private System.Void OnEnable()
    // Offset: 0x13899F8
    void OnEnable();
    // private System.Void Update()
    // Offset: 0x1389A5C
    void Update();
    // private System.Void OnDisable()
    // Offset: 0x1389B94
    void OnDisable();
    // private System.Collections.IEnumerator WaitForUnityEndOfFrame()
    // Offset: 0x1389B9C
    ::System::Collections::IEnumerator* WaitForUnityEndOfFrame();
    // private System.Void UpdateSDKReady()
    // Offset: 0x1389A04
    void UpdateSDKReady();
    // private System.Void OnSDKReadyChanged(System.Boolean value)
    // Offset: 0x1389C08
    void OnSDKReadyChanged(bool value);
    // private System.Void OnSDKActivate()
    // Offset: 0x1389C14
    void OnSDKActivate();
    // private System.Void OnSDKDeactivate()
    // Offset: 0x1389CC4
    void OnSDKDeactivate();
    // private System.Void CreateAssets()
    // Offset: 0x1389F00
    void CreateAssets();
    // private System.Void DestroyAssets()
    // Offset: 0x1389FF4
    void DestroyAssets();
    // private System.Void StartRenderCoroutine()
    // Offset: 0x1389F74
    void StartRenderCoroutine();
    // private System.Void StopRenderCoroutine()
    // Offset: 0x1389FC4
    void StopRenderCoroutine();
    // private System.Void SubmitSDKOutput()
    // Offset: 0x1389D80
    void SubmitSDKOutput();
    // private System.Void Invalidate()
    // Offset: 0x1389A80
    void Invalidate();
    // public System.Void .ctor()
    // Offset: 0x138A024
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LIV* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::LIV::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LIV*, creationType>()));
    }
  }; // LIV.SDK.Unity.LIV
  #pragma pack(pop)
  static check_size<sizeof(LIV), 200 + sizeof(::UnityEngine::Coroutine*)> __LIV_SDK_Unity_LIVSizeCheck;
  static_assert(sizeof(LIV) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_stage
// Il2CppName: get_stage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_stage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_stage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_stage
// Il2CppName: set_stage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(::UnityEngine::Transform*)>(&LIV::SDK::Unity::LIV::set_stage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_stage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_trackedSpaceOrigin
// Il2CppName: get_trackedSpaceOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_trackedSpaceOrigin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_trackedSpaceOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_trackedSpaceOrigin
// Il2CppName: set_trackedSpaceOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(::UnityEngine::Transform*)>(&LIV::SDK::Unity::LIV::set_trackedSpaceOrigin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_trackedSpaceOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_stageLocalToWorldMatrix
// Il2CppName: get_stageLocalToWorldMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_stageLocalToWorldMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_stageLocalToWorldMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_stageWorldToLocalMatrix
// Il2CppName: get_stageWorldToLocalMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_stageWorldToLocalMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_stageWorldToLocalMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_stageTransform
// Il2CppName: get_stageTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_stageTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_stageTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_stageTransform
// Il2CppName: set_stageTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(::UnityEngine::Transform*)>(&LIV::SDK::Unity::LIV::set_stageTransform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_stageTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_HMDCamera
// Il2CppName: get_HMDCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_HMDCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_HMDCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_HMDCamera
// Il2CppName: set_HMDCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(::UnityEngine::Camera*)>(&LIV::SDK::Unity::LIV::set_HMDCamera)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_HMDCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_MRCameraPrefab
// Il2CppName: get_MRCameraPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_MRCameraPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_MRCameraPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_MRCameraPrefab
// Il2CppName: set_MRCameraPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(::UnityEngine::Camera*)>(&LIV::SDK::Unity::LIV::set_MRCameraPrefab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_MRCameraPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_disableStandardAssets
// Il2CppName: get_disableStandardAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_disableStandardAssets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_disableStandardAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_disableStandardAssets
// Il2CppName: set_disableStandardAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(bool)>(&LIV::SDK::Unity::LIV::set_disableStandardAssets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_disableStandardAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_spectatorLayerMask
// Il2CppName: get_spectatorLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_spectatorLayerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_spectatorLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_spectatorLayerMask
// Il2CppName: set_spectatorLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(::UnityEngine::LayerMask)>(&LIV::SDK::Unity::LIV::set_spectatorLayerMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_spectatorLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_excludeBehaviours
// Il2CppName: get_excludeBehaviours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_excludeBehaviours)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_excludeBehaviours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_excludeBehaviours
// Il2CppName: set_excludeBehaviours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(::ArrayW<::StringW>)>(&LIV::SDK::Unity::LIV::set_excludeBehaviours)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_excludeBehaviours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_fixPostEffectsAlpha
// Il2CppName: get_fixPostEffectsAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_fixPostEffectsAlpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_fixPostEffectsAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::set_fixPostEffectsAlpha
// Il2CppName: set_fixPostEffectsAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(bool)>(&LIV::SDK::Unity::LIV::set_fixPostEffectsAlpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "set_fixPostEffectsAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_isActive
// Il2CppName: get_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_isActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get__isReady
// Il2CppName: get__isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get__isReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get__isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::get_render
// Il2CppName: get_render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKRender* (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::get_render)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "get_render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::WaitForUnityEndOfFrame
// Il2CppName: WaitForUnityEndOfFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::WaitForUnityEndOfFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "WaitForUnityEndOfFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::UpdateSDKReady
// Il2CppName: UpdateSDKReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::UpdateSDKReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "UpdateSDKReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::OnSDKReadyChanged
// Il2CppName: OnSDKReadyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)(bool)>(&LIV::SDK::Unity::LIV::OnSDKReadyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "OnSDKReadyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::OnSDKActivate
// Il2CppName: OnSDKActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::OnSDKActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "OnSDKActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::OnSDKDeactivate
// Il2CppName: OnSDKDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::OnSDKDeactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "OnSDKDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::CreateAssets
// Il2CppName: CreateAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::CreateAssets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "CreateAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::DestroyAssets
// Il2CppName: DestroyAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::DestroyAssets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "DestroyAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::StartRenderCoroutine
// Il2CppName: StartRenderCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::StartRenderCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "StartRenderCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::StopRenderCoroutine
// Il2CppName: StopRenderCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::StopRenderCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "StopRenderCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::SubmitSDKOutput
// Il2CppName: SubmitSDKOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::SubmitSDKOutput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "SubmitSDKOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::Invalidate
// Il2CppName: Invalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::LIV::*)()>(&LIV::SDK::Unity::LIV::Invalidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::LIV*), "Invalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::LIV::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
