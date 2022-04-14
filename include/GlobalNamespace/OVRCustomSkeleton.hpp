// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRCustomSkeleton
  class OVRCustomSkeleton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRCustomSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomSkeleton*, "", "OVRCustomSkeleton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: OVRCustomSkeleton
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: 694AB8
  class OVRCustomSkeleton : public ::GlobalNamespace::OVRSkeleton {
    public:
    public:
    // private System.Boolean _applyBoneTranslations
    // Size: 0x1
    // Offset: 0xB4
    bool applyBoneTranslations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: applyBoneTranslations and: customBones_V2
    char __padding0[0x3] = {};
    // private System.Collections.Generic.List`1<UnityEngine.Transform> _customBones_V2
    // Size: 0x8
    // Offset: 0xB8
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* customBones_V2;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean _applyBoneTranslations
    [[deprecated]] bool& dyn__applyBoneTranslations();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Transform> _customBones_V2
    [[deprecated]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn__customBones_V2();
    // public System.Collections.Generic.List`1<UnityEngine.Transform> get_CustomBones()
    // Offset: 0x996AE4
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_CustomBones();
    // public System.Void .ctor()
    // Offset: 0x996DE8
    // Implemented from: OVRSkeleton
    // Base method: System.Void OVRSkeleton::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCustomSkeleton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRCustomSkeleton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCustomSkeleton*, creationType>()));
    }
    // protected override System.Void InitializeBones()
    // Offset: 0x996AEC
    // Implemented from: OVRSkeleton
    // Base method: System.Void OVRSkeleton::InitializeBones()
    void InitializeBones();
  }; // OVRCustomSkeleton
  #pragma pack(pop)
  static check_size<sizeof(OVRCustomSkeleton), 184 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*)> __GlobalNamespace_OVRCustomSkeletonSizeCheck;
  static_assert(sizeof(OVRCustomSkeleton) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::get_CustomBones
// Il2CppName: get_CustomBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Transform*>* (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::get_CustomBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCustomSkeleton*), "get_CustomBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::InitializeBones
// Il2CppName: InitializeBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::InitializeBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCustomSkeleton*), "InitializeBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
