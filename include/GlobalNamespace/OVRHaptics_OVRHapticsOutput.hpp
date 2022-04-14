// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRHaptics
#include "GlobalNamespace/OVRHaptics.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRNativeBuffer
  class OVRNativeBuffer;
  // Forward declaring type: OVRHapticsClip
  class OVRHapticsClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRHaptics::OVRHapticsOutput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics::OVRHapticsOutput*, "", "OVRHaptics/OVRHapticsOutput");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OVRHaptics/OVRHapticsOutput
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRHaptics::OVRHapticsOutput : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker
    class ClipPlaybackTracker;
    public:
    // private System.Boolean m_lowLatencyMode
    // Size: 0x1
    // Offset: 0x10
    bool m_lowLatencyMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_paddingEnabled
    // Size: 0x1
    // Offset: 0x11
    bool m_paddingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_paddingEnabled and: m_prevSamplesQueued
    char __padding1[0x2] = {};
    // private System.Int32 m_prevSamplesQueued
    // Size: 0x4
    // Offset: 0x14
    int m_prevSamplesQueued;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_prevSamplesQueuedTime
    // Size: 0x4
    // Offset: 0x18
    float m_prevSamplesQueuedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_numPredictionHits
    // Size: 0x4
    // Offset: 0x1C
    int m_numPredictionHits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_numPredictionMisses
    // Size: 0x4
    // Offset: 0x20
    int m_numPredictionMisses;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_numUnderruns
    // Size: 0x4
    // Offset: 0x24
    int m_numUnderruns;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker> m_pendingClips
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*>* m_pendingClips;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*>*) == 0x8);
    // private System.UInt32 m_controller
    // Size: 0x4
    // Offset: 0x30
    uint m_controller;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: m_controller and: m_nativeBuffer
    char __padding8[0x4] = {};
    // private OVRNativeBuffer m_nativeBuffer
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OVRNativeBuffer* m_nativeBuffer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRNativeBuffer*) == 0x8);
    // private OVRHapticsClip m_paddingClip
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::OVRHapticsClip* m_paddingClip;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRHapticsClip*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean m_lowLatencyMode
    [[deprecated]] bool& dyn_m_lowLatencyMode();
    // Get instance field reference: private System.Boolean m_paddingEnabled
    [[deprecated]] bool& dyn_m_paddingEnabled();
    // Get instance field reference: private System.Int32 m_prevSamplesQueued
    [[deprecated]] int& dyn_m_prevSamplesQueued();
    // Get instance field reference: private System.Single m_prevSamplesQueuedTime
    [[deprecated]] float& dyn_m_prevSamplesQueuedTime();
    // Get instance field reference: private System.Int32 m_numPredictionHits
    [[deprecated]] int& dyn_m_numPredictionHits();
    // Get instance field reference: private System.Int32 m_numPredictionMisses
    [[deprecated]] int& dyn_m_numPredictionMisses();
    // Get instance field reference: private System.Int32 m_numUnderruns
    [[deprecated]] int& dyn_m_numUnderruns();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker> m_pendingClips
    [[deprecated]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*>*& dyn_m_pendingClips();
    // Get instance field reference: private System.UInt32 m_controller
    [[deprecated]] uint& dyn_m_controller();
    // Get instance field reference: private OVRNativeBuffer m_nativeBuffer
    [[deprecated]] ::GlobalNamespace::OVRNativeBuffer*& dyn_m_nativeBuffer();
    // Get instance field reference: private OVRHapticsClip m_paddingClip
    [[deprecated]] ::GlobalNamespace::OVRHapticsClip*& dyn_m_paddingClip();
    // public System.Void .ctor(System.UInt32 controller)
    // Offset: 0x84E090
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHaptics::OVRHapticsOutput* New_ctor(uint controller) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRHaptics::OVRHapticsOutput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHaptics::OVRHapticsOutput*, creationType>(controller)));
    }
    // public System.Void Process()
    // Offset: 0x84E23C
    void Process();
    // public System.Void Preempt(OVRHapticsClip clip)
    // Offset: 0x84D9BC
    void Preempt(::GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Queue(OVRHapticsClip clip)
    // Offset: 0x84DA8C
    void Queue(::GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Mix(OVRHapticsClip clip)
    // Offset: 0x84DB38
    void Mix(::GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Clear()
    // Offset: 0x84E03C
    void Clear();
  }; // OVRHaptics/OVRHapticsOutput
  #pragma pack(pop)
  static check_size<sizeof(OVRHaptics::OVRHapticsOutput), 64 + sizeof(::GlobalNamespace::OVRHapticsClip*)> __GlobalNamespace_OVRHaptics_OVRHapticsOutputSizeCheck;
  static_assert(sizeof(OVRHaptics::OVRHapticsOutput) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsOutput::*)()>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::Preempt
// Il2CppName: Preempt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsOutput::*)(::GlobalNamespace::OVRHapticsClip*)>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::Preempt)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("", "OVRHapticsClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput*), "Preempt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::Queue
// Il2CppName: Queue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsOutput::*)(::GlobalNamespace::OVRHapticsClip*)>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::Queue)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("", "OVRHapticsClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput*), "Queue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::Mix
// Il2CppName: Mix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsOutput::*)(::GlobalNamespace::OVRHapticsClip*)>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::Mix)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("", "OVRHapticsClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput*), "Mix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsOutput::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsOutput::*)()>(&GlobalNamespace::OVRHaptics::OVRHapticsOutput::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsOutput*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
