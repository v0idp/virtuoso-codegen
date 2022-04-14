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
  // Forward declaring type: CompressionLevel
  struct CompressionLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CompressionLevel, "System.IO.Compression", "CompressionLevel");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.CompressionLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct CompressionLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CompressionLevel
    constexpr CompressionLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.Compression.CompressionLevel Optimal
    static constexpr const int Optimal = 0;
    // Get static field: static public System.IO.Compression.CompressionLevel Optimal
    static ::System::IO::Compression::CompressionLevel _get_Optimal();
    // Set static field: static public System.IO.Compression.CompressionLevel Optimal
    static void _set_Optimal(::System::IO::Compression::CompressionLevel value);
    // static field const value: static public System.IO.Compression.CompressionLevel Fastest
    static constexpr const int Fastest = 1;
    // Get static field: static public System.IO.Compression.CompressionLevel Fastest
    static ::System::IO::Compression::CompressionLevel _get_Fastest();
    // Set static field: static public System.IO.Compression.CompressionLevel Fastest
    static void _set_Fastest(::System::IO::Compression::CompressionLevel value);
    // static field const value: static public System.IO.Compression.CompressionLevel NoCompression
    static constexpr const int NoCompression = 2;
    // Get static field: static public System.IO.Compression.CompressionLevel NoCompression
    static ::System::IO::Compression::CompressionLevel _get_NoCompression();
    // Set static field: static public System.IO.Compression.CompressionLevel NoCompression
    static void _set_NoCompression(::System::IO::Compression::CompressionLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.IO.Compression.CompressionLevel
  #pragma pack(pop)
  static check_size<sizeof(CompressionLevel), 0 + sizeof(int)> __System_IO_Compression_CompressionLevelSizeCheck;
  static_assert(sizeof(CompressionLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
