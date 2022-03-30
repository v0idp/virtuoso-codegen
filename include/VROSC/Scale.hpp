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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: Scale
  struct Scale;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Scale, "VROSC", "Scale");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Scale
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct Scale/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: Scale
    constexpr Scale(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.Scale C
    static constexpr const int C = 1;
    // Get static field: static public VROSC.Scale C
    static ::VROSC::Scale _get_C();
    // Set static field: static public VROSC.Scale C
    static void _set_C(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale Db
    static constexpr const int Db = 2;
    // Get static field: static public VROSC.Scale Db
    static ::VROSC::Scale _get_Db();
    // Set static field: static public VROSC.Scale Db
    static void _set_Db(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale D
    static constexpr const int D = 4;
    // Get static field: static public VROSC.Scale D
    static ::VROSC::Scale _get_D();
    // Set static field: static public VROSC.Scale D
    static void _set_D(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale Eb
    static constexpr const int Eb = 8;
    // Get static field: static public VROSC.Scale Eb
    static ::VROSC::Scale _get_Eb();
    // Set static field: static public VROSC.Scale Eb
    static void _set_Eb(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale E
    static constexpr const int E = 16;
    // Get static field: static public VROSC.Scale E
    static ::VROSC::Scale _get_E();
    // Set static field: static public VROSC.Scale E
    static void _set_E(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale F
    static constexpr const int F = 32;
    // Get static field: static public VROSC.Scale F
    static ::VROSC::Scale _get_F();
    // Set static field: static public VROSC.Scale F
    static void _set_F(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale Gb
    static constexpr const int Gb = 64;
    // Get static field: static public VROSC.Scale Gb
    static ::VROSC::Scale _get_Gb();
    // Set static field: static public VROSC.Scale Gb
    static void _set_Gb(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale G
    static constexpr const int G = 128;
    // Get static field: static public VROSC.Scale G
    static ::VROSC::Scale _get_G();
    // Set static field: static public VROSC.Scale G
    static void _set_G(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale Ab
    static constexpr const int Ab = 256;
    // Get static field: static public VROSC.Scale Ab
    static ::VROSC::Scale _get_Ab();
    // Set static field: static public VROSC.Scale Ab
    static void _set_Ab(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale A
    static constexpr const int A = 512;
    // Get static field: static public VROSC.Scale A
    static ::VROSC::Scale _get_A();
    // Set static field: static public VROSC.Scale A
    static void _set_A(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale Bb
    static constexpr const int Bb = 1024;
    // Get static field: static public VROSC.Scale Bb
    static ::VROSC::Scale _get_Bb();
    // Set static field: static public VROSC.Scale Bb
    static void _set_Bb(::VROSC::Scale value);
    // static field const value: static public VROSC.Scale B
    static constexpr const int B = 2048;
    // Get static field: static public VROSC.Scale B
    static ::VROSC::Scale _get_B();
    // Set static field: static public VROSC.Scale B
    static void _set_B(::VROSC::Scale value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.Scale
  #pragma pack(pop)
  static check_size<sizeof(Scale), 16 + sizeof(int)> __VROSC_ScaleSizeCheck;
  static_assert(sizeof(Scale) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"