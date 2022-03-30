// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Util.Tokenizer
#include "System/Security/Util/Tokenizer.hpp"
// Including type: System.Security.Util.Tokenizer/System.Security.Util.ITokenReader
#include "System/Security/Util/Tokenizer_ITokenReader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StreamReader
  class StreamReader;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Util::Tokenizer::StreamTokenReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer::StreamTokenReader*, "System.Security.Util", "Tokenizer/StreamTokenReader");
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.Tokenizer/System.Security.Util.StreamTokenReader
  // [TokenAttribute] Offset: FFFFFFFF
  class Tokenizer::StreamTokenReader : public ::Il2CppObject/*, public ::System::Security::Util::Tokenizer::ITokenReader*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.IO.StreamReader _in
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::StreamReader* in;
    // Field size check
    static_assert(sizeof(::System::IO::StreamReader*) == 0x8);
    // System.Int32 _numCharRead
    // Size: 0x4
    // Offset: 0x18
    int numCharRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Security::Util::Tokenizer::ITokenReader
    operator ::System::Security::Util::Tokenizer::ITokenReader() noexcept {
      return *reinterpret_cast<::System::Security::Util::Tokenizer::ITokenReader*>(this);
    }
    // Get instance field reference: System.IO.StreamReader _in
    ::System::IO::StreamReader*& dyn__in();
    // Get instance field reference: System.Int32 _numCharRead
    int& dyn__numCharRead();
    // System.Int32 get_NumCharEncountered()
    // Offset: 0x108DA28
    int get_NumCharEncountered();
    // System.Void .ctor(System.IO.StreamReader input)
    // Offset: 0x108D9B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tokenizer::StreamTokenReader* New_ctor(::System::IO::StreamReader* input) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Util::Tokenizer::StreamTokenReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tokenizer::StreamTokenReader*, creationType>(input)));
    }
    // public System.Int32 Read()
    // Offset: 0x108D9E0
    int Read();
  }; // System.Security.Util.Tokenizer/System.Security.Util.StreamTokenReader
  #pragma pack(pop)
  static check_size<sizeof(Tokenizer::StreamTokenReader), 24 + sizeof(int)> __System_Security_Util_Tokenizer_StreamTokenReaderSizeCheck;
  static_assert(sizeof(Tokenizer::StreamTokenReader) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::StreamTokenReader::get_NumCharEncountered
// Il2CppName: get_NumCharEncountered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Util::Tokenizer::StreamTokenReader::*)()>(&System::Security::Util::Tokenizer::StreamTokenReader::get_NumCharEncountered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer::StreamTokenReader*), "get_NumCharEncountered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::StreamTokenReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::StreamTokenReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Util::Tokenizer::StreamTokenReader::*)()>(&System::Security::Util::Tokenizer::StreamTokenReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer::StreamTokenReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
