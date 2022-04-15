// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.PlatformSelector
#include "VROSC/PlatformSelector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PlatformSelector::DebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlatformSelector::DebugSettings*, "VROSC", "PlatformSelector/DebugSettings");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PlatformSelector/VROSC.DebugSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformSelector::DebugSettings : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean DisableVR
    // Size: 0x1
    // Offset: 0x10
    bool DisableVR;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DisableVR and: DummyOculusId
    char __padding0[0x7] = {};
    // public System.String DummyOculusId
    // Size: 0x8
    // Offset: 0x18
    ::StringW DummyOculusId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String DummyUsername
    // Size: 0x8
    // Offset: 0x20
    ::StringW DummyUsername;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean PassEntitlements
    // Size: 0x1
    // Offset: 0x28
    bool PassEntitlements;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PassEntitlements and: Platform
    char __padding3[0x3] = {};
    // public VROSC.PlatformSelector/VROSC.Platform Platform
    // Size: 0x4
    // Offset: 0x2C
    ::VROSC::PlatformSelector::Platform Platform;
    // Field size check
    static_assert(sizeof(::VROSC::PlatformSelector::Platform) == 0x4);
    public:
    // Get instance field reference: public System.Boolean DisableVR
    [[deprecated("Use field access instead!")]] bool& dyn_DisableVR();
    // Get instance field reference: public System.String DummyOculusId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DummyOculusId();
    // Get instance field reference: public System.String DummyUsername
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DummyUsername();
    // Get instance field reference: public System.Boolean PassEntitlements
    [[deprecated("Use field access instead!")]] bool& dyn_PassEntitlements();
    // Get instance field reference: public VROSC.PlatformSelector/VROSC.Platform Platform
    [[deprecated("Use field access instead!")]] ::VROSC::PlatformSelector::Platform& dyn_Platform();
    // public System.Void .ctor()
    // Offset: 0x8CDAC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformSelector::DebugSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PlatformSelector::DebugSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformSelector::DebugSettings*, creationType>()));
    }
  }; // VROSC.PlatformSelector/VROSC.DebugSettings
  #pragma pack(pop)
  static check_size<sizeof(PlatformSelector::DebugSettings), 44 + sizeof(::VROSC::PlatformSelector::Platform)> __VROSC_PlatformSelector_DebugSettingsSizeCheck;
  static_assert(sizeof(PlatformSelector::DebugSettings) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PlatformSelector::DebugSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
