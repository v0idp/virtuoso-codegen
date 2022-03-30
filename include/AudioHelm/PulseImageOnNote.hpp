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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: MaterialPulse
  class MaterialPulse;
  // Forward declaring type: Note
  class Note;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: PulseImageOnNote
  class PulseImageOnNote;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::PulseImageOnNote);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::PulseImageOnNote*, "AudioHelm", "PulseImageOnNote");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.PulseImageOnNote
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 66C258
  class PulseImageOnNote : public ::UnityEngine::MonoBehaviour {
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
    // public AudioHelm.MaterialPulse[] images
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::AudioHelm::MaterialPulse*> images;
    // Field size check
    static_assert(sizeof(::ArrayW<::AudioHelm::MaterialPulse*>) == 0x8);
    // public System.Int32 startingNote
    // Size: 0x4
    // Offset: 0x20
    int startingNote;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: startingNote and: scale
    char __padding1[0x4] = {};
    // public System.Int32[] scale
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> scale;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public AudioHelm.MaterialPulse[] images
    ::ArrayW<::AudioHelm::MaterialPulse*>& dyn_images();
    // Get instance field reference: public System.Int32 startingNote
    int& dyn_startingNote();
    // Get instance field reference: public System.Int32[] scale
    ::ArrayW<int>& dyn_scale();
    // private System.Int32 GetNoteIndex(System.Int32 note)
    // Offset: 0x992C28
    int GetNoteIndex(int note);
    // public System.Void NoteOn(AudioHelm.Note note)
    // Offset: 0x992CD0
    void NoteOn(::AudioHelm::Note* note);
    // public System.Void .ctor()
    // Offset: 0x992D38
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PulseImageOnNote* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::PulseImageOnNote::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PulseImageOnNote*, creationType>()));
    }
  }; // AudioHelm.PulseImageOnNote
  #pragma pack(pop)
  static check_size<sizeof(PulseImageOnNote), 40 + sizeof(::ArrayW<int>)> __AudioHelm_PulseImageOnNoteSizeCheck;
  static_assert(sizeof(PulseImageOnNote) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::PulseImageOnNote::GetNoteIndex
// Il2CppName: GetNoteIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AudioHelm::PulseImageOnNote::*)(int)>(&AudioHelm::PulseImageOnNote::GetNoteIndex)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::PulseImageOnNote*), "GetNoteIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: AudioHelm::PulseImageOnNote::NoteOn
// Il2CppName: NoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::PulseImageOnNote::*)(::AudioHelm::Note*)>(&AudioHelm::PulseImageOnNote::NoteOn)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("AudioHelm", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::PulseImageOnNote*), "NoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: AudioHelm::PulseImageOnNote::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!