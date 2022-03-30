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
  // Forward declaring type: MidiData
  class MidiData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MidiData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MidiData*, "VROSC", "MidiData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MidiData
  // [TokenAttribute] Offset: FFFFFFFF
  class MidiData : public ::Il2CppObject {
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
    // public System.Int32 SelectedMidiChannel
    // Size: 0x4
    // Offset: 0x10
    int SelectedMidiChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MinMidiChannel
    // Size: 0x4
    // Offset: 0x14
    int MinMidiChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MaxMidiChannel
    // Size: 0x4
    // Offset: 0x18
    int MaxMidiChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 SelectedMidiChannel
    int& dyn_SelectedMidiChannel();
    // Get instance field reference: public System.Int32 MinMidiChannel
    int& dyn_MinMidiChannel();
    // Get instance field reference: public System.Int32 MaxMidiChannel
    int& dyn_MaxMidiChannel();
    // public System.Void .ctor()
    // Offset: 0x8B3AC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MidiData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MidiData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MidiData*, creationType>()));
    }
  }; // VROSC.MidiData
  #pragma pack(pop)
  static check_size<sizeof(MidiData), 24 + sizeof(int)> __VROSC_MidiDataSizeCheck;
  static_assert(sizeof(MidiData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MidiData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!