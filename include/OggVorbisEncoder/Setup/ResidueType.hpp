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
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: ResidueType
  struct ResidueType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::ResidueType, "OggVorbisEncoder.Setup", "ResidueType");
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.ResidueType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ResidueType/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: ResidueType
    constexpr ResidueType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OggVorbisEncoder.Setup.ResidueType Zero
    static constexpr const int Zero = 0;
    // Get static field: static public OggVorbisEncoder.Setup.ResidueType Zero
    static ::OggVorbisEncoder::Setup::ResidueType _get_Zero();
    // Set static field: static public OggVorbisEncoder.Setup.ResidueType Zero
    static void _set_Zero(::OggVorbisEncoder::Setup::ResidueType value);
    // static field const value: static public OggVorbisEncoder.Setup.ResidueType One
    static constexpr const int One = 1;
    // Get static field: static public OggVorbisEncoder.Setup.ResidueType One
    static ::OggVorbisEncoder::Setup::ResidueType _get_One();
    // Set static field: static public OggVorbisEncoder.Setup.ResidueType One
    static void _set_One(::OggVorbisEncoder::Setup::ResidueType value);
    // static field const value: static public OggVorbisEncoder.Setup.ResidueType Two
    static constexpr const int Two = 2;
    // Get static field: static public OggVorbisEncoder.Setup.ResidueType Two
    static ::OggVorbisEncoder::Setup::ResidueType _get_Two();
    // Set static field: static public OggVorbisEncoder.Setup.ResidueType Two
    static void _set_Two(::OggVorbisEncoder::Setup::ResidueType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OggVorbisEncoder.Setup.ResidueType
  #pragma pack(pop)
  static check_size<sizeof(ResidueType), 16 + sizeof(int)> __OggVorbisEncoder_Setup_ResidueTypeSizeCheck;
  static_assert(sizeof(ResidueType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
