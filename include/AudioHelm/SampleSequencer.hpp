// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioHelm.Sequencer
#include "AudioHelm/Sequencer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: SampleSequencer
  class SampleSequencer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::SampleSequencer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SampleSequencer*, "AudioHelm", "SampleSequencer");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.SampleSequencer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 66C818
  // [HelpURLAttribute] Offset: 66C818
  // [AddComponentMenu] Offset: 66C818
  class SampleSequencer : public ::AudioHelm::Sequencer {
    public:
    // Writing base type padding for base size: 0xAC to desired offset: 0xB0
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Double lastWindowTime
    // Size: 0x8
    // Offset: 0xB0
    double lastWindowTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // static field const value: static private System.Single lookaheadTime
    static constexpr const float lookaheadTime = 0.1;
    // Get static field: static private System.Single lookaheadTime
    static float _get_lookaheadTime();
    // Set static field: static private System.Single lookaheadTime
    static void _set_lookaheadTime(float value);
    // Get instance field reference: private System.Double lastWindowTime
    double& dyn_lastWindowTime();
    // private System.Void Awake()
    // Offset: 0xB0A9A8
    void Awake();
    // private System.Void Start()
    // Offset: 0xB0A9D8
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0xB0AA38
    void OnDestroy();
    // private System.Void EnableComponent()
    // Offset: 0xB0AF78
    void EnableComponent();
    // private System.Void FixedUpdate()
    // Offset: 0xB0AFB4
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0xB0B2A0
    void Update();
    // private System.Void DoUpdate()
    // Offset: 0xB0AFB8
    void DoUpdate();
    // public System.Void .ctor()
    // Offset: 0xB0B590
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SampleSequencer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::SampleSequencer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SampleSequencer*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0xB0AA44
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0xB0AAA4
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::OnDisable()
    void OnDisable();
    // public override System.Void AllNotesOff()
    // Offset: 0xB0AAD4
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::AllNotesOff()
    void AllNotesOff();
    // public override System.Void NoteOn(System.Int32 note, System.Single velocity)
    // Offset: 0xB0AC04
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::NoteOn(System.Int32 note, System.Single velocity)
    void NoteOn(int note, float velocity);
    // public override System.Void NoteOff(System.Int32 note)
    // Offset: 0xB0AEE8
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::NoteOff(System.Int32 note)
    void NoteOff(int note);
    // public override System.Void StartOnNextCycle()
    // Offset: 0xB0AF84
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::StartOnNextCycle()
    void StartOnNextCycle();
  }; // AudioHelm.SampleSequencer
  #pragma pack(pop)
  static check_size<sizeof(SampleSequencer), 176 + sizeof(double)> __AudioHelm_SampleSequencerSizeCheck;
  static_assert(sizeof(SampleSequencer) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::EnableComponent
// Il2CppName: EnableComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::EnableComponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "EnableComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::DoUpdate
// Il2CppName: DoUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::DoUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "DoUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::AllNotesOff
// Il2CppName: AllNotesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::AllNotesOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "AllNotesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::NoteOn
// Il2CppName: NoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)(int, float)>(&AudioHelm::SampleSequencer::NoteOn)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "NoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, velocity});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::NoteOff
// Il2CppName: NoteOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)(int)>(&AudioHelm::SampleSequencer::NoteOff)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "NoteOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: AudioHelm::SampleSequencer::StartOnNextCycle
// Il2CppName: StartOnNextCycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SampleSequencer::*)()>(&AudioHelm::SampleSequencer::StartOnNextCycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SampleSequencer*), "StartOnNextCycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
