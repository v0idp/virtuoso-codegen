// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ToolDataModel
#include "VROSC/ToolDataModel.hpp"
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
  // Forward declaring type: LoopPlaybackConfigData
  class LoopPlaybackConfigData;
  // Forward declaring type: LoopStationTrack
  class LoopStationTrack;
  // Forward declaring type: LoopStationTrackGroup
  class LoopStationTrackGroup;
  // Forward declaring type: LoopStationLaunchpad
  class LoopStationLaunchpad;
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
  // Forward declaring type: LoopStationDataModel
  class LoopStationDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataModel*, "VROSC", "LoopStationDataModel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationDataModel : public ::VROSC::ToolDataModel {
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
    // public System.Single FirstRecordingLengthInBars
    // Size: 0x4
    // Offset: 0x20
    float FirstRecordingLengthInBars;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single FirstRecordingLengthInSamples
    // Size: 0x4
    // Offset: 0x24
    float FirstRecordingLengthInSamples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single FirstRecordingBeatsPerBar
    // Size: 0x4
    // Offset: 0x28
    float FirstRecordingBeatsPerBar;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Volume
    // Size: 0x4
    // Offset: 0x2C
    float Volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean AutoSortUserGroups
    // Size: 0x1
    // Offset: 0x30
    bool AutoSortUserGroups;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RecordButtonIsAttached
    // Size: 0x1
    // Offset: 0x31
    bool RecordButtonIsAttached;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RecordButtonIsAttached and: RecordButtonPosition
    char __padding5[0x6] = {};
    // public System.Single[] RecordButtonPosition
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<float> RecordButtonPosition;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] RecordButtonRotation
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<float> RecordButtonRotation;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] RecordButtonScale
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<float> RecordButtonScale;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public VROSC.LoopPlaybackConfigData DefaultPlaybackConfig
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::LoopPlaybackConfigData* DefaultPlaybackConfig;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfigData*) == 0x8);
    // public System.Collections.Generic.List`1<VROSC.LoopStationTrack> LoopStationTracks
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>* LoopStationTracks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>*) == 0x8);
    // public System.Collections.Generic.List`1<VROSC.LoopStationTrackGroup> LoopStationTrackGroups
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>* LoopStationTrackGroups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>*) == 0x8);
    // public System.Collections.Generic.List`1<VROSC.LoopStationLaunchpad> LoopStationLaunchPads
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpad*>* LoopStationLaunchPads;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpad*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::VROSC::TransformData*
    constexpr operator ::VROSC::TransformData*() const noexcept = delete;
    // Get instance field reference: public System.Single FirstRecordingLengthInBars
    float& dyn_FirstRecordingLengthInBars();
    // Get instance field reference: public System.Single FirstRecordingLengthInSamples
    float& dyn_FirstRecordingLengthInSamples();
    // Get instance field reference: public System.Single FirstRecordingBeatsPerBar
    float& dyn_FirstRecordingBeatsPerBar();
    // Get instance field reference: public System.Single Volume
    float& dyn_Volume();
    // Get instance field reference: public System.Boolean AutoSortUserGroups
    bool& dyn_AutoSortUserGroups();
    // Get instance field reference: public System.Boolean RecordButtonIsAttached
    bool& dyn_RecordButtonIsAttached();
    // Get instance field reference: public System.Single[] RecordButtonPosition
    ::ArrayW<float>& dyn_RecordButtonPosition();
    // Get instance field reference: public System.Single[] RecordButtonRotation
    ::ArrayW<float>& dyn_RecordButtonRotation();
    // Get instance field reference: public System.Single[] RecordButtonScale
    ::ArrayW<float>& dyn_RecordButtonScale();
    // Get instance field reference: public VROSC.LoopPlaybackConfigData DefaultPlaybackConfig
    ::VROSC::LoopPlaybackConfigData*& dyn_DefaultPlaybackConfig();
    // Get instance field reference: public System.Collections.Generic.List`1<VROSC.LoopStationTrack> LoopStationTracks
    ::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>*& dyn_LoopStationTracks();
    // Get instance field reference: public System.Collections.Generic.List`1<VROSC.LoopStationTrackGroup> LoopStationTrackGroups
    ::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>*& dyn_LoopStationTrackGroups();
    // Get instance field reference: public System.Collections.Generic.List`1<VROSC.LoopStationLaunchpad> LoopStationLaunchPads
    ::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpad*>*& dyn_LoopStationLaunchPads();
    // public override System.String get_Key()
    // Offset: 0x9130F0
    // Implemented from: VROSC.BaseDataModel
    // Base method: System.String BaseDataModel::get_Key()
    ::StringW get_Key();
    // public override System.Int32 get_Version()
    // Offset: 0x913134
    // Implemented from: VROSC.BaseDataModel
    // Base method: System.Int32 BaseDataModel::get_Version()
    int get_Version();
    // public System.Void .ctor()
    // Offset: 0x9106D0
    // Implemented from: VROSC.ToolDataModel
    // Base method: System.Void ToolDataModel::.ctor()
    // Base method: System.Void BaseDataModel::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationDataModel*, creationType>()));
    }
  }; // VROSC.LoopStationDataModel
  #pragma pack(pop)
  static check_size<sizeof(LoopStationDataModel), 104 + sizeof(::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpad*>*)> __VROSC_LoopStationDataModelSizeCheck;
  static_assert(sizeof(LoopStationDataModel) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationDataModel::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopStationDataModel::*)()>(&VROSC::LoopStationDataModel::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationDataModel*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationDataModel::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopStationDataModel::*)()>(&VROSC::LoopStationDataModel::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationDataModel*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!