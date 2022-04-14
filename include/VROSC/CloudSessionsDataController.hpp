// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionsDataController
#include "VROSC/SessionsDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SessionUIData
  class SessionUIData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: CloudSessionsDataController
  class CloudSessionsDataController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CloudSessionsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudSessionsDataController*, "VROSC", "CloudSessionsDataController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CloudSessionsDataController
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudSessionsDataController : public ::VROSC::SessionsDataController {
    public:
    // Nested type: ::VROSC::CloudSessionsDataController::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: ::VROSC::CloudSessionsDataController::$$c
    class $$c;
    // Nested type: ::VROSC::CloudSessionsDataController::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: ::VROSC::CloudSessionsDataController::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    public:
    // private System.Boolean _isWaitingForData
    // Size: 0x1
    // Offset: 0x30
    bool isWaitingForData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::VROSC::Session*
    constexpr operator ::VROSC::Session*() const noexcept = delete;
    // Get instance field reference: private System.Boolean _isWaitingForData
    [[deprecated]] bool& dyn__isWaitingForData();
    // public System.Void SaveSessionToCloud(System.String sessionId, System.Action`1<System.String> onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x946624
    void SaveSessionToCloud(::StringW sessionId, ::System::Action_1<::StringW>* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void .ctor()
    // Offset: 0x94603C
    // Implemented from: VROSC.SessionsDataController
    // Base method: System.Void SessionsDataController::.ctor()
    // Base method: System.Void BaseDataController::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudSessionsDataController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CloudSessionsDataController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudSessionsDataController*, creationType>()));
    }
    // public override System.Collections.Generic.List`1<VROSC.SessionUIData> GetSessionsUIData()
    // Offset: 0x9460AC
    // Implemented from: VROSC.SessionsDataController
    // Base method: System.Collections.Generic.List`1<VROSC.SessionUIData> SessionsDataController::GetSessionsUIData()
    ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetSessionsUIData();
    // public override VROSC.SessionUIData GetSessionUIData(System.String sessionId)
    // Offset: 0x9462A0
    // Implemented from: VROSC.SessionsDataController
    // Base method: VROSC.SessionUIData SessionsDataController::GetSessionUIData(System.String sessionId)
    ::VROSC::SessionUIData* GetSessionUIData(::StringW sessionId);
    // public override System.Void LoadCloudData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x9463F0
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Void BaseDataController::LoadCloudData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    void LoadCloudData(::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public override System.Void SaveCloudData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x946620
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Void BaseDataController::SaveCloudData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    void SaveCloudData(::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public override System.Void RemoveSession(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x946C7C
    // Implemented from: VROSC.SessionsDataController
    // Base method: System.Void SessionsDataController::RemoveSession(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    void RemoveSession(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // protected override System.String GenerateNewSessionId()
    // Offset: 0x946E14
    // Implemented from: VROSC.SessionsDataController
    // Base method: System.String SessionsDataController::GenerateNewSessionId()
    ::StringW GenerateNewSessionId();
    // protected override System.Void UserLoggedOut()
    // Offset: 0x946E9C
    // Implemented from: VROSC.SessionsDataController
    // Base method: System.Void SessionsDataController::UserLoggedOut()
    void UserLoggedOut();
  }; // VROSC.CloudSessionsDataController
  #pragma pack(pop)
  static check_size<sizeof(CloudSessionsDataController), 48 + sizeof(bool)> __VROSC_CloudSessionsDataControllerSizeCheck;
  static_assert(sizeof(CloudSessionsDataController) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::SaveSessionToCloud
// Il2CppName: SaveSessionToCloud
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudSessionsDataController::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::CloudSessionsDataController::SaveSessionToCloud)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudSessionsDataController*), "SaveSessionToCloud", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::GetSessionsUIData
// Il2CppName: GetSessionsUIData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* (VROSC::CloudSessionsDataController::*)()>(&VROSC::CloudSessionsDataController::GetSessionsUIData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudSessionsDataController*), "GetSessionsUIData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::GetSessionUIData
// Il2CppName: GetSessionUIData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SessionUIData* (VROSC::CloudSessionsDataController::*)(::StringW)>(&VROSC::CloudSessionsDataController::GetSessionUIData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudSessionsDataController*), "GetSessionUIData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId});
  }
};
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::LoadCloudData
// Il2CppName: LoadCloudData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudSessionsDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::CloudSessionsDataController::LoadCloudData)> {
  static const MethodInfo* get() {
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudSessionsDataController*), "LoadCloudData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::SaveCloudData
// Il2CppName: SaveCloudData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudSessionsDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::CloudSessionsDataController::SaveCloudData)> {
  static const MethodInfo* get() {
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudSessionsDataController*), "SaveCloudData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::RemoveSession
// Il2CppName: RemoveSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudSessionsDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::CloudSessionsDataController::RemoveSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudSessionsDataController*), "RemoveSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::GenerateNewSessionId
// Il2CppName: GenerateNewSessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::CloudSessionsDataController::*)()>(&VROSC::CloudSessionsDataController::GenerateNewSessionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudSessionsDataController*), "GenerateNewSessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CloudSessionsDataController::UserLoggedOut
// Il2CppName: UserLoggedOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudSessionsDataController::*)()>(&VROSC::CloudSessionsDataController::UserLoggedOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudSessionsDataController*), "UserLoggedOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
