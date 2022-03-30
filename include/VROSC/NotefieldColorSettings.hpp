// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Skipping declaration: SpreadType because it is already included!
  // Skipping declaration: Coloring because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NotefieldColorSettings
  class NotefieldColorSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NotefieldColorSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotefieldColorSettings*, "VROSC", "NotefieldColorSettings");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x7F
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NotefieldColorSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 669B40
  class NotefieldColorSettings : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::VROSC::NotefieldColorSettings::Coloring
    struct Coloring;
    // Nested type: ::VROSC::NotefieldColorSettings::SpreadType
    struct SpreadType;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.NotefieldColorSettings/VROSC.Coloring
    // [TokenAttribute] Offset: FFFFFFFF
    struct Coloring/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Coloring
      constexpr Coloring(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.NotefieldColorSettings/VROSC.Coloring AsPlayed
      static constexpr const int AsPlayed = 0;
      // Get static field: static public VROSC.NotefieldColorSettings/VROSC.Coloring AsPlayed
      static ::VROSC::NotefieldColorSettings::Coloring _get_AsPlayed();
      // Set static field: static public VROSC.NotefieldColorSettings/VROSC.Coloring AsPlayed
      static void _set_AsPlayed(::VROSC::NotefieldColorSettings::Coloring value);
      // static field const value: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysX
      static constexpr const int AlwaysX = 1;
      // Get static field: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysX
      static ::VROSC::NotefieldColorSettings::Coloring _get_AlwaysX();
      // Set static field: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysX
      static void _set_AlwaysX(::VROSC::NotefieldColorSettings::Coloring value);
      // static field const value: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysY
      static constexpr const int AlwaysY = 2;
      // Get static field: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysY
      static ::VROSC::NotefieldColorSettings::Coloring _get_AlwaysY();
      // Set static field: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysY
      static void _set_AlwaysY(::VROSC::NotefieldColorSettings::Coloring value);
      // static field const value: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysZ
      static constexpr const int AlwaysZ = 3;
      // Get static field: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysZ
      static ::VROSC::NotefieldColorSettings::Coloring _get_AlwaysZ();
      // Set static field: static public VROSC.NotefieldColorSettings/VROSC.Coloring AlwaysZ
      static void _set_AlwaysZ(::VROSC::NotefieldColorSettings::Coloring value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.NotefieldColorSettings/VROSC.Coloring
    #pragma pack(pop)
    static check_size<sizeof(NotefieldColorSettings::Coloring), 16 + sizeof(int)> __VROSC_NotefieldColorSettings_ColoringSizeCheck;
    static_assert(sizeof(NotefieldColorSettings::Coloring) == 0x14);
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.NotefieldColorSettings/VROSC.SpreadType
    // [TokenAttribute] Offset: FFFFFFFF
    struct SpreadType/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SpreadType
      constexpr SpreadType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.NotefieldColorSettings/VROSC.SpreadType AllAxises
      static constexpr const int AllAxises = 0;
      // Get static field: static public VROSC.NotefieldColorSettings/VROSC.SpreadType AllAxises
      static ::VROSC::NotefieldColorSettings::SpreadType _get_AllAxises();
      // Set static field: static public VROSC.NotefieldColorSettings/VROSC.SpreadType AllAxises
      static void _set_AllAxises(::VROSC::NotefieldColorSettings::SpreadType value);
      // static field const value: static public VROSC.NotefieldColorSettings/VROSC.SpreadType Same
      static constexpr const int Same = 1;
      // Get static field: static public VROSC.NotefieldColorSettings/VROSC.SpreadType Same
      static ::VROSC::NotefieldColorSettings::SpreadType _get_Same();
      // Set static field: static public VROSC.NotefieldColorSettings/VROSC.SpreadType Same
      static void _set_Same(::VROSC::NotefieldColorSettings::SpreadType value);
      // static field const value: static public VROSC.NotefieldColorSettings/VROSC.SpreadType Inverted
      static constexpr const int Inverted = 2;
      // Get static field: static public VROSC.NotefieldColorSettings/VROSC.SpreadType Inverted
      static ::VROSC::NotefieldColorSettings::SpreadType _get_Inverted();
      // Set static field: static public VROSC.NotefieldColorSettings/VROSC.SpreadType Inverted
      static void _set_Inverted(::VROSC::NotefieldColorSettings::SpreadType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.NotefieldColorSettings/VROSC.SpreadType
    #pragma pack(pop)
    static check_size<sizeof(NotefieldColorSettings::SpreadType), 16 + sizeof(int)> __VROSC_NotefieldColorSettings_SpreadTypeSizeCheck;
    static_assert(sizeof(NotefieldColorSettings::SpreadType) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [ColorUsageAttribute] Offset: 0x66FF74
    // [HeaderAttribute] Offset: 0x66FF74
    // private UnityEngine.Color _restingEvenColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color restingEvenColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x66FFD4
    // private UnityEngine.Color _restingOddColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color restingOddColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x670010
    // private UnityEngine.Color _octaveColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color octaveColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [HeaderAttribute] Offset: 0x67004C
    // private System.Int32 _transmitLength
    // Size: 0x4
    // Offset: 0x48
    int transmitLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: transmitLength and: transmitFadeCurve
    char __padding3[0x4] = {};
    // private UnityEngine.AnimationCurve _transmitFadeCurve
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* transmitFadeCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private VROSC.NotefieldColorSettings/VROSC.Coloring _coloring
    // Size: 0x14
    // Offset: 0x58
    ::VROSC::NotefieldColorSettings::Coloring coloring;
    // Field size check
    static_assert(sizeof(::VROSC::NotefieldColorSettings::Coloring) == 0x14);
    // private System.Single _fallSpeed
    // Size: 0x4
    // Offset: 0x5C
    float fallSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private VROSC.NotefieldColorSettings/VROSC.SpreadType _spread
    // Size: 0x14
    // Offset: 0x60
    ::VROSC::NotefieldColorSettings::SpreadType spread;
    // Field size check
    static_assert(sizeof(::VROSC::NotefieldColorSettings::SpreadType) == 0x14);
    // [RangeAttribute] Offset: 0x6700D8
    // [HeaderAttribute] Offset: 0x6700D8
    // private System.Single _hoverScale
    // Size: 0x4
    // Offset: 0x64
    float hoverScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _hoverTransmitCurve
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::AnimationCurve* hoverTransmitCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _hoverFallSpeed
    // Size: 0x4
    // Offset: 0x70
    float hoverFallSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x67015C
    // [RangeAttribute] Offset: 0x67015C
    // private System.Single _noteScale
    // Size: 0x4
    // Offset: 0x74
    float noteScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x6701C0
    // private System.Single _playPower
    // Size: 0x4
    // Offset: 0x78
    float playPower;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _uniformScale
    // Size: 0x1
    // Offset: 0x7C
    bool uniformScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _smallestUniformScale
    // Size: 0x1
    // Offset: 0x7D
    bool smallestUniformScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _additiveScale
    // Size: 0x1
    // Offset: 0x7E
    bool additiveScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _restingEvenColor
    ::UnityEngine::Color& dyn__restingEvenColor();
    // Get instance field reference: private UnityEngine.Color _restingOddColor
    ::UnityEngine::Color& dyn__restingOddColor();
    // Get instance field reference: private UnityEngine.Color _octaveColor
    ::UnityEngine::Color& dyn__octaveColor();
    // Get instance field reference: private System.Int32 _transmitLength
    int& dyn__transmitLength();
    // Get instance field reference: private UnityEngine.AnimationCurve _transmitFadeCurve
    ::UnityEngine::AnimationCurve*& dyn__transmitFadeCurve();
    // Get instance field reference: private VROSC.NotefieldColorSettings/VROSC.Coloring _coloring
    ::VROSC::NotefieldColorSettings::Coloring& dyn__coloring();
    // Get instance field reference: private System.Single _fallSpeed
    float& dyn__fallSpeed();
    // Get instance field reference: private VROSC.NotefieldColorSettings/VROSC.SpreadType _spread
    ::VROSC::NotefieldColorSettings::SpreadType& dyn__spread();
    // Get instance field reference: private System.Single _hoverScale
    float& dyn__hoverScale();
    // Get instance field reference: private UnityEngine.AnimationCurve _hoverTransmitCurve
    ::UnityEngine::AnimationCurve*& dyn__hoverTransmitCurve();
    // Get instance field reference: private System.Single _hoverFallSpeed
    float& dyn__hoverFallSpeed();
    // Get instance field reference: private System.Single _noteScale
    float& dyn__noteScale();
    // Get instance field reference: private System.Single _playPower
    float& dyn__playPower();
    // Get instance field reference: private System.Boolean _uniformScale
    bool& dyn__uniformScale();
    // Get instance field reference: private System.Boolean _smallestUniformScale
    bool& dyn__smallestUniformScale();
    // Get instance field reference: private System.Boolean _additiveScale
    bool& dyn__additiveScale();
    // public UnityEngine.Color get_RestingEvenColor()
    // Offset: 0xA164D8
    ::UnityEngine::Color get_RestingEvenColor();
    // public UnityEngine.Color get_RestingOddColor()
    // Offset: 0xA164E4
    ::UnityEngine::Color get_RestingOddColor();
    // public UnityEngine.Color get_OctaveColor()
    // Offset: 0xA164F0
    ::UnityEngine::Color get_OctaveColor();
    // public System.Int32 get_TransmitLength()
    // Offset: 0xA164FC
    int get_TransmitLength();
    // public UnityEngine.AnimationCurve get_TransmitFadeCurve()
    // Offset: 0xA16504
    ::UnityEngine::AnimationCurve* get_TransmitFadeCurve();
    // public VROSC.NotefieldColorSettings/VROSC.Coloring get_NoteColoring()
    // Offset: 0xA1650C
    ::VROSC::NotefieldColorSettings::Coloring get_NoteColoring();
    // public System.Single get_FallSpeed()
    // Offset: 0xA16514
    float get_FallSpeed();
    // public VROSC.NotefieldColorSettings/VROSC.SpreadType get_Spread()
    // Offset: 0xA1651C
    ::VROSC::NotefieldColorSettings::SpreadType get_Spread();
    // public UnityEngine.AnimationCurve get_HoverTransmitCurve()
    // Offset: 0xA16524
    ::UnityEngine::AnimationCurve* get_HoverTransmitCurve();
    // public System.Single get_HoverFallSpeed()
    // Offset: 0xA1652C
    float get_HoverFallSpeed();
    // public System.Single get_HoverScale()
    // Offset: 0xA16534
    float get_HoverScale();
    // UnityEngine.Vector3 GetScale(UnityEngine.Vector3 baseScale, System.Single hoveringAmount, UnityEngine.Vector3 playPower)
    // Offset: 0xA12498
    ::UnityEngine::Vector3 GetScale(::UnityEngine::Vector3 baseScale, float hoveringAmount, ::UnityEngine::Vector3 playPower);
    // UnityEngine.Vector3 GetBaseScale(UnityEngine.Vector3 baseScale)
    // Offset: 0xA12174
    ::UnityEngine::Vector3 GetBaseScale(::UnityEngine::Vector3 baseScale);
    // public System.Void .ctor()
    // Offset: 0xA1653C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotefieldColorSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NotefieldColorSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotefieldColorSettings*, creationType>()));
    }
  }; // VROSC.NotefieldColorSettings
  #pragma pack(pop)
  static check_size<sizeof(NotefieldColorSettings), 126 + sizeof(bool)> __VROSC_NotefieldColorSettingsSizeCheck;
  static_assert(sizeof(NotefieldColorSettings) == 0x7F);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotefieldColorSettings::SpreadType, "VROSC", "NotefieldColorSettings/SpreadType");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotefieldColorSettings::Coloring, "VROSC", "NotefieldColorSettings/Coloring");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_RestingEvenColor
// Il2CppName: get_RestingEvenColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_RestingEvenColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_RestingEvenColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_RestingOddColor
// Il2CppName: get_RestingOddColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_RestingOddColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_RestingOddColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_OctaveColor
// Il2CppName: get_OctaveColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_OctaveColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_OctaveColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_TransmitLength
// Il2CppName: get_TransmitLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_TransmitLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_TransmitLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_TransmitFadeCurve
// Il2CppName: get_TransmitFadeCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_TransmitFadeCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_TransmitFadeCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_NoteColoring
// Il2CppName: get_NoteColoring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NotefieldColorSettings::Coloring (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_NoteColoring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_NoteColoring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_FallSpeed
// Il2CppName: get_FallSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_FallSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_FallSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_Spread
// Il2CppName: get_Spread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NotefieldColorSettings::SpreadType (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_Spread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_Spread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_HoverTransmitCurve
// Il2CppName: get_HoverTransmitCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_HoverTransmitCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_HoverTransmitCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_HoverFallSpeed
// Il2CppName: get_HoverFallSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_HoverFallSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_HoverFallSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::get_HoverScale
// Il2CppName: get_HoverScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::NotefieldColorSettings::*)()>(&VROSC::NotefieldColorSettings::get_HoverScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "get_HoverScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::GetScale
// Il2CppName: GetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NotefieldColorSettings::*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3)>(&VROSC::NotefieldColorSettings::GetScale)> {
  static const MethodInfo* get() {
    static auto* baseScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hoveringAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* playPower = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "GetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseScale, hoveringAmount, playPower});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::GetBaseScale
// Il2CppName: GetBaseScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NotefieldColorSettings::*)(::UnityEngine::Vector3)>(&VROSC::NotefieldColorSettings::GetBaseScale)> {
  static const MethodInfo* get() {
    static auto* baseScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NotefieldColorSettings*), "GetBaseScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseScale});
  }
};
// Writing MetadataGetter for method: VROSC::NotefieldColorSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!