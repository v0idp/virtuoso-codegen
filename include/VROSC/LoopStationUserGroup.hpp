// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopStationGroup
#include "VROSC/LoopStationGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIHoldButton
  class UIHoldButton;
  // Forward declaring type: MoveOnPlane
  class MoveOnPlane;
  // Forward declaring type: LoopStation
  class LoopStation;
  // Forward declaring type: LoopStationGroupHandler
  class LoopStationGroupHandler;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationUserGroup
  class LoopStationUserGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationUserGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationUserGroup*, "VROSC", "LoopStationUserGroup");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationUserGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationUserGroup : public ::VROSC::LoopStationGroup {
    public:
    public:
    // [HeaderAttribute] Offset: 0x785090
    // private VROSC.UIHoldButton _removeButton
    // Size: 0x8
    // Offset: 0xA8
    ::VROSC::UIHoldButton* removeButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIHoldButton*) == 0x8);
    // private VROSC.MoveOnPlane _mover
    // Size: 0x8
    // Offset: 0xB0
    ::VROSC::MoveOnPlane* mover;
    // Field size check
    static_assert(sizeof(::VROSC::MoveOnPlane*) == 0x8);
    public:
    // Get instance field reference: private VROSC.UIHoldButton _removeButton
    [[deprecated("Use field access instead!")]] ::VROSC::UIHoldButton*& dyn__removeButton();
    // Get instance field reference: private VROSC.MoveOnPlane _mover
    [[deprecated("Use field access instead!")]] ::VROSC::MoveOnPlane*& dyn__mover();
    // private System.Void Awake()
    // Offset: 0x1979294
    void Awake();
    // private System.Void OnGrabEnd()
    // Offset: 0x1979538
    void OnGrabEnd();
    // private System.Void RemovePressed()
    // Offset: 0x1979678
    void RemovePressed();
    // public System.Void .ctor()
    // Offset: 0x1979754
    // Implemented from: VROSC.LoopStationGroup
    // Base method: System.Void LoopStationGroup::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationUserGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationUserGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationUserGroup*, creationType>()));
    }
    // public override System.Void Setup(VROSC.LoopStation loopStation, VROSC.LoopStationGroupHandler handler, VROSC.LoopStationGroup/VROSC.SetupVariables vars)
    // Offset: 0x19793B0
    // Implemented from: VROSC.LoopStationGroup
    // Base method: System.Void LoopStationGroup::Setup(VROSC.LoopStation loopStation, VROSC.LoopStationGroupHandler handler, VROSC.LoopStationGroup/VROSC.SetupVariables vars)
    void Setup(::VROSC::LoopStation* loopStation, ::VROSC::LoopStationGroupHandler* handler, ::VROSC::LoopStationGroup::SetupVariables vars);
    // public override System.Void OnDestroy()
    // Offset: 0x19795B0
    // Implemented from: VROSC.LoopStationGroup
    // Base method: System.Void LoopStationGroup::OnDestroy()
    void OnDestroy();
    // public override System.Void SetAutoSorted(System.Boolean autoSorted)
    // Offset: 0x19796DC
    // Implemented from: VROSC.LoopStationGroup
    // Base method: System.Void LoopStationGroup::SetAutoSorted(System.Boolean autoSorted)
    void SetAutoSorted(bool autoSorted);
  }; // VROSC.LoopStationUserGroup
  #pragma pack(pop)
  static check_size<sizeof(LoopStationUserGroup), 176 + sizeof(::VROSC::MoveOnPlane*)> __VROSC_LoopStationUserGroupSizeCheck;
  static_assert(sizeof(LoopStationUserGroup) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationUserGroup::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationUserGroup::*)()>(&VROSC::LoopStationUserGroup::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationUserGroup*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationUserGroup::OnGrabEnd
// Il2CppName: OnGrabEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationUserGroup::*)()>(&VROSC::LoopStationUserGroup::OnGrabEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationUserGroup*), "OnGrabEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationUserGroup::RemovePressed
// Il2CppName: RemovePressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationUserGroup::*)()>(&VROSC::LoopStationUserGroup::RemovePressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationUserGroup*), "RemovePressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationUserGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopStationUserGroup::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationUserGroup::*)(::VROSC::LoopStation*, ::VROSC::LoopStationGroupHandler*, ::VROSC::LoopStationGroup::SetupVariables)>(&VROSC::LoopStationUserGroup::Setup)> {
  static const MethodInfo* get() {
    static auto* loopStation = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStation")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroupHandler")->byval_arg;
    static auto* vars = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup/SetupVariables")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationUserGroup*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStation, handler, vars});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationUserGroup::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationUserGroup::*)()>(&VROSC::LoopStationUserGroup::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationUserGroup*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationUserGroup::SetAutoSorted
// Il2CppName: SetAutoSorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationUserGroup::*)(bool)>(&VROSC::LoopStationUserGroup::SetAutoSorted)> {
  static const MethodInfo* get() {
    static auto* autoSorted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationUserGroup*), "SetAutoSorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{autoSorted});
  }
};
