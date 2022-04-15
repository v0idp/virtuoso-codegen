// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationRecordingProgress
  class LoopStationRecordingProgress;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationRecordingProgress);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingProgress*, "VROSC", "LoopStationRecordingProgress");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationRecordingProgress
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationRecordingProgress : public ::Il2CppObject {
    public:
    public:
    // private System.Single <FullLengthProgress>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float FullLengthProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <SingleBarProgress>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float SingleBarProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastProgress
    // Size: 0x4
    // Offset: 0x18
    float lastProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _barCount
    // Size: 0x4
    // Offset: 0x1C
    int barCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Single <FullLengthProgress>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$FullLengthProgress$k__BackingField();
    // Get instance field reference: private System.Single <SingleBarProgress>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$SingleBarProgress$k__BackingField();
    // Get instance field reference: private System.Single _lastProgress
    [[deprecated("Use field access instead!")]] float& dyn__lastProgress();
    // Get instance field reference: private System.Int32 _barCount
    [[deprecated("Use field access instead!")]] int& dyn__barCount();
    // public System.Single get_FullLengthProgress()
    // Offset: 0x1977D04
    float get_FullLengthProgress();
    // private System.Void set_FullLengthProgress(System.Single value)
    // Offset: 0x1977CFC
    void set_FullLengthProgress(float value);
    // public System.Single get_SingleBarProgress()
    // Offset: 0x1977D14
    float get_SingleBarProgress();
    // private System.Void set_SingleBarProgress(System.Single value)
    // Offset: 0x1977D0C
    void set_SingleBarProgress(float value);
    // public System.Void .ctor()
    // Offset: 0x1977658
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationRecordingProgress* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationRecordingProgress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationRecordingProgress*, creationType>()));
    }
    // public System.Void Reset()
    // Offset: 0x1976A60
    void Reset();
    // public System.Void Update(System.Single recordingLengthInBars)
    // Offset: 0x1976E38
    void Update(float recordingLengthInBars);
    // private System.Void SetValue(System.Single recordingProgress, System.Single visualProgress)
    // Offset: 0x1977D1C
    void SetValue(float recordingProgress, float visualProgress);
  }; // VROSC.LoopStationRecordingProgress
  #pragma pack(pop)
  static check_size<sizeof(LoopStationRecordingProgress), 28 + sizeof(int)> __VROSC_LoopStationRecordingProgressSizeCheck;
  static_assert(sizeof(LoopStationRecordingProgress) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationRecordingProgress::get_FullLengthProgress
// Il2CppName: get_FullLengthProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopStationRecordingProgress::*)()>(&VROSC::LoopStationRecordingProgress::get_FullLengthProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingProgress*), "get_FullLengthProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingProgress::set_FullLengthProgress
// Il2CppName: set_FullLengthProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingProgress::*)(float)>(&VROSC::LoopStationRecordingProgress::set_FullLengthProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingProgress*), "set_FullLengthProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingProgress::get_SingleBarProgress
// Il2CppName: get_SingleBarProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopStationRecordingProgress::*)()>(&VROSC::LoopStationRecordingProgress::get_SingleBarProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingProgress*), "get_SingleBarProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingProgress::set_SingleBarProgress
// Il2CppName: set_SingleBarProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingProgress::*)(float)>(&VROSC::LoopStationRecordingProgress::set_SingleBarProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingProgress*), "set_SingleBarProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingProgress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopStationRecordingProgress::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingProgress::*)()>(&VROSC::LoopStationRecordingProgress::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingProgress*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingProgress::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingProgress::*)(float)>(&VROSC::LoopStationRecordingProgress::Update)> {
  static const MethodInfo* get() {
    static auto* recordingLengthInBars = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingProgress*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingLengthInBars});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingProgress::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingProgress::*)(float, float)>(&VROSC::LoopStationRecordingProgress::SetValue)> {
  static const MethodInfo* get() {
    static auto* recordingProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* visualProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingProgress*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingProgress, visualProgress});
  }
};
