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
  // Forward declaring type: Note
  struct Note;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Note, "VROSC", "Note");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Note
  // [TokenAttribute] Offset: FFFFFFFF
  struct Note/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Note
    constexpr Note(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.Note C
    static constexpr const int C = 0;
    // Get static field: static public VROSC.Note C
    static ::VROSC::Note _get_C();
    // Set static field: static public VROSC.Note C
    static void _set_C(::VROSC::Note value);
    // static field const value: static public VROSC.Note Db
    static constexpr const int Db = 1;
    // Get static field: static public VROSC.Note Db
    static ::VROSC::Note _get_Db();
    // Set static field: static public VROSC.Note Db
    static void _set_Db(::VROSC::Note value);
    // static field const value: static public VROSC.Note D
    static constexpr const int D = 2;
    // Get static field: static public VROSC.Note D
    static ::VROSC::Note _get_D();
    // Set static field: static public VROSC.Note D
    static void _set_D(::VROSC::Note value);
    // static field const value: static public VROSC.Note Eb
    static constexpr const int Eb = 3;
    // Get static field: static public VROSC.Note Eb
    static ::VROSC::Note _get_Eb();
    // Set static field: static public VROSC.Note Eb
    static void _set_Eb(::VROSC::Note value);
    // static field const value: static public VROSC.Note E
    static constexpr const int E = 4;
    // Get static field: static public VROSC.Note E
    static ::VROSC::Note _get_E();
    // Set static field: static public VROSC.Note E
    static void _set_E(::VROSC::Note value);
    // static field const value: static public VROSC.Note F
    static constexpr const int F = 5;
    // Get static field: static public VROSC.Note F
    static ::VROSC::Note _get_F();
    // Set static field: static public VROSC.Note F
    static void _set_F(::VROSC::Note value);
    // static field const value: static public VROSC.Note Gb
    static constexpr const int Gb = 6;
    // Get static field: static public VROSC.Note Gb
    static ::VROSC::Note _get_Gb();
    // Set static field: static public VROSC.Note Gb
    static void _set_Gb(::VROSC::Note value);
    // static field const value: static public VROSC.Note G
    static constexpr const int G = 7;
    // Get static field: static public VROSC.Note G
    static ::VROSC::Note _get_G();
    // Set static field: static public VROSC.Note G
    static void _set_G(::VROSC::Note value);
    // static field const value: static public VROSC.Note Ab
    static constexpr const int Ab = 8;
    // Get static field: static public VROSC.Note Ab
    static ::VROSC::Note _get_Ab();
    // Set static field: static public VROSC.Note Ab
    static void _set_Ab(::VROSC::Note value);
    // static field const value: static public VROSC.Note A
    static constexpr const int A = 9;
    // Get static field: static public VROSC.Note A
    static ::VROSC::Note _get_A();
    // Set static field: static public VROSC.Note A
    static void _set_A(::VROSC::Note value);
    // static field const value: static public VROSC.Note Bb
    static constexpr const int Bb = 10;
    // Get static field: static public VROSC.Note Bb
    static ::VROSC::Note _get_Bb();
    // Set static field: static public VROSC.Note Bb
    static void _set_Bb(::VROSC::Note value);
    // static field const value: static public VROSC.Note B
    static constexpr const int B = 11;
    // Get static field: static public VROSC.Note B
    static ::VROSC::Note _get_B();
    // Set static field: static public VROSC.Note B
    static void _set_B(::VROSC::Note value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VROSC.Note
  #pragma pack(pop)
  static check_size<sizeof(Note), 0 + sizeof(int)> __VROSC_NoteSizeCheck;
  static_assert(sizeof(Note) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
