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
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphRenderMode
  struct GlyphRenderMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphRenderMode, "UnityEngine.TextCore.LowLevel", "GlyphRenderMode");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphRenderMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6D26E0
  struct GlyphRenderMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GlyphRenderMode
    constexpr GlyphRenderMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SMOOTH_HINTED
    static constexpr const int SMOOTH_HINTED = 4121;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SMOOTH_HINTED
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_SMOOTH_HINTED();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SMOOTH_HINTED
    static void _set_SMOOTH_HINTED(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SMOOTH
    static constexpr const int SMOOTH = 4117;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SMOOTH
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_SMOOTH();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SMOOTH
    static void _set_SMOOTH(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode RASTER_HINTED
    static constexpr const int RASTER_HINTED = 4122;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode RASTER_HINTED
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_RASTER_HINTED();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode RASTER_HINTED
    static void _set_RASTER_HINTED(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode RASTER
    static constexpr const int RASTER = 4118;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode RASTER
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_RASTER();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode RASTER
    static void _set_RASTER(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF
    static constexpr const int SDF = 4134;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_SDF();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF
    static void _set_SDF(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF8
    static constexpr const int SDF8 = 8230;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF8
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_SDF8();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF8
    static void _set_SDF8(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF16
    static constexpr const int SDF16 = 16422;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF16
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_SDF16();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF16
    static void _set_SDF16(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF32
    static constexpr const int SDF32 = 32806;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF32
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_SDF32();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDF32
    static void _set_SDF32(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDFAA_HINTED
    static constexpr const int SDFAA_HINTED = 4169;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDFAA_HINTED
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_SDFAA_HINTED();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDFAA_HINTED
    static void _set_SDFAA_HINTED(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDFAA
    static constexpr const int SDFAA = 4165;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDFAA
    static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode _get_SDFAA();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphRenderMode SDFAA
    static void _set_SDFAA(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.TextCore.LowLevel.GlyphRenderMode
  #pragma pack(pop)
  static check_size<sizeof(GlyphRenderMode), 0 + sizeof(int)> __UnityEngine_TextCore_LowLevel_GlyphRenderModeSizeCheck;
  static_assert(sizeof(GlyphRenderMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
