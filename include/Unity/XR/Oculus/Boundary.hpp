// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::XR::Oculus
namespace Unity::XR::Oculus {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Forward declaring type: Boundary
  class Boundary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::Boundary);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Boundary*, "Unity.XR.Oculus", "Boundary");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.Boundary
  // [TokenAttribute] Offset: FFFFFFFF
  class Boundary : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::XR::Oculus::Boundary::BoundaryType
    struct BoundaryType;
    // static public System.Boolean GetBoundaryConfigured()
    // Offset: 0x18DB7C8
    static bool GetBoundaryConfigured();
    // static public System.Boolean GetBoundaryDimensions(Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType boundaryType, out UnityEngine.Vector3 dimensions)
    // Offset: 0x18DB7D0
    static bool GetBoundaryDimensions(::Unity::XR::Oculus::Boundary::BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions);
    // static public System.Boolean GetBoundaryVisible()
    // Offset: 0x18DB7D8
    static bool GetBoundaryVisible();
    // static public System.Void SetBoundaryVisible(System.Boolean boundaryVisible)
    // Offset: 0x18DB7E0
    static void SetBoundaryVisible(bool boundaryVisible);
  }; // Unity.XR.Oculus.Boundary
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::Boundary::GetBoundaryConfigured
// Il2CppName: GetBoundaryConfigured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Boundary::GetBoundaryConfigured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Boundary*), "GetBoundaryConfigured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Boundary::GetBoundaryDimensions
// Il2CppName: GetBoundaryDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::Boundary::BoundaryType, ByRef<::UnityEngine::Vector3>)>(&Unity::XR::Oculus::Boundary::GetBoundaryDimensions)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "Boundary/BoundaryType")->byval_arg;
    static auto* dimensions = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Boundary*), "GetBoundaryDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType, dimensions});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Boundary::GetBoundaryVisible
// Il2CppName: GetBoundaryVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Boundary::GetBoundaryVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Boundary*), "GetBoundaryVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Boundary::SetBoundaryVisible
// Il2CppName: SetBoundaryVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::Boundary::SetBoundaryVisible)> {
  static const MethodInfo* get() {
    static auto* boundaryVisible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Boundary*), "SetBoundaryVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryVisible});
  }
};
