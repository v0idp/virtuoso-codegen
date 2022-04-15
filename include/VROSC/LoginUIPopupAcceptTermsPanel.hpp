// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoginUIPopupPanelBase
#include "VROSC/LoginUIPopupPanelBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoginUIPopupAcceptTermsPanel
  class LoginUIPopupAcceptTermsPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoginUIPopupAcceptTermsPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupAcceptTermsPanel*, "VROSC", "LoginUIPopupAcceptTermsPanel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoginUIPopupAcceptTermsPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class LoginUIPopupAcceptTermsPanel : public ::VROSC::LoginUIPopupPanelBase {
    public:
    public:
    // private VROSC.UIButton _acceptButton
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::UIButton* acceptButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    public:
    // Get instance field reference: private VROSC.UIButton _acceptButton
    [[deprecated("Use field access instead!")]] ::VROSC::UIButton*& dyn__acceptButton();
    // protected System.Void Awake()
    // Offset: 0x19AFE68
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x19AFF7C
    void OnDestroy();
    // private System.Void AcceptButtonPressed()
    // Offset: 0x19B0094
    void AcceptButtonPressed();
    // private System.Void <AcceptButtonPressed>b__4_0()
    // Offset: 0x19B0238
    void $AcceptButtonPressed$b__4_0();
    // private System.Void <AcceptButtonPressed>b__4_1(VROSC.Error error)
    // Offset: 0x19B0250
    void $AcceptButtonPressed$b__4_1(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x19B0228
    // Implemented from: VROSC.LoginUIPopupPanelBase
    // Base method: System.Void LoginUIPopupPanelBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginUIPopupAcceptTermsPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoginUIPopupAcceptTermsPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginUIPopupAcceptTermsPanel*, creationType>()));
    }
    // protected override System.Void EnableUI(System.Boolean enable)
    // Offset: 0x19B003C
    // Implemented from: VROSC.LoginUIPopupPanelBase
    // Base method: System.Void LoginUIPopupPanelBase::EnableUI(System.Boolean enable)
    void EnableUI(bool enable);
  }; // VROSC.LoginUIPopupAcceptTermsPanel
  #pragma pack(pop)
  static check_size<sizeof(LoginUIPopupAcceptTermsPanel), 48 + sizeof(::VROSC::UIButton*)> __VROSC_LoginUIPopupAcceptTermsPanelSizeCheck;
  static_assert(sizeof(LoginUIPopupAcceptTermsPanel) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoginUIPopupAcceptTermsPanel::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupAcceptTermsPanel::*)()>(&VROSC::LoginUIPopupAcceptTermsPanel::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupAcceptTermsPanel*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupAcceptTermsPanel::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupAcceptTermsPanel::*)()>(&VROSC::LoginUIPopupAcceptTermsPanel::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupAcceptTermsPanel*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupAcceptTermsPanel::AcceptButtonPressed
// Il2CppName: AcceptButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupAcceptTermsPanel::*)()>(&VROSC::LoginUIPopupAcceptTermsPanel::AcceptButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupAcceptTermsPanel*), "AcceptButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupAcceptTermsPanel::$AcceptButtonPressed$b__4_0
// Il2CppName: <AcceptButtonPressed>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupAcceptTermsPanel::*)()>(&VROSC::LoginUIPopupAcceptTermsPanel::$AcceptButtonPressed$b__4_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupAcceptTermsPanel*), "<AcceptButtonPressed>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupAcceptTermsPanel::$AcceptButtonPressed$b__4_1
// Il2CppName: <AcceptButtonPressed>b__4_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupAcceptTermsPanel::*)(::VROSC::Error)>(&VROSC::LoginUIPopupAcceptTermsPanel::$AcceptButtonPressed$b__4_1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupAcceptTermsPanel*), "<AcceptButtonPressed>b__4_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupAcceptTermsPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoginUIPopupAcceptTermsPanel::EnableUI
// Il2CppName: EnableUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupAcceptTermsPanel::*)(bool)>(&VROSC::LoginUIPopupAcceptTermsPanel::EnableUI)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupAcceptTermsPanel*), "EnableUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
