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
// Completed includes
// Begin forward declares
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: Sequencer
  class Sequencer;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: EnableAfterTime
  class EnableAfterTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::EnableAfterTime);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::EnableAfterTime*, "AudioHelm", "EnableAfterTime");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.EnableAfterTime
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 782044
  class EnableAfterTime : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: time and: sequencer
    char __padding0[0x4] = {};
    // public AudioHelm.Sequencer sequencer
    // Size: 0x8
    // Offset: 0x20
    ::AudioHelm::Sequencer* sequencer;
    // Field size check
    static_assert(sizeof(::AudioHelm::Sequencer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // Get instance field reference: public AudioHelm.Sequencer sequencer
    [[deprecated("Use field access instead!")]] ::AudioHelm::Sequencer*& dyn_sequencer();
    // public System.Void .ctor()
    // Offset: 0x8ECFE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableAfterTime* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::EnableAfterTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableAfterTime*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x8ECF70
    void Start();
    // private System.Void Enable()
    // Offset: 0x8ECFC4
    void Enable();
  }; // AudioHelm.EnableAfterTime
  #pragma pack(pop)
  static check_size<sizeof(EnableAfterTime), 32 + sizeof(::AudioHelm::Sequencer*)> __AudioHelm_EnableAfterTimeSizeCheck;
  static_assert(sizeof(EnableAfterTime) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::EnableAfterTime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::EnableAfterTime::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::EnableAfterTime::*)()>(&AudioHelm::EnableAfterTime::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::EnableAfterTime*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::EnableAfterTime::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::EnableAfterTime::*)()>(&AudioHelm::EnableAfterTime::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::EnableAfterTime*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
