// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.DashboardSpawnPoint/VROSC.TriggerCondition
#include "VROSC/DashboardSpawnPoint_TriggerCondition.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Skipping declaration: DashboardSpawnPoint because it is already included!
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: HandPlacedDashboardHelper
  class HandPlacedDashboardHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::HandPlacedDashboardHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HandPlacedDashboardHelper*, "VROSC", "HandPlacedDashboardHelper");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.HandPlacedDashboardHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class HandPlacedDashboardHelper : public ::UnityEngine::MonoBehaviour {
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
    // [HeaderAttribute] Offset: 0x672240
    // private VROSC.DashboardSpawnPoint/VROSC.TriggerCondition _condition
    // Size: 0x14
    // Offset: 0x18
    ::VROSC::DashboardSpawnPoint::TriggerCondition condition;
    // Field size check
    static_assert(sizeof(::VROSC::DashboardSpawnPoint::TriggerCondition) == 0x14);
    // private VROSC.DashboardSpawnPoint _leftHand
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::DashboardSpawnPoint* leftHand;
    // Field size check
    static_assert(sizeof(::VROSC::DashboardSpawnPoint*) == 0x8);
    // private VROSC.DashboardSpawnPoint _rightHand
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::DashboardSpawnPoint* rightHand;
    // Field size check
    static_assert(sizeof(::VROSC::DashboardSpawnPoint*) == 0x8);
    // private VROSC.DashboardSpawnPoint <MostActivePoint>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::DashboardSpawnPoint* MostActivePoint;
    // Field size check
    static_assert(sizeof(::VROSC::DashboardSpawnPoint*) == 0x8);
    // private VROSC.DashboardSpawnPoint <DashBoardAtHand>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::DashboardSpawnPoint* DashBoardAtHand;
    // Field size check
    static_assert(sizeof(::VROSC::DashboardSpawnPoint*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.DashboardSpawnPoint/VROSC.TriggerCondition _condition
    ::VROSC::DashboardSpawnPoint::TriggerCondition& dyn__condition();
    // Get instance field reference: private VROSC.DashboardSpawnPoint _leftHand
    ::VROSC::DashboardSpawnPoint*& dyn__leftHand();
    // Get instance field reference: private VROSC.DashboardSpawnPoint _rightHand
    ::VROSC::DashboardSpawnPoint*& dyn__rightHand();
    // Get instance field reference: private VROSC.DashboardSpawnPoint <MostActivePoint>k__BackingField
    ::VROSC::DashboardSpawnPoint*& dyn_$MostActivePoint$k__BackingField();
    // Get instance field reference: private VROSC.DashboardSpawnPoint <DashBoardAtHand>k__BackingField
    ::VROSC::DashboardSpawnPoint*& dyn_$DashBoardAtHand$k__BackingField();
    // public VROSC.DashboardSpawnPoint get_MostActivePoint()
    // Offset: 0x898678
    ::VROSC::DashboardSpawnPoint* get_MostActivePoint();
    // private System.Void set_MostActivePoint(VROSC.DashboardSpawnPoint value)
    // Offset: 0x898670
    void set_MostActivePoint(::VROSC::DashboardSpawnPoint* value);
    // public VROSC.DashboardSpawnPoint get_DashBoardAtHand()
    // Offset: 0x898688
    ::VROSC::DashboardSpawnPoint* get_DashBoardAtHand();
    // private System.Void set_DashBoardAtHand(VROSC.DashboardSpawnPoint value)
    // Offset: 0x898680
    void set_DashBoardAtHand(::VROSC::DashboardSpawnPoint* value);
    // public System.Void Setup(VROSC.InputDevice left, VROSC.InputDevice right)
    // Offset: 0x898690
    void Setup(::VROSC::InputDevice* left, ::VROSC::InputDevice* right);
    // public System.Void SetDashboardIsInHand(System.Boolean inHands)
    // Offset: 0x8981B0
    void SetDashboardIsInHand(bool inHands);
    // public System.Void UpdateInput()
    // Offset: 0x8986F4
    void UpdateInput();
    // public System.Boolean EvaluateActivationCondition()
    // Offset: 0x89844C
    bool EvaluateActivationCondition();
    // public System.Boolean EvaluateDeactivationCondition()
    // Offset: 0x8984D0
    bool EvaluateDeactivationCondition();
    // public System.Void .ctor()
    // Offset: 0x8987E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandPlacedDashboardHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::HandPlacedDashboardHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandPlacedDashboardHelper*, creationType>()));
    }
  }; // VROSC.HandPlacedDashboardHelper
  #pragma pack(pop)
  static check_size<sizeof(HandPlacedDashboardHelper), 56 + sizeof(::VROSC::DashboardSpawnPoint*)> __VROSC_HandPlacedDashboardHelperSizeCheck;
  static_assert(sizeof(HandPlacedDashboardHelper) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::get_MostActivePoint
// Il2CppName: get_MostActivePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::DashboardSpawnPoint* (VROSC::HandPlacedDashboardHelper::*)()>(&VROSC::HandPlacedDashboardHelper::get_MostActivePoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "get_MostActivePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::set_MostActivePoint
// Il2CppName: set_MostActivePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboardHelper::*)(::VROSC::DashboardSpawnPoint*)>(&VROSC::HandPlacedDashboardHelper::set_MostActivePoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "DashboardSpawnPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "set_MostActivePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::get_DashBoardAtHand
// Il2CppName: get_DashBoardAtHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::DashboardSpawnPoint* (VROSC::HandPlacedDashboardHelper::*)()>(&VROSC::HandPlacedDashboardHelper::get_DashBoardAtHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "get_DashBoardAtHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::set_DashBoardAtHand
// Il2CppName: set_DashBoardAtHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboardHelper::*)(::VROSC::DashboardSpawnPoint*)>(&VROSC::HandPlacedDashboardHelper::set_DashBoardAtHand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "DashboardSpawnPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "set_DashBoardAtHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboardHelper::*)(::VROSC::InputDevice*, ::VROSC::InputDevice*)>(&VROSC::HandPlacedDashboardHelper::Setup)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::SetDashboardIsInHand
// Il2CppName: SetDashboardIsInHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboardHelper::*)(bool)>(&VROSC::HandPlacedDashboardHelper::SetDashboardIsInHand)> {
  static const MethodInfo* get() {
    static auto* inHands = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "SetDashboardIsInHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inHands});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::UpdateInput
// Il2CppName: UpdateInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HandPlacedDashboardHelper::*)()>(&VROSC::HandPlacedDashboardHelper::UpdateInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "UpdateInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::EvaluateActivationCondition
// Il2CppName: EvaluateActivationCondition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::HandPlacedDashboardHelper::*)()>(&VROSC::HandPlacedDashboardHelper::EvaluateActivationCondition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "EvaluateActivationCondition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::EvaluateDeactivationCondition
// Il2CppName: EvaluateDeactivationCondition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::HandPlacedDashboardHelper::*)()>(&VROSC::HandPlacedDashboardHelper::EvaluateDeactivationCondition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HandPlacedDashboardHelper*), "EvaluateDeactivationCondition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HandPlacedDashboardHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
