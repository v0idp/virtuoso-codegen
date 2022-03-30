// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rigidbody2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rigidbody2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5B5F4C
  // [RequireComponent] Offset: 5B5F4C
  class Rigidbody2D : public ::UnityEngine::Component {
    public:
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x12F9960
    ::UnityEngine::Vector2 get_position();
    // public System.Void set_position(UnityEngine.Vector2 value)
    // Offset: 0x12F9A08
    void set_position(::UnityEngine::Vector2 value);
    // public System.Single get_rotation()
    // Offset: 0x12F9AAC
    float get_rotation();
    // public System.Void MovePosition(UnityEngine.Vector2 position)
    // Offset: 0x12F9AEC
    void MovePosition(::UnityEngine::Vector2 position);
    // public System.Void MoveRotation(System.Single angle)
    // Offset: 0x12F9B90
    void MoveRotation(float angle);
    // private System.Void MoveRotation_Angle(System.Single angle)
    // Offset: 0x12F9BE0
    void MoveRotation_Angle(float angle);
    // private System.Void get_position_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x12F99B8
    void get_position_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_position_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x12F9A5C
    void set_position_Injected(ByRef<::UnityEngine::Vector2> value);
    // private System.Void MovePosition_Injected(ref UnityEngine.Vector2 position)
    // Offset: 0x12F9B40
    void MovePosition_Injected(ByRef<::UnityEngine::Vector2> position);
  }; // UnityEngine.Rigidbody2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rigidbody2D::*)()>(&UnityEngine::Rigidbody2D::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(::UnityEngine::Vector2)>(&UnityEngine::Rigidbody2D::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rigidbody2D::*)()>(&UnityEngine::Rigidbody2D::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::MovePosition
// Il2CppName: MovePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(::UnityEngine::Vector2)>(&UnityEngine::Rigidbody2D::MovePosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "MovePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::MoveRotation
// Il2CppName: MoveRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(float)>(&UnityEngine::Rigidbody2D::MoveRotation)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "MoveRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::MoveRotation_Angle
// Il2CppName: MoveRotation_Angle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(float)>(&UnityEngine::Rigidbody2D::MoveRotation_Angle)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "MoveRotation_Angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::get_position_Injected
// Il2CppName: get_position_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Rigidbody2D::get_position_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "get_position_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::set_position_Injected
// Il2CppName: set_position_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Rigidbody2D::set_position_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "set_position_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::MovePosition_Injected
// Il2CppName: MovePosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Rigidbody2D::MovePosition_Injected)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "MovePosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};