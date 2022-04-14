// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
// Including type: OVRPlugin/Media/PlatformCameraMode
#include "GlobalNamespace/OVRPlugin_Media_PlatformCameraMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSpectatorModeDomeTest
  class OVRSpectatorModeDomeTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSpectatorModeDomeTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpectatorModeDomeTest*, "", "OVRSpectatorModeDomeTest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: OVRSpectatorModeDomeTest
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSpectatorModeDomeTest : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRSpectatorModeDomeTest::$TimerCoroutine$d__20
    class $TimerCoroutine$d__20;
    public:
    // private System.Boolean inited
    // Size: 0x1
    // Offset: 0x18
    bool inited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inited and: defaultExternalCamera
    char __padding0[0x7] = {};
    // public UnityEngine.Camera defaultExternalCamera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* defaultExternalCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private OVRPlugin/Fovf defaultFov
    // Size: 0x10
    // Offset: 0x28
    ::GlobalNamespace::OVRPlugin::Fovf defaultFov;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Fovf) == 0x10);
    // public UnityEngine.Transform SpectatorAnchor
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* SpectatorAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform Head
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* Head;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private OVRPlugin/Media/PlatformCameraMode camMode
    // Size: 0x4
    // Offset: 0x48
    ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode camMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode) == 0x4);
    // private System.Boolean readyToSwitch
    // Size: 0x1
    // Offset: 0x4C
    bool readyToSwitch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: readyToSwitch and: SpectatorCamera
    char __padding6[0x3] = {};
    // private UnityEngine.Transform SpectatorCamera
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* SpectatorCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single distance
    // Size: 0x4
    // Offset: 0x58
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single elevation
    // Size: 0x4
    // Offset: 0x5C
    float elevation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single polar
    // Size: 0x4
    // Offset: 0x60
    float polar;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single distance_near
    static constexpr const float distance_near = 0.5;
    // Get static field: static private System.Single distance_near
    static float _get_distance_near();
    // Set static field: static private System.Single distance_near
    static void _set_distance_near(float value);
    // static field const value: static private System.Single distance_far
    static constexpr const float distance_far = 1.2;
    // Get static field: static private System.Single distance_far
    static float _get_distance_far();
    // Set static field: static private System.Single distance_far
    static void _set_distance_far(float value);
    // static field const value: static private System.Single elevationLimit
    static constexpr const float elevationLimit = 30;
    // Get static field: static private System.Single elevationLimit
    static float _get_elevationLimit();
    // Set static field: static private System.Single elevationLimit
    static void _set_elevationLimit(float value);
    // Get instance field reference: private System.Boolean inited
    [[deprecated]] bool& dyn_inited();
    // Get instance field reference: public UnityEngine.Camera defaultExternalCamera
    [[deprecated]] ::UnityEngine::Camera*& dyn_defaultExternalCamera();
    // Get instance field reference: private OVRPlugin/Fovf defaultFov
    [[deprecated]] ::GlobalNamespace::OVRPlugin::Fovf& dyn_defaultFov();
    // Get instance field reference: public UnityEngine.Transform SpectatorAnchor
    [[deprecated]] ::UnityEngine::Transform*& dyn_SpectatorAnchor();
    // Get instance field reference: public UnityEngine.Transform Head
    [[deprecated]] ::UnityEngine::Transform*& dyn_Head();
    // Get instance field reference: private OVRPlugin/Media/PlatformCameraMode camMode
    [[deprecated]] ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode& dyn_camMode();
    // Get instance field reference: private System.Boolean readyToSwitch
    [[deprecated]] bool& dyn_readyToSwitch();
    // Get instance field reference: private UnityEngine.Transform SpectatorCamera
    [[deprecated]] ::UnityEngine::Transform*& dyn_SpectatorCamera();
    // Get instance field reference: private System.Single distance
    [[deprecated]] float& dyn_distance();
    // Get instance field reference: private System.Single elevation
    [[deprecated]] float& dyn_elevation();
    // Get instance field reference: private System.Single polar
    [[deprecated]] float& dyn_polar();
    // private System.Void Awake()
    // Offset: 0x7FFC04
    void Awake();
    // private System.Void Start()
    // Offset: 0x7FFDA0
    void Start();
    // private System.Void Initialize()
    // Offset: 0x7FFE64
    void Initialize();
    // private System.Void UpdateDefaultExternalCamera()
    // Offset: 0x8001FC
    void UpdateDefaultExternalCamera();
    // private System.Void UpdateSpectatorCameraStatus()
    // Offset: 0x800668
    void UpdateSpectatorCameraStatus();
    // private UnityEngine.Vector3 SpectatorCameraDomePosition(UnityEngine.Vector3 spectatorAnchorPosition, System.Single d, System.Single e, System.Single p)
    // Offset: 0x800E3C
    ::UnityEngine::Vector3 SpectatorCameraDomePosition(::UnityEngine::Vector3 spectatorAnchorPosition, float d, float e, float p);
    // private System.Collections.IEnumerator TimerCoroutine()
    // Offset: 0x800DD0
    ::System::Collections::IEnumerator* TimerCoroutine();
    // private System.Void Update()
    // Offset: 0x800EF0
    void Update();
    // private System.Void OnApplicationPause()
    // Offset: 0x801074
    void OnApplicationPause();
    // private System.Void OnApplicationQuit()
    // Offset: 0x8010D8
    void OnApplicationQuit();
    // public System.Void .ctor()
    // Offset: 0x80113C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSpectatorModeDomeTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSpectatorModeDomeTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSpectatorModeDomeTest*, creationType>()));
    }
  }; // OVRSpectatorModeDomeTest
  #pragma pack(pop)
  static check_size<sizeof(OVRSpectatorModeDomeTest), 96 + sizeof(float)> __GlobalNamespace_OVRSpectatorModeDomeTestSizeCheck;
  static_assert(sizeof(OVRSpectatorModeDomeTest) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::UpdateDefaultExternalCamera
// Il2CppName: UpdateDefaultExternalCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::UpdateDefaultExternalCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "UpdateDefaultExternalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::UpdateSpectatorCameraStatus
// Il2CppName: UpdateSpectatorCameraStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::UpdateSpectatorCameraStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "UpdateSpectatorCameraStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::SpectatorCameraDomePosition
// Il2CppName: SpectatorCameraDomePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::OVRSpectatorModeDomeTest::*)(::UnityEngine::Vector3, float, float, float)>(&GlobalNamespace::OVRSpectatorModeDomeTest::SpectatorCameraDomePosition)> {
  static const MethodInfo* get() {
    static auto* spectatorAnchorPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "SpectatorCameraDomePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spectatorAnchorPosition, d, e, p});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::TimerCoroutine
// Il2CppName: TimerCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::TimerCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "TimerCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::OnApplicationPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpectatorModeDomeTest::*)()>(&GlobalNamespace::OVRSpectatorModeDomeTest::OnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpectatorModeDomeTest*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpectatorModeDomeTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
