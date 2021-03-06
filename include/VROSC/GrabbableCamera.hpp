// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SpectatorCameraAnchor
  class SpectatorCameraAnchor;
  // Forward declaring type: SpectatorCameraController
  class SpectatorCameraController;
  // Forward declaring type: TransformMover
  class TransformMover;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: GrabbableCamera
  class GrabbableCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::GrabbableCamera);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GrabbableCamera*, "VROSC", "GrabbableCamera");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.GrabbableCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class GrabbableCamera : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.SpectatorCameraAnchor _anchor
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SpectatorCameraAnchor* anchor;
    // Field size check
    static_assert(sizeof(::VROSC::SpectatorCameraAnchor*) == 0x8);
    // private VROSC.SpectatorCameraController _spectatorCameraController
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::SpectatorCameraController* spectatorCameraController;
    // Field size check
    static_assert(sizeof(::VROSC::SpectatorCameraController*) == 0x8);
    // private VROSC.TransformMover _transformMover
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::TransformMover* transformMover;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMover*) == 0x8);
    // private UnityEngine.GameObject _cameraMushroom
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* cameraMushroom;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Vector3 _startOffset
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 startOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _startRotation
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 startRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _isActive
    // Size: 0x1
    // Offset: 0x50
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isCreating
    // Size: 0x1
    // Offset: 0x51
    bool isCreating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.SpectatorCameraAnchor _anchor
    [[deprecated("Use field access instead!")]] ::VROSC::SpectatorCameraAnchor*& dyn__anchor();
    // Get instance field reference: private VROSC.SpectatorCameraController _spectatorCameraController
    [[deprecated("Use field access instead!")]] ::VROSC::SpectatorCameraController*& dyn__spectatorCameraController();
    // Get instance field reference: private VROSC.TransformMover _transformMover
    [[deprecated("Use field access instead!")]] ::VROSC::TransformMover*& dyn__transformMover();
    // Get instance field reference: private UnityEngine.GameObject _cameraMushroom
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__cameraMushroom();
    // Get instance field reference: private UnityEngine.Vector3 _startOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__startOffset();
    // Get instance field reference: private UnityEngine.Vector3 _startRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__startRotation();
    // Get instance field reference: private System.Boolean _isActive
    [[deprecated("Use field access instead!")]] bool& dyn__isActive();
    // Get instance field reference: private System.Boolean _isCreating
    [[deprecated("Use field access instead!")]] bool& dyn__isCreating();
    // public System.Void .ctor()
    // Offset: 0x19A6578
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabbableCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::GrabbableCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabbableCamera*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x19A5C3C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x19A5EE8
    void OnDestroy();
    // public System.Void ResetPosition()
    // Offset: 0x19A6184
    void ResetPosition();
    // private System.Void CreatingStarted()
    // Offset: 0x19A62F4
    void CreatingStarted();
    // private System.Void AnchorActivated(System.Boolean active)
    // Offset: 0x19A6330
    void AnchorActivated(bool active);
    // private System.Void SaveTransformData(VROSC.TransformMover transformMover)
    // Offset: 0x19A64D8
    void SaveTransformData(::VROSC::TransformMover* transformMover);
    // private System.Void UserDataLoaded(VROSC.UserDataControllers user)
    // Offset: 0x19A6548
    void UserDataLoaded(::VROSC::UserDataControllers* user);
  }; // VROSC.GrabbableCamera
  #pragma pack(pop)
  static check_size<sizeof(GrabbableCamera), 81 + sizeof(bool)> __VROSC_GrabbableCameraSizeCheck;
  static_assert(sizeof(GrabbableCamera) == 0x52);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::GrabbableCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::GrabbableCamera::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbableCamera::*)()>(&VROSC::GrabbableCamera::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbableCamera*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbableCamera::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbableCamera::*)()>(&VROSC::GrabbableCamera::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbableCamera*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbableCamera::ResetPosition
// Il2CppName: ResetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbableCamera::*)()>(&VROSC::GrabbableCamera::ResetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbableCamera*), "ResetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbableCamera::CreatingStarted
// Il2CppName: CreatingStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbableCamera::*)()>(&VROSC::GrabbableCamera::CreatingStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbableCamera*), "CreatingStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbableCamera::AnchorActivated
// Il2CppName: AnchorActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbableCamera::*)(bool)>(&VROSC::GrabbableCamera::AnchorActivated)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbableCamera*), "AnchorActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbableCamera::SaveTransformData
// Il2CppName: SaveTransformData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbableCamera::*)(::VROSC::TransformMover*)>(&VROSC::GrabbableCamera::SaveTransformData)> {
  static const MethodInfo* get() {
    static auto* transformMover = &::il2cpp_utils::GetClassFromName("VROSC", "TransformMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbableCamera*), "SaveTransformData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformMover});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbableCamera::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbableCamera::*)(::VROSC::UserDataControllers*)>(&VROSC::GrabbableCamera::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbableCamera*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
