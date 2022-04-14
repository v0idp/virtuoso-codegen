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
  // Forward declaring type: ovrAvatarBodyComponent_Offsets
  struct ovrAvatarBodyComponent_Offsets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarBodyComponent_Offsets, "", "ovrAvatarBodyComponent_Offsets");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarBodyComponent_Offsets
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarBodyComponent_Offsets/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: ovrAvatarBodyComponent_Offsets
    constexpr ovrAvatarBodyComponent_Offsets() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public System.Int64 leftEyeTransform
    static int64_t _get_leftEyeTransform();
    // Set static field: static public System.Int64 leftEyeTransform
    static void _set_leftEyeTransform(int64_t value);
    // Get static field: static public System.Int64 rightEyeTransform
    static int64_t _get_rightEyeTransform();
    // Set static field: static public System.Int64 rightEyeTransform
    static void _set_rightEyeTransform(int64_t value);
    // Get static field: static public System.Int64 centerEyeTransform
    static int64_t _get_centerEyeTransform();
    // Set static field: static public System.Int64 centerEyeTransform
    static void _set_centerEyeTransform(int64_t value);
    // Get static field: static public System.Int64 renderComponent
    static int64_t _get_renderComponent();
    // Set static field: static public System.Int64 renderComponent
    static void _set_renderComponent(int64_t value);
    // static private System.Void .cctor()
    // Offset: 0x954480
    static void _cctor();
  }; // ovrAvatarBodyComponent_Offsets
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarBodyComponent_Offsets::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ovrAvatarBodyComponent_Offsets::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarBodyComponent_Offsets), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
