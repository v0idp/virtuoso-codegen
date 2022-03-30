// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.ShaderEffectData
#include "VROSC/AudioReactive/ShaderEffectData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
  // Forward declaring type: MinMaxVector4
  class MinMaxVector4;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::ShaderEffectData::Effect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShaderEffectData::Effect*, "VROSC.AudioReactive", "ShaderEffectData/Effect");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderEffectData::Effect : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType
    struct EffectType;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType
    // [TokenAttribute] Offset: FFFFFFFF
    struct EffectType/*, public ::System::Enum*/ {
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
      // Creating value type constructor for type: EffectType
      constexpr EffectType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Color
      static constexpr const int Color = 0;
      // Get static field: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Color
      static ::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType _get_Color();
      // Set static field: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Color
      static void _set_Color(::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType value);
      // static field const value: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Float
      static constexpr const int Float = 1;
      // Get static field: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Float
      static ::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType _get_Float();
      // Set static field: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Float
      static void _set_Float(::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType value);
      // static field const value: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Vector
      static constexpr const int Vector = 2;
      // Get static field: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Vector
      static ::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType _get_Vector();
      // Set static field: static public VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType Vector
      static void _set_Vector(::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType
    #pragma pack(pop)
    static check_size<sizeof(ShaderEffectData::Effect::EffectType), 16 + sizeof(int)> __VROSC_AudioReactive_ShaderEffectData_Effect_EffectTypeSizeCheck;
    static_assert(sizeof(ShaderEffectData::Effect::EffectType) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType _type
    // Size: 0x14
    // Offset: 0x10
    ::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType type;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType) == 0x14);
    // private System.String _propertyName
    // Size: 0x8
    // Offset: 0x18
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private VROSC.MinMaxFloat _floatValue
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::MinMaxFloat* floatValue;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // private UnityEngine.Gradient _colorValue
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Gradient* colorValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // private VROSC.MinMaxVector4 _vectorValue
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::MinMaxVector4* vectorValue;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxVector4*) == 0x8);
    // private UnityEngine.AnimationCurve _curve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Get instance field reference: private VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect/VROSC.AudioReactive.EffectType _type
    ::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType& dyn__type();
    // Get instance field reference: private System.String _propertyName
    ::StringW& dyn__propertyName();
    // Get instance field reference: private VROSC.MinMaxFloat _floatValue
    ::VROSC::MinMaxFloat*& dyn__floatValue();
    // Get instance field reference: private UnityEngine.Gradient _colorValue
    ::UnityEngine::Gradient*& dyn__colorValue();
    // Get instance field reference: private VROSC.MinMaxVector4 _vectorValue
    ::VROSC::MinMaxVector4*& dyn__vectorValue();
    // Get instance field reference: private UnityEngine.AnimationCurve _curve
    ::UnityEngine::AnimationCurve*& dyn__curve();
    // public System.Void SetShaderEffects(UnityEngine.MaterialPropertyBlock block, UnityEngine.Renderer renderer, System.Single value)
    // Offset: 0x134DB14
    void SetShaderEffects(::UnityEngine::MaterialPropertyBlock* block, ::UnityEngine::Renderer* renderer, float value);
    // private System.Void SetColorValue(UnityEngine.MaterialPropertyBlock block, UnityEngine.Renderer renderer, System.Single value)
    // Offset: 0x134DB3C
    void SetColorValue(::UnityEngine::MaterialPropertyBlock* block, ::UnityEngine::Renderer* renderer, float value);
    // private System.Void SetFloatValue(UnityEngine.MaterialPropertyBlock block, UnityEngine.Renderer renderer, System.Single value)
    // Offset: 0x134DBB8
    void SetFloatValue(::UnityEngine::MaterialPropertyBlock* block, ::UnityEngine::Renderer* renderer, float value);
    // private System.Void SetVectorValue(UnityEngine.MaterialPropertyBlock block, UnityEngine.Renderer renderer, System.Single value)
    // Offset: 0x134DC34
    void SetVectorValue(::UnityEngine::MaterialPropertyBlock* block, ::UnityEngine::Renderer* renderer, float value);
    // public System.Void .ctor()
    // Offset: 0x134DCB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderEffectData::Effect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::ShaderEffectData::Effect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderEffectData::Effect*, creationType>()));
    }
  }; // VROSC.AudioReactive.ShaderEffectData/VROSC.AudioReactive.Effect
  #pragma pack(pop)
  static check_size<sizeof(ShaderEffectData::Effect), 56 + sizeof(::UnityEngine::AnimationCurve*)> __VROSC_AudioReactive_ShaderEffectData_EffectSizeCheck;
  static_assert(sizeof(ShaderEffectData::Effect) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShaderEffectData::Effect::EffectType, "VROSC.AudioReactive", "ShaderEffectData/Effect/EffectType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::ShaderEffectData::Effect::SetShaderEffects
// Il2CppName: SetShaderEffects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ShaderEffectData::Effect::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Renderer*, float)>(&VROSC::AudioReactive::ShaderEffectData::Effect::SetShaderEffects)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShaderEffectData::Effect*), "SetShaderEffects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, renderer, value});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShaderEffectData::Effect::SetColorValue
// Il2CppName: SetColorValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ShaderEffectData::Effect::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Renderer*, float)>(&VROSC::AudioReactive::ShaderEffectData::Effect::SetColorValue)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShaderEffectData::Effect*), "SetColorValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, renderer, value});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShaderEffectData::Effect::SetFloatValue
// Il2CppName: SetFloatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ShaderEffectData::Effect::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Renderer*, float)>(&VROSC::AudioReactive::ShaderEffectData::Effect::SetFloatValue)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShaderEffectData::Effect*), "SetFloatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, renderer, value});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShaderEffectData::Effect::SetVectorValue
// Il2CppName: SetVectorValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ShaderEffectData::Effect::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Renderer*, float)>(&VROSC::AudioReactive::ShaderEffectData::Effect::SetVectorValue)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ShaderEffectData::Effect*), "SetVectorValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, renderer, value});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ShaderEffectData::Effect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
