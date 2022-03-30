// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarLights_Offsets
  struct ovrAvatarLights_Offsets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarLights_Offsets, "", "ovrAvatarLights_Offsets");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarLights_Offsets
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarLights_Offsets/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: ovrAvatarLights_Offsets
    constexpr ovrAvatarLights_Offsets() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public System.Int64 ambientIntensity
    static int64_t _get_ambientIntensity();
    // Set static field: static public System.Int64 ambientIntensity
    static void _set_ambientIntensity(int64_t value);
    // Get static field: static public System.Int64 lightCount
    static int64_t _get_lightCount();
    // Set static field: static public System.Int64 lightCount
    static void _set_lightCount(int64_t value);
    // Get static field: static public System.Int64 lights
    static int64_t _get_lights();
    // Set static field: static public System.Int64 lights
    static void _set_lights(int64_t value);
    // static private System.Void .cctor()
    // Offset: 0x1358824
    static void _cctor();
  }; // ovrAvatarLights_Offsets
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarLights_Offsets::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ovrAvatarLights_Offsets::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarLights_Offsets), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
