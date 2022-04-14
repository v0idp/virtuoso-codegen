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
  // Forward declaring type: InflaterState
  struct InflaterState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::InflaterState, "System.IO.Compression", "InflaterState");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.InflaterState
  // [TokenAttribute] Offset: FFFFFFFF
  struct InflaterState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InflaterState
    constexpr InflaterState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.Compression.InflaterState ReadingHeader
    static constexpr const int ReadingHeader = 0;
    // Get static field: static public System.IO.Compression.InflaterState ReadingHeader
    static ::System::IO::Compression::InflaterState _get_ReadingHeader();
    // Set static field: static public System.IO.Compression.InflaterState ReadingHeader
    static void _set_ReadingHeader(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingBFinal
    static constexpr const int ReadingBFinal = 2;
    // Get static field: static public System.IO.Compression.InflaterState ReadingBFinal
    static ::System::IO::Compression::InflaterState _get_ReadingBFinal();
    // Set static field: static public System.IO.Compression.InflaterState ReadingBFinal
    static void _set_ReadingBFinal(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingBType
    static constexpr const int ReadingBType = 3;
    // Get static field: static public System.IO.Compression.InflaterState ReadingBType
    static ::System::IO::Compression::InflaterState _get_ReadingBType();
    // Set static field: static public System.IO.Compression.InflaterState ReadingBType
    static void _set_ReadingBType(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingNumLitCodes
    static constexpr const int ReadingNumLitCodes = 4;
    // Get static field: static public System.IO.Compression.InflaterState ReadingNumLitCodes
    static ::System::IO::Compression::InflaterState _get_ReadingNumLitCodes();
    // Set static field: static public System.IO.Compression.InflaterState ReadingNumLitCodes
    static void _set_ReadingNumLitCodes(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingNumDistCodes
    static constexpr const int ReadingNumDistCodes = 5;
    // Get static field: static public System.IO.Compression.InflaterState ReadingNumDistCodes
    static ::System::IO::Compression::InflaterState _get_ReadingNumDistCodes();
    // Set static field: static public System.IO.Compression.InflaterState ReadingNumDistCodes
    static void _set_ReadingNumDistCodes(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingNumCodeLengthCodes
    static constexpr const int ReadingNumCodeLengthCodes = 6;
    // Get static field: static public System.IO.Compression.InflaterState ReadingNumCodeLengthCodes
    static ::System::IO::Compression::InflaterState _get_ReadingNumCodeLengthCodes();
    // Set static field: static public System.IO.Compression.InflaterState ReadingNumCodeLengthCodes
    static void _set_ReadingNumCodeLengthCodes(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingCodeLengthCodes
    static constexpr const int ReadingCodeLengthCodes = 7;
    // Get static field: static public System.IO.Compression.InflaterState ReadingCodeLengthCodes
    static ::System::IO::Compression::InflaterState _get_ReadingCodeLengthCodes();
    // Set static field: static public System.IO.Compression.InflaterState ReadingCodeLengthCodes
    static void _set_ReadingCodeLengthCodes(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingTreeCodesBefore
    static constexpr const int ReadingTreeCodesBefore = 8;
    // Get static field: static public System.IO.Compression.InflaterState ReadingTreeCodesBefore
    static ::System::IO::Compression::InflaterState _get_ReadingTreeCodesBefore();
    // Set static field: static public System.IO.Compression.InflaterState ReadingTreeCodesBefore
    static void _set_ReadingTreeCodesBefore(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingTreeCodesAfter
    static constexpr const int ReadingTreeCodesAfter = 9;
    // Get static field: static public System.IO.Compression.InflaterState ReadingTreeCodesAfter
    static ::System::IO::Compression::InflaterState _get_ReadingTreeCodesAfter();
    // Set static field: static public System.IO.Compression.InflaterState ReadingTreeCodesAfter
    static void _set_ReadingTreeCodesAfter(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState DecodeTop
    static constexpr const int DecodeTop = 10;
    // Get static field: static public System.IO.Compression.InflaterState DecodeTop
    static ::System::IO::Compression::InflaterState _get_DecodeTop();
    // Set static field: static public System.IO.Compression.InflaterState DecodeTop
    static void _set_DecodeTop(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState HaveInitialLength
    static constexpr const int HaveInitialLength = 11;
    // Get static field: static public System.IO.Compression.InflaterState HaveInitialLength
    static ::System::IO::Compression::InflaterState _get_HaveInitialLength();
    // Set static field: static public System.IO.Compression.InflaterState HaveInitialLength
    static void _set_HaveInitialLength(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState HaveFullLength
    static constexpr const int HaveFullLength = 12;
    // Get static field: static public System.IO.Compression.InflaterState HaveFullLength
    static ::System::IO::Compression::InflaterState _get_HaveFullLength();
    // Set static field: static public System.IO.Compression.InflaterState HaveFullLength
    static void _set_HaveFullLength(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState HaveDistCode
    static constexpr const int HaveDistCode = 13;
    // Get static field: static public System.IO.Compression.InflaterState HaveDistCode
    static ::System::IO::Compression::InflaterState _get_HaveDistCode();
    // Set static field: static public System.IO.Compression.InflaterState HaveDistCode
    static void _set_HaveDistCode(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState UncompressedAligning
    static constexpr const int UncompressedAligning = 15;
    // Get static field: static public System.IO.Compression.InflaterState UncompressedAligning
    static ::System::IO::Compression::InflaterState _get_UncompressedAligning();
    // Set static field: static public System.IO.Compression.InflaterState UncompressedAligning
    static void _set_UncompressedAligning(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState UncompressedByte1
    static constexpr const int UncompressedByte1 = 16;
    // Get static field: static public System.IO.Compression.InflaterState UncompressedByte1
    static ::System::IO::Compression::InflaterState _get_UncompressedByte1();
    // Set static field: static public System.IO.Compression.InflaterState UncompressedByte1
    static void _set_UncompressedByte1(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState UncompressedByte2
    static constexpr const int UncompressedByte2 = 17;
    // Get static field: static public System.IO.Compression.InflaterState UncompressedByte2
    static ::System::IO::Compression::InflaterState _get_UncompressedByte2();
    // Set static field: static public System.IO.Compression.InflaterState UncompressedByte2
    static void _set_UncompressedByte2(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState UncompressedByte3
    static constexpr const int UncompressedByte3 = 18;
    // Get static field: static public System.IO.Compression.InflaterState UncompressedByte3
    static ::System::IO::Compression::InflaterState _get_UncompressedByte3();
    // Set static field: static public System.IO.Compression.InflaterState UncompressedByte3
    static void _set_UncompressedByte3(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState UncompressedByte4
    static constexpr const int UncompressedByte4 = 19;
    // Get static field: static public System.IO.Compression.InflaterState UncompressedByte4
    static ::System::IO::Compression::InflaterState _get_UncompressedByte4();
    // Set static field: static public System.IO.Compression.InflaterState UncompressedByte4
    static void _set_UncompressedByte4(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState DecodingUncompressed
    static constexpr const int DecodingUncompressed = 20;
    // Get static field: static public System.IO.Compression.InflaterState DecodingUncompressed
    static ::System::IO::Compression::InflaterState _get_DecodingUncompressed();
    // Set static field: static public System.IO.Compression.InflaterState DecodingUncompressed
    static void _set_DecodingUncompressed(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState StartReadingFooter
    static constexpr const int StartReadingFooter = 21;
    // Get static field: static public System.IO.Compression.InflaterState StartReadingFooter
    static ::System::IO::Compression::InflaterState _get_StartReadingFooter();
    // Set static field: static public System.IO.Compression.InflaterState StartReadingFooter
    static void _set_StartReadingFooter(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState ReadingFooter
    static constexpr const int ReadingFooter = 22;
    // Get static field: static public System.IO.Compression.InflaterState ReadingFooter
    static ::System::IO::Compression::InflaterState _get_ReadingFooter();
    // Set static field: static public System.IO.Compression.InflaterState ReadingFooter
    static void _set_ReadingFooter(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState VerifyingFooter
    static constexpr const int VerifyingFooter = 23;
    // Get static field: static public System.IO.Compression.InflaterState VerifyingFooter
    static ::System::IO::Compression::InflaterState _get_VerifyingFooter();
    // Set static field: static public System.IO.Compression.InflaterState VerifyingFooter
    static void _set_VerifyingFooter(::System::IO::Compression::InflaterState value);
    // static field const value: static public System.IO.Compression.InflaterState Done
    static constexpr const int Done = 24;
    // Get static field: static public System.IO.Compression.InflaterState Done
    static ::System::IO::Compression::InflaterState _get_Done();
    // Set static field: static public System.IO.Compression.InflaterState Done
    static void _set_Done(::System::IO::Compression::InflaterState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.IO.Compression.InflaterState
  #pragma pack(pop)
  static check_size<sizeof(InflaterState), 0 + sizeof(int)> __System_IO_Compression_InflaterStateSizeCheck;
  static_assert(sizeof(InflaterState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
