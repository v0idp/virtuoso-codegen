// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRVoiceMod
#include "GlobalNamespace/OVRVoiceMod.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVoiceMod::ovrViceModFlag, "", "OVRVoiceMod/ovrViceModFlag");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRVoiceMod/ovrViceModFlag
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRVoiceMod::ovrViceModFlag/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrViceModFlag
    constexpr ovrViceModFlag(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRVoiceMod/ovrViceModFlag None
    static constexpr const int None = 0;
    // Get static field: static public OVRVoiceMod/ovrViceModFlag None
    static ::GlobalNamespace::OVRVoiceMod::ovrViceModFlag _get_None();
    // Set static field: static public OVRVoiceMod/ovrViceModFlag None
    static void _set_None(::GlobalNamespace::OVRVoiceMod::ovrViceModFlag value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRVoiceMod/ovrViceModFlag
  #pragma pack(pop)
  static check_size<sizeof(OVRVoiceMod::ovrViceModFlag), 0 + sizeof(int)> __GlobalNamespace_OVRVoiceMod_ovrViceModFlagSizeCheck;
  static_assert(sizeof(OVRVoiceMod::ovrViceModFlag) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
