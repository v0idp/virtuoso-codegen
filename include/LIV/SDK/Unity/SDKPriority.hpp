// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKPriority
  struct SDKPriority;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPriority, "LIV.SDK.Unity", "SDKPriority");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKPriority
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKPriority/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.SByte pose
    // Size: 0x1
    // Offset: 0x0
    int8_t pose;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // public System.SByte clipPlane
    // Size: 0x1
    // Offset: 0x1
    int8_t clipPlane;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // public System.SByte stage
    // Size: 0x1
    // Offset: 0x2
    int8_t stage;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // public System.SByte resolution
    // Size: 0x1
    // Offset: 0x3
    int8_t resolution;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // public System.SByte feature
    // Size: 0x1
    // Offset: 0x4
    int8_t feature;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // public System.SByte nearFarAdjustment
    // Size: 0x1
    // Offset: 0x5
    int8_t nearFarAdjustment;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // public System.SByte groundPlane
    // Size: 0x1
    // Offset: 0x6
    int8_t groundPlane;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // public System.SByte reserved2
    // Size: 0x1
    // Offset: 0x7
    int8_t reserved2;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    public:
    // Creating value type constructor for type: SDKPriority
    constexpr SDKPriority(int8_t pose_ = {}, int8_t clipPlane_ = {}, int8_t stage_ = {}, int8_t resolution_ = {}, int8_t feature_ = {}, int8_t nearFarAdjustment_ = {}, int8_t groundPlane_ = {}, int8_t reserved2_ = {}) noexcept : pose{pose_}, clipPlane{clipPlane_}, stage{stage_}, resolution{resolution_}, feature{feature_}, nearFarAdjustment{nearFarAdjustment_}, groundPlane{groundPlane_}, reserved2{reserved2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.SByte pose
    [[deprecated("Use field access instead!")]] int8_t& dyn_pose();
    // Get instance field reference: public System.SByte clipPlane
    [[deprecated("Use field access instead!")]] int8_t& dyn_clipPlane();
    // Get instance field reference: public System.SByte stage
    [[deprecated("Use field access instead!")]] int8_t& dyn_stage();
    // Get instance field reference: public System.SByte resolution
    [[deprecated("Use field access instead!")]] int8_t& dyn_resolution();
    // Get instance field reference: public System.SByte feature
    [[deprecated("Use field access instead!")]] int8_t& dyn_feature();
    // Get instance field reference: public System.SByte nearFarAdjustment
    [[deprecated("Use field access instead!")]] int8_t& dyn_nearFarAdjustment();
    // Get instance field reference: public System.SByte groundPlane
    [[deprecated("Use field access instead!")]] int8_t& dyn_groundPlane();
    // Get instance field reference: public System.SByte reserved2
    [[deprecated("Use field access instead!")]] int8_t& dyn_reserved2();
    // static public LIV.SDK.Unity.SDKPriority get_empty()
    // Offset: 0xDD4488
    static ::LIV::SDK::Unity::SDKPriority get_empty();
    // public override System.String ToString()
    // Offset: 0xDD5634
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKPriority
  #pragma pack(pop)
  static check_size<sizeof(SDKPriority), 7 + sizeof(int8_t)> __LIV_SDK_Unity_SDKPrioritySizeCheck;
  static_assert(sizeof(SDKPriority) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKPriority::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPriority (*)()>(&LIV::SDK::Unity::SDKPriority::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKPriority), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKPriority::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKPriority::*)()>(&LIV::SDK::Unity::SDKPriority::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKPriority), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
