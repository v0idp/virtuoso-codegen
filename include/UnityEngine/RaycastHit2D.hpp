// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider2D
  class Collider2D;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RaycastHit2D
  struct RaycastHit2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit2D, "UnityEngine", "RaycastHit2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RaycastHit2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: 6CBFE4
  // [RequiredByNativeCodeAttribute] Offset: 6CBFE4
  // [NativeHeaderAttribute] Offset: 6CBFE4
  struct RaycastHit2D/*, public ::System::ValueType*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x6CC674
    // private UnityEngine.Vector2 m_Centroid
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2 m_Centroid;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0x6CC6AC
    // private UnityEngine.Vector2 m_Point
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 m_Point;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0x6CC6E4
    // private UnityEngine.Vector2 m_Normal
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 m_Normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0x6CC71C
    // private System.Single m_Distance
    // Size: 0x4
    // Offset: 0x18
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x6CC754
    // private System.Single m_Fraction
    // Size: 0x4
    // Offset: 0x1C
    float m_Fraction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x6CC78C
    // private System.Int32 m_Collider
    // Size: 0x4
    // Offset: 0x20
    int m_Collider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RaycastHit2D
    constexpr RaycastHit2D(::UnityEngine::Vector2 m_Centroid_ = {}, ::UnityEngine::Vector2 m_Point_ = {}, ::UnityEngine::Vector2 m_Normal_ = {}, float m_Distance_ = {}, float m_Fraction_ = {}, int m_Collider_ = {}) noexcept : m_Centroid{m_Centroid_}, m_Point{m_Point_}, m_Normal{m_Normal_}, m_Distance{m_Distance_}, m_Fraction{m_Fraction_}, m_Collider{m_Collider_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector2 m_Centroid
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_Centroid();
    // Get instance field reference: private UnityEngine.Vector2 m_Point
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_Point();
    // Get instance field reference: private UnityEngine.Vector2 m_Normal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_Normal();
    // Get instance field reference: private System.Single m_Distance
    [[deprecated("Use field access instead!")]] float& dyn_m_Distance();
    // Get instance field reference: private System.Single m_Fraction
    [[deprecated("Use field access instead!")]] float& dyn_m_Fraction();
    // Get instance field reference: private System.Int32 m_Collider
    [[deprecated("Use field access instead!")]] int& dyn_m_Collider();
    // public UnityEngine.Vector2 get_point()
    // Offset: 0x18FF190
    ::UnityEngine::Vector2 get_point();
    // public UnityEngine.Vector2 get_normal()
    // Offset: 0x18FF198
    ::UnityEngine::Vector2 get_normal();
    // public System.Single get_distance()
    // Offset: 0x18FF1A0
    float get_distance();
    // public System.Single get_fraction()
    // Offset: 0x18FF1A8
    float get_fraction();
    // public UnityEngine.Collider2D get_collider()
    // Offset: 0x18FF1B0
    ::UnityEngine::Collider2D* get_collider();
  }; // UnityEngine.RaycastHit2D
  #pragma pack(pop)
  static check_size<sizeof(RaycastHit2D), 32 + sizeof(int)> __UnityEngine_RaycastHit2DSizeCheck;
  static_assert(sizeof(RaycastHit2D) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_point
// Il2CppName: get_point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_point)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_normal
// Il2CppName: get_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_normal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_distance
// Il2CppName: get_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_distance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_fraction
// Il2CppName: get_fraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_fraction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_fraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_collider
// Il2CppName: get_collider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Collider2D* (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_collider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_collider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
