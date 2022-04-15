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
  // Forward declaring type: TimelineActivation
  class TimelineActivation;
  // Forward declaring type: InstrumentController
  class InstrumentController;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentFrameController
  class InstrumentFrameController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InstrumentFrameController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentFrameController*, "VROSC", "InstrumentFrameController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InstrumentFrameController
  // [TokenAttribute] Offset: FFFFFFFF
  class InstrumentFrameController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.TimelineActivation _timelineActivation
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::TimelineActivation* timelineActivation;
    // Field size check
    static_assert(sizeof(::VROSC::TimelineActivation*) == 0x8);
    // private VROSC.InstrumentController _instrumentController
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::InstrumentController* instrumentController;
    // Field size check
    static_assert(sizeof(::VROSC::InstrumentController*) == 0x8);
    // private System.Boolean _frameIsDisplayed
    // Size: 0x1
    // Offset: 0x28
    bool frameIsDisplayed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _userWantsFrame
    // Size: 0x1
    // Offset: 0x29
    bool userWantsFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.TimelineActivation _timelineActivation
    [[deprecated("Use field access instead!")]] ::VROSC::TimelineActivation*& dyn__timelineActivation();
    // Get instance field reference: private VROSC.InstrumentController _instrumentController
    [[deprecated("Use field access instead!")]] ::VROSC::InstrumentController*& dyn__instrumentController();
    // Get instance field reference: private System.Boolean _frameIsDisplayed
    [[deprecated("Use field access instead!")]] bool& dyn__frameIsDisplayed();
    // Get instance field reference: private System.Boolean _userWantsFrame
    [[deprecated("Use field access instead!")]] bool& dyn__userWantsFrame();
    // public System.Void .ctor()
    // Offset: 0x1947854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentFrameController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InstrumentFrameController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentFrameController*, creationType>()));
    }
    // public System.Void Setup(VROSC.InstrumentController instrumentController)
    // Offset: 0x194661C
    void Setup(::VROSC::InstrumentController* instrumentController);
    // private System.Void OnDestroy()
    // Offset: 0x1947684
    void OnDestroy();
    // public System.Void UserDataLoaded(System.Boolean userWantsFrame)
    // Offset: 0x1946CB0
    void UserDataLoaded(bool userWantsFrame);
    // public System.Void SetUserWantsFrame(System.Boolean userWantsFrame)
    // Offset: 0x19473DC
    void SetUserWantsFrame(bool userWantsFrame);
    // public System.Void SetFrameVisible(System.Boolean shouldDisplayFrame)
    // Offset: 0x1947798
    void SetFrameVisible(bool shouldDisplayFrame);
    // private System.Void OnInstrumentToggled(System.Boolean active)
    // Offset: 0x1947808
    void OnInstrumentToggled(bool active);
  }; // VROSC.InstrumentFrameController
  #pragma pack(pop)
  static check_size<sizeof(InstrumentFrameController), 41 + sizeof(bool)> __VROSC_InstrumentFrameControllerSizeCheck;
  static_assert(sizeof(InstrumentFrameController) == 0x2A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InstrumentFrameController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::InstrumentFrameController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentFrameController::*)(::VROSC::InstrumentController*)>(&VROSC::InstrumentFrameController::Setup)> {
  static const MethodInfo* get() {
    static auto* instrumentController = &::il2cpp_utils::GetClassFromName("VROSC", "InstrumentController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentFrameController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrumentController});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentFrameController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentFrameController::*)()>(&VROSC::InstrumentFrameController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentFrameController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentFrameController::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentFrameController::*)(bool)>(&VROSC::InstrumentFrameController::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* userWantsFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentFrameController*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userWantsFrame});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentFrameController::SetUserWantsFrame
// Il2CppName: SetUserWantsFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentFrameController::*)(bool)>(&VROSC::InstrumentFrameController::SetUserWantsFrame)> {
  static const MethodInfo* get() {
    static auto* userWantsFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentFrameController*), "SetUserWantsFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userWantsFrame});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentFrameController::SetFrameVisible
// Il2CppName: SetFrameVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentFrameController::*)(bool)>(&VROSC::InstrumentFrameController::SetFrameVisible)> {
  static const MethodInfo* get() {
    static auto* shouldDisplayFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentFrameController*), "SetFrameVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldDisplayFrame});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentFrameController::OnInstrumentToggled
// Il2CppName: OnInstrumentToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentFrameController::*)(bool)>(&VROSC::InstrumentFrameController::OnInstrumentToggled)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentFrameController*), "OnInstrumentToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
