// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: CollisionDetectionMode
  struct CollisionDetectionMode;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: ForceMode
  struct ForceMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rigidbody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rigidbody
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5AE04C
  // [RequireComponent] Offset: 5AE04C
  class Rigidbody : public ::UnityEngine::Component {
    public:
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x12ECF84
    ::UnityEngine::Vector3 get_velocity();
    // public System.Void set_velocity(UnityEngine.Vector3 value)
    // Offset: 0x12ED034
    void set_velocity(::UnityEngine::Vector3 value);
    // public System.Void set_angularVelocity(UnityEngine.Vector3 value)
    // Offset: 0x12ED0DC
    void set_angularVelocity(::UnityEngine::Vector3 value);
    // public System.Single get_drag()
    // Offset: 0x12ED184
    float get_drag();
    // public System.Void set_mass(System.Single value)
    // Offset: 0x12ED1C4
    void set_mass(float value);
    // public System.Boolean get_useGravity()
    // Offset: 0x12ED214
    bool get_useGravity();
    // public System.Void set_useGravity(System.Boolean value)
    // Offset: 0x12ED254
    void set_useGravity(bool value);
    // public System.Boolean get_isKinematic()
    // Offset: 0x12ED2A4
    bool get_isKinematic();
    // public System.Void set_isKinematic(System.Boolean value)
    // Offset: 0x12ED2E4
    void set_isKinematic(bool value);
    // public System.Void set_freezeRotation(System.Boolean value)
    // Offset: 0x12ED334
    void set_freezeRotation(bool value);
    // public System.Void set_collisionDetectionMode(UnityEngine.CollisionDetectionMode value)
    // Offset: 0x12ED384
    void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);
    // public System.Void set_detectCollisions(System.Boolean value)
    // Offset: 0x12ED3D4
    void set_detectCollisions(bool value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x12ED424
    ::UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x12ED4D4
    void set_position(::UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x12ED57C
    ::UnityEngine::Quaternion get_rotation();
    // public System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x12ED628
    void set_rotation(::UnityEngine::Quaternion value);
    // public System.Void set_sleepThreshold(System.Single value)
    // Offset: 0x12ED6D0
    void set_sleepThreshold(float value);
    // public System.Void set_maxAngularVelocity(System.Single value)
    // Offset: 0x12ED720
    void set_maxAngularVelocity(float value);
    // public System.Void MovePosition(UnityEngine.Vector3 position)
    // Offset: 0x12ED770
    void MovePosition(::UnityEngine::Vector3 position);
    // public System.Void MoveRotation(UnityEngine.Quaternion rot)
    // Offset: 0x12ED818
    void MoveRotation(::UnityEngine::Quaternion rot);
    // public System.Void AddForce(UnityEngine.Vector3 force, UnityEngine.ForceMode mode)
    // Offset: 0x12ED8C0
    void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);
    // public System.Void AddForce(UnityEngine.Vector3 force)
    // Offset: 0x12ED980
    void AddForce(::UnityEngine::Vector3 force);
    // public System.Void AddTorque(UnityEngine.Vector3 torque, UnityEngine.ForceMode mode)
    // Offset: 0x12ED988
    void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);
    // public System.Void AddTorque(UnityEngine.Vector3 torque)
    // Offset: 0x12EDA48
    void AddTorque(::UnityEngine::Vector3 torque);
    // private System.Void get_velocity_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x12ECFE4
    void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);
    // private System.Void set_velocity_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x12ED08C
    void set_velocity_Injected(ByRef<::UnityEngine::Vector3> value);
    // private System.Void set_angularVelocity_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x12ED134
    void set_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> value);
    // private System.Void get_position_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x12ED484
    void get_position_Injected(ByRef<::UnityEngine::Vector3> ret);
    // private System.Void set_position_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x12ED52C
    void set_position_Injected(ByRef<::UnityEngine::Vector3> value);
    // private System.Void get_rotation_Injected(out UnityEngine.Quaternion ret)
    // Offset: 0x12ED5D8
    void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret);
    // private System.Void set_rotation_Injected(ref UnityEngine.Quaternion value)
    // Offset: 0x12ED680
    void set_rotation_Injected(ByRef<::UnityEngine::Quaternion> value);
    // private System.Void MovePosition_Injected(ref UnityEngine.Vector3 position)
    // Offset: 0x12ED7C8
    void MovePosition_Injected(ByRef<::UnityEngine::Vector3> position);
    // private System.Void MoveRotation_Injected(ref UnityEngine.Quaternion rot)
    // Offset: 0x12ED870
    void MoveRotation_Injected(ByRef<::UnityEngine::Quaternion> rot);
    // private System.Void AddForce_Injected(ref UnityEngine.Vector3 force, UnityEngine.ForceMode mode)
    // Offset: 0x12ED928
    void AddForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);
    // private System.Void AddTorque_Injected(ref UnityEngine.Vector3 torque, UnityEngine.ForceMode mode)
    // Offset: 0x12ED9F0
    void AddTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);
    // public System.Void .ctor()
    // Offset: 0x12EDA50
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Rigidbody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rigidbody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Rigidbody*, creationType>()));
    }
  }; // UnityEngine.Rigidbody
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_velocity
// Il2CppName: set_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Vector3)>(&UnityEngine::Rigidbody::set_velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_angularVelocity
// Il2CppName: set_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Vector3)>(&UnityEngine::Rigidbody::set_angularVelocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_drag
// Il2CppName: get_drag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_drag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_drag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_mass
// Il2CppName: set_mass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(float)>(&UnityEngine::Rigidbody::set_mass)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_mass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_useGravity
// Il2CppName: get_useGravity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_useGravity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_useGravity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_useGravity
// Il2CppName: set_useGravity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(bool)>(&UnityEngine::Rigidbody::set_useGravity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_useGravity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_isKinematic
// Il2CppName: get_isKinematic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_isKinematic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_isKinematic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_isKinematic
// Il2CppName: set_isKinematic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(bool)>(&UnityEngine::Rigidbody::set_isKinematic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_isKinematic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_freezeRotation
// Il2CppName: set_freezeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(bool)>(&UnityEngine::Rigidbody::set_freezeRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_freezeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_collisionDetectionMode
// Il2CppName: set_collisionDetectionMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::CollisionDetectionMode)>(&UnityEngine::Rigidbody::set_collisionDetectionMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "CollisionDetectionMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_collisionDetectionMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_detectCollisions
// Il2CppName: set_detectCollisions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(bool)>(&UnityEngine::Rigidbody::set_detectCollisions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_detectCollisions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Vector3)>(&UnityEngine::Rigidbody::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Quaternion)>(&UnityEngine::Rigidbody::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_sleepThreshold
// Il2CppName: set_sleepThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(float)>(&UnityEngine::Rigidbody::set_sleepThreshold)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_sleepThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_maxAngularVelocity
// Il2CppName: set_maxAngularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(float)>(&UnityEngine::Rigidbody::set_maxAngularVelocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_maxAngularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::MovePosition
// Il2CppName: MovePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Vector3)>(&UnityEngine::Rigidbody::MovePosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "MovePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::MoveRotation
// Il2CppName: MoveRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Quaternion)>(&UnityEngine::Rigidbody::MoveRotation)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "MoveRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddForce
// Il2CppName: AddForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::ForceMode)>(&UnityEngine::Rigidbody::AddForce)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ForceMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddForce
// Il2CppName: AddForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Vector3)>(&UnityEngine::Rigidbody::AddForce)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddTorque
// Il2CppName: AddTorque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::ForceMode)>(&UnityEngine::Rigidbody::AddTorque)> {
  static const MethodInfo* get() {
    static auto* torque = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ForceMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddTorque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{torque, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddTorque
// Il2CppName: AddTorque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(::UnityEngine::Vector3)>(&UnityEngine::Rigidbody::AddTorque)> {
  static const MethodInfo* get() {
    static auto* torque = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddTorque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{torque});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_velocity_Injected
// Il2CppName: get_velocity_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Rigidbody::get_velocity_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_velocity_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_velocity_Injected
// Il2CppName: set_velocity_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Rigidbody::set_velocity_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_velocity_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_angularVelocity_Injected
// Il2CppName: set_angularVelocity_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Rigidbody::set_angularVelocity_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_angularVelocity_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_position_Injected
// Il2CppName: get_position_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Rigidbody::get_position_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_position_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_position_Injected
// Il2CppName: set_position_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Rigidbody::set_position_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_position_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_rotation_Injected
// Il2CppName: get_rotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Rigidbody::get_rotation_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_rotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_rotation_Injected
// Il2CppName: set_rotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Rigidbody::set_rotation_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_rotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::MovePosition_Injected
// Il2CppName: MovePosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Rigidbody::MovePosition_Injected)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "MovePosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::MoveRotation_Injected
// Il2CppName: MoveRotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Rigidbody::MoveRotation_Injected)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "MoveRotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddForce_Injected
// Il2CppName: AddForce_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(&UnityEngine::Rigidbody::AddForce_Injected)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ForceMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddForce_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddTorque_Injected
// Il2CppName: AddTorque_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(ByRef<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(&UnityEngine::Rigidbody::AddTorque_Injected)> {
  static const MethodInfo* get() {
    static auto* torque = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ForceMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddTorque_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{torque, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!