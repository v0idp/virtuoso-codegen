// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityDocument
  class SecurityDocument;
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Forward declaring namespace: System::Security::Util
namespace System::Security::Util {
  // Forward declaring type: Tokenizer
  class Tokenizer;
  // Forward declaring type: TokenizerStream
  class TokenizerStream;
}
// Completed forward declares
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Forward declaring type: Parser
  class Parser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Util::Parser);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Parser*, "System.Security.Util", "Parser");
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.Parser
  // [TokenAttribute] Offset: FFFFFFFF
  class Parser : public ::Il2CppObject {
    public:
    public:
    // private System.Security.SecurityDocument _doc
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::SecurityDocument* doc;
    // Field size check
    static_assert(sizeof(::System::Security::SecurityDocument*) == 0x8);
    // private System.Security.Util.Tokenizer _t
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Util::Tokenizer* t;
    // Field size check
    static_assert(sizeof(::System::Security::Util::Tokenizer*) == 0x8);
    public:
    // Get instance field reference: private System.Security.SecurityDocument _doc
    [[deprecated]] ::System::Security::SecurityDocument*& dyn__doc();
    // Get instance field reference: private System.Security.Util.Tokenizer _t
    [[deprecated]] ::System::Security::Util::Tokenizer*& dyn__t();
    // private System.Void .ctor(System.Security.Util.Tokenizer t)
    // Offset: 0x14CA3D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parser* New_ctor(::System::Security::Util::Tokenizer* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Util::Parser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parser*, creationType>(t)));
    }
    // System.Void .ctor(System.String input)
    // Offset: 0x14CA488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parser* New_ctor(::StringW input) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Util::Parser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parser*, creationType>(input)));
    }
    // System.Security.SecurityElement GetTopElement()
    // Offset: 0x14C989C
    ::System::Security::SecurityElement* GetTopElement();
    // private System.Void GetRequiredSizes(System.Security.Util.TokenizerStream stream, ref System.Int32 index)
    // Offset: 0x14C98B8
    void GetRequiredSizes(::System::Security::Util::TokenizerStream* stream, ByRef<int> index);
    // private System.Int32 DetermineFormat(System.Security.Util.TokenizerStream stream)
    // Offset: 0x14C9EC4
    int DetermineFormat(::System::Security::Util::TokenizerStream* stream);
    // private System.Void ParseContents()
    // Offset: 0x14CA0B0
    void ParseContents();
  }; // System.Security.Util.Parser
  #pragma pack(pop)
  static check_size<sizeof(Parser), 24 + sizeof(::System::Security::Util::Tokenizer*)> __System_Security_Util_ParserSizeCheck;
  static_assert(sizeof(Parser) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Util::Parser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Util::Parser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Util::Parser::GetTopElement
// Il2CppName: GetTopElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Security::Util::Parser::*)()>(&System::Security::Util::Parser::GetTopElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Parser*), "GetTopElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Parser::GetRequiredSizes
// Il2CppName: GetRequiredSizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Parser::*)(::System::Security::Util::TokenizerStream*, ByRef<int>)>(&System::Security::Util::Parser::GetRequiredSizes)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.Security.Util", "TokenizerStream")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Parser*), "GetRequiredSizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, index});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Parser::DetermineFormat
// Il2CppName: DetermineFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Util::Parser::*)(::System::Security::Util::TokenizerStream*)>(&System::Security::Util::Parser::DetermineFormat)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.Security.Util", "TokenizerStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Parser*), "DetermineFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Parser::ParseContents
// Il2CppName: ParseContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Parser::*)()>(&System::Security::Util::Parser::ParseContents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Parser*), "ParseContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
