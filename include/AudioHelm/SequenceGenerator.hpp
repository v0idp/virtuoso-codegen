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
  // Forward declaring type: HelmSequencer
  class HelmSequencer;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: SequenceGenerator
  class SequenceGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::SequenceGenerator);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SequenceGenerator*, "AudioHelm", "SequenceGenerator");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.SequenceGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 66C2C8
  class SequenceGenerator : public ::UnityEngine::MonoBehaviour {
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
    // public AudioHelm.HelmSequencer sequencer
    // Size: 0x8
    // Offset: 0x18
    ::AudioHelm::HelmSequencer* sequencer;
    // Field size check
    static_assert(sizeof(::AudioHelm::HelmSequencer*) == 0x8);
    // public System.Int32[] scale
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> scale;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Int32 minNote
    // Size: 0x4
    // Offset: 0x28
    int minNote;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 octaveSpan
    // Size: 0x4
    // Offset: 0x2C
    int octaveSpan;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single minDensity
    // Size: 0x4
    // Offset: 0x30
    float minDensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxDensity
    // Size: 0x4
    // Offset: 0x34
    float maxDensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public AudioHelm.HelmSequencer sequencer
    ::AudioHelm::HelmSequencer*& dyn_sequencer();
    // Get instance field reference: public System.Int32[] scale
    ::ArrayW<int>& dyn_scale();
    // Get instance field reference: public System.Int32 minNote
    int& dyn_minNote();
    // Get instance field reference: public System.Int32 octaveSpan
    int& dyn_octaveSpan();
    // Get instance field reference: public System.Single minDensity
    float& dyn_minDensity();
    // Get instance field reference: public System.Single maxDensity
    float& dyn_maxDensity();
    // private System.Void GenerateRhythm()
    // Offset: 0x13E2BEC
    void GenerateRhythm();
    // private System.Void GenerateMelody()
    // Offset: 0x13E2BF0
    void GenerateMelody();
    // private System.Void Start()
    // Offset: 0x13E2BF4
    void Start();
    // private System.Int32 GetKeyFromRandomWalk(System.Int32 note)
    // Offset: 0x13E2D40
    int GetKeyFromRandomWalk(int note);
    // private System.Int32 GetNextNote(System.Int32 current, System.Int32 max)
    // Offset: 0x13E2D94
    int GetNextNote(int current, int max);
    // public System.Void Generate()
    // Offset: 0x13E2BF8
    void Generate();
    // public System.Void .ctor()
    // Offset: 0x13E32D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SequenceGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::SequenceGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SequenceGenerator*, creationType>()));
    }
  }; // AudioHelm.SequenceGenerator
  #pragma pack(pop)
  static check_size<sizeof(SequenceGenerator), 52 + sizeof(float)> __AudioHelm_SequenceGeneratorSizeCheck;
  static_assert(sizeof(SequenceGenerator) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::SequenceGenerator::GenerateRhythm
// Il2CppName: GenerateRhythm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SequenceGenerator::*)()>(&AudioHelm::SequenceGenerator::GenerateRhythm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SequenceGenerator*), "GenerateRhythm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SequenceGenerator::GenerateMelody
// Il2CppName: GenerateMelody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SequenceGenerator::*)()>(&AudioHelm::SequenceGenerator::GenerateMelody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SequenceGenerator*), "GenerateMelody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SequenceGenerator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SequenceGenerator::*)()>(&AudioHelm::SequenceGenerator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SequenceGenerator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SequenceGenerator::GetKeyFromRandomWalk
// Il2CppName: GetKeyFromRandomWalk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AudioHelm::SequenceGenerator::*)(int)>(&AudioHelm::SequenceGenerator::GetKeyFromRandomWalk)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SequenceGenerator*), "GetKeyFromRandomWalk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: AudioHelm::SequenceGenerator::GetNextNote
// Il2CppName: GetNextNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AudioHelm::SequenceGenerator::*)(int, int)>(&AudioHelm::SequenceGenerator::GetNextNote)> {
  static const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SequenceGenerator*), "GetNextNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current, max});
  }
};
// Writing MetadataGetter for method: AudioHelm::SequenceGenerator::Generate
// Il2CppName: Generate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SequenceGenerator::*)()>(&AudioHelm::SequenceGenerator::Generate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SequenceGenerator*), "Generate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SequenceGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
