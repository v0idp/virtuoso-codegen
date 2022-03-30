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
  // Forward declaring type: LoopPlaybackSettingsUI
  class LoopPlaybackSettingsUI;
  // Forward declaring type: LoopPlaybackConfig
  class LoopPlaybackConfig;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationRecordingButtonPlayback
  class LoopStationRecordingButtonPlayback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationRecordingButtonPlayback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingButtonPlayback*, "VROSC", "LoopStationRecordingButtonPlayback");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationRecordingButtonPlayback
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationRecordingButtonPlayback : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.LoopPlaybackSettingsUI _playbackSettingsUI
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::LoopPlaybackSettingsUI* playbackSettingsUI;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackSettingsUI*) == 0x8);
    // private VROSC.LoopPlaybackConfig <PlaybackConfig>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::LoopPlaybackConfig* PlaybackConfig;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfig*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.LoopPlaybackSettingsUI _playbackSettingsUI
    ::VROSC::LoopPlaybackSettingsUI*& dyn__playbackSettingsUI();
    // Get instance field reference: private VROSC.LoopPlaybackConfig <PlaybackConfig>k__BackingField
    ::VROSC::LoopPlaybackConfig*& dyn_$PlaybackConfig$k__BackingField();
    // public VROSC.LoopPlaybackConfig get_PlaybackConfig()
    // Offset: 0x8A4564
    ::VROSC::LoopPlaybackConfig* get_PlaybackConfig();
    // private System.Void set_PlaybackConfig(VROSC.LoopPlaybackConfig value)
    // Offset: 0x8A455C
    void set_PlaybackConfig(::VROSC::LoopPlaybackConfig* value);
    // public System.Void Setup()
    // Offset: 0x8A32F4
    void Setup();
    // public System.Void Reset(VROSC.LoopPlaybackConfig loopPlaybackConfig)
    // Offset: 0x8A3854
    void Reset(::VROSC::LoopPlaybackConfig* loopPlaybackConfig);
    // private System.Void CreateNewConfig()
    // Offset: 0x8A456C
    void CreateNewConfig();
    // private System.Void ConfigChanged()
    // Offset: 0x8A46AC
    void ConfigChanged();
    // public System.Void .ctor()
    // Offset: 0x8A471C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationRecordingButtonPlayback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationRecordingButtonPlayback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationRecordingButtonPlayback*, creationType>()));
    }
  }; // VROSC.LoopStationRecordingButtonPlayback
  #pragma pack(pop)
  static check_size<sizeof(LoopStationRecordingButtonPlayback), 32 + sizeof(::VROSC::LoopPlaybackConfig*)> __VROSC_LoopStationRecordingButtonPlaybackSizeCheck;
  static_assert(sizeof(LoopStationRecordingButtonPlayback) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonPlayback::get_PlaybackConfig
// Il2CppName: get_PlaybackConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfig* (VROSC::LoopStationRecordingButtonPlayback::*)()>(&VROSC::LoopStationRecordingButtonPlayback::get_PlaybackConfig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonPlayback*), "get_PlaybackConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonPlayback::set_PlaybackConfig
// Il2CppName: set_PlaybackConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingButtonPlayback::*)(::VROSC::LoopPlaybackConfig*)>(&VROSC::LoopStationRecordingButtonPlayback::set_PlaybackConfig)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonPlayback*), "set_PlaybackConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonPlayback::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingButtonPlayback::*)()>(&VROSC::LoopStationRecordingButtonPlayback::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonPlayback*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonPlayback::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingButtonPlayback::*)(::VROSC::LoopPlaybackConfig*)>(&VROSC::LoopStationRecordingButtonPlayback::Reset)> {
  static const MethodInfo* get() {
    static auto* loopPlaybackConfig = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonPlayback*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopPlaybackConfig});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonPlayback::CreateNewConfig
// Il2CppName: CreateNewConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingButtonPlayback::*)()>(&VROSC::LoopStationRecordingButtonPlayback::CreateNewConfig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonPlayback*), "CreateNewConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonPlayback::ConfigChanged
// Il2CppName: ConfigChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationRecordingButtonPlayback::*)()>(&VROSC::LoopStationRecordingButtonPlayback::ConfigChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonPlayback*), "ConfigChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonPlayback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
