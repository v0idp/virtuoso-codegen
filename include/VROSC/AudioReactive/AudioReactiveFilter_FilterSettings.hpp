// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.AudioReactiveFilter
#include "VROSC/AudioReactive/AudioReactiveFilter.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings*, "VROSC.AudioReactive", "AudioReactiveFilter/FilterSettings");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioReactiveFilter::FilterSettings : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter
    struct BeatFilter;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter
    // [TokenAttribute] Offset: FFFFFFFF
    struct BeatFilter/*, public ::System::Enum*/ {
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
      // Creating value type constructor for type: BeatFilter
      constexpr BeatFilter(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat1
      static constexpr const int Beat1 = 1;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat1
      static ::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter _get_Beat1();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat1
      static void _set_Beat1(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat2
      static constexpr const int Beat2 = 2;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat2
      static ::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter _get_Beat2();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat2
      static void _set_Beat2(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat3
      static constexpr const int Beat3 = 4;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat3
      static ::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter _get_Beat3();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat3
      static void _set_Beat3(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat4
      static constexpr const int Beat4 = 8;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat4
      static ::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter _get_Beat4();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter Beat4
      static void _set_Beat4(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter
    #pragma pack(pop)
    static check_size<sizeof(AudioReactiveFilter::FilterSettings::BeatFilter), 16 + sizeof(int)> __VROSC_AudioReactive_AudioReactiveFilter_FilterSettings_BeatFilterSizeCheck;
    static_assert(sizeof(AudioReactiveFilter::FilterSettings::BeatFilter) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [BitMaskAttribute] Offset: 0x676468
    // private VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter _reactOn
    // Size: 0x14
    // Offset: 0x10
    ::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter reactOn;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter) == 0x14);
    // [RangeAttribute] Offset: 0x6764D8
    // private System.Int32 _chance
    // Size: 0x4
    // Offset: 0x14
    int chance;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _cooldown
    // Size: 0x4
    // Offset: 0x18
    int cooldown;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _onCoolDown
    // Size: 0x4
    // Offset: 0x1C
    int onCoolDown;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter _reactOn
    ::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter& dyn__reactOn();
    // Get instance field reference: private System.Int32 _chance
    int& dyn__chance();
    // Get instance field reference: private System.Int32 _cooldown
    int& dyn__cooldown();
    // Get instance field reference: private System.Int32 _onCoolDown
    int& dyn__onCoolDown();
    // private System.Void .ctor(VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings/VROSC.AudioReactive.BeatFilter reactOn, System.Int32 chance, System.Int32 cooldown)
    // Offset: 0x135AF3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioReactiveFilter::FilterSettings* New_ctor(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter reactOn, int chance, int cooldown) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioReactiveFilter::FilterSettings*, creationType>(reactOn, chance, cooldown)));
    }
    // public System.Boolean Filter(System.Int32 beat)
    // Offset: 0x135AED0
    bool Filter(int beat);
    // public VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings Instantiate()
    // Offset: 0x135AF88
    ::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings* Instantiate();
  }; // VROSC.AudioReactive.AudioReactiveFilter/VROSC.AudioReactive.FilterSettings
  #pragma pack(pop)
  static check_size<sizeof(AudioReactiveFilter::FilterSettings), 28 + sizeof(int)> __VROSC_AudioReactive_AudioReactiveFilter_FilterSettingsSizeCheck;
  static_assert(sizeof(AudioReactiveFilter::FilterSettings) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::BeatFilter, "VROSC.AudioReactive", "AudioReactiveFilter/FilterSettings/BeatFilter");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::Filter
// Il2CppName: Filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::*)(int)>(&VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::Filter)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveFilter::FilterSettings*), "Filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::AudioReactiveFilter::FilterSettings* (VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::*)()>(&VROSC::AudioReactive::AudioReactiveFilter::FilterSettings::Instantiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveFilter::FilterSettings*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
