// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioHelm.Note
#include "AudioHelm/Note.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::Note::NoteAction);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Note::NoteAction*, "AudioHelm", "Note/NoteAction");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.Note/AudioHelm.NoteAction
  // [TokenAttribute] Offset: FFFFFFFF
  class Note::NoteAction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19657BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Note::NoteAction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::Note::NoteAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Note::NoteAction*, creationType>(object, method)));
    }
    // public System.Void Invoke(AudioHelm.Note note)
    // Offset: 0x19657CC
    void Invoke(::AudioHelm::Note* note);
    // public System.IAsyncResult BeginInvoke(AudioHelm.Note note, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1965B40
    ::System::IAsyncResult* BeginInvoke(::AudioHelm::Note* note, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1965B64
    void EndInvoke(::System::IAsyncResult* result);
  }; // AudioHelm.Note/AudioHelm.NoteAction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::Note::NoteAction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::Note::NoteAction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::Note::NoteAction::*)(::AudioHelm::Note*)>(&AudioHelm::Note::NoteAction::Invoke)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("AudioHelm", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Note::NoteAction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: AudioHelm::Note::NoteAction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (AudioHelm::Note::NoteAction::*)(::AudioHelm::Note*, ::System::AsyncCallback*, ::Il2CppObject*)>(&AudioHelm::Note::NoteAction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("AudioHelm", "Note")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Note::NoteAction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, callback, object});
  }
};
// Writing MetadataGetter for method: AudioHelm::Note::NoteAction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::Note::NoteAction::*)(::System::IAsyncResult*)>(&AudioHelm::Note::NoteAction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Note::NoteAction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
