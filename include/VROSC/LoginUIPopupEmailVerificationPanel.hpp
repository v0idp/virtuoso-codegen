// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoginUIPopupPanelBase
#include "VROSC/LoginUIPopupPanelBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: LoginUIPopupEmailVerificationPanel
  class LoginUIPopupEmailVerificationPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoginUIPopupEmailVerificationPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupEmailVerificationPanel*, "VROSC", "LoginUIPopupEmailVerificationPanel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoginUIPopupEmailVerificationPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class LoginUIPopupEmailVerificationPanel : public ::VROSC::LoginUIPopupPanelBase {
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
    // private VROSC.UIButton _sendVerificationEmailButton
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::UIButton* sendVerificationEmailButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.UIButton _changeEmailButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIButton* changeEmailButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.UIButton _logoutButton
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::UIButton* logoutButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    public:
    // Get instance field reference: private VROSC.UIButton _sendVerificationEmailButton
    ::VROSC::UIButton*& dyn__sendVerificationEmailButton();
    // Get instance field reference: private VROSC.UIButton _changeEmailButton
    ::VROSC::UIButton*& dyn__changeEmailButton();
    // Get instance field reference: private VROSC.UIButton _logoutButton
    ::VROSC::UIButton*& dyn__logoutButton();
    // private System.Void Awake()
    // Offset: 0x1391718
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x13918A0
    void OnDestroy();
    // private System.Void SendVerificationEmail()
    // Offset: 0x1391D40
    void SendVerificationEmail();
    // private System.Void SendValidationEmailButtonPressed()
    // Offset: 0x1391F18
    void SendValidationEmailButtonPressed();
    // private System.Void ChangeEmailButtonPressed()
    // Offset: 0x1391F1C
    void ChangeEmailButtonPressed();
    // private System.Void LogoutButtonPressed()
    // Offset: 0x1391F38
    void LogoutButtonPressed();
    // private System.Void SendVerificationEmailSucceeded()
    // Offset: 0x1392080
    void SendVerificationEmailSucceeded();
    // private System.Void SendVerificationEmailFailed(VROSC.Error error)
    // Offset: 0x1392230
    void SendVerificationEmailFailed(::VROSC::Error error);
    // private System.Void UserLoggedOut()
    // Offset: 0x1392434
    void UserLoggedOut();
    // private System.Void UserHasVerified()
    // Offset: 0x1392560
    void UserHasVerified();
    // public System.Void .ctor()
    // Offset: 0x1392578
    // Implemented from: VROSC.LoginUIPopupPanelBase
    // Base method: System.Void LoginUIPopupPanelBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginUIPopupEmailVerificationPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoginUIPopupEmailVerificationPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginUIPopupEmailVerificationPanel*, creationType>()));
    }
    // public override System.Void Open(params System.Object[] parameters)
    // Offset: 0x1391A28
    // Implemented from: VROSC.LoginUIPopupPanelBase
    // Base method: System.Void LoginUIPopupPanelBase::Open(params System.Object[] parameters)
    void Open(::ArrayW<::Il2CppObject*> parameters);
    // public override System.Void Close()
    // Offset: 0x1391B08
    // Implemented from: VROSC.LoginUIPopupPanelBase
    // Base method: System.Void LoginUIPopupPanelBase::Close()
    void Close();
    // protected override System.Void EnableUI(System.Boolean enable)
    // Offset: 0x1391C64
    // Implemented from: VROSC.LoginUIPopupPanelBase
    // Base method: System.Void LoginUIPopupPanelBase::EnableUI(System.Boolean enable)
    void EnableUI(bool enable);
  }; // VROSC.LoginUIPopupEmailVerificationPanel
  #pragma pack(pop)
  static check_size<sizeof(LoginUIPopupEmailVerificationPanel), 64 + sizeof(::VROSC::UIButton*)> __VROSC_LoginUIPopupEmailVerificationPanelSizeCheck;
  static_assert(sizeof(LoginUIPopupEmailVerificationPanel) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::SendVerificationEmail
// Il2CppName: SendVerificationEmail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::SendVerificationEmail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "SendVerificationEmail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::SendValidationEmailButtonPressed
// Il2CppName: SendValidationEmailButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::SendValidationEmailButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "SendValidationEmailButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::ChangeEmailButtonPressed
// Il2CppName: ChangeEmailButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::ChangeEmailButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "ChangeEmailButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::LogoutButtonPressed
// Il2CppName: LogoutButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::LogoutButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "LogoutButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::SendVerificationEmailSucceeded
// Il2CppName: SendVerificationEmailSucceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::SendVerificationEmailSucceeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "SendVerificationEmailSucceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::SendVerificationEmailFailed
// Il2CppName: SendVerificationEmailFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)(::VROSC::Error)>(&VROSC::LoginUIPopupEmailVerificationPanel::SendVerificationEmailFailed)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "SendVerificationEmailFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::UserLoggedOut
// Il2CppName: UserLoggedOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::UserLoggedOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "UserLoggedOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::UserHasVerified
// Il2CppName: UserHasVerified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::UserHasVerified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "UserHasVerified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::LoginUIPopupEmailVerificationPanel::Open)> {
  static const MethodInfo* get() {
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)()>(&VROSC::LoginUIPopupEmailVerificationPanel::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupEmailVerificationPanel::EnableUI
// Il2CppName: EnableUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupEmailVerificationPanel::*)(bool)>(&VROSC::LoginUIPopupEmailVerificationPanel::EnableUI)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupEmailVerificationPanel*), "EnableUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
