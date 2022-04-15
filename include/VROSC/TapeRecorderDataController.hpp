// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ToolDataController
#include "VROSC/ToolDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TransformDataController
  class TransformDataController;
  // Forward declaring type: TapeRecorderDataModel
  class TapeRecorderDataModel;
  // Forward declaring type: WidgetSettings
  class WidgetSettings;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TapeRecorderDataController
  class TapeRecorderDataController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TapeRecorderDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController*, "VROSC", "TapeRecorderDataController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TapeRecorderDataController
  // [TokenAttribute] Offset: FFFFFFFF
  class TapeRecorderDataController : public ::VROSC::ToolDataController {
    public:
    // Nested type: ::VROSC::TapeRecorderDataController::$$c__DisplayClass44_0
    class $$c__DisplayClass44_0;
    // Nested type: ::VROSC::TapeRecorderDataController::$SaveData$d__44
    struct $SaveData$d__44;
    // Nested type: ::VROSC::TapeRecorderDataController::$LoadData$d__45
    struct $LoadData$d__45;
    // Nested type: ::VROSC::TapeRecorderDataController::$$c__DisplayClass46_0
    class $$c__DisplayClass46_0;
    // Nested type: ::VROSC::TapeRecorderDataController::$SaveAudioPreview$d__46
    struct $SaveAudioPreview$d__46;
    public:
    // private System.Single <MaxRecordingLengthSeconds>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float MaxRecordingLengthSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <RecordingLength>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int RecordingLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <RecordingStartIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int RecordingStartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <RecordingEndIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    int RecordingEndIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single[] <CurrentAudioData>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<float> CurrentAudioData;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Boolean <HasAudioData>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool HasAudioData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HasAudioData and: transformData
    char __padding5[0x7] = {};
    // private VROSC.TransformDataController _transformData
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::TransformDataController* transformData;
    // Field size check
    static_assert(sizeof(::VROSC::TransformDataController*) == 0x8);
    public:
    // Get instance field reference: private System.Single <MaxRecordingLengthSeconds>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$MaxRecordingLengthSeconds$k__BackingField();
    // Get instance field reference: private System.Int32 <RecordingLength>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$RecordingLength$k__BackingField();
    // Get instance field reference: private System.Int32 <RecordingStartIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$RecordingStartIndex$k__BackingField();
    // Get instance field reference: private System.Int32 <RecordingEndIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$RecordingEndIndex$k__BackingField();
    // Get instance field reference: private System.Single[] <CurrentAudioData>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_$CurrentAudioData$k__BackingField();
    // Get instance field reference: private System.Boolean <HasAudioData>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$HasAudioData$k__BackingField();
    // Get instance field reference: private VROSC.TransformDataController _transformData
    [[deprecated("Use field access instead!")]] ::VROSC::TransformDataController*& dyn__transformData();
    // private VROSC.TapeRecorderDataModel get_DataModel()
    // Offset: 0xA222AC
    ::VROSC::TapeRecorderDataModel* get_DataModel();
    // public System.Single get_MaxRecordingLengthSeconds()
    // Offset: 0xA22328
    float get_MaxRecordingLengthSeconds();
    // private System.Void set_MaxRecordingLengthSeconds(System.Single value)
    // Offset: 0xA22330
    void set_MaxRecordingLengthSeconds(float value);
    // public System.Int32 get_RecordingLength()
    // Offset: 0xA22338
    int get_RecordingLength();
    // private System.Void set_RecordingLength(System.Int32 value)
    // Offset: 0xA22340
    void set_RecordingLength(int value);
    // public System.Int32 get_RecordingStartIndex()
    // Offset: 0xA22348
    int get_RecordingStartIndex();
    // public System.Void set_RecordingStartIndex(System.Int32 value)
    // Offset: 0xA22350
    void set_RecordingStartIndex(int value);
    // public System.Int32 get_RecordingEndIndex()
    // Offset: 0xA22358
    int get_RecordingEndIndex();
    // public System.Void set_RecordingEndIndex(System.Int32 value)
    // Offset: 0xA22360
    void set_RecordingEndIndex(int value);
    // public System.Single[] get_CurrentAudioData()
    // Offset: 0xA22368
    ::ArrayW<float> get_CurrentAudioData();
    // private System.Void set_CurrentAudioData(System.Single[] value)
    // Offset: 0xA22370
    void set_CurrentAudioData(::ArrayW<float> value);
    // public System.Boolean get_HasAudioData()
    // Offset: 0xA22378
    bool get_HasAudioData();
    // public System.Void set_HasAudioData(System.Boolean value)
    // Offset: 0xA22380
    void set_HasAudioData(bool value);
    // public System.Single get_NormalizeMultiplier()
    // Offset: 0xA227A8
    float get_NormalizeMultiplier();
    // public System.Void set_NormalizeMultiplier(System.Single value)
    // Offset: 0xA227C8
    void set_NormalizeMultiplier(float value);
    // public System.Boolean get_UseAsPreview()
    // Offset: 0xA22808
    bool get_UseAsPreview();
    // public System.Void set_UseAsPreview(System.Boolean value)
    // Offset: 0xA22828
    void set_UseAsPreview(bool value);
    // public System.Void ClearAudioData()
    // Offset: 0xA22598
    void ClearAudioData();
    // public System.Threading.Tasks.Task SaveAudioPreview(System.String sessionName, System.Action`2<System.Boolean,System.Single> onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xA22A18
    ::System::Threading::Tasks::Task* SaveAudioPreview(::StringW sessionName, ::System::Action_2<bool, float>* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // private System.Void <LoadData>b__45_0(System.String data)
    // Offset: 0xA22B44
    void $LoadData$b__45_0(::StringW data);
    // private System.Void <LoadData>b__45_1(System.Single[] audioData, System.Int32 length)
    // Offset: 0xA22B70
    void $LoadData$b__45_1(::ArrayW<float> audioData, int length);
    // public override VROSC.TransformDataController get_TransformData()
    // Offset: 0xA2238C
    // Implemented from: VROSC.ToolDataController
    // Base method: VROSC.TransformDataController ToolDataController::get_TransformData()
    ::VROSC::TransformDataController* get_TransformData();
    // public override System.Boolean get_IsOpen()
    // Offset: 0xA225D8
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Boolean ToolDataController::get_IsOpen()
    bool get_IsOpen();
    // public override System.Void set_IsOpen(System.Boolean value)
    // Offset: 0xA22600
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::set_IsOpen(System.Boolean value)
    void set_IsOpen(bool value);
    // public override System.Boolean get_HasBeenOpened()
    // Offset: 0xA22644
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Boolean ToolDataController::get_HasBeenOpened()
    bool get_HasBeenOpened();
    // public override System.Void set_HasBeenOpened(System.Boolean value)
    // Offset: 0xA22664
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::set_HasBeenOpened(System.Boolean value)
    void set_HasBeenOpened(bool value);
    // public System.Void .ctor()
    // Offset: 0xA22394
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::.ctor()
    // Base method: System.Void BaseDataController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TapeRecorderDataController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TapeRecorderDataController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TapeRecorderDataController*, creationType>()));
    }
    // public override System.Void ApplyDefaults(VROSC.WidgetSettings widgetDefaultSettings)
    // Offset: 0xA226A0
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::ApplyDefaults(VROSC.WidgetSettings widgetDefaultSettings)
    void ApplyDefaults(::VROSC::WidgetSettings* widgetDefaultSettings);
    // public override System.Void SaveData(System.String sessionName, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xA22864
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Void BaseDataController::SaveData(System.String sessionName, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    void SaveData(::StringW sessionName, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public override System.Void LoadData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0xA22944
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Void BaseDataController::LoadData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    void LoadData(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
  }; // VROSC.TapeRecorderDataController
  #pragma pack(pop)
  static check_size<sizeof(TapeRecorderDataController), 72 + sizeof(::VROSC::TransformDataController*)> __VROSC_TapeRecorderDataControllerSizeCheck;
  static_assert(sizeof(TapeRecorderDataController) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_DataModel
// Il2CppName: get_DataModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TapeRecorderDataModel* (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_DataModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_DataModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_MaxRecordingLengthSeconds
// Il2CppName: get_MaxRecordingLengthSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_MaxRecordingLengthSeconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_MaxRecordingLengthSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_MaxRecordingLengthSeconds
// Il2CppName: set_MaxRecordingLengthSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(float)>(&VROSC::TapeRecorderDataController::set_MaxRecordingLengthSeconds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_MaxRecordingLengthSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_RecordingLength
// Il2CppName: get_RecordingLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_RecordingLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_RecordingLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_RecordingLength
// Il2CppName: set_RecordingLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(int)>(&VROSC::TapeRecorderDataController::set_RecordingLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_RecordingLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_RecordingStartIndex
// Il2CppName: get_RecordingStartIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_RecordingStartIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_RecordingStartIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_RecordingStartIndex
// Il2CppName: set_RecordingStartIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(int)>(&VROSC::TapeRecorderDataController::set_RecordingStartIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_RecordingStartIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_RecordingEndIndex
// Il2CppName: get_RecordingEndIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_RecordingEndIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_RecordingEndIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_RecordingEndIndex
// Il2CppName: set_RecordingEndIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(int)>(&VROSC::TapeRecorderDataController::set_RecordingEndIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_RecordingEndIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_CurrentAudioData
// Il2CppName: get_CurrentAudioData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_CurrentAudioData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_CurrentAudioData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_CurrentAudioData
// Il2CppName: set_CurrentAudioData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(::ArrayW<float>)>(&VROSC::TapeRecorderDataController::set_CurrentAudioData)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_CurrentAudioData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_HasAudioData
// Il2CppName: get_HasAudioData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_HasAudioData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_HasAudioData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_HasAudioData
// Il2CppName: set_HasAudioData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(bool)>(&VROSC::TapeRecorderDataController::set_HasAudioData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_HasAudioData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_NormalizeMultiplier
// Il2CppName: get_NormalizeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_NormalizeMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_NormalizeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_NormalizeMultiplier
// Il2CppName: set_NormalizeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(float)>(&VROSC::TapeRecorderDataController::set_NormalizeMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_NormalizeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_UseAsPreview
// Il2CppName: get_UseAsPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_UseAsPreview)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_UseAsPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_UseAsPreview
// Il2CppName: set_UseAsPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(bool)>(&VROSC::TapeRecorderDataController::set_UseAsPreview)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_UseAsPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::ClearAudioData
// Il2CppName: ClearAudioData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::ClearAudioData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "ClearAudioData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::SaveAudioPreview
// Il2CppName: SaveAudioPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (VROSC::TapeRecorderDataController::*)(::StringW, ::System::Action_2<bool, float>*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::TapeRecorderDataController::SaveAudioPreview)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "SaveAudioPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::$LoadData$b__45_0
// Il2CppName: <LoadData>b__45_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(::StringW)>(&VROSC::TapeRecorderDataController::$LoadData$b__45_0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "<LoadData>b__45_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::$LoadData$b__45_1
// Il2CppName: <LoadData>b__45_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(::ArrayW<float>, int)>(&VROSC::TapeRecorderDataController::$LoadData$b__45_1)> {
  static const MethodInfo* get() {
    static auto* audioData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "<LoadData>b__45_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioData, length});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_TransformData
// Il2CppName: get_TransformData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformDataController* (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_TransformData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_TransformData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_IsOpen
// Il2CppName: get_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_IsOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_IsOpen
// Il2CppName: set_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(bool)>(&VROSC::TapeRecorderDataController::set_IsOpen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::get_HasBeenOpened
// Il2CppName: get_HasBeenOpened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TapeRecorderDataController::*)()>(&VROSC::TapeRecorderDataController::get_HasBeenOpened)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "get_HasBeenOpened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::set_HasBeenOpened
// Il2CppName: set_HasBeenOpened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(bool)>(&VROSC::TapeRecorderDataController::set_HasBeenOpened)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "set_HasBeenOpened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::ApplyDefaults
// Il2CppName: ApplyDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(::VROSC::WidgetSettings*)>(&VROSC::TapeRecorderDataController::ApplyDefaults)> {
  static const MethodInfo* get() {
    static auto* widgetDefaultSettings = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "ApplyDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{widgetDefaultSettings});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::SaveData
// Il2CppName: SaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::TapeRecorderDataController::SaveData)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "SaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::LoadData
// Il2CppName: LoadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::TapeRecorderDataController::LoadData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController*), "LoadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
