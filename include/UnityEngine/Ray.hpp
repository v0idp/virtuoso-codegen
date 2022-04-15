// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ray, "UnityEngine", "Ray");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Ray
  // [TokenAttribute] Offset: FFFFFFFF
  struct Ray/*, public ::System::ValueType, public ::System::IFormattable*/ {
    public:
    public:
    // private UnityEngine.Vector3 m_Origin
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 m_Origin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_Direction
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 m_Direction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: Ray
    constexpr Ray(::UnityEngine::Vector3 m_Origin_ = {}, ::UnityEngine::Vector3 m_Direction_ = {}) noexcept : m_Origin{m_Origin_}, m_Direction{m_Direction_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 m_Origin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Origin();
    // Get instance field reference: private UnityEngine.Vector3 m_Direction
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Direction();
    // public UnityEngine.Vector3 get_origin()
    // Offset: 0xBC207C
    ::UnityEngine::Vector3 get_origin();
    // public UnityEngine.Vector3 get_direction()
    // Offset: 0xBC2070
    ::UnityEngine::Vector3 get_direction();
    // public System.Void .ctor(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
    // Offset: 0xBC957C
    // ABORTED: conflicts with another method.  Ray(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);
    // public UnityEngine.Vector3 GetPoint(System.Single distance)
    // Offset: 0xBC95C4
    ::UnityEngine::Vector3 GetPoint(float distance);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xBC9674
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public override System.String ToString()
    // Offset: 0xBC95EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Ray
  #pragma pack(pop)
  static check_size<sizeof(Ray), 12 + sizeof(::UnityEngine::Vector3)> __UnityEngine_RaySizeCheck;
  static_assert(sizeof(Ray) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Ray::get_origin
// Il2CppName: get_origin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Ray::*)()>(&UnityEngine::Ray::get_origin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "get_origin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::get_direction
// Il2CppName: get_direction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Ray::*)()>(&UnityEngine::Ray::get_direction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "get_direction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::Ray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Ray::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Ray::*)(float)>(&UnityEngine::Ray::GetPoint)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Ray::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::Ray::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Ray::*)()>(&UnityEngine::Ray::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
