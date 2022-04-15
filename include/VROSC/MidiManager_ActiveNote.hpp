// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.MidiManager
#include "VROSC/MidiManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MidiManager::ActiveNote);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MidiManager::ActiveNote*, "VROSC", "MidiManager/ActiveNote");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MidiManager/VROSC.ActiveNote
  // [TokenAttribute] Offset: FFFFFFFF
  class MidiManager::ActiveNote : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 Note
    // Size: 0x4
    // Offset: 0x10
    int Note;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Note and: Patch
    char __padding0[0x4] = {};
    // public System.Object Patch
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* Patch;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Int32 Channel
    // Size: 0x4
    // Offset: 0x20
    int Channel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Channel and: Source
    char __padding2[0x4] = {};
    // public System.Object Source
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* Source;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 Note
    [[deprecated("Use field access instead!")]] int& dyn_Note();
    // Get instance field reference: public System.Object Patch
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Patch();
    // Get instance field reference: public System.Int32 Channel
    [[deprecated("Use field access instead!")]] int& dyn_Channel();
    // Get instance field reference: public System.Object Source
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Source();
    // public System.Void .ctor(System.Int32 note, System.Object patch, System.Int32 channel, System.Object source)
    // Offset: 0x19633D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MidiManager::ActiveNote* New_ctor(int note, ::Il2CppObject* patch, int channel, ::Il2CppObject* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MidiManager::ActiveNote::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MidiManager::ActiveNote*, creationType>(note, patch, channel, source)));
    }
  }; // VROSC.MidiManager/VROSC.ActiveNote
  #pragma pack(pop)
  static check_size<sizeof(MidiManager::ActiveNote), 40 + sizeof(::Il2CppObject*)> __VROSC_MidiManager_ActiveNoteSizeCheck;
  static_assert(sizeof(MidiManager::ActiveNote) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MidiManager::ActiveNote::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
