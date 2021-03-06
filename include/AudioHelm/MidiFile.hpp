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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: MidiFile
  class MidiFile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::MidiFile);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::MidiFile*, "AudioHelm", "MidiFile");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.MidiFile
  // [TokenAttribute] Offset: FFFFFFFF
  class MidiFile : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::AudioHelm::MidiFile::MidiData
    class MidiData;
    public:
    // public UnityEngine.Object midiObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Object* midiObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // public AudioHelm.MidiFile/AudioHelm.MidiData midiData
    // Size: 0x8
    // Offset: 0x20
    ::AudioHelm::MidiFile::MidiData* midiData;
    // Field size check
    static_assert(sizeof(::AudioHelm::MidiFile::MidiData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Object midiObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn_midiObject();
    // Get instance field reference: public AudioHelm.MidiFile/AudioHelm.MidiData midiData
    [[deprecated("Use field access instead!")]] ::AudioHelm::MidiFile::MidiData*& dyn_midiData();
    // public System.Void .ctor()
    // Offset: 0xAC7738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MidiFile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::MidiFile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MidiFile*, creationType>()));
    }
    // public System.Void LoadMidiData(System.String filePath)
    // Offset: 0xAC766C
    void LoadMidiData(::StringW filePath);
    // static public AudioHelm.MidiFile/AudioHelm.MidiData LoadMidiData(System.IO.Stream midiStream)
    // Offset: 0xAC76E0
    static ::AudioHelm::MidiFile::MidiData* LoadMidiData(::System::IO::Stream* midiStream);
  }; // AudioHelm.MidiFile
  #pragma pack(pop)
  static check_size<sizeof(MidiFile), 32 + sizeof(::AudioHelm::MidiFile::MidiData*)> __AudioHelm_MidiFileSizeCheck;
  static_assert(sizeof(MidiFile) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::MidiFile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::MidiFile::LoadMidiData
// Il2CppName: LoadMidiData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::MidiFile::*)(::StringW)>(&AudioHelm::MidiFile::LoadMidiData)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::MidiFile*), "LoadMidiData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: AudioHelm::MidiFile::LoadMidiData
// Il2CppName: LoadMidiData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::MidiFile::MidiData* (*)(::System::IO::Stream*)>(&AudioHelm::MidiFile::LoadMidiData)> {
  static const MethodInfo* get() {
    static auto* midiStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::MidiFile*), "LoadMidiData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{midiStream});
  }
};
