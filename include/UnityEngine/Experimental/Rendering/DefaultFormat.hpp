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
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: DefaultFormat
  struct DefaultFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::DefaultFormat, "UnityEngine.Experimental.Rendering", "DefaultFormat");
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.DefaultFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct DefaultFormat/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DefaultFormat
    constexpr DefaultFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.Rendering.DefaultFormat LDR
    static constexpr const int LDR = 0;
    // Get static field: static public UnityEngine.Experimental.Rendering.DefaultFormat LDR
    static ::UnityEngine::Experimental::Rendering::DefaultFormat _get_LDR();
    // Set static field: static public UnityEngine.Experimental.Rendering.DefaultFormat LDR
    static void _set_LDR(::UnityEngine::Experimental::Rendering::DefaultFormat value);
    // static field const value: static public UnityEngine.Experimental.Rendering.DefaultFormat HDR
    static constexpr const int HDR = 1;
    // Get static field: static public UnityEngine.Experimental.Rendering.DefaultFormat HDR
    static ::UnityEngine::Experimental::Rendering::DefaultFormat _get_HDR();
    // Set static field: static public UnityEngine.Experimental.Rendering.DefaultFormat HDR
    static void _set_HDR(::UnityEngine::Experimental::Rendering::DefaultFormat value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Experimental.Rendering.DefaultFormat
  #pragma pack(pop)
  static check_size<sizeof(DefaultFormat), 0 + sizeof(int)> __UnityEngine_Experimental_Rendering_DefaultFormatSizeCheck;
  static_assert(sizeof(DefaultFormat) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
