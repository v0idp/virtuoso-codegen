// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: GlyphMetrics
  struct GlyphMetrics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::GlyphMetrics, "UnityEngine.TextCore", "GlyphMetrics");
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.GlyphMetrics
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 5BC4DC
  struct GlyphMetrics/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::TextCore::GlyphMetrics>*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x5BCD38
    // private System.Single m_Width
    // Size: 0x4
    // Offset: 0x0
    float m_Width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x5BCD84
    // private System.Single m_Height
    // Size: 0x4
    // Offset: 0x4
    float m_Height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x5BCDD0
    // private System.Single m_HorizontalBearingX
    // Size: 0x4
    // Offset: 0x8
    float m_HorizontalBearingX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x5BCE1C
    // private System.Single m_HorizontalBearingY
    // Size: 0x4
    // Offset: 0xC
    float m_HorizontalBearingY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x5BCE68
    // private System.Single m_HorizontalAdvance
    // Size: 0x4
    // Offset: 0x10
    float m_HorizontalAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GlyphMetrics
    constexpr GlyphMetrics(float m_Width_ = {}, float m_Height_ = {}, float m_HorizontalBearingX_ = {}, float m_HorizontalBearingY_ = {}, float m_HorizontalAdvance_ = {}) noexcept : m_Width{m_Width_}, m_Height{m_Height_}, m_HorizontalBearingX{m_HorizontalBearingX_}, m_HorizontalBearingY{m_HorizontalBearingY_}, m_HorizontalAdvance{m_HorizontalAdvance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::TextCore::GlyphMetrics>
    operator ::System::IEquatable_1<::UnityEngine::TextCore::GlyphMetrics>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::TextCore::GlyphMetrics>*>(this);
    }
    // Get instance field reference: private System.Single m_Width
    float& dyn_m_Width();
    // Get instance field reference: private System.Single m_Height
    float& dyn_m_Height();
    // Get instance field reference: private System.Single m_HorizontalBearingX
    float& dyn_m_HorizontalBearingX();
    // Get instance field reference: private System.Single m_HorizontalBearingY
    float& dyn_m_HorizontalBearingY();
    // Get instance field reference: private System.Single m_HorizontalAdvance
    float& dyn_m_HorizontalAdvance();
    // public System.Single get_width()
    // Offset: 0x12E94D0
    float get_width();
    // public System.Single get_height()
    // Offset: 0x12E94D8
    float get_height();
    // public System.Single get_horizontalBearingX()
    // Offset: 0x12E94E0
    float get_horizontalBearingX();
    // public System.Single get_horizontalBearingY()
    // Offset: 0x12E94E8
    float get_horizontalBearingY();
    // public System.Single get_horizontalAdvance()
    // Offset: 0x12E94F0
    float get_horizontalAdvance();
    // public System.Void .ctor(System.Single width, System.Single height, System.Single bearingX, System.Single bearingY, System.Single advance)
    // Offset: 0x12E94F8
    // ABORTED: conflicts with another method.  GlyphMetrics(float width, float height, float bearingX, float bearingY, float advance);
    // public System.Boolean Equals(UnityEngine.TextCore.GlyphMetrics other)
    // Offset: 0x12E960C
    bool Equals(::UnityEngine::TextCore::GlyphMetrics other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12E9508
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x12E9580
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.TextCore.GlyphMetrics
  #pragma pack(pop)
  static check_size<sizeof(GlyphMetrics), 16 + sizeof(float)> __UnityEngine_TextCore_GlyphMetricsSizeCheck;
  static_assert(sizeof(GlyphMetrics) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::GlyphMetrics::*)()>(&UnityEngine::TextCore::GlyphMetrics::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphMetrics), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::GlyphMetrics::*)()>(&UnityEngine::TextCore::GlyphMetrics::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphMetrics), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::get_horizontalBearingX
// Il2CppName: get_horizontalBearingX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::GlyphMetrics::*)()>(&UnityEngine::TextCore::GlyphMetrics::get_horizontalBearingX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphMetrics), "get_horizontalBearingX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::get_horizontalBearingY
// Il2CppName: get_horizontalBearingY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::GlyphMetrics::*)()>(&UnityEngine::TextCore::GlyphMetrics::get_horizontalBearingY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphMetrics), "get_horizontalBearingY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::get_horizontalAdvance
// Il2CppName: get_horizontalAdvance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::GlyphMetrics::*)()>(&UnityEngine::TextCore::GlyphMetrics::get_horizontalAdvance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphMetrics), "get_horizontalAdvance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::GlyphMetrics
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::GlyphMetrics::*)(::UnityEngine::TextCore::GlyphMetrics)>(&UnityEngine::TextCore::GlyphMetrics::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore", "GlyphMetrics")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphMetrics), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::GlyphMetrics::*)()>(&UnityEngine::TextCore::GlyphMetrics::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphMetrics), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphMetrics::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::GlyphMetrics::*)(::Il2CppObject*)>(&UnityEngine::TextCore::GlyphMetrics::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphMetrics), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};