// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Including type: OVRLipSync
#include "GlobalNamespace/OVRLipSync.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRLipSyncContextBase
  class OVRLipSyncContextBase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRLipSyncContextMorphTarget
  class OVRLipSyncContextMorphTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRLipSyncContextMorphTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSyncContextMorphTarget*, "", "OVRLipSyncContextMorphTarget");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: OVRLipSyncContextMorphTarget
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRLipSyncContextMorphTarget : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0x6F9228
    // public UnityEngine.SkinnedMeshRenderer skinnedMeshRenderer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // [TooltipAttribute] Offset: 0x6F9260
    // public System.Int32[] visemeToBlendTargets
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> visemeToBlendTargets;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // [TooltipAttribute] Offset: 0x6F9298
    // public System.Boolean enableVisemeTestKeys
    // Size: 0x1
    // Offset: 0x28
    bool enableVisemeTestKeys;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableVisemeTestKeys and: visemeTestKeys
    char __padding2[0x7] = {};
    // [TooltipAttribute] Offset: 0x6F92D0
    // public UnityEngine.KeyCode[] visemeTestKeys
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::KeyCode> visemeTestKeys;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::KeyCode>) == 0x8);
    // [TooltipAttribute] Offset: 0x6F9308
    // public UnityEngine.KeyCode laughterKey
    // Size: 0x4
    // Offset: 0x38
    ::UnityEngine::KeyCode laughterKey;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // [TooltipAttribute] Offset: 0x6F9340
    // public System.Int32 laughterBlendTarget
    // Size: 0x4
    // Offset: 0x3C
    int laughterBlendTarget;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0x6F9378
    // [RangeAttribute] Offset: 0x6F9378
    // public System.Single laughterThreshold
    // Size: 0x4
    // Offset: 0x40
    float laughterThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x6F93CC
    // [RangeAttribute] Offset: 0x6F93CC
    // public System.Single laughterMultiplier
    // Size: 0x4
    // Offset: 0x44
    float laughterMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x6F9420
    // [TooltipAttribute] Offset: 0x6F9420
    // public System.Int32 smoothAmount
    // Size: 0x4
    // Offset: 0x48
    int smoothAmount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: smoothAmount and: lipsyncContext
    char __padding8[0x4] = {};
    // private OVRLipSyncContextBase lipsyncContext
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::OVRLipSyncContextBase* lipsyncContext;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRLipSyncContextBase*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.SkinnedMeshRenderer skinnedMeshRenderer
    [[deprecated]] ::UnityEngine::SkinnedMeshRenderer*& dyn_skinnedMeshRenderer();
    // Get instance field reference: public System.Int32[] visemeToBlendTargets
    [[deprecated]] ::ArrayW<int>& dyn_visemeToBlendTargets();
    // Get instance field reference: public System.Boolean enableVisemeTestKeys
    [[deprecated]] bool& dyn_enableVisemeTestKeys();
    // Get instance field reference: public UnityEngine.KeyCode[] visemeTestKeys
    [[deprecated]] ::ArrayW<::UnityEngine::KeyCode>& dyn_visemeTestKeys();
    // Get instance field reference: public UnityEngine.KeyCode laughterKey
    [[deprecated]] ::UnityEngine::KeyCode& dyn_laughterKey();
    // Get instance field reference: public System.Int32 laughterBlendTarget
    [[deprecated]] int& dyn_laughterBlendTarget();
    // Get instance field reference: public System.Single laughterThreshold
    [[deprecated]] float& dyn_laughterThreshold();
    // Get instance field reference: public System.Single laughterMultiplier
    [[deprecated]] float& dyn_laughterMultiplier();
    // Get instance field reference: public System.Int32 smoothAmount
    [[deprecated]] int& dyn_smoothAmount();
    // Get instance field reference: private OVRLipSyncContextBase lipsyncContext
    [[deprecated]] ::GlobalNamespace::OVRLipSyncContextBase*& dyn_lipsyncContext();
    // private System.Void Start()
    // Offset: 0x18AAEC0
    void Start();
    // private System.Void Update()
    // Offset: 0x18AB030
    void Update();
    // private System.Void CheckForKeys()
    // Offset: 0x18AB288
    void CheckForKeys();
    // private System.Void SetVisemeToMorphTarget(OVRLipSync/Frame frame)
    // Offset: 0x18AB138
    void SetVisemeToMorphTarget(::GlobalNamespace::OVRLipSync::Frame* frame);
    // private System.Void SetLaughterToMorphTarget(OVRLipSync/Frame frame)
    // Offset: 0x18AB1EC
    void SetLaughterToMorphTarget(::GlobalNamespace::OVRLipSync::Frame* frame);
    // private System.Void CheckVisemeKey(UnityEngine.KeyCode key, System.Int32 viseme, System.Int32 amount)
    // Offset: 0x18AB354
    void CheckVisemeKey(::UnityEngine::KeyCode key, int viseme, int amount);
    // private System.Void CheckLaughterKey()
    // Offset: 0x18AB418
    void CheckLaughterKey();
    // public System.Void .ctor()
    // Offset: 0x18AB480
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRLipSyncContextMorphTarget* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRLipSyncContextMorphTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRLipSyncContextMorphTarget*, creationType>()));
    }
  }; // OVRLipSyncContextMorphTarget
  #pragma pack(pop)
  static check_size<sizeof(OVRLipSyncContextMorphTarget), 80 + sizeof(::GlobalNamespace::OVRLipSyncContextBase*)> __GlobalNamespace_OVRLipSyncContextMorphTargetSizeCheck;
  static_assert(sizeof(OVRLipSyncContextMorphTarget) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextMorphTarget::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextMorphTarget::*)()>(&GlobalNamespace::OVRLipSyncContextMorphTarget::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextMorphTarget*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextMorphTarget::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextMorphTarget::*)()>(&GlobalNamespace::OVRLipSyncContextMorphTarget::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextMorphTarget*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextMorphTarget::CheckForKeys
// Il2CppName: CheckForKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextMorphTarget::*)()>(&GlobalNamespace::OVRLipSyncContextMorphTarget::CheckForKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextMorphTarget*), "CheckForKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextMorphTarget::SetVisemeToMorphTarget
// Il2CppName: SetVisemeToMorphTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextMorphTarget::*)(::GlobalNamespace::OVRLipSync::Frame*)>(&GlobalNamespace::OVRLipSyncContextMorphTarget::SetVisemeToMorphTarget)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("", "OVRLipSync/Frame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextMorphTarget*), "SetVisemeToMorphTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextMorphTarget::SetLaughterToMorphTarget
// Il2CppName: SetLaughterToMorphTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextMorphTarget::*)(::GlobalNamespace::OVRLipSync::Frame*)>(&GlobalNamespace::OVRLipSyncContextMorphTarget::SetLaughterToMorphTarget)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("", "OVRLipSync/Frame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextMorphTarget*), "SetLaughterToMorphTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextMorphTarget::CheckVisemeKey
// Il2CppName: CheckVisemeKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextMorphTarget::*)(::UnityEngine::KeyCode, int, int)>(&GlobalNamespace::OVRLipSyncContextMorphTarget::CheckVisemeKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* viseme = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextMorphTarget*), "CheckVisemeKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, viseme, amount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextMorphTarget::CheckLaughterKey
// Il2CppName: CheckLaughterKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextMorphTarget::*)()>(&GlobalNamespace::OVRLipSyncContextMorphTarget::CheckLaughterKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextMorphTarget*), "CheckLaughterKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextMorphTarget::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
