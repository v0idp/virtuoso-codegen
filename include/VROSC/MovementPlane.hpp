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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MovementPlane
  class MovementPlane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MovementPlane);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MovementPlane*, "VROSC", "MovementPlane");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MovementPlane
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 669ED0
  class MovementPlane : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    ::UnityEngine::RectTransform*& dyn__rectTransform();
    // private System.Void Awake()
    // Offset: 0xA08BA0
    void Awake();
    // public UnityEngine.Vector3 PlaceOnPlane(UnityEngine.Transform target, System.Single height)
    // Offset: 0xA08510
    ::UnityEngine::Vector3 PlaceOnPlane(::UnityEngine::Transform* target, float height);
    // public UnityEngine.Vector3 ConstrainOnPlane(UnityEngine.RectTransform target, System.Single height)
    // Offset: 0xA08710
    ::UnityEngine::Vector3 ConstrainOnPlane(::UnityEngine::RectTransform* target, float height);
    // public UnityEngine.Vector3 GetPointOnPlane(UnityEngine.Transform raySource, out System.Boolean hit)
    // Offset: 0xA0897C
    ::UnityEngine::Vector3 GetPointOnPlane(::UnityEngine::Transform* raySource, ByRef<bool> hit);
    // private System.Void OnDrawGizmos()
    // Offset: 0xA08BF4
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0xA08D00
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovementPlane* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MovementPlane::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovementPlane*, creationType>()));
    }
  }; // VROSC.MovementPlane
  #pragma pack(pop)
  static check_size<sizeof(MovementPlane), 24 + sizeof(::UnityEngine::RectTransform*)> __VROSC_MovementPlaneSizeCheck;
  static_assert(sizeof(MovementPlane) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MovementPlane::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MovementPlane::*)()>(&VROSC::MovementPlane::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MovementPlane*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MovementPlane::PlaceOnPlane
// Il2CppName: PlaceOnPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::MovementPlane::*)(::UnityEngine::Transform*, float)>(&VROSC::MovementPlane::PlaceOnPlane)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MovementPlane*), "PlaceOnPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, height});
  }
};
// Writing MetadataGetter for method: VROSC::MovementPlane::ConstrainOnPlane
// Il2CppName: ConstrainOnPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::MovementPlane::*)(::UnityEngine::RectTransform*, float)>(&VROSC::MovementPlane::ConstrainOnPlane)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MovementPlane*), "ConstrainOnPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, height});
  }
};
// Writing MetadataGetter for method: VROSC::MovementPlane::GetPointOnPlane
// Il2CppName: GetPointOnPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::MovementPlane::*)(::UnityEngine::Transform*, ByRef<bool>)>(&VROSC::MovementPlane::GetPointOnPlane)> {
  static const MethodInfo* get() {
    static auto* raySource = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MovementPlane*), "GetPointOnPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raySource, hit});
  }
};
// Writing MetadataGetter for method: VROSC::MovementPlane::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MovementPlane::*)()>(&VROSC::MovementPlane::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MovementPlane*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MovementPlane::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
