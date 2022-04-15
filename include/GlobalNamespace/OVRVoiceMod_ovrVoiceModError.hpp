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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVoiceMod::ovrVoiceModError, "", "OVRVoiceMod/ovrVoiceModError");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRVoiceMod/ovrVoiceModError
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRVoiceMod::ovrVoiceModError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrVoiceModError
    constexpr ovrVoiceModError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRVoiceMod/ovrVoiceModError Unknown
    static constexpr const int Unknown = -2250;
    // Get static field: static public OVRVoiceMod/ovrVoiceModError Unknown
    static ::GlobalNamespace::OVRVoiceMod::ovrVoiceModError _get_Unknown();
    // Set static field: static public OVRVoiceMod/ovrVoiceModError Unknown
    static void _set_Unknown(::GlobalNamespace::OVRVoiceMod::ovrVoiceModError value);
    // static field const value: static public OVRVoiceMod/ovrVoiceModError CannotCreateContext
    static constexpr const int CannotCreateContext = -2251;
    // Get static field: static public OVRVoiceMod/ovrVoiceModError CannotCreateContext
    static ::GlobalNamespace::OVRVoiceMod::ovrVoiceModError _get_CannotCreateContext();
    // Set static field: static public OVRVoiceMod/ovrVoiceModError CannotCreateContext
    static void _set_CannotCreateContext(::GlobalNamespace::OVRVoiceMod::ovrVoiceModError value);
    // static field const value: static public OVRVoiceMod/ovrVoiceModError InvalidParam
    static constexpr const int InvalidParam = -2252;
    // Get static field: static public OVRVoiceMod/ovrVoiceModError InvalidParam
    static ::GlobalNamespace::OVRVoiceMod::ovrVoiceModError _get_InvalidParam();
    // Set static field: static public OVRVoiceMod/ovrVoiceModError InvalidParam
    static void _set_InvalidParam(::GlobalNamespace::OVRVoiceMod::ovrVoiceModError value);
    // static field const value: static public OVRVoiceMod/ovrVoiceModError BadSampleRate
    static constexpr const int BadSampleRate = -2253;
    // Get static field: static public OVRVoiceMod/ovrVoiceModError BadSampleRate
    static ::GlobalNamespace::OVRVoiceMod::ovrVoiceModError _get_BadSampleRate();
    // Set static field: static public OVRVoiceMod/ovrVoiceModError BadSampleRate
    static void _set_BadSampleRate(::GlobalNamespace::OVRVoiceMod::ovrVoiceModError value);
    // static field const value: static public OVRVoiceMod/ovrVoiceModError MissingDLL
    static constexpr const int MissingDLL = -2254;
    // Get static field: static public OVRVoiceMod/ovrVoiceModError MissingDLL
    static ::GlobalNamespace::OVRVoiceMod::ovrVoiceModError _get_MissingDLL();
    // Set static field: static public OVRVoiceMod/ovrVoiceModError MissingDLL
    static void _set_MissingDLL(::GlobalNamespace::OVRVoiceMod::ovrVoiceModError value);
    // static field const value: static public OVRVoiceMod/ovrVoiceModError BadVersion
    static constexpr const int BadVersion = -2255;
    // Get static field: static public OVRVoiceMod/ovrVoiceModError BadVersion
    static ::GlobalNamespace::OVRVoiceMod::ovrVoiceModError _get_BadVersion();
    // Set static field: static public OVRVoiceMod/ovrVoiceModError BadVersion
    static void _set_BadVersion(::GlobalNamespace::OVRVoiceMod::ovrVoiceModError value);
    // static field const value: static public OVRVoiceMod/ovrVoiceModError UndefinedFunction
    static constexpr const int UndefinedFunction = -2256;
    // Get static field: static public OVRVoiceMod/ovrVoiceModError UndefinedFunction
    static ::GlobalNamespace::OVRVoiceMod::ovrVoiceModError _get_UndefinedFunction();
    // Set static field: static public OVRVoiceMod/ovrVoiceModError UndefinedFunction
    static void _set_UndefinedFunction(::GlobalNamespace::OVRVoiceMod::ovrVoiceModError value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRVoiceMod/ovrVoiceModError
  #pragma pack(pop)
  static check_size<sizeof(OVRVoiceMod::ovrVoiceModError), 0 + sizeof(int)> __GlobalNamespace_OVRVoiceMod_ovrVoiceModErrorSizeCheck;
  static_assert(sizeof(OVRVoiceMod::ovrVoiceModError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
