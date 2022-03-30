// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: GrabData
  class GrabData;
  // Forward declaring type: WorldTransformData
  class WorldTransformData;
  // Forward declaring type: SmoothMovement
  class SmoothMovement;
  // Forward declaring type: TransformMover
  class TransformMover;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: GrabbingDevice
  class GrabbingDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::GrabbingDevice);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GrabbingDevice*, "VROSC", "GrabbingDevice");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.GrabbingDevice
  // [TokenAttribute] Offset: FFFFFFFF
  class GrabbingDevice : public ::Il2CppObject {
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
    // private VROSC.GrabData <GrabData>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::GrabData* GrabData;
    // Field size check
    static_assert(sizeof(::VROSC::GrabData*) == 0x8);
    // private VROSC.WorldTransformData <FullAnchorData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::WorldTransformData* FullAnchorData;
    // Field size check
    static_assert(sizeof(::VROSC::WorldTransformData*) == 0x8);
    // private UnityEngine.Vector3 <AnchorPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 AnchorPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <AnchorGrabPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 AnchorGrabPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public VROSC.SmoothMovement SmoothAnchorOffset
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::SmoothMovement* SmoothAnchorOffset;
    // Field size check
    static_assert(sizeof(::VROSC::SmoothMovement*) == 0x8);
    // public VROSC.SmoothMovement SmoothPosition
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::SmoothMovement* SmoothPosition;
    // Field size check
    static_assert(sizeof(::VROSC::SmoothMovement*) == 0x8);
    // private VROSC.TransformMover _transformMover
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::TransformMover* transformMover;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMover*) == 0x8);
    // private UnityEngine.GameObject <Rotator>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* Rotator;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject <UpRightHelper>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::GameObject* UpRightHelper;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject <TransformPoint>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::GameObject* TransformPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single _grabDistance
    // Size: 0x4
    // Offset: 0x68
    float grabDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _additiveRotation
    // Size: 0x4
    // Offset: 0x6C
    float additiveRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Transform _controller
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Transform* controller;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _localGrabPositionFromObject
    // Size: 0xC
    // Offset: 0x78
    ::UnityEngine::Vector3 localGrabPositionFromObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _localGrabPositionFromController
    // Size: 0xC
    // Offset: 0x84
    ::UnityEngine::Vector3 localGrabPositionFromController;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private VROSC.GrabData <GrabData>k__BackingField
    ::VROSC::GrabData*& dyn_$GrabData$k__BackingField();
    // Get instance field reference: private VROSC.WorldTransformData <FullAnchorData>k__BackingField
    ::VROSC::WorldTransformData*& dyn_$FullAnchorData$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <AnchorPosition>k__BackingField
    ::UnityEngine::Vector3& dyn_$AnchorPosition$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <AnchorGrabPosition>k__BackingField
    ::UnityEngine::Vector3& dyn_$AnchorGrabPosition$k__BackingField();
    // Get instance field reference: public VROSC.SmoothMovement SmoothAnchorOffset
    ::VROSC::SmoothMovement*& dyn_SmoothAnchorOffset();
    // Get instance field reference: public VROSC.SmoothMovement SmoothPosition
    ::VROSC::SmoothMovement*& dyn_SmoothPosition();
    // Get instance field reference: private VROSC.TransformMover _transformMover
    ::VROSC::TransformMover*& dyn__transformMover();
    // Get instance field reference: private UnityEngine.GameObject <Rotator>k__BackingField
    ::UnityEngine::GameObject*& dyn_$Rotator$k__BackingField();
    // Get instance field reference: private UnityEngine.GameObject <UpRightHelper>k__BackingField
    ::UnityEngine::GameObject*& dyn_$UpRightHelper$k__BackingField();
    // Get instance field reference: private UnityEngine.GameObject <TransformPoint>k__BackingField
    ::UnityEngine::GameObject*& dyn_$TransformPoint$k__BackingField();
    // Get instance field reference: private System.Single _grabDistance
    float& dyn__grabDistance();
    // Get instance field reference: private System.Single _additiveRotation
    float& dyn__additiveRotation();
    // Get instance field reference: private UnityEngine.Transform _controller
    ::UnityEngine::Transform*& dyn__controller();
    // Get instance field reference: private UnityEngine.Vector3 _localGrabPositionFromObject
    ::UnityEngine::Vector3& dyn__localGrabPositionFromObject();
    // Get instance field reference: private UnityEngine.Vector3 _localGrabPositionFromController
    ::UnityEngine::Vector3& dyn__localGrabPositionFromController();
    // public VROSC.GrabData get_GrabData()
    // Offset: 0x89375C
    ::VROSC::GrabData* get_GrabData();
    // private System.Void set_GrabData(VROSC.GrabData value)
    // Offset: 0x893754
    void set_GrabData(::VROSC::GrabData* value);
    // public VROSC.InputDevice get_InputDevice()
    // Offset: 0x893764
    ::VROSC::InputDevice* get_InputDevice();
    // public VROSC.WorldTransformData get_FullAnchorData()
    // Offset: 0x893788
    ::VROSC::WorldTransformData* get_FullAnchorData();
    // private System.Void set_FullAnchorData(VROSC.WorldTransformData value)
    // Offset: 0x893780
    void set_FullAnchorData(::VROSC::WorldTransformData* value);
    // public UnityEngine.Vector3 get_AnchorPosition()
    // Offset: 0x89379C
    ::UnityEngine::Vector3 get_AnchorPosition();
    // private System.Void set_AnchorPosition(UnityEngine.Vector3 value)
    // Offset: 0x893790
    void set_AnchorPosition(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_AnchorGrabPosition()
    // Offset: 0x8937B4
    ::UnityEngine::Vector3 get_AnchorGrabPosition();
    // private System.Void set_AnchorGrabPosition(UnityEngine.Vector3 value)
    // Offset: 0x8937A8
    void set_AnchorGrabPosition(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_MoveOffset()
    // Offset: 0x8937C0
    ::UnityEngine::Vector3 get_MoveOffset();
    // public UnityEngine.Vector3 get_CurrentPosition()
    // Offset: 0x8937F4
    ::UnityEngine::Vector3 get_CurrentPosition();
    // public UnityEngine.Vector3 get_GrabPositionOnObject()
    // Offset: 0x893828
    ::UnityEngine::Vector3 get_GrabPositionOnObject();
    // public UnityEngine.GameObject get_Rotator()
    // Offset: 0x893870
    ::UnityEngine::GameObject* get_Rotator();
    // private System.Void set_Rotator(UnityEngine.GameObject value)
    // Offset: 0x893868
    void set_Rotator(::UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_UpRightHelper()
    // Offset: 0x893880
    ::UnityEngine::GameObject* get_UpRightHelper();
    // private System.Void set_UpRightHelper(UnityEngine.GameObject value)
    // Offset: 0x893878
    void set_UpRightHelper(::UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_TransformPoint()
    // Offset: 0x893890
    ::UnityEngine::GameObject* get_TransformPoint();
    // private System.Void set_TransformPoint(UnityEngine.GameObject value)
    // Offset: 0x893888
    void set_TransformPoint(::UnityEngine::GameObject* value);
    // public System.Void .ctor(VROSC.GrabData grabData, VROSC.TransformMover transformMover)
    // Offset: 0x893898
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabbingDevice* New_ctor(::VROSC::GrabData* grabData, ::VROSC::TransformMover* transformMover) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::GrabbingDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabbingDevice*, creationType>(grabData, transformMover)));
    }
    // public UnityEngine.Vector3 GetGrabPosition()
    // Offset: 0x893F30
    ::UnityEngine::Vector3 GetGrabPosition();
    // public System.Void PointHelperTowards(UnityEngine.Vector3 direction, UnityEngine.Vector3 upwards)
    // Offset: 0x893FB0
    void PointHelperTowards(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 upwards);
    // public System.Void SetAnchor()
    // Offset: 0x893C04
    void SetAnchor();
    // public System.Void Upright()
    // Offset: 0x89403C
    void Upright();
    // public System.Void Place(System.Boolean smoothed)
    // Offset: 0x894148
    void Place(bool smoothed);
    // public System.Void GrabEnd()
    // Offset: 0x8943C0
    void GrabEnd();
    // public System.Void PlaceOneHanded()
    // Offset: 0x894524
    void PlaceOneHanded();
    // private System.Void EvaluateThumbstickInput(VROSC.InputDevice device, UnityEngine.Vector2 vector)
    // Offset: 0x8946C4
    void EvaluateThumbstickInput(::VROSC::InputDevice* device, ::UnityEngine::Vector2 vector);
  }; // VROSC.GrabbingDevice
  #pragma pack(pop)
  static check_size<sizeof(GrabbingDevice), 132 + sizeof(::UnityEngine::Vector3)> __VROSC_GrabbingDeviceSizeCheck;
  static_assert(sizeof(GrabbingDevice) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_GrabData
// Il2CppName: get_GrabData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::GrabData* (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_GrabData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_GrabData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::set_GrabData
// Il2CppName: set_GrabData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::VROSC::GrabData*)>(&VROSC::GrabbingDevice::set_GrabData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "GrabData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "set_GrabData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_InputDevice
// Il2CppName: get_InputDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InputDevice* (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_InputDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_InputDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_FullAnchorData
// Il2CppName: get_FullAnchorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::WorldTransformData* (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_FullAnchorData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_FullAnchorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::set_FullAnchorData
// Il2CppName: set_FullAnchorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::VROSC::WorldTransformData*)>(&VROSC::GrabbingDevice::set_FullAnchorData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "WorldTransformData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "set_FullAnchorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_AnchorPosition
// Il2CppName: get_AnchorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_AnchorPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_AnchorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::set_AnchorPosition
// Il2CppName: set_AnchorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::UnityEngine::Vector3)>(&VROSC::GrabbingDevice::set_AnchorPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "set_AnchorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_AnchorGrabPosition
// Il2CppName: get_AnchorGrabPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_AnchorGrabPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_AnchorGrabPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::set_AnchorGrabPosition
// Il2CppName: set_AnchorGrabPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::UnityEngine::Vector3)>(&VROSC::GrabbingDevice::set_AnchorGrabPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "set_AnchorGrabPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_MoveOffset
// Il2CppName: get_MoveOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_MoveOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_MoveOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_CurrentPosition
// Il2CppName: get_CurrentPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_CurrentPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_CurrentPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_GrabPositionOnObject
// Il2CppName: get_GrabPositionOnObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_GrabPositionOnObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_GrabPositionOnObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_Rotator
// Il2CppName: get_Rotator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_Rotator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_Rotator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::set_Rotator
// Il2CppName: set_Rotator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::UnityEngine::GameObject*)>(&VROSC::GrabbingDevice::set_Rotator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "set_Rotator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_UpRightHelper
// Il2CppName: get_UpRightHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_UpRightHelper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_UpRightHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::set_UpRightHelper
// Il2CppName: set_UpRightHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::UnityEngine::GameObject*)>(&VROSC::GrabbingDevice::set_UpRightHelper)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "set_UpRightHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::get_TransformPoint
// Il2CppName: get_TransformPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::get_TransformPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "get_TransformPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::set_TransformPoint
// Il2CppName: set_TransformPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::UnityEngine::GameObject*)>(&VROSC::GrabbingDevice::set_TransformPoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "set_TransformPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::GrabbingDevice::GetGrabPosition
// Il2CppName: GetGrabPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::GetGrabPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "GetGrabPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::PointHelperTowards
// Il2CppName: PointHelperTowards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&VROSC::GrabbingDevice::PointHelperTowards)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* upwards = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "PointHelperTowards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction, upwards});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::SetAnchor
// Il2CppName: SetAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::SetAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "SetAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::Upright
// Il2CppName: Upright
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::Upright)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "Upright", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::Place
// Il2CppName: Place
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(bool)>(&VROSC::GrabbingDevice::Place)> {
  static const MethodInfo* get() {
    static auto* smoothed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "Place", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{smoothed});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::GrabEnd
// Il2CppName: GrabEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::GrabEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "GrabEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::PlaceOneHanded
// Il2CppName: PlaceOneHanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)()>(&VROSC::GrabbingDevice::PlaceOneHanded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "PlaceOneHanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GrabbingDevice::EvaluateThumbstickInput
// Il2CppName: EvaluateThumbstickInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GrabbingDevice::*)(::VROSC::InputDevice*, ::UnityEngine::Vector2)>(&VROSC::GrabbingDevice::EvaluateThumbstickInput)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GrabbingDevice*), "EvaluateThumbstickInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, vector});
  }
};