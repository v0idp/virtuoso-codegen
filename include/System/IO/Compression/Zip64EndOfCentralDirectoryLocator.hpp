// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: Zip64EndOfCentralDirectoryLocator
  struct Zip64EndOfCentralDirectoryLocator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::Zip64EndOfCentralDirectoryLocator, "System.IO.Compression", "Zip64EndOfCentralDirectoryLocator");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.IO.Compression.Zip64EndOfCentralDirectoryLocator
  // [TokenAttribute] Offset: FFFFFFFF
  struct Zip64EndOfCentralDirectoryLocator/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 NumberOfDiskWithZip64EOCD
    // Size: 0x4
    // Offset: 0x0
    uint NumberOfDiskWithZip64EOCD;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: NumberOfDiskWithZip64EOCD and: OffsetOfZip64EOCD
    char __padding0[0x4] = {};
    // public System.UInt64 OffsetOfZip64EOCD
    // Size: 0x8
    // Offset: 0x8
    uint64_t OffsetOfZip64EOCD;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt32 TotalNumberOfDisks
    // Size: 0x4
    // Offset: 0x10
    uint TotalNumberOfDisks;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: Zip64EndOfCentralDirectoryLocator
    constexpr Zip64EndOfCentralDirectoryLocator(uint NumberOfDiskWithZip64EOCD_ = {}, uint64_t OffsetOfZip64EOCD_ = {}, uint TotalNumberOfDisks_ = {}) noexcept : NumberOfDiskWithZip64EOCD{NumberOfDiskWithZip64EOCD_}, OffsetOfZip64EOCD{OffsetOfZip64EOCD_}, TotalNumberOfDisks{TotalNumberOfDisks_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 NumberOfDiskWithZip64EOCD
    uint& dyn_NumberOfDiskWithZip64EOCD();
    // Get instance field reference: public System.UInt64 OffsetOfZip64EOCD
    uint64_t& dyn_OffsetOfZip64EOCD();
    // Get instance field reference: public System.UInt32 TotalNumberOfDisks
    uint& dyn_TotalNumberOfDisks();
    // static public System.Boolean TryReadBlock(System.IO.BinaryReader reader, out System.IO.Compression.Zip64EndOfCentralDirectoryLocator zip64EOCDLocator)
    // Offset: 0x1122258
    static bool TryReadBlock(::System::IO::BinaryReader* reader, ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator> zip64EOCDLocator);
    // static public System.Void WriteBlock(System.IO.Stream stream, System.Int64 zip64EOCDRecordStart)
    // Offset: 0x11222FC
    static void WriteBlock(::System::IO::Stream* stream, int64_t zip64EOCDRecordStart);
  }; // System.IO.Compression.Zip64EndOfCentralDirectoryLocator
  #pragma pack(pop)
  static check_size<sizeof(Zip64EndOfCentralDirectoryLocator), 16 + sizeof(uint)> __System_IO_Compression_Zip64EndOfCentralDirectoryLocatorSizeCheck;
  static_assert(sizeof(Zip64EndOfCentralDirectoryLocator) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::Zip64EndOfCentralDirectoryLocator::TryReadBlock
// Il2CppName: TryReadBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::BinaryReader*, ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>)>(&System::IO::Compression::Zip64EndOfCentralDirectoryLocator::TryReadBlock)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryReader")->byval_arg;
    static auto* zip64EOCDLocator = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "Zip64EndOfCentralDirectoryLocator")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::Zip64EndOfCentralDirectoryLocator), "TryReadBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, zip64EOCDLocator});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::Zip64EndOfCentralDirectoryLocator::WriteBlock
// Il2CppName: WriteBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, int64_t)>(&System::IO::Compression::Zip64EndOfCentralDirectoryLocator::WriteBlock)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* zip64EOCDRecordStart = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::Zip64EndOfCentralDirectoryLocator), "WriteBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, zip64EOCDRecordStart});
  }
};