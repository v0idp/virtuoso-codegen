// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoardReciever
#include "VROSC/NoteBoardReciever.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NotePlayer
  class NotePlayer;
  // Forward declaring type: NoteFieldNoteData
  class NoteFieldNoteData;
  // Forward declaring type: PlayData
  struct PlayData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardReciever::Player);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardReciever::Player*, "VROSC", "NoteBoardReciever/Player");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardReciever/VROSC.Player
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardReciever::Player : public ::Il2CppObject {
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
    // private readonly VROSC.NotePlayer <Source>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::NotePlayer* Source;
    // Field size check
    static_assert(sizeof(::VROSC::NotePlayer*) == 0x8);
    // private VROSC.NoteFieldNoteData <CurrentNote>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::NoteFieldNoteData* CurrentNote;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldNoteData*) == 0x8);
    public:
    // Get instance field reference: private readonly VROSC.NotePlayer <Source>k__BackingField
    ::VROSC::NotePlayer*& dyn_$Source$k__BackingField();
    // Get instance field reference: private VROSC.NoteFieldNoteData <CurrentNote>k__BackingField
    ::VROSC::NoteFieldNoteData*& dyn_$CurrentNote$k__BackingField();
    // public VROSC.NotePlayer get_Source()
    // Offset: 0x133E77C
    ::VROSC::NotePlayer* get_Source();
    // public VROSC.NoteFieldNoteData get_CurrentNote()
    // Offset: 0x133E78C
    ::VROSC::NoteFieldNoteData* get_CurrentNote();
    // private System.Void set_CurrentNote(VROSC.NoteFieldNoteData value)
    // Offset: 0x133E784
    void set_CurrentNote(::VROSC::NoteFieldNoteData* value);
    // public System.Void .ctor(VROSC.NotePlayer source)
    // Offset: 0x133E794
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardReciever::Player* New_ctor(::VROSC::NotePlayer* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardReciever::Player::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardReciever::Player*, creationType>(source)));
    }
    // public System.Void Play(VROSC.NoteFieldNoteData note, VROSC.PlayData playData)
    // Offset: 0x133E7C0
    void Play(::VROSC::NoteFieldNoteData* note, ::VROSC::PlayData playData);
    // public System.Void Stop()
    // Offset: 0x133E848
    void Stop();
  }; // VROSC.NoteBoardReciever/VROSC.Player
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardReciever::Player), 24 + sizeof(::VROSC::NoteFieldNoteData*)> __VROSC_NoteBoardReciever_PlayerSizeCheck;
  static_assert(sizeof(NoteBoardReciever::Player) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardReciever::Player::get_Source
// Il2CppName: get_Source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NotePlayer* (VROSC::NoteBoardReciever::Player::*)()>(&VROSC::NoteBoardReciever::Player::get_Source)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardReciever::Player*), "get_Source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardReciever::Player::get_CurrentNote
// Il2CppName: get_CurrentNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (VROSC::NoteBoardReciever::Player::*)()>(&VROSC::NoteBoardReciever::Player::get_CurrentNote)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardReciever::Player*), "get_CurrentNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardReciever::Player::set_CurrentNote
// Il2CppName: set_CurrentNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardReciever::Player::*)(::VROSC::NoteFieldNoteData*)>(&VROSC::NoteBoardReciever::Player::set_CurrentNote)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldNoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardReciever::Player*), "set_CurrentNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardReciever::Player::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteBoardReciever::Player::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardReciever::Player::*)(::VROSC::NoteFieldNoteData*, ::VROSC::PlayData)>(&VROSC::NoteBoardReciever::Player::Play)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldNoteData")->byval_arg;
    static auto* playData = &::il2cpp_utils::GetClassFromName("VROSC", "PlayData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardReciever::Player*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, playData});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardReciever::Player::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardReciever::Player::*)()>(&VROSC::NoteBoardReciever::Player::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardReciever::Player*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
