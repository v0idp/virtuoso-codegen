// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPassthroughLayer
#include "GlobalNamespace/OVRPassthroughLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer::$$c__DisplayClass9_0*, "", "OVRPassthroughLayer/<>c__DisplayClass9_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRPassthroughLayer/<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRPassthroughLayer::$$c__DisplayClass9_0 : public ::Il2CppObject {
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
    // public UnityEngine.GameObject obj
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* obj;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::GameObject*
    constexpr operator ::UnityEngine::GameObject*() const noexcept {
      return obj;
    }
    // Get instance field reference: public UnityEngine.GameObject obj
    ::UnityEngine::GameObject*& dyn_obj();
    // System.Boolean <RemoveSurfaceGeometry>b__0(OVRPassthroughLayer/DeferredPassthroughMeshAddition x)
    // Offset: 0x73F294
    bool $RemoveSurfaceGeometry$b__0(::GlobalNamespace::OVRPassthroughLayer::DeferredPassthroughMeshAddition x);
    // public System.Void .ctor()
    // Offset: 0x73F28C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPassthroughLayer::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRPassthroughLayer::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPassthroughLayer::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // OVRPassthroughLayer/<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(OVRPassthroughLayer::$$c__DisplayClass9_0), 16 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_OVRPassthroughLayer_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(OVRPassthroughLayer::$$c__DisplayClass9_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::$$c__DisplayClass9_0::$RemoveSurfaceGeometry$b__0
// Il2CppName: <RemoveSurfaceGeometry>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPassthroughLayer::$$c__DisplayClass9_0::*)(::GlobalNamespace::OVRPassthroughLayer::DeferredPassthroughMeshAddition)>(&GlobalNamespace::OVRPassthroughLayer::$$c__DisplayClass9_0::$RemoveSurfaceGeometry$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "OVRPassthroughLayer/DeferredPassthroughMeshAddition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::$$c__DisplayClass9_0*), "<RemoveSurfaceGeometry>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
