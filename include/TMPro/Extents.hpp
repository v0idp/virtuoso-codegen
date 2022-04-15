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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: Extents
  struct Extents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Extents, "TMPro", "Extents");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.Extents
  // [TokenAttribute] Offset: FFFFFFFF
  struct Extents/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector2 min
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2 min;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 max
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 max;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: Extents
    constexpr Extents(::UnityEngine::Vector2 min_ = {}, ::UnityEngine::Vector2 max_ = {}) noexcept : min{min_}, max{max_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static TMPro.Extents zero
    static ::TMPro::Extents _get_zero();
    // Set static field: static TMPro.Extents zero
    static void _set_zero(::TMPro::Extents value);
    // Get static field: static TMPro.Extents uninitialized
    static ::TMPro::Extents _get_uninitialized();
    // Set static field: static TMPro.Extents uninitialized
    static void _set_uninitialized(::TMPro::Extents value);
    // Get instance field reference: public UnityEngine.Vector2 min
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_min();
    // Get instance field reference: public UnityEngine.Vector2 max
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_max();
    // public System.Void .ctor(UnityEngine.Vector2 min, UnityEngine.Vector2 max)
    // Offset: 0xC28F04
    // ABORTED: conflicts with another method.  Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max);
    // static private System.Void .cctor()
    // Offset: 0xC291C8
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xC28F10
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // TMPro.Extents
  #pragma pack(pop)
  static check_size<sizeof(Extents), 8 + sizeof(::UnityEngine::Vector2)> __TMPro_ExtentsSizeCheck;
  static_assert(sizeof(Extents) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::Extents::Extents
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::Extents::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::Extents::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::Extents), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::Extents::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (TMPro::Extents::*)()>(&TMPro::Extents::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::Extents), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
