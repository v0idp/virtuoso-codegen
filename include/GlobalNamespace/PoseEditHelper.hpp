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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PoseEditHelper
  class PoseEditHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PoseEditHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseEditHelper*, "", "PoseEditHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PoseEditHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class PoseEditHelper : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform poseRoot
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* poseRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform poseRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_poseRoot();
    // public System.Void .ctor()
    // Offset: 0xAE2AFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoseEditHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PoseEditHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoseEditHelper*, creationType>()));
    }
    // private System.Void OnDrawGizmos()
    // Offset: 0xAE2900
    void OnDrawGizmos();
    // private System.Void DrawJoints(UnityEngine.Transform joint)
    // Offset: 0xAE2988
    void DrawJoints(::UnityEngine::Transform* joint);
  }; // PoseEditHelper
  #pragma pack(pop)
  static check_size<sizeof(PoseEditHelper), 24 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_PoseEditHelperSizeCheck;
  static_assert(sizeof(PoseEditHelper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PoseEditHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PoseEditHelper::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoseEditHelper::*)()>(&GlobalNamespace::PoseEditHelper::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseEditHelper*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseEditHelper::DrawJoints
// Il2CppName: DrawJoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoseEditHelper::*)(::UnityEngine::Transform*)>(&GlobalNamespace::PoseEditHelper::DrawJoints)> {
  static const MethodInfo* get() {
    static auto* joint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseEditHelper*), "DrawJoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joint});
  }
};
