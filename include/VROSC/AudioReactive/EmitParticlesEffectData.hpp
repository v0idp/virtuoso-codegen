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
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxInt
  class MinMaxInt;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: EmitParticlesEffectData
  class EmitParticlesEffectData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::EmitParticlesEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::EmitParticlesEffectData*, "VROSC.AudioReactive", "EmitParticlesEffectData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.EmitParticlesEffectData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 66AC90
  class EmitParticlesEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
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
    // private VROSC.MinMaxInt _amount
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::MinMaxInt* amount;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxInt*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.MinMaxInt _amount
    ::VROSC::MinMaxInt*& dyn__amount();
    // public VROSC.MinMaxInt get_Amount()
    // Offset: 0x1311920
    ::VROSC::MinMaxInt* get_Amount();
    // public System.Void .ctor()
    // Offset: 0x1311928
    // Implemented from: VROSC.AudioReactive.AudioReactiveEffectData
    // Base method: System.Void AudioReactiveEffectData::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmitParticlesEffectData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::EmitParticlesEffectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmitParticlesEffectData*, creationType>()));
    }
  }; // VROSC.AudioReactive.EmitParticlesEffectData
  #pragma pack(pop)
  static check_size<sizeof(EmitParticlesEffectData), 24 + sizeof(::VROSC::MinMaxInt*)> __VROSC_AudioReactive_EmitParticlesEffectDataSizeCheck;
  static_assert(sizeof(EmitParticlesEffectData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::EmitParticlesEffectData::get_Amount
// Il2CppName: get_Amount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxInt* (VROSC::AudioReactive::EmitParticlesEffectData::*)()>(&VROSC::AudioReactive::EmitParticlesEffectData::get_Amount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::EmitParticlesEffectData*), "get_Amount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::EmitParticlesEffectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!