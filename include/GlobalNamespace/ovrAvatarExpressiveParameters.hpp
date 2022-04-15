// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarExpressiveParameters
  struct ovrAvatarExpressiveParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarExpressiveParameters, "", "ovrAvatarExpressiveParameters");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarExpressiveParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarExpressiveParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector4 irisColor
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Vector4 irisColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 scleraColor
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Vector4 scleraColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 lashColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Vector4 lashColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 browColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Vector4 browColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 lipColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Vector4 lipColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 teethColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Vector4 teethColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 gumColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Vector4 gumColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public System.Single browLashIntensity
    // Size: 0x4
    // Offset: 0x70
    float browLashIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lipSmoothness
    // Size: 0x4
    // Offset: 0x74
    float lipSmoothness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarExpressiveParameters
    constexpr ovrAvatarExpressiveParameters(::UnityEngine::Vector4 irisColor_ = {}, ::UnityEngine::Vector4 scleraColor_ = {}, ::UnityEngine::Vector4 lashColor_ = {}, ::UnityEngine::Vector4 browColor_ = {}, ::UnityEngine::Vector4 lipColor_ = {}, ::UnityEngine::Vector4 teethColor_ = {}, ::UnityEngine::Vector4 gumColor_ = {}, float browLashIntensity_ = {}, float lipSmoothness_ = {}) noexcept : irisColor{irisColor_}, scleraColor{scleraColor_}, lashColor{lashColor_}, browColor{browColor_}, lipColor{lipColor_}, teethColor{teethColor_}, gumColor{gumColor_}, browLashIntensity{browLashIntensity_}, lipSmoothness{lipSmoothness_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector4 irisColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_irisColor();
    // Get instance field reference: public UnityEngine.Vector4 scleraColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_scleraColor();
    // Get instance field reference: public UnityEngine.Vector4 lashColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_lashColor();
    // Get instance field reference: public UnityEngine.Vector4 browColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_browColor();
    // Get instance field reference: public UnityEngine.Vector4 lipColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_lipColor();
    // Get instance field reference: public UnityEngine.Vector4 teethColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_teethColor();
    // Get instance field reference: public UnityEngine.Vector4 gumColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_gumColor();
    // Get instance field reference: public System.Single browLashIntensity
    [[deprecated("Use field access instead!")]] float& dyn_browLashIntensity();
    // Get instance field reference: public System.Single lipSmoothness
    [[deprecated("Use field access instead!")]] float& dyn_lipSmoothness();
    // static private System.Boolean VectorEquals(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
    // Offset: 0x954850
    static bool VectorEquals(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x954880
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x954B10
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // ovrAvatarExpressiveParameters
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarExpressiveParameters), 116 + sizeof(float)> __GlobalNamespace_ovrAvatarExpressiveParametersSizeCheck;
  static_assert(sizeof(ovrAvatarExpressiveParameters) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarExpressiveParameters::VectorEquals
// Il2CppName: VectorEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&GlobalNamespace::ovrAvatarExpressiveParameters::VectorEquals)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarExpressiveParameters), "VectorEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarExpressiveParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ovrAvatarExpressiveParameters::*)(::Il2CppObject*)>(&GlobalNamespace::ovrAvatarExpressiveParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarExpressiveParameters), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarExpressiveParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ovrAvatarExpressiveParameters::*)()>(&GlobalNamespace::ovrAvatarExpressiveParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarExpressiveParameters), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
