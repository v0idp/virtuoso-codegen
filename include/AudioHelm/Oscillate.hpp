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
  // Forward declaring type: Oscillate
  class Oscillate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::Oscillate);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Oscillate*, "AudioHelm", "Oscillate");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.Oscillate
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 7821B4
  class Oscillate : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Vector3 oscillationVector
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 oscillationVector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single freqeuncy
    // Size: 0x4
    // Offset: 0x24
    float freqeuncy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single progress
    // Size: 0x4
    // Offset: 0x28
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 startingPosition
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 startingPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Vector3 oscillationVector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_oscillationVector();
    // Get instance field reference: public System.Single freqeuncy
    [[deprecated("Use field access instead!")]] float& dyn_freqeuncy();
    // Get instance field reference: private System.Single progress
    [[deprecated("Use field access instead!")]] float& dyn_progress();
    // Get instance field reference: private UnityEngine.Vector3 startingPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startingPosition();
    // public System.Void .ctor()
    // Offset: 0xF7FD20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oscillate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::Oscillate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oscillate*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0xF7FC48
    void Start();
    // private System.Void Update()
    // Offset: 0xF7FC84
    void Update();
  }; // AudioHelm.Oscillate
  #pragma pack(pop)
  static check_size<sizeof(Oscillate), 44 + sizeof(::UnityEngine::Vector3)> __AudioHelm_OscillateSizeCheck;
  static_assert(sizeof(Oscillate) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::Oscillate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::Oscillate::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::Oscillate::*)()>(&AudioHelm::Oscillate::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Oscillate*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::Oscillate::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::Oscillate::*)()>(&AudioHelm::Oscillate::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Oscillate*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
