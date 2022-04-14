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
  // Forward declaring type: HelmSequencer
  class HelmSequencer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::HelmSequencer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmSequencer*, "AudioHelm", "HelmSequencer");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.HelmSequencer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 78273C
  // [HelpURLAttribute] Offset: 78273C
  // [AddComponentMenu] Offset: 78273C
  class HelmSequencer : public ::AudioHelm::Sequencer {
    public:
    public:
    // [TooltipAttribute] Offset: 0x7914A0
    // public System.Int32 channel
    // Size: 0x4
    // Offset: 0xAC
    int channel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IntPtr reference
    // Size: 0x8
    // Offset: 0xB0
    ::System::IntPtr reference;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Int32 currentChannel
    // Size: 0x4
    // Offset: 0xB8
    int currentChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 currentLength
    // Size: 0x4
    // Offset: 0xBC
    int currentLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean currentLoop
    // Size: 0x1
    // Offset: 0xC0
    bool currentLoop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Int32 channel
    [[deprecated]] int& dyn_channel();
    // Get instance field reference: private System.IntPtr reference
    [[deprecated]] ::System::IntPtr& dyn_reference();
    // Get instance field reference: private System.Int32 currentChannel
    [[deprecated]] int& dyn_currentChannel();
    // Get instance field reference: private System.Int32 currentLength
    [[deprecated]] int& dyn_currentLength();
    // Get instance field reference: private System.Boolean currentLoop
    [[deprecated]] bool& dyn_currentLoop();
    // private System.Void CreateNativeSequencer()
    // Offset: 0x19400F4
    void CreateNativeSequencer();
    // private System.Void DeleteNativeSequencer()
    // Offset: 0x1940150
    void DeleteNativeSequencer();
    // private System.Void Awake()
    // Offset: 0x19401C0
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x19403DC
    void OnDestroy();
    // private System.Void EnableComponent()
    // Offset: 0x194058C
    void EnableComponent();
    // private System.Void FixedUpdate()
    // Offset: 0x1940630
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0x1940760
    void Update();
    // private System.Void DoUpdate()
    // Offset: 0x1940634
    void DoUpdate();
    // public System.Void .ctor()
    // Offset: 0x1940764
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelmSequencer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::HelmSequencer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelmSequencer*, creationType>()));
    }
    // public override System.IntPtr Reference()
    // Offset: 0x19401B8
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.IntPtr Sequencer::Reference()
    ::System::IntPtr Reference();
    // protected override System.Void OnEnable()
    // Offset: 0x194044C
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x19404C0
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::OnDisable()
    void OnDisable();
    // public override System.Void AllNotesOff()
    // Offset: 0x1940544
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::AllNotesOff()
    void AllNotesOff();
    // public override System.Void NoteOn(System.Int32 note, System.Single velocity)
    // Offset: 0x1940574
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::NoteOn(System.Int32 note, System.Single velocity)
    void NoteOn(int note, float velocity);
    // public override System.Void NoteOff(System.Int32 note)
    // Offset: 0x1940580
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::NoteOff(System.Int32 note)
    void NoteOff(int note);
    // public override System.Void StartOnNextCycle()
    // Offset: 0x1940598
    // Implemented from: AudioHelm.Sequencer
    // Base method: System.Void Sequencer::StartOnNextCycle()
    void StartOnNextCycle();
  }; // AudioHelm.HelmSequencer
  #pragma pack(pop)
  static check_size<sizeof(HelmSequencer), 192 + sizeof(bool)> __AudioHelm_HelmSequencerSizeCheck;
  static_assert(sizeof(HelmSequencer) == 0xC1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::CreateNativeSequencer
// Il2CppName: CreateNativeSequencer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::CreateNativeSequencer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "CreateNativeSequencer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::DeleteNativeSequencer
// Il2CppName: DeleteNativeSequencer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::DeleteNativeSequencer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "DeleteNativeSequencer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::EnableComponent
// Il2CppName: EnableComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::EnableComponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "EnableComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::DoUpdate
// Il2CppName: DoUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::DoUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "DoUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::Reference
// Il2CppName: Reference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::Reference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "Reference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::AllNotesOff
// Il2CppName: AllNotesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::AllNotesOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "AllNotesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::NoteOn
// Il2CppName: NoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)(int, float)>(&AudioHelm::HelmSequencer::NoteOn)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "NoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, velocity});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::NoteOff
// Il2CppName: NoteOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)(int)>(&AudioHelm::HelmSequencer::NoteOff)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "NoteOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmSequencer::StartOnNextCycle
// Il2CppName: StartOnNextCycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmSequencer::*)()>(&AudioHelm::HelmSequencer::StartOnNextCycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmSequencer*), "StartOnNextCycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
