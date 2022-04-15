// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: BaseDataModel
  class BaseDataModel;
  // Forward declaring type: ChangeFlags
  struct ChangeFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: BaseDataController
  class BaseDataController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BaseDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BaseDataController*, "VROSC", "BaseDataController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BaseDataController
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseDataController : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::BaseDataController::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    public:
    // protected VROSC.BaseDataModel _dataModel
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::BaseDataModel* dataModel;
    // Field size check
    static_assert(sizeof(::VROSC::BaseDataModel*) == 0x8);
    // private System.Boolean <IsLoaded>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsSaved>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool IsSaved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsSaved and: OnProgressStepFinished
    char __padding2[0x6] = {};
    // public System.Action OnProgressStepFinished
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* OnProgressStepFinished;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: protected VROSC.BaseDataModel _dataModel
    [[deprecated("Use field access instead!")]] ::VROSC::BaseDataModel*& dyn__dataModel();
    // Get instance field reference: private System.Boolean <IsLoaded>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsLoaded$k__BackingField();
    // Get instance field reference: private System.Boolean <IsSaved>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsSaved$k__BackingField();
    // Get instance field reference: public System.Action OnProgressStepFinished
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnProgressStepFinished();
    // public System.Type get_ModelType()
    // Offset: 0x973F00
    ::System::Type* get_ModelType();
    // public System.Boolean get_IsLoaded()
    // Offset: 0x973F1C
    bool get_IsLoaded();
    // protected System.Void set_IsLoaded(System.Boolean value)
    // Offset: 0x973F24
    void set_IsLoaded(bool value);
    // public System.Boolean get_IsSaved()
    // Offset: 0x973F30
    bool get_IsSaved();
    // protected System.Void set_IsSaved(System.Boolean value)
    // Offset: 0x973F38
    void set_IsSaved(bool value);
    // public System.Boolean get_HasChanged()
    // Offset: 0x973F44
    bool get_HasChanged();
    // public System.Void .ctor()
    // Offset: 0x974498
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseDataController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BaseDataController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseDataController*, creationType>()));
    }
    // public System.Void LoadLocalData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x973F68
    void LoadLocalData(::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void SaveLocalData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x974090
    void SaveLocalData(::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void LoadCloudData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x974160
    void LoadCloudData(::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void SaveCloudData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x9741A0
    void SaveCloudData(::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void LoadLocalData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x9741E0
    void LoadLocalData(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void SaveLocalData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x974220
    void SaveLocalData(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void LoadCloudData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x9742E0
    void LoadCloudData(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void SaveCloudData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x974320
    void SaveCloudData(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.String GetModelJson()
    // Offset: 0x974140
    ::StringW GetModelJson();
    // public System.Void Changed()
    // Offset: 0x974360
    void Changed();
    // protected System.Void SetChangeFlags(VROSC.ChangeFlags changeFlags)
    // Offset: 0x974384
    void SetChangeFlags(::VROSC::ChangeFlags changeFlags);
    // public System.Void UpdateSaveVersion()
    // Offset: 0x9743A8
    void UpdateSaveVersion();
    // public System.Int32 GetLoadSteps()
    // Offset: 0x9743E0
    int GetLoadSteps();
    // public System.Int32 GetSaveSteps()
    // Offset: 0x9743E8
    int GetSaveSteps();
    // public System.Void LoadData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x9743F0
    void LoadData(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Void SaveData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x974444
    void SaveData(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
  }; // VROSC.BaseDataController
  #pragma pack(pop)
  static check_size<sizeof(BaseDataController), 32 + sizeof(::System::Action*)> __VROSC_BaseDataControllerSizeCheck;
  static_assert(sizeof(BaseDataController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BaseDataController::get_ModelType
// Il2CppName: get_ModelType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::get_ModelType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "get_ModelType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::get_IsLoaded
// Il2CppName: get_IsLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::get_IsLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "get_IsLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::set_IsLoaded
// Il2CppName: set_IsLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(bool)>(&VROSC::BaseDataController::set_IsLoaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "set_IsLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::get_IsSaved
// Il2CppName: get_IsSaved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::get_IsSaved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "get_IsSaved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::set_IsSaved
// Il2CppName: set_IsSaved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(bool)>(&VROSC::BaseDataController::set_IsSaved)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "set_IsSaved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::get_HasChanged
// Il2CppName: get_HasChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::get_HasChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "get_HasChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::BaseDataController::LoadLocalData
// Il2CppName: LoadLocalData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::LoadLocalData)> {
  static const MethodInfo* get() {
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "LoadLocalData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::SaveLocalData
// Il2CppName: SaveLocalData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::SaveLocalData)> {
  static const MethodInfo* get() {
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "SaveLocalData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::LoadCloudData
// Il2CppName: LoadCloudData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::LoadCloudData)> {
  static const MethodInfo* get() {
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "LoadCloudData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::SaveCloudData
// Il2CppName: SaveCloudData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::SaveCloudData)> {
  static const MethodInfo* get() {
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "SaveCloudData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::LoadLocalData
// Il2CppName: LoadLocalData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::LoadLocalData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "LoadLocalData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::SaveLocalData
// Il2CppName: SaveLocalData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::SaveLocalData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "SaveLocalData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::LoadCloudData
// Il2CppName: LoadCloudData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::LoadCloudData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "LoadCloudData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::SaveCloudData
// Il2CppName: SaveCloudData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::SaveCloudData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "SaveCloudData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::GetModelJson
// Il2CppName: GetModelJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::GetModelJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "GetModelJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::Changed
// Il2CppName: Changed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::Changed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "Changed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::SetChangeFlags
// Il2CppName: SetChangeFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::VROSC::ChangeFlags)>(&VROSC::BaseDataController::SetChangeFlags)> {
  static const MethodInfo* get() {
    static auto* changeFlags = &::il2cpp_utils::GetClassFromName("VROSC", "ChangeFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "SetChangeFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{changeFlags});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::UpdateSaveVersion
// Il2CppName: UpdateSaveVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::UpdateSaveVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "UpdateSaveVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::GetLoadSteps
// Il2CppName: GetLoadSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::GetLoadSteps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "GetLoadSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::GetSaveSteps
// Il2CppName: GetSaveSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::BaseDataController::*)()>(&VROSC::BaseDataController::GetSaveSteps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "GetSaveSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::LoadData
// Il2CppName: LoadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::LoadData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "LoadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::SaveData
// Il2CppName: SaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::BaseDataController::SaveData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController*), "SaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
