// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionsPanelUI
#include "VROSC/SessionsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SessionUIData
  class SessionUIData;
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MySessionsPanelUI
  class MySessionsPanelUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MySessionsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MySessionsPanelUI*, "VROSC", "MySessionsPanelUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MySessionsPanelUI
  // [TokenAttribute] Offset: FFFFFFFF
  class MySessionsPanelUI : public ::VROSC::SessionsPanelUI {
    public:
    // Writing base type padding for base size: 0x61 to desired offset: 0x68
    char ___base_padding[0x7] = {};
    public:
    // private System.String _errorMessage
    // Size: 0x8
    // Offset: 0x68
    ::StringW errorMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _errorMessage
    [[deprecated]] ::StringW& dyn__errorMessage();
    // private System.Void UserLoggedIn()
    // Offset: 0xACE144
    void UserLoggedIn();
    // private System.Void CloudSessionsDataLoadSucceeded(System.Collections.Generic.List`1<VROSC.SessionUIData> sessionUIDatas)
    // Offset: 0xACDFEC
    void CloudSessionsDataLoadSucceeded(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* sessionUIDatas);
    // private System.Void CloudSessionsDataLoadFailed(VROSC.Error error)
    // Offset: 0xACE35C
    void CloudSessionsDataLoadFailed(::VROSC::Error error);
    // private System.Void <Refresh>b__1_0()
    // Offset: 0xACE470
    void $Refresh$b__1_0();
    // private System.Void <UserLoggedIn>b__3_0()
    // Offset: 0xACE4E0
    void $UserLoggedIn$b__3_0();
    // public System.Void .ctor()
    // Offset: 0xACE41C
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MySessionsPanelUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MySessionsPanelUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MySessionsPanelUI*, creationType>()));
    }
    // public override System.Void Refresh()
    // Offset: 0xACDD0C
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::Refresh()
    void Refresh();
    // protected System.Void OnDisable()
    // Offset: 0xACE060
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::OnDisable()
    void OnDisable();
    // protected override System.Void UserLoggedOut()
    // Offset: 0xACE2E4
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::UserLoggedOut()
    void UserLoggedOut();
  }; // VROSC.MySessionsPanelUI
  #pragma pack(pop)
  static check_size<sizeof(MySessionsPanelUI), 104 + sizeof(::StringW)> __VROSC_MySessionsPanelUISizeCheck;
  static_assert(sizeof(MySessionsPanelUI) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::UserLoggedIn
// Il2CppName: UserLoggedIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MySessionsPanelUI::*)()>(&VROSC::MySessionsPanelUI::UserLoggedIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MySessionsPanelUI*), "UserLoggedIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::CloudSessionsDataLoadSucceeded
// Il2CppName: CloudSessionsDataLoadSucceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MySessionsPanelUI::*)(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*)>(&VROSC::MySessionsPanelUI::CloudSessionsDataLoadSucceeded)> {
  static const MethodInfo* get() {
    static auto* sessionUIDatas = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "SessionUIData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MySessionsPanelUI*), "CloudSessionsDataLoadSucceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionUIDatas});
  }
};
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::CloudSessionsDataLoadFailed
// Il2CppName: CloudSessionsDataLoadFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MySessionsPanelUI::*)(::VROSC::Error)>(&VROSC::MySessionsPanelUI::CloudSessionsDataLoadFailed)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MySessionsPanelUI*), "CloudSessionsDataLoadFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::$Refresh$b__1_0
// Il2CppName: <Refresh>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MySessionsPanelUI::*)()>(&VROSC::MySessionsPanelUI::$Refresh$b__1_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MySessionsPanelUI*), "<Refresh>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::$UserLoggedIn$b__3_0
// Il2CppName: <UserLoggedIn>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MySessionsPanelUI::*)()>(&VROSC::MySessionsPanelUI::$UserLoggedIn$b__3_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MySessionsPanelUI*), "<UserLoggedIn>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MySessionsPanelUI::*)()>(&VROSC::MySessionsPanelUI::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MySessionsPanelUI*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MySessionsPanelUI::*)()>(&VROSC::MySessionsPanelUI::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MySessionsPanelUI*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MySessionsPanelUI::UserLoggedOut
// Il2CppName: UserLoggedOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MySessionsPanelUI::*)()>(&VROSC::MySessionsPanelUI::UserLoggedOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MySessionsPanelUI*), "UserLoggedOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
