// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.InstrumentSettings
#include "VROSC/InstrumentSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InstrumentSettings::ScaleSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentSettings::ScaleSettings*, "VROSC", "InstrumentSettings/ScaleSettings");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InstrumentSettings/VROSC.ScaleSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class InstrumentSettings::ScaleSettings : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 StartNoteIndex
    // Size: 0x4
    // Offset: 0x10
    int StartNoteIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 DefaultIncludeNotes
    // Size: 0x4
    // Offset: 0x14
    int DefaultIncludeNotes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean OverrideScaleDefaults
    // Size: 0x1
    // Offset: 0x18
    bool OverrideScaleDefaults;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: OverrideScaleDefaults and: ScaleNotesToggled
    char __padding2[0x7] = {};
    // public System.Boolean[] ScaleNotesToggled
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<bool> ScaleNotesToggled;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 StartNoteIndex
    [[deprecated]] int& dyn_StartNoteIndex();
    // Get instance field reference: public System.Int32 DefaultIncludeNotes
    [[deprecated]] int& dyn_DefaultIncludeNotes();
    // Get instance field reference: public System.Boolean OverrideScaleDefaults
    [[deprecated]] bool& dyn_OverrideScaleDefaults();
    // Get instance field reference: public System.Boolean[] ScaleNotesToggled
    [[deprecated]] ::ArrayW<bool>& dyn_ScaleNotesToggled();
    // public System.Void .ctor()
    // Offset: 0x19589C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentSettings::ScaleSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InstrumentSettings::ScaleSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentSettings::ScaleSettings*, creationType>()));
    }
  }; // VROSC.InstrumentSettings/VROSC.ScaleSettings
  #pragma pack(pop)
  static check_size<sizeof(InstrumentSettings::ScaleSettings), 32 + sizeof(::ArrayW<bool>)> __VROSC_InstrumentSettings_ScaleSettingsSizeCheck;
  static_assert(sizeof(InstrumentSettings::ScaleSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InstrumentSettings::ScaleSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
