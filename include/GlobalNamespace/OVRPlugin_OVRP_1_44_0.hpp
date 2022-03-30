// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_44_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_44_0*, "", "OVRPlugin/OVRP_1_44_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_44_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_44_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0xF0FDE4
    static void _cctor();
    // static public OVRPlugin/Result ovrp_GetHandTrackingEnabled(ref OVRPlugin/Bool handTrackingEnabled)
    // Offset: 0xF0F780
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetHandTrackingEnabled(ByRef<::GlobalNamespace::OVRPlugin::Bool> handTrackingEnabled);
    // static public OVRPlugin/Result ovrp_GetHandState(OVRPlugin/Step stepId, OVRPlugin/Hand hand, out OVRPlugin/HandStateInternal handState)
    // Offset: 0xF0F800
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetHandState(::GlobalNamespace::OVRPlugin::Step stepId, ::GlobalNamespace::OVRPlugin::Hand hand, ByRef<::GlobalNamespace::OVRPlugin::HandStateInternal> handState);
    // static public OVRPlugin/Result ovrp_GetSkeleton(OVRPlugin/SkeletonType skeletonType, out OVRPlugin/Skeleton skeleton)
    // Offset: 0xF0F898
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetSkeleton(::GlobalNamespace::OVRPlugin::SkeletonType skeletonType, ByRef<::GlobalNamespace::OVRPlugin::Skeleton> skeleton);
    // static public OVRPlugin/Result ovrp_GetMesh(OVRPlugin/MeshType meshType, System.IntPtr meshPtr)
    // Offset: 0xF0F964
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetMesh(::GlobalNamespace::OVRPlugin::MeshType meshType, ::System::IntPtr meshPtr);
    // static public OVRPlugin/Result ovrp_OverrideExternalCameraFov(System.Int32 cameraId, OVRPlugin/Bool useOverriddenFov, ref OVRPlugin/Fovf fov)
    // Offset: 0xF0F9F0
    static ::GlobalNamespace::OVRPlugin::Result ovrp_OverrideExternalCameraFov(int cameraId, ::GlobalNamespace::OVRPlugin::Bool useOverriddenFov, ByRef<::GlobalNamespace::OVRPlugin::Fovf> fov);
    // static public OVRPlugin/Result ovrp_GetUseOverriddenExternalCameraFov(System.Int32 cameraId, out OVRPlugin/Bool useOverriddenFov)
    // Offset: 0xF0FA88
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetUseOverriddenExternalCameraFov(int cameraId, ByRef<::GlobalNamespace::OVRPlugin::Bool> useOverriddenFov);
    // static public OVRPlugin/Result ovrp_OverrideExternalCameraStaticPose(System.Int32 cameraId, OVRPlugin/Bool useOverriddenPose, ref OVRPlugin/Posef poseInStageOrigin)
    // Offset: 0xF0FB18
    static ::GlobalNamespace::OVRPlugin::Result ovrp_OverrideExternalCameraStaticPose(int cameraId, ::GlobalNamespace::OVRPlugin::Bool useOverriddenPose, ByRef<::GlobalNamespace::OVRPlugin::Posef> poseInStageOrigin);
    // static public OVRPlugin/Result ovrp_GetUseOverriddenExternalCameraStaticPose(System.Int32 cameraId, out OVRPlugin/Bool useOverriddenStaticPose)
    // Offset: 0xF0FBB0
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetUseOverriddenExternalCameraStaticPose(int cameraId, ByRef<::GlobalNamespace::OVRPlugin::Bool> useOverriddenStaticPose);
    // static public OVRPlugin/Result ovrp_ResetDefaultExternalCamera()
    // Offset: 0xF0FC40
    static ::GlobalNamespace::OVRPlugin::Result ovrp_ResetDefaultExternalCamera();
    // static public OVRPlugin/Result ovrp_SetDefaultExternalCamera(System.String cameraName, ref OVRPlugin/CameraIntrinsics cameraIntrinsics, ref OVRPlugin/CameraExtrinsics cameraExtrinsics)
    // Offset: 0xF0FCB4
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetDefaultExternalCamera(::StringW cameraName, ByRef<::GlobalNamespace::OVRPlugin::CameraIntrinsics> cameraIntrinsics, ByRef<::GlobalNamespace::OVRPlugin::CameraExtrinsics> cameraExtrinsics);
    // static public OVRPlugin/Result ovrp_GetLocalTrackingSpaceRecenterCount(ref System.Int32 recenterCount)
    // Offset: 0xF0FD64
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetLocalTrackingSpaceRecenterCount(ByRef<int> recenterCount);
  }; // OVRPlugin/OVRP_1_44_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetHandTrackingEnabled
// Il2CppName: ovrp_GetHandTrackingEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetHandTrackingEnabled)> {
  static const MethodInfo* get() {
    static auto* handTrackingEnabled = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_GetHandTrackingEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handTrackingEnabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetHandState
// Il2CppName: ovrp_GetHandState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Step, ::GlobalNamespace::OVRPlugin::Hand, ByRef<::GlobalNamespace::OVRPlugin::HandStateInternal>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetHandState)> {
  static const MethodInfo* get() {
    static auto* stepId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Step")->byval_arg;
    static auto* hand = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Hand")->byval_arg;
    static auto* handState = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/HandStateInternal")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_GetHandState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stepId, hand, handState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetSkeleton
// Il2CppName: ovrp_GetSkeleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::SkeletonType, ByRef<::GlobalNamespace::OVRPlugin::Skeleton>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetSkeleton)> {
  static const MethodInfo* get() {
    static auto* skeletonType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/SkeletonType")->byval_arg;
    static auto* skeleton = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Skeleton")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_GetSkeleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skeletonType, skeleton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetMesh
// Il2CppName: ovrp_GetMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::MeshType, ::System::IntPtr)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetMesh)> {
  static const MethodInfo* get() {
    static auto* meshType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/MeshType")->byval_arg;
    static auto* meshPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_GetMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshType, meshPtr});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_OverrideExternalCameraFov
// Il2CppName: ovrp_OverrideExternalCameraFov
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, ::GlobalNamespace::OVRPlugin::Bool, ByRef<::GlobalNamespace::OVRPlugin::Fovf>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_OverrideExternalCameraFov)> {
  static const MethodInfo* get() {
    static auto* cameraId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* useOverriddenFov = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    static auto* fov = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Fovf")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_OverrideExternalCameraFov", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraId, useOverriddenFov, fov});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetUseOverriddenExternalCameraFov
// Il2CppName: ovrp_GetUseOverriddenExternalCameraFov
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetUseOverriddenExternalCameraFov)> {
  static const MethodInfo* get() {
    static auto* cameraId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* useOverriddenFov = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_GetUseOverriddenExternalCameraFov", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraId, useOverriddenFov});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_OverrideExternalCameraStaticPose
// Il2CppName: ovrp_OverrideExternalCameraStaticPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, ::GlobalNamespace::OVRPlugin::Bool, ByRef<::GlobalNamespace::OVRPlugin::Posef>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_OverrideExternalCameraStaticPose)> {
  static const MethodInfo* get() {
    static auto* cameraId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* useOverriddenPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    static auto* poseInStageOrigin = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_OverrideExternalCameraStaticPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraId, useOverriddenPose, poseInStageOrigin});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetUseOverriddenExternalCameraStaticPose
// Il2CppName: ovrp_GetUseOverriddenExternalCameraStaticPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetUseOverriddenExternalCameraStaticPose)> {
  static const MethodInfo* get() {
    static auto* cameraId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* useOverriddenStaticPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_GetUseOverriddenExternalCameraStaticPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraId, useOverriddenStaticPose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_ResetDefaultExternalCamera
// Il2CppName: ovrp_ResetDefaultExternalCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_ResetDefaultExternalCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_ResetDefaultExternalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_SetDefaultExternalCamera
// Il2CppName: ovrp_SetDefaultExternalCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::StringW, ByRef<::GlobalNamespace::OVRPlugin::CameraIntrinsics>, ByRef<::GlobalNamespace::OVRPlugin::CameraExtrinsics>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_SetDefaultExternalCamera)> {
  static const MethodInfo* get() {
    static auto* cameraName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cameraIntrinsics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraIntrinsics")->this_arg;
    static auto* cameraExtrinsics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraExtrinsics")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_SetDefaultExternalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraName, cameraIntrinsics, cameraExtrinsics});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetLocalTrackingSpaceRecenterCount
// Il2CppName: ovrp_GetLocalTrackingSpaceRecenterCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_44_0::ovrp_GetLocalTrackingSpaceRecenterCount)> {
  static const MethodInfo* get() {
    static auto* recenterCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_44_0*), "ovrp_GetLocalTrackingSpaceRecenterCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recenterCount});
  }
};
