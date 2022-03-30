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
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMeshEffect
  class AdjustableMeshEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AdjustableMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshEffect*, "VROSC", "AdjustableMeshEffect");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AdjustableMeshEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class AdjustableMeshEffect : public ::UnityEngine::MonoBehaviour {
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
    // protected VROSC.AdjustableMesh _adjustableMesh
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::AdjustableMesh* adjustableMesh;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected VROSC.AdjustableMesh _adjustableMesh
    ::VROSC::AdjustableMesh*& dyn__adjustableMesh();
    // private System.Void OnEnable()
    // Offset: 0x136977C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13698C0
    void OnDisable();
    // protected System.Void OnCreation()
    // Offset: 0x1369A04
    void OnCreation();
    // protected System.Void OnMeshVisible()
    // Offset: 0x1368990
    void OnMeshVisible();
    // protected System.Void .ctor()
    // Offset: 0x1368A04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjustableMeshEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AdjustableMeshEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjustableMeshEffect*, creationType>()));
    }
  }; // VROSC.AdjustableMeshEffect
  #pragma pack(pop)
  static check_size<sizeof(AdjustableMeshEffect), 24 + sizeof(::VROSC::AdjustableMesh*)> __VROSC_AdjustableMeshEffectSizeCheck;
  static_assert(sizeof(AdjustableMeshEffect) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AdjustableMeshEffect::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshEffect::*)()>(&VROSC::AdjustableMeshEffect::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshEffect*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshEffect::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshEffect::*)()>(&VROSC::AdjustableMeshEffect::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshEffect*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshEffect::OnCreation
// Il2CppName: OnCreation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshEffect::*)()>(&VROSC::AdjustableMeshEffect::OnCreation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshEffect*), "OnCreation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshEffect::OnMeshVisible
// Il2CppName: OnMeshVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshEffect::*)()>(&VROSC::AdjustableMeshEffect::OnMeshVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshEffect*), "OnMeshVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
