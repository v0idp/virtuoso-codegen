// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.AudioReactiveBehaviour
#include "VROSC/AudioReactive/AudioReactiveBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ScaleEffect
  class ScaleEffect;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ScaleOnBeat
  class ScaleOnBeat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::ScaleOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ScaleOnBeat*, "VROSC.AudioReactive", "ScaleOnBeat");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.ScaleOnBeat
  // [TokenAttribute] Offset: FFFFFFFF
  class ScaleOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
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
    // private VROSC.AudioReactive.ScaleEffect _scaleAnimation
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::AudioReactive::ScaleEffect* scaleAnimation;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::ScaleEffect*) == 0x8);
    public:
    // Get instance field reference: private VROSC.AudioReactive.ScaleEffect _scaleAnimation
    ::VROSC::AudioReactive::ScaleEffect*& dyn__scaleAnimation();
    // public VROSC.AudioReactive.ScaleEffect get_ScaleAnimation()
    // Offset: 0x13DEB84
    ::VROSC::AudioReactive::ScaleEffect* get_ScaleAnimation();
    // public System.Void .ctor()
    // Offset: 0x13DEC00
    // Implemented from: VROSC.AudioReactive.AudioReactiveBehaviour
    // Base method: System.Void AudioReactiveBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleOnBeat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::ScaleOnBeat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleOnBeat*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x13DEB8C
    // Implemented from: VROSC.AudioReactive.AudioReactiveBehaviour
    // Base method: System.Void AudioReactiveBehaviour::Awake()
    void Awake();
    // protected override System.Void OnBeat(System.Int32 beat)
    // Offset: 0x13DEBC8
    // Implemented from: VROSC.AudioReactive.AudioReactiveBehaviour
    // Base method: System.Void AudioReactiveBehaviour::OnBeat(System.Int32 beat)
    void OnBeat(int beat);
  }; // VROSC.AudioReactive.ScaleOnBeat
  #pragma pack(pop)
  static check_size<sizeof(ScaleOnBeat), 40 + sizeof(::VROSC::AudioReactive::ScaleEffect*)> __VROSC_AudioReactive_ScaleOnBeatSizeCheck;
  static_assert(sizeof(ScaleOnBeat) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleOnBeat::get_ScaleAnimation
// Il2CppName: get_ScaleAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::ScaleEffect* (VROSC::AudioReactive::ScaleOnBeat::*)()>(&VROSC::AudioReactive::ScaleOnBeat::get_ScaleAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleOnBeat*), "get_ScaleAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleOnBeat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleOnBeat::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ScaleOnBeat::*)()>(&VROSC::AudioReactive::ScaleOnBeat::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleOnBeat*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleOnBeat::OnBeat
// Il2CppName: OnBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ScaleOnBeat::*)(int)>(&VROSC::AudioReactive::ScaleOnBeat::OnBeat)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleOnBeat*), "OnBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
