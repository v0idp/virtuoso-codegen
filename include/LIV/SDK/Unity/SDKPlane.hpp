// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LIV.SDK.Unity.SDKVector3
#include "LIV/SDK/Unity/SDKVector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Completed forward declares
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKPlane
  struct SDKPlane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPlane, "LIV.SDK.Unity", "SDKPlane");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKPlane
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKPlane/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x0
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public LIV.SDK.Unity.SDKVector3 normal
    // Size: 0xC
    // Offset: 0x4
    ::LIV::SDK::Unity::SDKVector3 normal;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    public:
    // Creating value type constructor for type: SDKPlane
    constexpr SDKPlane(float distance_ = {}, ::LIV::SDK::Unity::SDKVector3 normal_ = {}) noexcept : distance{distance_}, normal{normal_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single distance
    float& dyn_distance();
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 normal
    ::LIV::SDK::Unity::SDKVector3& dyn_normal();
    // static public LIV.SDK.Unity.SDKPlane get_empty()
    // Offset: 0xB03D24
    static ::LIV::SDK::Unity::SDKPlane get_empty();
    // public override System.String ToString()
    // Offset: 0xB03D48
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKPlane
  #pragma pack(pop)
  static check_size<sizeof(SDKPlane), 4 + sizeof(::LIV::SDK::Unity::SDKVector3)> __LIV_SDK_Unity_SDKPlaneSizeCheck;
  static_assert(sizeof(SDKPlane) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKPlane::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPlane (*)()>(&LIV::SDK::Unity::SDKPlane::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKPlane), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKPlane::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKPlane::*)()>(&LIV::SDK::Unity::SDKPlane::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKPlane), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
