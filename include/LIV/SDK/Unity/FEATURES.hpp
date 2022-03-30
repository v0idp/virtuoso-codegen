// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: FEATURES
  struct FEATURES;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::FEATURES, "LIV.SDK.Unity", "FEATURES");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.FEATURES
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct FEATURES/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.UInt64 value__
    // Size: 0x8
    // Offset: 0x10
    uint64_t value;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: FEATURES
    constexpr FEATURES(uint64_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return value;
    }
    // static field const value: static public LIV.SDK.Unity.FEATURES NONE
    static constexpr const uint64_t NONE = 0u;
    // Get static field: static public LIV.SDK.Unity.FEATURES NONE
    static ::LIV::SDK::Unity::FEATURES _get_NONE();
    // Set static field: static public LIV.SDK.Unity.FEATURES NONE
    static void _set_NONE(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES BACKGROUND_RENDER
    static constexpr const uint64_t BACKGROUND_RENDER = 1u;
    // Get static field: static public LIV.SDK.Unity.FEATURES BACKGROUND_RENDER
    static ::LIV::SDK::Unity::FEATURES _get_BACKGROUND_RENDER();
    // Set static field: static public LIV.SDK.Unity.FEATURES BACKGROUND_RENDER
    static void _set_BACKGROUND_RENDER(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES FOREGROUND_RENDER
    static constexpr const uint64_t FOREGROUND_RENDER = 2u;
    // Get static field: static public LIV.SDK.Unity.FEATURES FOREGROUND_RENDER
    static ::LIV::SDK::Unity::FEATURES _get_FOREGROUND_RENDER();
    // Set static field: static public LIV.SDK.Unity.FEATURES FOREGROUND_RENDER
    static void _set_FOREGROUND_RENDER(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES COMPLEX_CLIP_PLANE
    static constexpr const uint64_t COMPLEX_CLIP_PLANE = 4u;
    // Get static field: static public LIV.SDK.Unity.FEATURES COMPLEX_CLIP_PLANE
    static ::LIV::SDK::Unity::FEATURES _get_COMPLEX_CLIP_PLANE();
    // Set static field: static public LIV.SDK.Unity.FEATURES COMPLEX_CLIP_PLANE
    static void _set_COMPLEX_CLIP_PLANE(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES BACKGROUND_DEPTH_RENDER
    static constexpr const uint64_t BACKGROUND_DEPTH_RENDER = 8u;
    // Get static field: static public LIV.SDK.Unity.FEATURES BACKGROUND_DEPTH_RENDER
    static ::LIV::SDK::Unity::FEATURES _get_BACKGROUND_DEPTH_RENDER();
    // Set static field: static public LIV.SDK.Unity.FEATURES BACKGROUND_DEPTH_RENDER
    static void _set_BACKGROUND_DEPTH_RENDER(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES OVERRIDE_POST_PROCESSING
    static constexpr const uint64_t OVERRIDE_POST_PROCESSING = 16u;
    // Get static field: static public LIV.SDK.Unity.FEATURES OVERRIDE_POST_PROCESSING
    static ::LIV::SDK::Unity::FEATURES _get_OVERRIDE_POST_PROCESSING();
    // Set static field: static public LIV.SDK.Unity.FEATURES OVERRIDE_POST_PROCESSING
    static void _set_OVERRIDE_POST_PROCESSING(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES FIX_FOREGROUND_ALPHA
    static constexpr const uint64_t FIX_FOREGROUND_ALPHA = 32u;
    // Get static field: static public LIV.SDK.Unity.FEATURES FIX_FOREGROUND_ALPHA
    static ::LIV::SDK::Unity::FEATURES _get_FIX_FOREGROUND_ALPHA();
    // Set static field: static public LIV.SDK.Unity.FEATURES FIX_FOREGROUND_ALPHA
    static void _set_FIX_FOREGROUND_ALPHA(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES GROUND_CLIP_PLANE
    static constexpr const uint64_t GROUND_CLIP_PLANE = 64u;
    // Get static field: static public LIV.SDK.Unity.FEATURES GROUND_CLIP_PLANE
    static ::LIV::SDK::Unity::FEATURES _get_GROUND_CLIP_PLANE();
    // Set static field: static public LIV.SDK.Unity.FEATURES GROUND_CLIP_PLANE
    static void _set_GROUND_CLIP_PLANE(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES RELEASE_CONTROL
    static constexpr const uint64_t RELEASE_CONTROL = 32768u;
    // Get static field: static public LIV.SDK.Unity.FEATURES RELEASE_CONTROL
    static ::LIV::SDK::Unity::FEATURES _get_RELEASE_CONTROL();
    // Set static field: static public LIV.SDK.Unity.FEATURES RELEASE_CONTROL
    static void _set_RELEASE_CONTROL(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES OPTIMIZED_RENDER
    static constexpr const uint64_t OPTIMIZED_RENDER = 268435456u;
    // Get static field: static public LIV.SDK.Unity.FEATURES OPTIMIZED_RENDER
    static ::LIV::SDK::Unity::FEATURES _get_OPTIMIZED_RENDER();
    // Set static field: static public LIV.SDK.Unity.FEATURES OPTIMIZED_RENDER
    static void _set_OPTIMIZED_RENDER(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES INTERLACED_RENDER
    static constexpr const uint64_t INTERLACED_RENDER = 536870912u;
    // Get static field: static public LIV.SDK.Unity.FEATURES INTERLACED_RENDER
    static ::LIV::SDK::Unity::FEATURES _get_INTERLACED_RENDER();
    // Set static field: static public LIV.SDK.Unity.FEATURES INTERLACED_RENDER
    static void _set_INTERLACED_RENDER(::LIV::SDK::Unity::FEATURES value);
    // static field const value: static public LIV.SDK.Unity.FEATURES DEBUG_CLIP_PLANE
    static constexpr const uint64_t DEBUG_CLIP_PLANE = 281474976710656u;
    // Get static field: static public LIV.SDK.Unity.FEATURES DEBUG_CLIP_PLANE
    static ::LIV::SDK::Unity::FEATURES _get_DEBUG_CLIP_PLANE();
    // Set static field: static public LIV.SDK.Unity.FEATURES DEBUG_CLIP_PLANE
    static void _set_DEBUG_CLIP_PLANE(::LIV::SDK::Unity::FEATURES value);
    // Get instance field reference: public System.UInt64 value__
    uint64_t& dyn_value__();
  }; // LIV.SDK.Unity.FEATURES
  #pragma pack(pop)
  static check_size<sizeof(FEATURES), 16 + sizeof(uint64_t)> __LIV_SDK_Unity_FEATURESSizeCheck;
  static_assert(sizeof(FEATURES) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
