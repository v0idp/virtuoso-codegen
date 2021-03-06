// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.WidgetSettings
#include "VROSC/WidgetSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MidiSettings
  class MidiSettings;
  // Forward declaring type: PatchGroup
  class PatchGroup;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentSettings
  class InstrumentSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InstrumentSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentSettings*, "VROSC", "InstrumentSettings");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InstrumentSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 77F8B4
  class InstrumentSettings : public ::VROSC::WidgetSettings {
    public:
    // Nested type: ::VROSC::InstrumentSettings::ScaleSettings
    class ScaleSettings;
    public:
    // [HeaderAttribute] Offset: 0x785D6C
    // private VROSC.MidiSettings _midiSettings
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::MidiSettings* midiSettings;
    // Field size check
    static_assert(sizeof(::VROSC::MidiSettings*) == 0x8);
    // private VROSC.PatchGroup _patches
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::PatchGroup* patches;
    // Field size check
    static_assert(sizeof(::VROSC::PatchGroup*) == 0x8);
    // [HeaderAttribute] Offset: 0x785DC8
    // private System.Int32 _startingPatch
    // Size: 0x4
    // Offset: 0x38
    int startingPatch;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _startMidiChannel
    // Size: 0x4
    // Offset: 0x3C
    int startMidiChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _startOctave
    // Size: 0x4
    // Offset: 0x40
    int startOctave;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _minOctave
    // Size: 0x4
    // Offset: 0x44
    int minOctave;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxOctave
    // Size: 0x4
    // Offset: 0x48
    int maxOctave;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxOctave and: scalesSettings
    char __padding6[0x4] = {};
    // private VROSC.InstrumentSettings/VROSC.ScaleSettings[] _scalesSettings
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::VROSC::InstrumentSettings::ScaleSettings*> scalesSettings;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::InstrumentSettings::ScaleSettings*>) == 0x8);
    public:
    // Get instance field reference: private VROSC.MidiSettings _midiSettings
    [[deprecated("Use field access instead!")]] ::VROSC::MidiSettings*& dyn__midiSettings();
    // Get instance field reference: private VROSC.PatchGroup _patches
    [[deprecated("Use field access instead!")]] ::VROSC::PatchGroup*& dyn__patches();
    // Get instance field reference: private System.Int32 _startingPatch
    [[deprecated("Use field access instead!")]] int& dyn__startingPatch();
    // Get instance field reference: private System.Int32 _startMidiChannel
    [[deprecated("Use field access instead!")]] int& dyn__startMidiChannel();
    // Get instance field reference: private System.Int32 _startOctave
    [[deprecated("Use field access instead!")]] int& dyn__startOctave();
    // Get instance field reference: private System.Int32 _minOctave
    [[deprecated("Use field access instead!")]] int& dyn__minOctave();
    // Get instance field reference: private System.Int32 _maxOctave
    [[deprecated("Use field access instead!")]] int& dyn__maxOctave();
    // Get instance field reference: private VROSC.InstrumentSettings/VROSC.ScaleSettings[] _scalesSettings
    [[deprecated("Use field access instead!")]] ::ArrayW<::VROSC::InstrumentSettings::ScaleSettings*>& dyn__scalesSettings();
    // public VROSC.MidiSettings get_MidiSettings()
    // Offset: 0x1948770
    ::VROSC::MidiSettings* get_MidiSettings();
    // public VROSC.PatchGroup get_PatchGroup()
    // Offset: 0x1948778
    ::VROSC::PatchGroup* get_PatchGroup();
    // public System.Int32 get_StartingPatch()
    // Offset: 0x1948780
    int get_StartingPatch();
    // public System.Int32 get_StartingMidiChannel()
    // Offset: 0x1948788
    int get_StartingMidiChannel();
    // public System.Int32 get_StartOctave()
    // Offset: 0x1948790
    int get_StartOctave();
    // public System.Int32 get_MinOctave()
    // Offset: 0x1948798
    int get_MinOctave();
    // public System.Int32 get_MaxOctave()
    // Offset: 0x19487A0
    int get_MaxOctave();
    // public VROSC.InstrumentSettings/VROSC.ScaleSettings[] get_ScalesSettings()
    // Offset: 0x19487A8
    ::ArrayW<::VROSC::InstrumentSettings::ScaleSettings*> get_ScalesSettings();
    // public System.Void .ctor()
    // Offset: 0x19487B0
    // Implemented from: VROSC.WidgetSettings
    // Base method: System.Void WidgetSettings::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InstrumentSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentSettings*, creationType>()));
    }
  }; // VROSC.InstrumentSettings
  #pragma pack(pop)
  static check_size<sizeof(InstrumentSettings), 80 + sizeof(::ArrayW<::VROSC::InstrumentSettings::ScaleSettings*>)> __VROSC_InstrumentSettingsSizeCheck;
  static_assert(sizeof(InstrumentSettings) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InstrumentSettings::get_MidiSettings
// Il2CppName: get_MidiSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MidiSettings* (VROSC::InstrumentSettings::*)()>(&VROSC::InstrumentSettings::get_MidiSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentSettings*), "get_MidiSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentSettings::get_PatchGroup
// Il2CppName: get_PatchGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchGroup* (VROSC::InstrumentSettings::*)()>(&VROSC::InstrumentSettings::get_PatchGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentSettings*), "get_PatchGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentSettings::get_StartingPatch
// Il2CppName: get_StartingPatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::InstrumentSettings::*)()>(&VROSC::InstrumentSettings::get_StartingPatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentSettings*), "get_StartingPatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentSettings::get_StartingMidiChannel
// Il2CppName: get_StartingMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::InstrumentSettings::*)()>(&VROSC::InstrumentSettings::get_StartingMidiChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentSettings*), "get_StartingMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentSettings::get_StartOctave
// Il2CppName: get_StartOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::InstrumentSettings::*)()>(&VROSC::InstrumentSettings::get_StartOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentSettings*), "get_StartOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentSettings::get_MinOctave
// Il2CppName: get_MinOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::InstrumentSettings::*)()>(&VROSC::InstrumentSettings::get_MinOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentSettings*), "get_MinOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentSettings::get_MaxOctave
// Il2CppName: get_MaxOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::InstrumentSettings::*)()>(&VROSC::InstrumentSettings::get_MaxOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentSettings*), "get_MaxOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentSettings::get_ScalesSettings
// Il2CppName: get_ScalesSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::InstrumentSettings::ScaleSettings*> (VROSC::InstrumentSettings::*)()>(&VROSC::InstrumentSettings::get_ScalesSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentSettings*), "get_ScalesSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
