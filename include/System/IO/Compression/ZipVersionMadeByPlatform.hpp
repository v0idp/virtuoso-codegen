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
  // Forward declaring type: ZipVersionMadeByPlatform
  struct ZipVersionMadeByPlatform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipVersionMadeByPlatform, "System.IO.Compression", "ZipVersionMadeByPlatform");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.ZipVersionMadeByPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  struct ZipVersionMadeByPlatform/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x10
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ZipVersionMadeByPlatform
    constexpr ZipVersionMadeByPlatform(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.Compression.ZipVersionMadeByPlatform Windows
    static constexpr const uint8_t Windows = 0u;
    // Get static field: static public System.IO.Compression.ZipVersionMadeByPlatform Windows
    static ::System::IO::Compression::ZipVersionMadeByPlatform _get_Windows();
    // Set static field: static public System.IO.Compression.ZipVersionMadeByPlatform Windows
    static void _set_Windows(::System::IO::Compression::ZipVersionMadeByPlatform value);
    // static field const value: static public System.IO.Compression.ZipVersionMadeByPlatform Unix
    static constexpr const uint8_t Unix = 3u;
    // Get static field: static public System.IO.Compression.ZipVersionMadeByPlatform Unix
    static ::System::IO::Compression::ZipVersionMadeByPlatform _get_Unix();
    // Set static field: static public System.IO.Compression.ZipVersionMadeByPlatform Unix
    static void _set_Unix(::System::IO::Compression::ZipVersionMadeByPlatform value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // System.IO.Compression.ZipVersionMadeByPlatform
  #pragma pack(pop)
  static check_size<sizeof(ZipVersionMadeByPlatform), 16 + sizeof(uint8_t)> __System_IO_Compression_ZipVersionMadeByPlatformSizeCheck;
  static_assert(sizeof(ZipVersionMadeByPlatform) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
