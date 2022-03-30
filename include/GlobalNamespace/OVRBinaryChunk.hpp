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
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRBinaryChunk
  struct OVRBinaryChunk;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBinaryChunk, "", "OVRBinaryChunk");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRBinaryChunk
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRBinaryChunk/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IO.Stream chunkStream
    // Size: 0x8
    // Offset: 0x0
    ::System::IO::Stream* chunkStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // public System.UInt32 chunkLength
    // Size: 0x4
    // Offset: 0x8
    uint chunkLength;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: chunkLength and: chunkStart
    char __padding1[0x4] = {};
    // public System.Int64 chunkStart
    // Size: 0x8
    // Offset: 0x10
    int64_t chunkStart;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: OVRBinaryChunk
    constexpr OVRBinaryChunk(::System::IO::Stream* chunkStream_ = {}, uint chunkLength_ = {}, int64_t chunkStart_ = {}) noexcept : chunkStream{chunkStream_}, chunkLength{chunkLength_}, chunkStart{chunkStart_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.IO.Stream chunkStream
    ::System::IO::Stream*& dyn_chunkStream();
    // Get instance field reference: public System.UInt32 chunkLength
    uint& dyn_chunkLength();
    // Get instance field reference: public System.Int64 chunkStart
    int64_t& dyn_chunkStart();
  }; // OVRBinaryChunk
  #pragma pack(pop)
  static check_size<sizeof(OVRBinaryChunk), 16 + sizeof(int64_t)> __GlobalNamespace_OVRBinaryChunkSizeCheck;
  static_assert(sizeof(OVRBinaryChunk) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
