// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Dashboard
#include "VROSC/Dashboard.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: DashboardPositioning
  class DashboardPositioning;
  // Forward declaring type: TransformMover
  class TransformMover;
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: WorldTransformData
  class WorldTransformData;
  // Forward declaring type: ClickData
  class ClickData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: HandPlacedDashboard
  class HandPlacedDashboard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::HandPlacedDashboard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HandPlacedDashboard*, "VROSC", "HandPlacedDashboard");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.HandPlacedDashboard
  // [TokenAttribute] Offset: FFFFFFFF
  class HandPlacedDashboard : public ::VROSC::Dashboard {
    public:
    // Writing base type padding for base size: 0x26 to desired offset: 0x28
    char ___base_padding[0x2] = {};
    public:
    // private VROSC.DashboardPositioning _lookAtBehaviour
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::DashboardPositioning* lookAtBehaviour;
    // Field size check
    static_assert(sizeof(::VROSC::DashboardPositioning*) == 0x8);
    // private VROSC.TransformMover _mover
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::TransformMover* mover;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMover*) == 0x8);
    // private VROSC.UIButton _closeFloatingButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIButton* closeFloatingButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.WorldTransformData freeFloatData
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::WorldTransformData* freeFloatData;
    // Field size check
    static_assert(sizeof(::VROSC::WorldTransformData*) == 0x8);
    // private UnityEngine.Vector3 _dashboardOriginalScale
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 dashboardOriginalScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private VROSC.DashboardPositioning _lookAtBehaviour
    [[deprecated("Use field access instead!")]] ::VROSC::DashboardPositioning*& dyn__lookAtBehaviour();
    // Get instance field reference: private VROSC.TransformMover _mover
    [[deprecated("Use field access instead!")]] ::VROSC::TransformMover*& dyn__mover();
    // Get instance field reference: private VROSC.UIButton _closeFloatingButton
    [[deprecated("Use field access instead!")]] ::VROSC::UIButton*& dyn__closeFloatingButton();
    // Get instance field reference: private VROSC.WorldTransformData freeFloatData
    [[deprecated("Use field access instead!")]] ::VROSC::WorldTransformData*& dyn_freeFloatData();
    // Get instance field reference: private UnityEngine.Vector3 _dashboardOriginalScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__dashboardOriginalScale();
    // private System.Void Grab(VROSC.TransformMover mover)
    // Offset: 0x19AB210
    void Grab(::VROSC::TransformMover* mover);
    // private System.Void SetHandheld(VROSC.ClickData clickData)
    // Offset: 0x19AB1C8
    void SetHandheld(::VROSC::ClickData* clickData);
    // private System.Void DashboardToggled(System.Boolean toggled)
    // Offset: 0x19AB75C
    void DashboardToggled(bool toggled);
    // public System.Void .ctor()
    // Offset: 0x19AB860
    // Implemented from: VROSC.Dashboard
    // Base method: System.Void Dashboard::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandPlacedDashboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::HandPlacedDashboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandPlacedDashboard*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x19AAF40
    // Implemented from: VROSC.Dashboard
    // Base method: System.Void Dashboard::Awake()
    void Awake();
    // protected override System.Void SetFreeFloating()
    // Offset: 0x19AB21C
    // Implemented from: VROSC.Dashboard
    // Base method: System.Void Dashboard::SetFreeFloating()
    void SetFreeFloating();
    // protected override System.Void Update()
    // Offset: 0x19AB38C
    // Implemented from: VROSC.Dashboard
    // Base method: System.Void Dashboard::Update()
    void Update();
    // protected override System.Void MoveToHand()
    // Offset: 0x19AB3EC
    // Implemented from: VROSC.Dashboard
    // Base method: System.Void Dashboard::MoveToHand()
    void MoveToHand();
    // protected override System.Void ReturnToFreeFloat()
    // Offset: 0x19AB4B4
    // Implemented from: VROSC.Dashboard
    // Base method: System.Void Dashboard::ReturnToFreeFloat()
    void ReturnToFreeFloat();
    // protected override System.Boolean EvaluateDropCondition()
    // Offset: 0x19AB54C
    // Implemented from: VROSC.Dashboard
    // Base method: System.Boolean Dashboard::EvaluateDropCondition()
    bool EvaluateDropCondition();
    // protected override System.Boolean EvaluateActivationCondition()
    // Offset: 0x19AB61C
    // Implemented from: VROSC.Dashboard
    // Base method: System.Boolean Dashboard::EvaluateActivationCondition()
    bool EvaluateActivationCondition();
    // protected override System.Boolean EvaluateDeactivationCondition()
    // Offset: 0x19AB68C
    // Implemented from: VROSC.Dashboard
    // Base method: System.Boolean Dashboard::EvaluateDeactivationCondition()
    bool EvaluateDeactivationCondition();
    // protected override System.Void PlaceDashboard()
    // Offset: 0x19AB800
    // Implemented from: VROSC.Dashboard
    // Base method: System.Void Dashboard::PlaceDashboard()
    void PlaceDashboard();
  }; // VROSC.HandPlacedDashboard
  #pragma pack(pop)
  static check_size<sizeof(HandPlacedDashboard), 72 + sizeof(::UnityEngine::Vector3)> __VROSC_HandPlacedDashboardSizeCheck;
  static_assert(sizeof(HandPlacedDashboard) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::Grab
// Il2CppName: Grab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)(::VROSC::TransformMover*)>(&VROSC::HandPlacedDashboard::Grab)> {
  static const MethodInfo* get() {
    static auto* mover = &::il2cpp_utils::GetClassFromName("VROSC", "TransformMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "Grab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mover});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::SetHandheld
// Il2CppName: SetHandheld
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)(::VROSC::ClickData*)>(&VROSC::HandPlacedDashboard::SetHandheld)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "SetHandheld", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::DashboardToggled
// Il2CppName: DashboardToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)(bool)>(&VROSC::HandPlacedDashboard::DashboardToggled)> {
  static const MethodInfo* get() {
    static auto* toggled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "DashboardToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggled});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::SetFreeFloating
// Il2CppName: SetFreeFloating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::SetFreeFloating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "SetFreeFloating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::MoveToHand
// Il2CppName: MoveToHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::MoveToHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "MoveToHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::ReturnToFreeFloat
// Il2CppName: ReturnToFreeFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::ReturnToFreeFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "ReturnToFreeFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::EvaluateDropCondition
// Il2CppName: EvaluateDropCondition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::EvaluateDropCondition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "EvaluateDropCondition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::EvaluateActivationCondition
// Il2CppName: EvaluateActivationCondition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::EvaluateActivationCondition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "EvaluateActivationCondition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::EvaluateDeactivationCondition
// Il2CppName: EvaluateDeactivationCondition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::EvaluateDeactivationCondition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "EvaluateDeactivationCondition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboard::PlaceDashboard
// Il2CppName: PlaceDashboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboard::*)()>(&VROSC::HandPlacedDashboard::PlaceDashboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboard*), "PlaceDashboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
