// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: CloudDataManager
  class CloudDataManager;
  // Forward declaring type: CloudStateManager
  class CloudStateManager;
  // Forward declaring type: ZipFileWriter
  class ZipFileWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SaveLoadManager
  class SaveLoadManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SaveLoadManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager*, "VROSC", "SaveLoadManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveLoadManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SaveLoadManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::SaveLoadManager::$Load$d__19
    struct $Load$d__19;
    // Nested type: ::VROSC::SaveLoadManager::$Save$d__22
    struct $Save$d__22;
    // Nested type: ::VROSC::SaveLoadManager::$$c
    class $$c;
    // Nested type: ::VROSC::SaveLoadManager::$LoadDefaultSession$d__24
    struct $LoadDefaultSession$d__24;
    // Nested type: ::VROSC::SaveLoadManager::$$c__DisplayClass25_0
    class $$c__DisplayClass25_0;
    // Nested type: ::VROSC::SaveLoadManager::$LoadSession$d__25
    struct $LoadSession$d__25;
    // Nested type: ::VROSC::SaveLoadManager::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: ::VROSC::SaveLoadManager::$SaveSession$d__26
    struct $SaveSession$d__26;
    // Nested type: ::VROSC::SaveLoadManager::$$c__DisplayClass27_0
    class $$c__DisplayClass27_0;
    // Nested type: ::VROSC::SaveLoadManager::$UpdateOldSaveFiles$d__27
    struct $UpdateOldSaveFiles$d__27;
    // Nested type: ::VROSC::SaveLoadManager::$$c__DisplayClass28_0
    class $$c__DisplayClass28_0;
    // Nested type: ::VROSC::SaveLoadManager::$$c__DisplayClass28_1
    class $$c__DisplayClass28_1;
    // Nested type: ::VROSC::SaveLoadManager::$$c__DisplayClass29_0
    class $$c__DisplayClass29_0;
    // Nested type: ::VROSC::SaveLoadManager::$LoadSessionPreview$d__29
    struct $LoadSessionPreview$d__29;
    // Nested type: ::VROSC::SaveLoadManager::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: ::VROSC::SaveLoadManager::$LoadSessionFromCloudSuccess$d__32
    struct $LoadSessionFromCloudSuccess$d__32;
    // Nested type: ::VROSC::SaveLoadManager::$$c__DisplayClass38_0
    class $$c__DisplayClass38_0;
    // Nested type: ::VROSC::SaveLoadManager::$DownloadPreviewFromCloudSuccess$d__38
    struct $DownloadPreviewFromCloudSuccess$d__38;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.CloudDataManager _cloudDataManager
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::CloudDataManager* cloudDataManager;
    // Field size check
    static_assert(sizeof(::VROSC::CloudDataManager*) == 0x8);
    // private VROSC.CloudStateManager _cloudStateManager
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::CloudStateManager* cloudStateManager;
    // Field size check
    static_assert(sizeof(::VROSC::CloudStateManager*) == 0x8);
    // private VROSC.ZipFileWriter _zipFileWriter
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::ZipFileWriter* zipFileWriter;
    // Field size check
    static_assert(sizeof(::VROSC::ZipFileWriter*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String DefaultSessionName
    static constexpr const char* DefaultSessionName = "DefaultSession";
    // Get static field: static private System.String DefaultSessionName
    static ::StringW _get_DefaultSessionName();
    // Set static field: static private System.String DefaultSessionName
    static void _set_DefaultSessionName(::StringW value);
    // static field const value: static private System.String SavePrefix
    static constexpr const char* SavePrefix = "VI_SAVE";
    // Get static field: static private System.String SavePrefix
    static ::StringW _get_SavePrefix();
    // Set static field: static private System.String SavePrefix
    static void _set_SavePrefix(::StringW value);
    // static field const value: static private System.String SaveExt
    static constexpr const char* SaveExt = "sav";
    // Get static field: static private System.String SaveExt
    static ::StringW _get_SaveExt();
    // Set static field: static private System.String SaveExt
    static void _set_SaveExt(::StringW value);
    // Get static field: static public System.Action`2<System.String,System.Boolean> OnLoadSessionSuccess
    static ::System::Action_2<::StringW, bool>* _get_OnLoadSessionSuccess();
    // Set static field: static public System.Action`2<System.String,System.Boolean> OnLoadSessionSuccess
    static void _set_OnLoadSessionSuccess(::System::Action_2<::StringW, bool>* value);
    // Get static field: static public System.Action`3<System.String,System.Boolean,VROSC.Error> OnLoadSessionFailure
    static ::System::Action_3<::StringW, bool, ::VROSC::Error>* _get_OnLoadSessionFailure();
    // Set static field: static public System.Action`3<System.String,System.Boolean,VROSC.Error> OnLoadSessionFailure
    static void _set_OnLoadSessionFailure(::System::Action_3<::StringW, bool, ::VROSC::Error>* value);
    // Get static field: static public System.Action`1<System.String> OnSaveSessionSuccess
    static ::System::Action_1<::StringW>* _get_OnSaveSessionSuccess();
    // Set static field: static public System.Action`1<System.String> OnSaveSessionSuccess
    static void _set_OnSaveSessionSuccess(::System::Action_1<::StringW>* value);
    // Get static field: static public System.Action`2<System.String,VROSC.Error> OnSaveSessionFailure
    static ::System::Action_2<::StringW, ::VROSC::Error>* _get_OnSaveSessionFailure();
    // Set static field: static public System.Action`2<System.String,VROSC.Error> OnSaveSessionFailure
    static void _set_OnSaveSessionFailure(::System::Action_2<::StringW, ::VROSC::Error>* value);
    // Get static field: static public System.Action`1<System.String> OnDeleteSessionSuccess
    static ::System::Action_1<::StringW>* _get_OnDeleteSessionSuccess();
    // Set static field: static public System.Action`1<System.String> OnDeleteSessionSuccess
    static void _set_OnDeleteSessionSuccess(::System::Action_1<::StringW>* value);
    // Get static field: static public System.Action`2<System.String,VROSC.Error> OnDeleteSessionFailure
    static ::System::Action_2<::StringW, ::VROSC::Error>* _get_OnDeleteSessionFailure();
    // Set static field: static public System.Action`2<System.String,VROSC.Error> OnDeleteSessionFailure
    static void _set_OnDeleteSessionFailure(::System::Action_2<::StringW, ::VROSC::Error>* value);
    // Get static field: static public System.Action`2<System.String,UnityEngine.AudioClip> OnLoadPreviewSuccess
    static ::System::Action_2<::StringW, ::UnityEngine::AudioClip*>* _get_OnLoadPreviewSuccess();
    // Set static field: static public System.Action`2<System.String,UnityEngine.AudioClip> OnLoadPreviewSuccess
    static void _set_OnLoadPreviewSuccess(::System::Action_2<::StringW, ::UnityEngine::AudioClip*>* value);
    // Get static field: static public System.Action`2<System.String,VROSC.Error> OnLoadPreviewFailure
    static ::System::Action_2<::StringW, ::VROSC::Error>* _get_OnLoadPreviewFailure();
    // Set static field: static public System.Action`2<System.String,VROSC.Error> OnLoadPreviewFailure
    static void _set_OnLoadPreviewFailure(::System::Action_2<::StringW, ::VROSC::Error>* value);
    // Get instance field reference: private VROSC.CloudDataManager _cloudDataManager
    ::VROSC::CloudDataManager*& dyn__cloudDataManager();
    // Get instance field reference: private VROSC.CloudStateManager _cloudStateManager
    ::VROSC::CloudStateManager*& dyn__cloudStateManager();
    // Get instance field reference: private VROSC.ZipFileWriter _zipFileWriter
    ::VROSC::ZipFileWriter*& dyn__zipFileWriter();
    // private System.Void Awake()
    // Offset: 0xB0D114
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0xB0D290
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0xB0D40C
    void Update();
    // public System.Void LoadModel(System.String dataModelKey, System.Action`1<System.String> onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xB0D428
    void LoadModel(::StringW dataModelKey, ::System::Action_1<::StringW>* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void LoadFromSession(System.String sessionId, System.String dataModelKey, System.Action`1<System.String> onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xB0D600
    void LoadFromSession(::StringW sessionId, ::StringW dataModelKey, ::System::Action_1<::StringW>* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // private System.Void Load(System.String path, System.Action`1<System.String> onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xB0D52C
    void Load(::StringW path, ::System::Action_1<::StringW>* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void SaveModel(System.String dataModelKey, System.String data, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xB0D714
    void SaveModel(::StringW dataModelKey, ::StringW data, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void SaveModelToSession(System.String dataModelKey, System.String sessionId, System.String data, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xB0D834
    void SaveModelToSession(::StringW dataModelKey, ::StringW sessionId, ::StringW data, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // private System.Void Save(System.String path, System.String data, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xB0D754
    void Save(::StringW path, ::StringW data, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void DeleteModelFile(System.String dataModelKey)
    // Offset: 0xB0D880
    void DeleteModelFile(::StringW dataModelKey);
    // public System.Void LoadDefaultSession()
    // Offset: 0xB0D8C0
    void LoadDefaultSession();
    // public System.Void LoadSession(System.String sessionName, System.String userId, System.Boolean fromCloud, System.Boolean isCommunity)
    // Offset: 0xB0D984
    void LoadSession(::StringW sessionName, ::StringW userId, bool fromCloud, bool isCommunity);
    // public System.Void SaveSession(System.String sessionId, System.Boolean isCloud, System.Boolean isCommunity, System.Boolean hasPreview)
    // Offset: 0xB0DA78
    void SaveSession(::StringW sessionId, bool isCloud, bool isCommunity, bool hasPreview);
    // public System.Threading.Tasks.Task UpdateOldSaveFiles(System.String sessionName, System.Action`1<System.String> onSuccess, System.Action`2<System.String,VROSC.Error> onFailure)
    // Offset: 0xB0DB70
    ::System::Threading::Tasks::Task* UpdateOldSaveFiles(::StringW sessionName, ::System::Action_1<::StringW>* onSuccess, ::System::Action_2<::StringW, ::VROSC::Error>* onFailure);
    // public System.Void DeleteSession(System.String sessionName, System.Boolean inCloud, System.Boolean isCommunity, System.Boolean isOgg)
    // Offset: 0xB0DC9C
    void DeleteSession(::StringW sessionName, bool inCloud, bool isCommunity, bool isOgg);
    // public System.Void LoadSessionPreview(System.String sessionId, System.String userId, System.Boolean inCloud, System.Boolean isCommunity, System.Boolean isOgg)
    // Offset: 0xB0DF2C
    void LoadSessionPreview(::StringW sessionId, ::StringW userId, bool inCloud, bool isCommunity, bool isOgg);
    // private System.String GetSavePath(System.String postfix)
    // Offset: 0xB0D458
    ::StringW GetSavePath(::StringW postfix);
    // private System.String GetSessionSavePath(System.String sessionId, System.String postfix)
    // Offset: 0xB0D630
    ::StringW GetSessionSavePath(::StringW sessionId, ::StringW postfix);
    // private System.Void LoadSessionFromCloudSuccess(System.String sessionName)
    // Offset: 0xB0E034
    void LoadSessionFromCloudSuccess(::StringW sessionName);
    // private System.Void LoadSessionFromCloudFailure(System.String sessionName, VROSC.Error error)
    // Offset: 0xB0E0FC
    void LoadSessionFromCloudFailure(::StringW sessionName, ::VROSC::Error error);
    // private System.Void SaveSessionToCloudSuccess(System.String sessionName)
    // Offset: 0xB0E2EC
    void SaveSessionToCloudSuccess(::StringW sessionName);
    // private System.Void SaveSessionToCloudFailure(System.String sessionName, VROSC.Error error)
    // Offset: 0xB0E528
    void SaveSessionToCloudFailure(::StringW sessionName, ::VROSC::Error error);
    // private System.Void DeleteSessionFromCloudSuccess(System.String sessionName)
    // Offset: 0xB0E728
    void DeleteSessionFromCloudSuccess(::StringW sessionName);
    // private System.Void DeleteSessionFromCloudFailure(System.String sessionName, VROSC.Error error)
    // Offset: 0xB0E964
    void DeleteSessionFromCloudFailure(::StringW sessionName, ::VROSC::Error error);
    // private System.Void DownloadPreviewFromCloudSuccess(System.String sessionName)
    // Offset: 0xB0EB4C
    void DownloadPreviewFromCloudSuccess(::StringW sessionName);
    // private System.Void DownloadPreviewFromCloudFailure(System.String sessionName, VROSC.Error error)
    // Offset: 0xB0EC10
    void DownloadPreviewFromCloudFailure(::StringW sessionName, ::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0xB0ECA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveLoadManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SaveLoadManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveLoadManager*, creationType>()));
    }
  }; // VROSC.SaveLoadManager
  #pragma pack(pop)
  static check_size<sizeof(SaveLoadManager), 40 + sizeof(::VROSC::ZipFileWriter*)> __VROSC_SaveLoadManagerSizeCheck;
  static_assert(sizeof(SaveLoadManager) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveLoadManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)()>(&VROSC::SaveLoadManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)()>(&VROSC::SaveLoadManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)()>(&VROSC::SaveLoadManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::LoadModel
// Il2CppName: LoadModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::SaveLoadManager::LoadModel)> {
  static const MethodInfo* get() {
    static auto* dataModelKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "LoadModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataModelKey, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::LoadFromSession
// Il2CppName: LoadFromSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::SaveLoadManager::LoadFromSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dataModelKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "LoadFromSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, dataModelKey, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::SaveLoadManager::Load)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::SaveModel
// Il2CppName: SaveModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::SaveLoadManager::SaveModel)> {
  static const MethodInfo* get() {
    static auto* dataModelKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "SaveModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataModelKey, data, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::SaveModelToSession
// Il2CppName: SaveModelToSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::SaveLoadManager::SaveModelToSession)> {
  static const MethodInfo* get() {
    static auto* dataModelKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "SaveModelToSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataModelKey, sessionId, data, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::SaveLoadManager::Save)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, data, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::DeleteModelFile
// Il2CppName: DeleteModelFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW)>(&VROSC::SaveLoadManager::DeleteModelFile)> {
  static const MethodInfo* get() {
    static auto* dataModelKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "DeleteModelFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataModelKey});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::LoadDefaultSession
// Il2CppName: LoadDefaultSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)()>(&VROSC::SaveLoadManager::LoadDefaultSession)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "LoadDefaultSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::LoadSession
// Il2CppName: LoadSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::StringW, bool, bool)>(&VROSC::SaveLoadManager::LoadSession)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fromCloud = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isCommunity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "LoadSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, userId, fromCloud, isCommunity});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::SaveSession
// Il2CppName: SaveSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, bool, bool, bool)>(&VROSC::SaveLoadManager::SaveSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isCloud = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isCommunity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasPreview = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "SaveSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, isCloud, isCommunity, hasPreview});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::UpdateOldSaveFiles
// Il2CppName: UpdateOldSaveFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (VROSC::SaveLoadManager::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_2<::StringW, ::VROSC::Error>*)>(&VROSC::SaveLoadManager::UpdateOldSaveFiles)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "UpdateOldSaveFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::DeleteSession
// Il2CppName: DeleteSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, bool, bool, bool)>(&VROSC::SaveLoadManager::DeleteSession)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* inCloud = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isCommunity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isOgg = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "DeleteSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, inCloud, isCommunity, isOgg});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::LoadSessionPreview
// Il2CppName: LoadSessionPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::StringW, bool, bool, bool)>(&VROSC::SaveLoadManager::LoadSessionPreview)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* inCloud = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isCommunity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isOgg = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "LoadSessionPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, userId, inCloud, isCommunity, isOgg});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::GetSavePath
// Il2CppName: GetSavePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::SaveLoadManager::*)(::StringW)>(&VROSC::SaveLoadManager::GetSavePath)> {
  static const MethodInfo* get() {
    static auto* postfix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "GetSavePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{postfix});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::GetSessionSavePath
// Il2CppName: GetSessionSavePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::SaveLoadManager::*)(::StringW, ::StringW)>(&VROSC::SaveLoadManager::GetSessionSavePath)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* postfix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "GetSessionSavePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, postfix});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::LoadSessionFromCloudSuccess
// Il2CppName: LoadSessionFromCloudSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW)>(&VROSC::SaveLoadManager::LoadSessionFromCloudSuccess)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "LoadSessionFromCloudSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::LoadSessionFromCloudFailure
// Il2CppName: LoadSessionFromCloudFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&VROSC::SaveLoadManager::LoadSessionFromCloudFailure)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "LoadSessionFromCloudFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, error});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::SaveSessionToCloudSuccess
// Il2CppName: SaveSessionToCloudSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW)>(&VROSC::SaveLoadManager::SaveSessionToCloudSuccess)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "SaveSessionToCloudSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::SaveSessionToCloudFailure
// Il2CppName: SaveSessionToCloudFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&VROSC::SaveLoadManager::SaveSessionToCloudFailure)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "SaveSessionToCloudFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, error});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::DeleteSessionFromCloudSuccess
// Il2CppName: DeleteSessionFromCloudSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW)>(&VROSC::SaveLoadManager::DeleteSessionFromCloudSuccess)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "DeleteSessionFromCloudSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::DeleteSessionFromCloudFailure
// Il2CppName: DeleteSessionFromCloudFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&VROSC::SaveLoadManager::DeleteSessionFromCloudFailure)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "DeleteSessionFromCloudFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, error});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::DownloadPreviewFromCloudSuccess
// Il2CppName: DownloadPreviewFromCloudSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW)>(&VROSC::SaveLoadManager::DownloadPreviewFromCloudSuccess)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "DownloadPreviewFromCloudSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::DownloadPreviewFromCloudFailure
// Il2CppName: DownloadPreviewFromCloudFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&VROSC::SaveLoadManager::DownloadPreviewFromCloudFailure)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager*), "DownloadPreviewFromCloudFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, error});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
