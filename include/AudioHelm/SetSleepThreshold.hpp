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
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: SetSleepThreshold
  class SetSleepThreshold;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::SetSleepThreshold);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SetSleepThreshold*, "AudioHelm", "SetSleepThreshold");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.SetSleepThreshold
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 7823D4
  class SetSleepThreshold : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single threshold
    // Size: 0x4
    // Offset: 0x18
    float threshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single threshold
    [[deprecated("Use field access instead!")]] float& dyn_threshold();
    // public System.Void .ctor()
    // Offset: 0x1924BC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSleepThreshold* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::SetSleepThreshold::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSleepThreshold*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x1924B68
    void Start();
  }; // AudioHelm.SetSleepThreshold
  #pragma pack(pop)
  static check_size<sizeof(SetSleepThreshold), 24 + sizeof(float)> __AudioHelm_SetSleepThresholdSizeCheck;
  static_assert(sizeof(SetSleepThreshold) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::SetSleepThreshold::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::SetSleepThreshold::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::SetSleepThreshold::*)()>(&AudioHelm::SetSleepThreshold::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::SetSleepThreshold*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
