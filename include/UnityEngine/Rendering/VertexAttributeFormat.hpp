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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: VertexAttributeFormat
  struct VertexAttributeFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttributeFormat, "UnityEngine.Rendering", "VertexAttributeFormat");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.VertexAttributeFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct VertexAttributeFormat/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: VertexAttributeFormat
    constexpr VertexAttributeFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat Float32
    static constexpr const int Float32 = 0;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat Float32
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_Float32();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat Float32
    static void _set_Float32(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat Float16
    static constexpr const int Float16 = 1;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat Float16
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_Float16();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat Float16
    static void _set_Float16(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat UNorm8
    static constexpr const int UNorm8 = 2;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat UNorm8
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_UNorm8();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat UNorm8
    static void _set_UNorm8(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat SNorm8
    static constexpr const int SNorm8 = 3;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat SNorm8
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_SNorm8();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat SNorm8
    static void _set_SNorm8(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat UNorm16
    static constexpr const int UNorm16 = 4;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat UNorm16
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_UNorm16();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat UNorm16
    static void _set_UNorm16(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat SNorm16
    static constexpr const int SNorm16 = 5;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat SNorm16
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_SNorm16();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat SNorm16
    static void _set_SNorm16(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat UInt8
    static constexpr const int UInt8 = 6;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat UInt8
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_UInt8();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat UInt8
    static void _set_UInt8(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat SInt8
    static constexpr const int SInt8 = 7;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat SInt8
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_SInt8();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat SInt8
    static void _set_SInt8(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat UInt16
    static constexpr const int UInt16 = 8;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat UInt16
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_UInt16();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat UInt16
    static void _set_UInt16(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat SInt16
    static constexpr const int SInt16 = 9;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat SInt16
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_SInt16();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat SInt16
    static void _set_SInt16(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat UInt32
    static constexpr const int UInt32 = 10;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat UInt32
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_UInt32();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat UInt32
    static void _set_UInt32(::UnityEngine::Rendering::VertexAttributeFormat value);
    // static field const value: static public UnityEngine.Rendering.VertexAttributeFormat SInt32
    static constexpr const int SInt32 = 11;
    // Get static field: static public UnityEngine.Rendering.VertexAttributeFormat SInt32
    static ::UnityEngine::Rendering::VertexAttributeFormat _get_SInt32();
    // Set static field: static public UnityEngine.Rendering.VertexAttributeFormat SInt32
    static void _set_SInt32(::UnityEngine::Rendering::VertexAttributeFormat value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.VertexAttributeFormat
  #pragma pack(pop)
  static check_size<sizeof(VertexAttributeFormat), 16 + sizeof(int)> __UnityEngine_Rendering_VertexAttributeFormatSizeCheck;
  static_assert(sizeof(VertexAttributeFormat) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
