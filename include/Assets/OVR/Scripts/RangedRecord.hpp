// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Assets.OVR.Scripts.Record
#include "Assets/OVR/Scripts/Record.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Forward declaring type: RangedRecord
  class RangedRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Assets::OVR::Scripts::RangedRecord);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::RangedRecord*, "Assets.OVR.Scripts", "RangedRecord");
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Assets.OVR.Scripts.RangedRecord
  // [TokenAttribute] Offset: FFFFFFFF
  class RangedRecord : public ::Assets::OVR::Scripts::Record {
    public:
    public:
    // public System.Single value
    // Size: 0x4
    // Offset: 0x20
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single min
    // Size: 0x4
    // Offset: 0x24
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single max
    // Size: 0x4
    // Offset: 0x28
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single value
    [[deprecated]] float& dyn_value();
    // Get instance field reference: public System.Single min
    [[deprecated]] float& dyn_min();
    // Get instance field reference: public System.Single max
    [[deprecated]] float& dyn_max();
    // public System.Void .ctor(System.String cat, System.String msg, System.Single val, System.Single minVal, System.Single maxVal)
    // Offset: 0x804754
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangedRecord* New_ctor(::StringW cat, ::StringW msg, float val, float minVal, float maxVal) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Assets::OVR::Scripts::RangedRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangedRecord*, creationType>(cat, msg, val, minVal, maxVal)));
    }
  }; // Assets.OVR.Scripts.RangedRecord
  #pragma pack(pop)
  static check_size<sizeof(RangedRecord), 40 + sizeof(float)> __Assets_OVR_Scripts_RangedRecordSizeCheck;
  static_assert(sizeof(RangedRecord) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Assets::OVR::Scripts::RangedRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
