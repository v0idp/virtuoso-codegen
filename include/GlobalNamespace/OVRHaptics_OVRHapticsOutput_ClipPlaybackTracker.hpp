// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRHaptics/OVRHapticsOutput
#include "GlobalNamespace/OVRHaptics_OVRHapticsOutput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRHapticsClip
  class OVRHapticsClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*, "", "OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 <ReadCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int ReadCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ReadCount and: Clip
    char __padding0[0x4] = {};
    // private OVRHapticsClip <Clip>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRHapticsClip* Clip;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRHapticsClip*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <ReadCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ReadCount$k__BackingField();
    // Get instance field reference: private OVRHapticsClip <Clip>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRHapticsClip*& dyn_$Clip$k__BackingField();
    // public System.Int32 get_ReadCount()
    // Offset: 0x13F2050
    int get_ReadCount();
    // public System.Void set_ReadCount(System.Int32 value)
    // Offset: 0x13F2058
    void set_ReadCount(int value);
    // public OVRHapticsClip get_Clip()
    // Offset: 0x13F2060
    ::GlobalNamespace::OVRHapticsClip* get_Clip();
    // public System.Void set_Clip(OVRHapticsClip value)
    // Offset: 0x13F2068
    void set_Clip(::GlobalNamespace::OVRHapticsClip* value);
    // public System.Void .ctor(OVRHapticsClip clip)
    // Offset: 0x13F2070
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker* New_ctor(::GlobalNamespace::OVRHapticsClip* clip) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*, creationType>(clip)));
    }
  }; // OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker
  #pragma pack(pop)
  static check_size<sizeof(OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker), 24 + sizeof(::GlobalNamespace::OVRHapticsClip*)> __GlobalNamespace_OVRHaptics_OVRHapticsOutput_ClipPlaybackTrackerSizeCheck;
  static_assert(sizeof(OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::get_ReadCount
// Il2CppName: get_ReadCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::*)()>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::get_ReadCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*), "get_ReadCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::set_ReadCount
// Il2CppName: set_ReadCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::*)(int)>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::set_ReadCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*), "set_ReadCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::get_Clip
// Il2CppName: get_Clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRHapticsClip* (GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::*)()>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::get_Clip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*), "get_Clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::set_Clip
// Il2CppName: set_Clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::*)(::GlobalNamespace::OVRHapticsClip*)>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::set_Clip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRHapticsClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*), "set_Clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
