// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.AudioReactiveEffectData
#include "VROSC/AudioReactive/AudioReactiveEffectData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ShaderEffectData
  class ShaderEffectData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::ShaderEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShaderEffectData*, "VROSC.AudioReactive", "ShaderEffectData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.ShaderEffectData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 780CB0
  class ShaderEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
    public:
    // Nested type: ::VROSC::AudioReactive::ShaderEffectData::Effect
    class Effect;
    public:
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x18
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: effects
    char __padding0[0x4] = {};
    // private VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect[] _effects
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::VROSC::AudioReactive::ShaderEffectData::Effect*> effects;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::AudioReactive::ShaderEffectData::Effect*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _duration
    [[deprecated]] float& dyn__duration();
    // Get instance field reference: private VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect[] _effects
    [[deprecated]] ::ArrayW<::VROSC::AudioReactive::ShaderEffectData::Effect*>& dyn__effects();
    // public System.Single get_Duration()
    // Offset: 0x1926F70
    float get_Duration();
    // public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect[] get_Effects()
    // Offset: 0x1926F78
    ::ArrayW<::VROSC::AudioReactive::ShaderEffectData::Effect*> get_Effects();
    // public System.Void .ctor()
    // Offset: 0x1926F80
    // Implemented from: VROSC.AudioReactive.AudioReactiveEffectData
    // Base method: System.Void AudioReactiveEffectData::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderEffectData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::ShaderEffectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderEffectData*, creationType>()));
    }
  }; // VROSC.AudioReactive.ShaderEffectData
  #pragma pack(pop)
  static check_size<sizeof(ShaderEffectData), 32 + sizeof(::ArrayW<::VROSC::AudioReactive::ShaderEffectData::Effect*>)> __VROSC_AudioReactive_ShaderEffectDataSizeCheck;
  static_assert(sizeof(ShaderEffectData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::ShaderEffectData::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AudioReactive::ShaderEffectData::*)()>(&VROSC::AudioReactive::ShaderEffectData::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShaderEffectData*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShaderEffectData::get_Effects
// Il2CppName: get_Effects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::AudioReactive::ShaderEffectData::Effect*> (VROSC::AudioReactive::ShaderEffectData::*)()>(&VROSC::AudioReactive::ShaderEffectData::get_Effects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShaderEffectData*), "get_Effects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShaderEffectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
