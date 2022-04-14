// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: OutputBuffer
  class OutputBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::OutputBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::OutputBuffer*, "System.IO.Compression", "OutputBuffer");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.OutputBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class OutputBuffer : public ::Il2CppObject {
    public:
    // Nested type: ::System::IO::Compression::OutputBuffer::BufferState
    struct BufferState;
    public:
    // private System.Byte[] _byteBuffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> byteBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _pos
    // Size: 0x4
    // Offset: 0x18
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 _bitBuf
    // Size: 0x4
    // Offset: 0x1C
    uint bitBuf;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 _bitCount
    // Size: 0x4
    // Offset: 0x20
    int bitCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Byte[] _byteBuffer
    [[deprecated]] ::ArrayW<uint8_t>& dyn__byteBuffer();
    // Get instance field reference: private System.Int32 _pos
    [[deprecated]] int& dyn__pos();
    // Get instance field reference: private System.UInt32 _bitBuf
    [[deprecated]] uint& dyn__bitBuf();
    // Get instance field reference: private System.Int32 _bitCount
    [[deprecated]] int& dyn__bitCount();
    // System.Int32 get_BytesWritten()
    // Offset: 0x1698938
    int get_BytesWritten();
    // System.Int32 get_FreeBytes()
    // Offset: 0x169287C
    int get_FreeBytes();
    // System.Int32 get_BitsInBuffer()
    // Offset: 0x16928A0
    int get_BitsInBuffer();
    // System.Void UpdateBuffer(System.Byte[] output)
    // Offset: 0x16951B0
    void UpdateBuffer(::ArrayW<uint8_t> output);
    // System.Void WriteUInt16(System.UInt16 value)
    // Offset: 0x1692ABC
    void WriteUInt16(uint16_t value);
    // System.Void WriteBits(System.Int32 n, System.UInt32 bits)
    // Offset: 0x16928BC
    void WriteBits(int n, uint bits);
    // System.Void FlushBits()
    // Offset: 0x1692960
    void FlushBits();
    // System.Void WriteBytes(System.Byte[] byteArray, System.Int32 offset, System.Int32 count)
    // Offset: 0x1692A40
    void WriteBytes(::ArrayW<uint8_t> byteArray, int offset, int count);
    // private System.Void WriteBytesUnaligned(System.Byte[] byteArray, System.Int32 offset, System.Int32 count)
    // Offset: 0x1698940
    void WriteBytesUnaligned(::ArrayW<uint8_t> byteArray, int offset, int count);
    // private System.Void WriteByteUnaligned(System.Byte b)
    // Offset: 0x16989DC
    void WriteByteUnaligned(uint8_t b);
    // System.IO.Compression.OutputBuffer/System.IO.Compression.BufferState DumpState()
    // Offset: 0x16951BC
    ::System::IO::Compression::OutputBuffer::BufferState DumpState();
    // System.Void RestoreState(System.IO.Compression.OutputBuffer/System.IO.Compression.BufferState state)
    // Offset: 0x16951E8
    void RestoreState(::System::IO::Compression::OutputBuffer::BufferState state);
  }; // System.IO.Compression.OutputBuffer
  #pragma pack(pop)
  static check_size<sizeof(OutputBuffer), 32 + sizeof(int)> __System_IO_Compression_OutputBufferSizeCheck;
  static_assert(sizeof(OutputBuffer) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::get_BytesWritten
// Il2CppName: get_BytesWritten
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::OutputBuffer::*)()>(&System::IO::Compression::OutputBuffer::get_BytesWritten)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "get_BytesWritten", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::get_FreeBytes
// Il2CppName: get_FreeBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::OutputBuffer::*)()>(&System::IO::Compression::OutputBuffer::get_FreeBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "get_FreeBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::get_BitsInBuffer
// Il2CppName: get_BitsInBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::OutputBuffer::*)()>(&System::IO::Compression::OutputBuffer::get_BitsInBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "get_BitsInBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::UpdateBuffer
// Il2CppName: UpdateBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputBuffer::*)(::ArrayW<uint8_t>)>(&System::IO::Compression::OutputBuffer::UpdateBuffer)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "UpdateBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::WriteUInt16
// Il2CppName: WriteUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputBuffer::*)(uint16_t)>(&System::IO::Compression::OutputBuffer::WriteUInt16)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "WriteUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::WriteBits
// Il2CppName: WriteBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputBuffer::*)(int, uint)>(&System::IO::Compression::OutputBuffer::WriteBits)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "WriteBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bits});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::FlushBits
// Il2CppName: FlushBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputBuffer::*)()>(&System::IO::Compression::OutputBuffer::FlushBits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "FlushBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::WriteBytes
// Il2CppName: WriteBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputBuffer::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::OutputBuffer::WriteBytes)> {
  static const MethodInfo* get() {
    static auto* byteArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "WriteBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteArray, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::WriteBytesUnaligned
// Il2CppName: WriteBytesUnaligned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputBuffer::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::OutputBuffer::WriteBytesUnaligned)> {
  static const MethodInfo* get() {
    static auto* byteArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "WriteBytesUnaligned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteArray, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::WriteByteUnaligned
// Il2CppName: WriteByteUnaligned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputBuffer::*)(uint8_t)>(&System::IO::Compression::OutputBuffer::WriteByteUnaligned)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "WriteByteUnaligned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::DumpState
// Il2CppName: DumpState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::OutputBuffer::BufferState (System::IO::Compression::OutputBuffer::*)()>(&System::IO::Compression::OutputBuffer::DumpState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "DumpState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputBuffer::RestoreState
// Il2CppName: RestoreState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputBuffer::*)(::System::IO::Compression::OutputBuffer::BufferState)>(&System::IO::Compression::OutputBuffer::RestoreState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "OutputBuffer/BufferState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputBuffer*), "RestoreState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
