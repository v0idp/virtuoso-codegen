// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: DeflateInput
  class DeflateInput;
  // Forward declaring type: OutputBuffer
  class OutputBuffer;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: CopyEncoder
  class CopyEncoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::CopyEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CopyEncoder*, "System.IO.Compression", "CopyEncoder");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.CopyEncoder
  // [TokenAttribute] Offset: FFFFFFFF
  class CopyEncoder : public ::Il2CppObject {
    public:
    // public System.Void GetBlock(System.IO.Compression.DeflateInput input, System.IO.Compression.OutputBuffer output, System.Boolean isFinal)
    // Offset: 0x111AEC4
    void GetBlock(::System::IO::Compression::DeflateInput* input, ::System::IO::Compression::OutputBuffer* output, bool isFinal);
    // private System.Void WriteLenNLen(System.UInt16 len, System.IO.Compression.OutputBuffer output)
    // Offset: 0x111B19C
    void WriteLenNLen(uint16_t len, ::System::IO::Compression::OutputBuffer* output);
  }; // System.IO.Compression.CopyEncoder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::CopyEncoder::GetBlock
// Il2CppName: GetBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::CopyEncoder::*)(::System::IO::Compression::DeflateInput*, ::System::IO::Compression::OutputBuffer*, bool)>(&System::IO::Compression::CopyEncoder::GetBlock)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "DeflateInput")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "OutputBuffer")->byval_arg;
    static auto* isFinal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CopyEncoder*), "GetBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output, isFinal});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CopyEncoder::WriteLenNLen
// Il2CppName: WriteLenNLen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::CopyEncoder::*)(uint16_t, ::System::IO::Compression::OutputBuffer*)>(&System::IO::Compression::CopyEncoder::WriteLenNLen)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "OutputBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CopyEncoder*), "WriteLenNLen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len, output});
  }
};
