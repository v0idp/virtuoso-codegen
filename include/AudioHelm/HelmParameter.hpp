// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioHelm.Param
#include "AudioHelm/Param.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmController
  class HelmController;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmParameter
  class HelmParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::HelmParameter);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmParameter*, "AudioHelm", "HelmParameter");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.HelmParameter
  // [TokenAttribute] Offset: FFFFFFFF
  class HelmParameter : public ::Il2CppObject {
    public:
    // Nested type: ::AudioHelm::HelmParameter::ScaleType
    struct ScaleType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AudioHelm.HelmParameter/AudioHelm.ScaleType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ScaleType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ScaleType
      constexpr ScaleType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public AudioHelm.HelmParameter/AudioHelm.ScaleType kByValue
      static constexpr const int kByValue = 0;
      // Get static field: static public AudioHelm.HelmParameter/AudioHelm.ScaleType kByValue
      static ::AudioHelm::HelmParameter::ScaleType _get_kByValue();
      // Set static field: static public AudioHelm.HelmParameter/AudioHelm.ScaleType kByValue
      static void _set_kByValue(::AudioHelm::HelmParameter::ScaleType value);
      // static field const value: static public AudioHelm.HelmParameter/AudioHelm.ScaleType kByPercent
      static constexpr const int kByPercent = 1;
      // Get static field: static public AudioHelm.HelmParameter/AudioHelm.ScaleType kByPercent
      static ::AudioHelm::HelmParameter::ScaleType _get_kByPercent();
      // Set static field: static public AudioHelm.HelmParameter/AudioHelm.ScaleType kByPercent
      static void _set_kByPercent(::AudioHelm::HelmParameter::ScaleType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // AudioHelm.HelmParameter/AudioHelm.ScaleType
    #pragma pack(pop)
    static check_size<sizeof(HelmParameter::ScaleType), 0 + sizeof(int)> __AudioHelm_HelmParameter_ScaleTypeSizeCheck;
    static_assert(sizeof(HelmParameter::ScaleType) == 0x4);
    public:
    // private AudioHelm.Param parameter_
    // Size: 0x4
    // Offset: 0x10
    ::AudioHelm::Param parameter;
    // Field size check
    static_assert(sizeof(::AudioHelm::Param) == 0x4);
    // public AudioHelm.HelmParameter/AudioHelm.ScaleType scaleType
    // Size: 0x4
    // Offset: 0x14
    ::AudioHelm::HelmParameter::ScaleType scaleType;
    // Field size check
    static_assert(sizeof(::AudioHelm::HelmParameter::ScaleType) == 0x4);
    // public AudioHelm.HelmController parent
    // Size: 0x8
    // Offset: 0x18
    ::AudioHelm::HelmController* parent;
    // Field size check
    static_assert(sizeof(::AudioHelm::HelmController*) == 0x8);
    // private System.Single lastValue
    // Size: 0x4
    // Offset: 0x20
    float lastValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single minimumRange
    // Size: 0x4
    // Offset: 0x24
    float minimumRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single maximumRange
    // Size: 0x4
    // Offset: 0x28
    float maximumRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single paramValue_
    // Size: 0x4
    // Offset: 0x2C
    float paramValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private AudioHelm.Param parameter_
    [[deprecated("Use field access instead!")]] ::AudioHelm::Param& dyn_parameter_();
    // Get instance field reference: public AudioHelm.HelmParameter/AudioHelm.ScaleType scaleType
    [[deprecated("Use field access instead!")]] ::AudioHelm::HelmParameter::ScaleType& dyn_scaleType();
    // Get instance field reference: public AudioHelm.HelmController parent
    [[deprecated("Use field access instead!")]] ::AudioHelm::HelmController*& dyn_parent();
    // Get instance field reference: private System.Single lastValue
    [[deprecated("Use field access instead!")]] float& dyn_lastValue();
    // Get instance field reference: private System.Single minimumRange
    [[deprecated("Use field access instead!")]] float& dyn_minimumRange();
    // Get instance field reference: private System.Single maximumRange
    [[deprecated("Use field access instead!")]] float& dyn_maximumRange();
    // Get instance field reference: private System.Single paramValue_
    [[deprecated("Use field access instead!")]] float& dyn_paramValue_();
    // public AudioHelm.Param get_parameter()
    // Offset: 0x193D130
    ::AudioHelm::Param get_parameter();
    // public System.Void set_parameter(AudioHelm.Param value)
    // Offset: 0x193D138
    void set_parameter(::AudioHelm::Param value);
    // public System.Single get_paramValue()
    // Offset: 0x193D1E4
    float get_paramValue();
    // public System.Void set_paramValue(System.Single value)
    // Offset: 0x193C560
    void set_paramValue(float value);
    // public System.Void .ctor()
    // Offset: 0x193D2DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelmParameter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::HelmParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelmParameter*, creationType>()));
    }
    // public System.Void .ctor(AudioHelm.HelmController par)
    // Offset: 0x193C734
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelmParameter* New_ctor(::AudioHelm::HelmController* par) {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::HelmParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelmParameter*, creationType>(par)));
    }
    // public System.Void .ctor(AudioHelm.HelmController par, AudioHelm.Param param)
    // Offset: 0x193C838
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelmParameter* New_ctor(::AudioHelm::HelmController* par, ::AudioHelm::Param param) {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::HelmParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelmParameter*, creationType>(par, param)));
    }
    // public System.Single GetMinimumRange()
    // Offset: 0x193D31C
    float GetMinimumRange();
    // public System.Single GetMaximumRange()
    // Offset: 0x193D324
    float GetMaximumRange();
    // private System.Void UpdateMinMax()
    // Offset: 0x193D150
    void UpdateMinMax();
    // private System.Void UpdateNative()
    // Offset: 0x193D1EC
    void UpdateNative();
  }; // AudioHelm.HelmParameter
  #pragma pack(pop)
  static check_size<sizeof(HelmParameter), 44 + sizeof(float)> __AudioHelm_HelmParameterSizeCheck;
  static_assert(sizeof(HelmParameter) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmParameter::ScaleType, "AudioHelm", "HelmParameter/ScaleType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::HelmParameter::get_parameter
// Il2CppName: get_parameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::Param (AudioHelm::HelmParameter::*)()>(&AudioHelm::HelmParameter::get_parameter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmParameter*), "get_parameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmParameter::set_parameter
// Il2CppName: set_parameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmParameter::*)(::AudioHelm::Param)>(&AudioHelm::HelmParameter::set_parameter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AudioHelm", "Param")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmParameter*), "set_parameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmParameter::get_paramValue
// Il2CppName: get_paramValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AudioHelm::HelmParameter::*)()>(&AudioHelm::HelmParameter::get_paramValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmParameter*), "get_paramValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmParameter::set_paramValue
// Il2CppName: set_paramValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmParameter::*)(float)>(&AudioHelm::HelmParameter::set_paramValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmParameter*), "set_paramValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::HelmParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::HelmParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::HelmParameter::GetMinimumRange
// Il2CppName: GetMinimumRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AudioHelm::HelmParameter::*)()>(&AudioHelm::HelmParameter::GetMinimumRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmParameter*), "GetMinimumRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmParameter::GetMaximumRange
// Il2CppName: GetMaximumRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AudioHelm::HelmParameter::*)()>(&AudioHelm::HelmParameter::GetMaximumRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmParameter*), "GetMaximumRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmParameter::UpdateMinMax
// Il2CppName: UpdateMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmParameter::*)()>(&AudioHelm::HelmParameter::UpdateMinMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmParameter*), "UpdateMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmParameter::UpdateNative
// Il2CppName: UpdateNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmParameter::*)()>(&AudioHelm::HelmParameter::UpdateNative)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmParameter*), "UpdateNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
