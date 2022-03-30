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
  // Forward declaring type: TEXTURE_FORMAT
  struct TEXTURE_FORMAT;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::TEXTURE_FORMAT, "LIV.SDK.Unity", "TEXTURE_FORMAT");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.TEXTURE_FORMAT
  // [TokenAttribute] Offset: FFFFFFFF
  struct TEXTURE_FORMAT/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x10
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: TEXTURE_FORMAT
    constexpr TEXTURE_FORMAT(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public LIV.SDK.Unity.TEXTURE_FORMAT UNDEFINED
    static constexpr const uint UNDEFINED = 0u;
    // Get static field: static public LIV.SDK.Unity.TEXTURE_FORMAT UNDEFINED
    static ::LIV::SDK::Unity::TEXTURE_FORMAT _get_UNDEFINED();
    // Set static field: static public LIV.SDK.Unity.TEXTURE_FORMAT UNDEFINED
    static void _set_UNDEFINED(::LIV::SDK::Unity::TEXTURE_FORMAT value);
    // static field const value: static public LIV.SDK.Unity.TEXTURE_FORMAT ARGB32
    static constexpr const uint ARGB32 = 10u;
    // Get static field: static public LIV.SDK.Unity.TEXTURE_FORMAT ARGB32
    static ::LIV::SDK::Unity::TEXTURE_FORMAT _get_ARGB32();
    // Set static field: static public LIV.SDK.Unity.TEXTURE_FORMAT ARGB32
    static void _set_ARGB32(::LIV::SDK::Unity::TEXTURE_FORMAT value);
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // LIV.SDK.Unity.TEXTURE_FORMAT
  #pragma pack(pop)
  static check_size<sizeof(TEXTURE_FORMAT), 16 + sizeof(uint)> __LIV_SDK_Unity_TEXTURE_FORMATSizeCheck;
  static_assert(sizeof(TEXTURE_FORMAT) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
