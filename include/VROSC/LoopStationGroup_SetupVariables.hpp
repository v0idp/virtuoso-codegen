// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopStationGroup
#include "VROSC/LoopStationGroup.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlaybackConfigOverride
  class LoopPlaybackConfigOverride;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroup::SetupVariables, "VROSC", "LoopStationGroup/SetupVariables");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: VROSC.LoopStationGroup/VROSC.SetupVariables
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoopStationGroup::SetupVariables/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.String <GroupID>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::StringW GroupID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <DisplayName>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single <Volume>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float Volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <Muted>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool Muted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Solo>k__BackingField
    // Size: 0x1
    // Offset: 0x15
    bool Solo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Solo and: Color
    char __padding4[0x2] = {};
    // private UnityEngine.Color <Color>k__BackingField
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color Color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private VROSC.LoopPlaybackConfigOverride <PlaybackConfig>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::LoopPlaybackConfigOverride* PlaybackConfig;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfigOverride*) == 0x8);
    public:
    // Creating value type constructor for type: SetupVariables
    constexpr SetupVariables(::StringW GroupID_ = {}, ::StringW DisplayName_ = {}, float Volume_ = {}, bool Muted_ = {}, bool Solo_ = {}, ::UnityEngine::Color Color_ = {}, ::VROSC::LoopPlaybackConfigOverride* PlaybackConfig_ = {}) noexcept : GroupID{GroupID_}, DisplayName{DisplayName_}, Volume{Volume_}, Muted{Muted_}, Solo{Solo_}, Color{Color_}, PlaybackConfig{PlaybackConfig_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.String <GroupID>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$GroupID$k__BackingField();
    // Get instance field reference: private System.String <DisplayName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$DisplayName$k__BackingField();
    // Get instance field reference: private System.Single <Volume>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Volume$k__BackingField();
    // Get instance field reference: private System.Boolean <Muted>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Muted$k__BackingField();
    // Get instance field reference: private System.Boolean <Solo>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Solo$k__BackingField();
    // Get instance field reference: private UnityEngine.Color <Color>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_$Color$k__BackingField();
    // Get instance field reference: private VROSC.LoopPlaybackConfigOverride <PlaybackConfig>k__BackingField
    [[deprecated("Use field access instead!")]] ::VROSC::LoopPlaybackConfigOverride*& dyn_$PlaybackConfig$k__BackingField();
    // public System.String get_GroupID()
    // Offset: 0x195EF98
    ::StringW get_GroupID();
    // private System.Void set_GroupID(System.String value)
    // Offset: 0x195EF90
    void set_GroupID(::StringW value);
    // public System.String get_DisplayName()
    // Offset: 0x195EFA8
    ::StringW get_DisplayName();
    // private System.Void set_DisplayName(System.String value)
    // Offset: 0x195EFA0
    void set_DisplayName(::StringW value);
    // public System.Single get_Volume()
    // Offset: 0x195EFB8
    float get_Volume();
    // private System.Void set_Volume(System.Single value)
    // Offset: 0x195EFB0
    void set_Volume(float value);
    // public System.Boolean get_Muted()
    // Offset: 0x195EFCC
    bool get_Muted();
    // private System.Void set_Muted(System.Boolean value)
    // Offset: 0x195EFC0
    void set_Muted(bool value);
    // public System.Boolean get_Solo()
    // Offset: 0x195EFE0
    bool get_Solo();
    // private System.Void set_Solo(System.Boolean value)
    // Offset: 0x195EFD4
    void set_Solo(bool value);
    // public UnityEngine.Color get_Color()
    // Offset: 0x195EFF4
    ::UnityEngine::Color get_Color();
    // private System.Void set_Color(UnityEngine.Color value)
    // Offset: 0x195EFE8
    void set_Color(::UnityEngine::Color value);
    // public VROSC.LoopPlaybackConfigOverride get_PlaybackConfig()
    // Offset: 0x195F008
    ::VROSC::LoopPlaybackConfigOverride* get_PlaybackConfig();
    // private System.Void set_PlaybackConfig(VROSC.LoopPlaybackConfigOverride value)
    // Offset: 0x195F000
    void set_PlaybackConfig(::VROSC::LoopPlaybackConfigOverride* value);
    // public System.Void .ctor(System.String groupID, System.String displayName, System.Single volume)
    // Offset: 0x195F010
    SetupVariables(::StringW groupID, ::StringW displayName, float volume);
    // public System.Void .ctor(System.String groupID, System.String displayName, System.Single volume, System.Boolean muted, System.Boolean solo, VROSC.LoopPlaybackConfigOverride playbackConfig, UnityEngine.Color color)
    // Offset: 0x195F0D0
    SetupVariables(::StringW groupID, ::StringW displayName, float volume, bool muted, bool solo, ::VROSC::LoopPlaybackConfigOverride* playbackConfig, ::UnityEngine::Color color);
  }; // VROSC.LoopStationGroup/VROSC.SetupVariables
  #pragma pack(pop)
  static check_size<sizeof(LoopStationGroup::SetupVariables), 40 + sizeof(::VROSC::LoopPlaybackConfigOverride*)> __VROSC_LoopStationGroup_SetupVariablesSizeCheck;
  static_assert(sizeof(LoopStationGroup::SetupVariables) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::get_GroupID
// Il2CppName: get_GroupID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopStationGroup::SetupVariables::*)()>(&VROSC::LoopStationGroup::SetupVariables::get_GroupID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "get_GroupID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::set_GroupID
// Il2CppName: set_GroupID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroup::SetupVariables::*)(::StringW)>(&VROSC::LoopStationGroup::SetupVariables::set_GroupID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "set_GroupID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopStationGroup::SetupVariables::*)()>(&VROSC::LoopStationGroup::SetupVariables::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::set_DisplayName
// Il2CppName: set_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroup::SetupVariables::*)(::StringW)>(&VROSC::LoopStationGroup::SetupVariables::set_DisplayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "set_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::get_Volume
// Il2CppName: get_Volume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopStationGroup::SetupVariables::*)()>(&VROSC::LoopStationGroup::SetupVariables::get_Volume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "get_Volume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::set_Volume
// Il2CppName: set_Volume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroup::SetupVariables::*)(float)>(&VROSC::LoopStationGroup::SetupVariables::set_Volume)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "set_Volume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::get_Muted
// Il2CppName: get_Muted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopStationGroup::SetupVariables::*)()>(&VROSC::LoopStationGroup::SetupVariables::get_Muted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "get_Muted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::set_Muted
// Il2CppName: set_Muted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroup::SetupVariables::*)(bool)>(&VROSC::LoopStationGroup::SetupVariables::set_Muted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "set_Muted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::get_Solo
// Il2CppName: get_Solo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopStationGroup::SetupVariables::*)()>(&VROSC::LoopStationGroup::SetupVariables::get_Solo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "get_Solo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::set_Solo
// Il2CppName: set_Solo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroup::SetupVariables::*)(bool)>(&VROSC::LoopStationGroup::SetupVariables::set_Solo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "set_Solo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::LoopStationGroup::SetupVariables::*)()>(&VROSC::LoopStationGroup::SetupVariables::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::set_Color
// Il2CppName: set_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroup::SetupVariables::*)(::UnityEngine::Color)>(&VROSC::LoopStationGroup::SetupVariables::set_Color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "set_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::get_PlaybackConfig
// Il2CppName: get_PlaybackConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfigOverride* (VROSC::LoopStationGroup::SetupVariables::*)()>(&VROSC::LoopStationGroup::SetupVariables::get_PlaybackConfig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "get_PlaybackConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::set_PlaybackConfig
// Il2CppName: set_PlaybackConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroup::SetupVariables::*)(::VROSC::LoopPlaybackConfigOverride*)>(&VROSC::LoopStationGroup::SetupVariables::set_PlaybackConfig)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfigOverride")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroup::SetupVariables), "set_PlaybackConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::SetupVariables
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopStationGroup::SetupVariables::SetupVariables
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
