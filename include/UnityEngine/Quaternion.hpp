// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Quaternion, "UnityEngine", "Quaternion");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Quaternion
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: 660944
  // [Il2CppEagerStaticClassConstructionAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 660944
  // [DefaultMemberAttribute] Offset: 660944
  // [UsedByNativeCodeAttribute] Offset: 660944
  struct Quaternion/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Quaternion>, public ::System::IFormattable*/ {
    public:
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0xC
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Quaternion
    constexpr Quaternion(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Quaternion>
    operator ::System::IEquatable_1<::UnityEngine::Quaternion>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Quaternion>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get static field: static private readonly UnityEngine.Quaternion identityQuaternion
    static ::UnityEngine::Quaternion _get_identityQuaternion();
    // Set static field: static private readonly UnityEngine.Quaternion identityQuaternion
    static void _set_identityQuaternion(::UnityEngine::Quaternion value);
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-06;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // Get instance field reference: public System.Single x
    [[deprecated]] float& dyn_x();
    // Get instance field reference: public System.Single y
    [[deprecated]] float& dyn_y();
    // Get instance field reference: public System.Single z
    [[deprecated]] float& dyn_z();
    // Get instance field reference: public System.Single w
    [[deprecated]] float& dyn_w();
    // static public UnityEngine.Quaternion get_identity()
    // Offset: 0xBC88D4
    static ::UnityEngine::Quaternion get_identity();
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0xBC8C5C
    ::UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0xBC8C8C
    void set_eulerAngles(::UnityEngine::Vector3 value);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0xBC88C8
    // ABORTED: conflicts with another method.  Quaternion(float x, float y, float z, float w);
    // static private System.Void .cctor()
    // Offset: 0xBC90DC
    static void _cctor();
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection)
    // Offset: 0xBC8164
    static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection);
    // static public UnityEngine.Quaternion Inverse(UnityEngine.Quaternion rotation)
    // Offset: 0xBC8228
    static ::UnityEngine::Quaternion Inverse(::UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0xBC82D8
    static ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion SlerpUnclamped(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0xBC83BC
    static ::UnityEngine::Quaternion SlerpUnclamped(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0xBC84A0
    static ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float t);
    // static private UnityEngine.Quaternion Internal_FromEulerRad(UnityEngine.Vector3 euler)
    // Offset: 0xBC8584
    static ::UnityEngine::Quaternion Internal_FromEulerRad(::UnityEngine::Vector3 euler);
    // static private UnityEngine.Vector3 Internal_ToEulerRad(UnityEngine.Quaternion rotation)
    // Offset: 0xBC8634
    static ::UnityEngine::Vector3 Internal_ToEulerRad(::UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion AngleAxis(System.Single angle, UnityEngine.Vector3 axis)
    // Offset: 0xBC86E8
    static ::UnityEngine::Quaternion AngleAxis(float angle, ::UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards)
    // Offset: 0xBC87B8
    static ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 upwards);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward)
    // Offset: 0xBC887C
    static ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3 forward);
    // static private System.Boolean IsEqualUsingDot(System.Single dot)
    // Offset: 0xBC8A3C
    static bool IsEqualUsingDot(float dot);
    // static public System.Single Dot(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0xBC8A80
    static float Dot(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view)
    // Offset: 0xBC8AD0
    void SetLookRotation(::UnityEngine::Vector3 view);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view, UnityEngine.Vector3 up)
    // Offset: 0xBC8B34
    void SetLookRotation(::UnityEngine::Vector3 view, ::UnityEngine::Vector3 up);
    // static public System.Single Angle(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0xBC8B5C
    static float Angle(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b);
    // static private UnityEngine.Vector3 Internal_MakePositive(UnityEngine.Vector3 euler)
    // Offset: 0xBC8BC0
    static ::UnityEngine::Vector3 Internal_MakePositive(::UnityEngine::Vector3 euler);
    // static public UnityEngine.Quaternion Euler(System.Single x, System.Single y, System.Single z)
    // Offset: 0xBC8CC8
    static ::UnityEngine::Quaternion Euler(float x, float y, float z);
    // static public UnityEngine.Quaternion Euler(UnityEngine.Vector3 euler)
    // Offset: 0xBC8CE0
    static ::UnityEngine::Quaternion Euler(::UnityEngine::Vector3 euler);
    // public System.Boolean Equals(UnityEngine.Quaternion other)
    // Offset: 0xBC8DEC
    bool Equals(::UnityEngine::Quaternion other);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xBC8F04
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // static private System.Void FromToRotation_Injected(ref UnityEngine.Vector3 fromDirection, ref UnityEngine.Vector3 toDirection, out UnityEngine.Quaternion ret)
    // Offset: 0xBC81D0
    static void FromToRotation_Injected(ByRef<::UnityEngine::Vector3> fromDirection, ByRef<::UnityEngine::Vector3> toDirection, ByRef<::UnityEngine::Quaternion> ret);
    // static private System.Void Inverse_Injected(ref UnityEngine.Quaternion rotation, out UnityEngine.Quaternion ret)
    // Offset: 0xBC8288
    static void Inverse_Injected(ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Quaternion> ret);
    // static private System.Void Slerp_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0xBC8354
    static void Slerp_Injected(ByRef<::UnityEngine::Quaternion> a, ByRef<::UnityEngine::Quaternion> b, float t, ByRef<::UnityEngine::Quaternion> ret);
    // static private System.Void SlerpUnclamped_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0xBC8438
    static void SlerpUnclamped_Injected(ByRef<::UnityEngine::Quaternion> a, ByRef<::UnityEngine::Quaternion> b, float t, ByRef<::UnityEngine::Quaternion> ret);
    // static private System.Void Lerp_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0xBC851C
    static void Lerp_Injected(ByRef<::UnityEngine::Quaternion> a, ByRef<::UnityEngine::Quaternion> b, float t, ByRef<::UnityEngine::Quaternion> ret);
    // static private System.Void Internal_FromEulerRad_Injected(ref UnityEngine.Vector3 euler, out UnityEngine.Quaternion ret)
    // Offset: 0xBC85E4
    static void Internal_FromEulerRad_Injected(ByRef<::UnityEngine::Vector3> euler, ByRef<::UnityEngine::Quaternion> ret);
    // static private System.Void Internal_ToEulerRad_Injected(ref UnityEngine.Quaternion rotation, out UnityEngine.Vector3 ret)
    // Offset: 0xBC8698
    static void Internal_ToEulerRad_Injected(ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Vector3> ret);
    // static private System.Void AngleAxis_Injected(System.Single angle, ref UnityEngine.Vector3 axis, out UnityEngine.Quaternion ret)
    // Offset: 0xBC8758
    static void AngleAxis_Injected(float angle, ByRef<::UnityEngine::Vector3> axis, ByRef<::UnityEngine::Quaternion> ret);
    // static private System.Void LookRotation_Injected(ref UnityEngine.Vector3 forward, ref UnityEngine.Vector3 upwards, out UnityEngine.Quaternion ret)
    // Offset: 0xBC8824
    static void LookRotation_Injected(ByRef<::UnityEngine::Vector3> forward, ByRef<::UnityEngine::Vector3> upwards, ByRef<::UnityEngine::Quaternion> ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xBC8CF8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xBC8D60
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xBC8E7C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Quaternion
  #pragma pack(pop)
  static check_size<sizeof(Quaternion), 12 + sizeof(float)> __UnityEngine_QuaternionSizeCheck;
  static_assert(sizeof(Quaternion) == 0x10);
  // static public UnityEngine.Quaternion op_Multiply(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0xBC8924
  ::UnityEngine::Quaternion operator*(const ::UnityEngine::Quaternion& lhs, const ::UnityEngine::Quaternion& rhs);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.Vector3 point)
  // Offset: 0xBC8998
  ::UnityEngine::Vector3 operator*(const ::UnityEngine::Quaternion& rotation, const ::UnityEngine::Vector3& point);
  // static public System.Boolean op_Equality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0xBC8A50
  bool operator ==(const ::UnityEngine::Quaternion& lhs, const ::UnityEngine::Quaternion& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0xBC8AA0
  bool operator !=(const ::UnityEngine::Quaternion& lhs, const ::UnityEngine::Quaternion& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Quaternion::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)()>(&UnityEngine::Quaternion::get_identity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::get_eulerAngles
// Il2CppName: get_eulerAngles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Quaternion::*)()>(&UnityEngine::Quaternion::get_eulerAngles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "get_eulerAngles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::set_eulerAngles
// Il2CppName: set_eulerAngles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Quaternion::*)(::UnityEngine::Vector3)>(&UnityEngine::Quaternion::set_eulerAngles)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "set_eulerAngles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Quaternion
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Quaternion::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Quaternion::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::FromToRotation
// Il2CppName: FromToRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::Quaternion::FromToRotation)> {
  static const MethodInfo* get() {
    static auto* fromDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* toDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "FromToRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromDirection, toDirection});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Inverse)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Slerp
// Il2CppName: Slerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&UnityEngine::Quaternion::Slerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Slerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::SlerpUnclamped
// Il2CppName: SlerpUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&UnityEngine::Quaternion::SlerpUnclamped)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "SlerpUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&UnityEngine::Quaternion::Lerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_FromEulerRad
// Il2CppName: Internal_FromEulerRad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&UnityEngine::Quaternion::Internal_FromEulerRad)> {
  static const MethodInfo* get() {
    static auto* euler = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_FromEulerRad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{euler});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_ToEulerRad
// Il2CppName: Internal_ToEulerRad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Internal_ToEulerRad)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_ToEulerRad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::AngleAxis
// Il2CppName: AngleAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(float, ::UnityEngine::Vector3)>(&UnityEngine::Quaternion::AngleAxis)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "AngleAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle, axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::LookRotation
// Il2CppName: LookRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::Quaternion::LookRotation)> {
  static const MethodInfo* get() {
    static auto* forward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* upwards = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "LookRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forward, upwards});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::LookRotation
// Il2CppName: LookRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&UnityEngine::Quaternion::LookRotation)> {
  static const MethodInfo* get() {
    static auto* forward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "LookRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forward});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::IsEqualUsingDot
// Il2CppName: IsEqualUsingDot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&UnityEngine::Quaternion::IsEqualUsingDot)> {
  static const MethodInfo* get() {
    static auto* dot = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "IsEqualUsingDot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dot});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Dot
// Il2CppName: Dot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Dot)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Dot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::SetLookRotation
// Il2CppName: SetLookRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Quaternion::*)(::UnityEngine::Vector3)>(&UnityEngine::Quaternion::SetLookRotation)> {
  static const MethodInfo* get() {
    static auto* view = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "SetLookRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{view});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::SetLookRotation
// Il2CppName: SetLookRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Quaternion::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::Quaternion::SetLookRotation)> {
  static const MethodInfo* get() {
    static auto* view = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* up = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "SetLookRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{view, up});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Angle
// Il2CppName: Angle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Angle)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_MakePositive
// Il2CppName: Internal_MakePositive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&UnityEngine::Quaternion::Internal_MakePositive)> {
  static const MethodInfo* get() {
    static auto* euler = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_MakePositive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{euler});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Euler
// Il2CppName: Euler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(float, float, float)>(&UnityEngine::Quaternion::Euler)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Euler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Euler
// Il2CppName: Euler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&UnityEngine::Quaternion::Euler)> {
  static const MethodInfo* get() {
    static auto* euler = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Euler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{euler});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Quaternion::*)(::UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Quaternion::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::Quaternion::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::FromToRotation_Injected
// Il2CppName: FromToRotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Quaternion::FromToRotation_Injected)> {
  static const MethodInfo* get() {
    static auto* fromDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* toDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "FromToRotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromDirection, toDirection, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Inverse_Injected
// Il2CppName: Inverse_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Quaternion::Inverse_Injected)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Inverse_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Slerp_Injected
// Il2CppName: Slerp_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, float, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Quaternion::Slerp_Injected)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Slerp_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::SlerpUnclamped_Injected
// Il2CppName: SlerpUnclamped_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, float, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Quaternion::SlerpUnclamped_Injected)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "SlerpUnclamped_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Lerp_Injected
// Il2CppName: Lerp_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, float, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Quaternion::Lerp_Injected)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Lerp_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_FromEulerRad_Injected
// Il2CppName: Internal_FromEulerRad_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Quaternion::Internal_FromEulerRad_Injected)> {
  static const MethodInfo* get() {
    static auto* euler = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_FromEulerRad_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{euler, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_ToEulerRad_Injected
// Il2CppName: Internal_ToEulerRad_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Quaternion::Internal_ToEulerRad_Injected)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_ToEulerRad_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::AngleAxis_Injected
// Il2CppName: AngleAxis_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Quaternion::AngleAxis_Injected)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "AngleAxis_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle, axis, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::LookRotation_Injected
// Il2CppName: LookRotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Quaternion::LookRotation_Injected)> {
  static const MethodInfo* get() {
    static auto* forward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* upwards = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "LookRotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forward, upwards, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Quaternion::*)()>(&UnityEngine::Quaternion::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Quaternion::*)(::Il2CppObject*)>(&UnityEngine::Quaternion::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Quaternion::*)()>(&UnityEngine::Quaternion::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Quaternion::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Quaternion::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Quaternion::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
