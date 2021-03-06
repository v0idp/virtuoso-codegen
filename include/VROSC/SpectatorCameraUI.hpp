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
  // Forward declaring type: UISpinner
  class UISpinner;
  // Forward declaring type: UISlideToggle
  class UISlideToggle;
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: ClickData
  class ClickData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SpectatorCameraUI
  class SpectatorCameraUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SpectatorCameraUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpectatorCameraUI*, "VROSC", "SpectatorCameraUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SpectatorCameraUI
  // [TokenAttribute] Offset: FFFFFFFF
  class SpectatorCameraUI : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.UISpinner _spectatorCameraSelector
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UISpinner* spectatorCameraSelector;
    // Field size check
    static_assert(sizeof(::VROSC::UISpinner*) == 0x8);
    // private VROSC.UISlideToggle _spectatorHideBackground
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UISlideToggle* spectatorHideBackground;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // private VROSC.UIButton _resetMoveableCameraButton
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UIButton* resetMoveableCameraButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private System.Boolean _spectatorCameraAvailable
    // Size: 0x1
    // Offset: 0x30
    bool spectatorCameraAvailable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UISpinner _spectatorCameraSelector
    [[deprecated("Use field access instead!")]] ::VROSC::UISpinner*& dyn__spectatorCameraSelector();
    // Get instance field reference: private VROSC.UISlideToggle _spectatorHideBackground
    [[deprecated("Use field access instead!")]] ::VROSC::UISlideToggle*& dyn__spectatorHideBackground();
    // Get instance field reference: private VROSC.UIButton _resetMoveableCameraButton
    [[deprecated("Use field access instead!")]] ::VROSC::UIButton*& dyn__resetMoveableCameraButton();
    // Get instance field reference: private System.Boolean _spectatorCameraAvailable
    [[deprecated("Use field access instead!")]] bool& dyn__spectatorCameraAvailable();
    // public System.Void .ctor()
    // Offset: 0x192F530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpectatorCameraUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SpectatorCameraUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpectatorCameraUI*, creationType>()));
    }
    // public System.Void Setup()
    // Offset: 0x192EB84
    void Setup();
    // private System.Void SetNewSpectatorCameraSetting(System.Int32 selection)
    // Offset: 0x192EF20
    void SetNewSpectatorCameraSetting(int selection);
    // private System.Void OnDestroy()
    // Offset: 0x192F0B8
    void OnDestroy();
    // private System.Void InitializeSpinner()
    // Offset: 0x192EE28
    void InitializeSpinner();
    // private System.Void OnEnable()
    // Offset: 0x192F2C8
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x192F414
    void OnDisable();
    // private System.Void UserDataLoaded(VROSC.UserDataControllers user)
    // Offset: 0x192F31C
    void UserDataLoaded(::VROSC::UserDataControllers* user);
    // private System.Void SpectatorHideBackgroundToggled(VROSC.InputDevice inputDevice, System.Boolean toggled)
    // Offset: 0x192F480
    void SpectatorHideBackgroundToggled(::VROSC::InputDevice* inputDevice, bool toggled);
    // private System.Void ShowOrHideResetButton()
    // Offset: 0x192EFCC
    void ShowOrHideResetButton();
    // private System.Void ResetMoveableCamera(VROSC.ClickData data)
    // Offset: 0x192F4DC
    void ResetMoveableCamera(::VROSC::ClickData* data);
  }; // VROSC.SpectatorCameraUI
  #pragma pack(pop)
  static check_size<sizeof(SpectatorCameraUI), 48 + sizeof(bool)> __VROSC_SpectatorCameraUISizeCheck;
  static_assert(sizeof(SpectatorCameraUI) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)()>(&VROSC::SpectatorCameraUI::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::SetNewSpectatorCameraSetting
// Il2CppName: SetNewSpectatorCameraSetting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)(int)>(&VROSC::SpectatorCameraUI::SetNewSpectatorCameraSetting)> {
  static const MethodInfo* get() {
    static auto* selection = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "SetNewSpectatorCameraSetting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selection});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)()>(&VROSC::SpectatorCameraUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::InitializeSpinner
// Il2CppName: InitializeSpinner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)()>(&VROSC::SpectatorCameraUI::InitializeSpinner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "InitializeSpinner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)()>(&VROSC::SpectatorCameraUI::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)()>(&VROSC::SpectatorCameraUI::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)(::VROSC::UserDataControllers*)>(&VROSC::SpectatorCameraUI::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::SpectatorHideBackgroundToggled
// Il2CppName: SpectatorHideBackgroundToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)(::VROSC::InputDevice*, bool)>(&VROSC::SpectatorCameraUI::SpectatorHideBackgroundToggled)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* toggled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "SpectatorHideBackgroundToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, toggled});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::ShowOrHideResetButton
// Il2CppName: ShowOrHideResetButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)()>(&VROSC::SpectatorCameraUI::ShowOrHideResetButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "ShowOrHideResetButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SpectatorCameraUI::ResetMoveableCamera
// Il2CppName: ResetMoveableCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SpectatorCameraUI::*)(::VROSC::ClickData*)>(&VROSC::SpectatorCameraUI::ResetMoveableCamera)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SpectatorCameraUI*), "ResetMoveableCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
