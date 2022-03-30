// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmModulationSetting
  class HelmModulationSetting;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::HelmModulationSetting);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmModulationSetting*, "AudioHelm", "HelmModulationSetting");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.HelmModulationSetting
  // [TokenAttribute] Offset: FFFFFFFF
  class HelmModulationSetting : public ::Il2CppObject {
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
    // public System.String source
    // Size: 0x8
    // Offset: 0x10
    ::StringW source;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String destination
    // Size: 0x8
    // Offset: 0x18
    ::StringW destination;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single amount
    // Size: 0x4
    // Offset: 0x20
    float amount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.String source
    ::StringW& dyn_source();
    // Get instance field reference: public System.String destination
    ::StringW& dyn_destination();
    // Get instance field reference: public System.Single amount
    float& dyn_amount();
    // public System.Void .ctor()
    // Offset: 0x89A97C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelmModulationSetting* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::HelmModulationSetting::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelmModulationSetting*, creationType>()));
    }
  }; // AudioHelm.HelmModulationSetting
  #pragma pack(pop)
  static check_size<sizeof(HelmModulationSetting), 32 + sizeof(float)> __AudioHelm_HelmModulationSettingSizeCheck;
  static_assert(sizeof(HelmModulationSetting) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::HelmModulationSetting::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
