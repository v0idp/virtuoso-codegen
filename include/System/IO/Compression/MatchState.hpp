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
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: MatchState
  struct MatchState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::MatchState, "System.IO.Compression", "MatchState");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.MatchState
  // [TokenAttribute] Offset: FFFFFFFF
  struct MatchState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MatchState
    constexpr MatchState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.Compression.MatchState HasSymbol
    static constexpr const int HasSymbol = 1;
    // Get static field: static public System.IO.Compression.MatchState HasSymbol
    static ::System::IO::Compression::MatchState _get_HasSymbol();
    // Set static field: static public System.IO.Compression.MatchState HasSymbol
    static void _set_HasSymbol(::System::IO::Compression::MatchState value);
    // static field const value: static public System.IO.Compression.MatchState HasMatch
    static constexpr const int HasMatch = 2;
    // Get static field: static public System.IO.Compression.MatchState HasMatch
    static ::System::IO::Compression::MatchState _get_HasMatch();
    // Set static field: static public System.IO.Compression.MatchState HasMatch
    static void _set_HasMatch(::System::IO::Compression::MatchState value);
    // static field const value: static public System.IO.Compression.MatchState HasSymbolAndMatch
    static constexpr const int HasSymbolAndMatch = 3;
    // Get static field: static public System.IO.Compression.MatchState HasSymbolAndMatch
    static ::System::IO::Compression::MatchState _get_HasSymbolAndMatch();
    // Set static field: static public System.IO.Compression.MatchState HasSymbolAndMatch
    static void _set_HasSymbolAndMatch(::System::IO::Compression::MatchState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.IO.Compression.MatchState
  #pragma pack(pop)
  static check_size<sizeof(MatchState), 0 + sizeof(int)> __System_IO_Compression_MatchStateSizeCheck;
  static_assert(sizeof(MatchState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
