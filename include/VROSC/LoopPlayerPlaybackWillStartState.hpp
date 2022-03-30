// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopPlayerPlaybackFadeState
#include "VROSC/LoopPlayerPlaybackFadeState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerPlaybackSettings
  class LoopPlayerPlaybackSettings;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerPlaybackWillStartState
  class LoopPlayerPlaybackWillStartState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackWillStartState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackWillStartState*, "VROSC", "LoopPlayerPlaybackWillStartState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerPlaybackWillStartState
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopPlayerPlaybackWillStartState : public ::VROSC::LoopPlayerPlaybackFadeState {
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
    // private System.Int32 <SyncOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int SyncOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <InverseSyncOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    int InverseSyncOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 <SyncOffset>k__BackingField
    int& dyn_$SyncOffset$k__BackingField();
    // Get instance field reference: private System.Int32 <InverseSyncOffset>k__BackingField
    int& dyn_$InverseSyncOffset$k__BackingField();
    // public System.Int32 get_SyncOffset()
    // Offset: 0x908030
    int get_SyncOffset();
    // private System.Void set_SyncOffset(System.Int32 value)
    // Offset: 0x908038
    void set_SyncOffset(int value);
    // public System.Int32 get_InverseSyncOffset()
    // Offset: 0x908040
    int get_InverseSyncOffset();
    // private System.Void set_InverseSyncOffset(System.Int32 value)
    // Offset: 0x908048
    void set_InverseSyncOffset(int value);
    // public System.Void SetBySettings(VROSC.LoopPlayerPlaybackSettings settings, System.Int32 evaluateFromSample)
    // Offset: 0x907AC0
    void SetBySettings(::VROSC::LoopPlayerPlaybackSettings* settings, int evaluateFromSample);
    // protected System.Int32 GetStateBeginSample(VROSC.LoopPlayerPlaybackSettings settings, System.Int32 sample)
    // Offset: 0x908148
    int GetStateBeginSample(::VROSC::LoopPlayerPlaybackSettings* settings, int sample);
    // private System.Void CalculateSyncOffset(VROSC.LoopPlayerPlaybackSettings settings)
    // Offset: 0x9082B4
    void CalculateSyncOffset(::VROSC::LoopPlayerPlaybackSettings* settings);
    // private System.Boolean ShouldUseOffset(VROSC.LoopPlayerPlaybackSettings settings)
    // Offset: 0x9083D8
    bool ShouldUseOffset(::VROSC::LoopPlayerPlaybackSettings* settings);
    // public override System.Boolean get_Playing()
    // Offset: 0x908020
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.Boolean LoopPlayerPlaybackState::get_Playing()
    bool get_Playing();
    // public System.Void .ctor()
    // Offset: 0x90760C
    // Implemented from: VROSC.LoopPlayerPlaybackFadeState
    // Base method: System.Void LoopPlayerPlaybackFadeState::.ctor()
    // Base method: System.Void LoopPlayerPlaybackState::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayerPlaybackWillStartState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayerPlaybackWillStartState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayerPlaybackWillStartState*, creationType>()));
    }
    // public override System.String DebugString()
    // Offset: 0x908050
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.String LoopPlayerPlaybackState::DebugString()
    ::StringW DebugString();
    // public override System.Void SetExplicit(System.Int32 startSample, System.Int32 stopSample)
    // Offset: 0x90812C
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.Void LoopPlayerPlaybackState::SetExplicit(System.Int32 startSample, System.Int32 stopSample)
    void SetExplicit(int startSample, int stopSample);
    // public override System.Void SetStateActive(VROSC.LoopPlayerPlaybackSettings settings, System.Int32 atSample)
    // Offset: 0x908248
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.Void LoopPlayerPlaybackState::SetStateActive(VROSC.LoopPlayerPlaybackSettings settings, System.Int32 atSample)
    void SetStateActive(::VROSC::LoopPlayerPlaybackSettings* settings, int atSample);
  }; // VROSC.LoopPlayerPlaybackWillStartState
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerPlaybackWillStartState), 52 + sizeof(int)> __VROSC_LoopPlayerPlaybackWillStartStateSizeCheck;
  static_assert(sizeof(LoopPlayerPlaybackWillStartState) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::get_SyncOffset
// Il2CppName: get_SyncOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayerPlaybackWillStartState::*)()>(&VROSC::LoopPlayerPlaybackWillStartState::get_SyncOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "get_SyncOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::set_SyncOffset
// Il2CppName: set_SyncOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackWillStartState::*)(int)>(&VROSC::LoopPlayerPlaybackWillStartState::set_SyncOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "set_SyncOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::get_InverseSyncOffset
// Il2CppName: get_InverseSyncOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayerPlaybackWillStartState::*)()>(&VROSC::LoopPlayerPlaybackWillStartState::get_InverseSyncOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "get_InverseSyncOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::set_InverseSyncOffset
// Il2CppName: set_InverseSyncOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackWillStartState::*)(int)>(&VROSC::LoopPlayerPlaybackWillStartState::set_InverseSyncOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "set_InverseSyncOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::SetBySettings
// Il2CppName: SetBySettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackWillStartState::*)(::VROSC::LoopPlayerPlaybackSettings*, int)>(&VROSC::LoopPlayerPlaybackWillStartState::SetBySettings)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackSettings")->byval_arg;
    static auto* evaluateFromSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "SetBySettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings, evaluateFromSample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::GetStateBeginSample
// Il2CppName: GetStateBeginSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayerPlaybackWillStartState::*)(::VROSC::LoopPlayerPlaybackSettings*, int)>(&VROSC::LoopPlayerPlaybackWillStartState::GetStateBeginSample)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackSettings")->byval_arg;
    static auto* sample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "GetStateBeginSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings, sample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::CalculateSyncOffset
// Il2CppName: CalculateSyncOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackWillStartState::*)(::VROSC::LoopPlayerPlaybackSettings*)>(&VROSC::LoopPlayerPlaybackWillStartState::CalculateSyncOffset)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "CalculateSyncOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::ShouldUseOffset
// Il2CppName: ShouldUseOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackWillStartState::*)(::VROSC::LoopPlayerPlaybackSettings*)>(&VROSC::LoopPlayerPlaybackWillStartState::ShouldUseOffset)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "ShouldUseOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::get_Playing
// Il2CppName: get_Playing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackWillStartState::*)()>(&VROSC::LoopPlayerPlaybackWillStartState::get_Playing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "get_Playing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::DebugString
// Il2CppName: DebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopPlayerPlaybackWillStartState::*)()>(&VROSC::LoopPlayerPlaybackWillStartState::DebugString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "DebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::SetExplicit
// Il2CppName: SetExplicit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackWillStartState::*)(int, int)>(&VROSC::LoopPlayerPlaybackWillStartState::SetExplicit)> {
  static const MethodInfo* get() {
    static auto* startSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stopSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "SetExplicit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startSample, stopSample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackWillStartState::SetStateActive
// Il2CppName: SetStateActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackWillStartState::*)(::VROSC::LoopPlayerPlaybackSettings*, int)>(&VROSC::LoopPlayerPlaybackWillStartState::SetStateActive)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackSettings")->byval_arg;
    static auto* atSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackWillStartState*), "SetStateActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings, atSample});
  }
};
