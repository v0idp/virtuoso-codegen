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
// Forward declaring namespace: System::Security::Util
namespace System::Security::Util {
  // Forward declaring type: TokenizerShortBlock
  class TokenizerShortBlock;
  // Forward declaring type: TokenizerStringBlock
  class TokenizerStringBlock;
}
// Completed forward declares
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Forward declaring type: TokenizerStream
  class TokenizerStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Util::TokenizerStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::TokenizerStream*, "System.Security.Util", "TokenizerStream");
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.TokenizerStream
  // [TokenAttribute] Offset: FFFFFFFF
  class TokenizerStream : public ::Il2CppObject {
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
    // private System.Int32 m_countTokens
    // Size: 0x4
    // Offset: 0x10
    int m_countTokens;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_countTokens and: m_headTokens
    char __padding0[0x4] = {};
    // private System.Security.Util.TokenizerShortBlock m_headTokens
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Util::TokenizerShortBlock* m_headTokens;
    // Field size check
    static_assert(sizeof(::System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Security.Util.TokenizerShortBlock m_lastTokens
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Util::TokenizerShortBlock* m_lastTokens;
    // Field size check
    static_assert(sizeof(::System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Security.Util.TokenizerShortBlock m_currentTokens
    // Size: 0x8
    // Offset: 0x28
    ::System::Security::Util::TokenizerShortBlock* m_currentTokens;
    // Field size check
    static_assert(sizeof(::System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Int32 m_indexTokens
    // Size: 0x4
    // Offset: 0x30
    int m_indexTokens;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_indexTokens and: m_headStrings
    char __padding4[0x4] = {};
    // private System.Security.Util.TokenizerStringBlock m_headStrings
    // Size: 0x8
    // Offset: 0x38
    ::System::Security::Util::TokenizerStringBlock* m_headStrings;
    // Field size check
    static_assert(sizeof(::System::Security::Util::TokenizerStringBlock*) == 0x8);
    // private System.Security.Util.TokenizerStringBlock m_currentStrings
    // Size: 0x8
    // Offset: 0x40
    ::System::Security::Util::TokenizerStringBlock* m_currentStrings;
    // Field size check
    static_assert(sizeof(::System::Security::Util::TokenizerStringBlock*) == 0x8);
    // private System.Int32 m_indexStrings
    // Size: 0x4
    // Offset: 0x48
    int m_indexStrings;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 m_countTokens
    int& dyn_m_countTokens();
    // Get instance field reference: private System.Security.Util.TokenizerShortBlock m_headTokens
    ::System::Security::Util::TokenizerShortBlock*& dyn_m_headTokens();
    // Get instance field reference: private System.Security.Util.TokenizerShortBlock m_lastTokens
    ::System::Security::Util::TokenizerShortBlock*& dyn_m_lastTokens();
    // Get instance field reference: private System.Security.Util.TokenizerShortBlock m_currentTokens
    ::System::Security::Util::TokenizerShortBlock*& dyn_m_currentTokens();
    // Get instance field reference: private System.Int32 m_indexTokens
    int& dyn_m_indexTokens();
    // Get instance field reference: private System.Security.Util.TokenizerStringBlock m_headStrings
    ::System::Security::Util::TokenizerStringBlock*& dyn_m_headStrings();
    // Get instance field reference: private System.Security.Util.TokenizerStringBlock m_currentStrings
    ::System::Security::Util::TokenizerStringBlock*& dyn_m_currentStrings();
    // Get instance field reference: private System.Int32 m_indexStrings
    int& dyn_m_indexStrings();
    // System.Void AddToken(System.Int16 token)
    // Offset: 0xC9DF28
    void AddToken(int16_t token);
    // System.Void AddString(System.String str)
    // Offset: 0xC9E034
    void AddString(::StringW str);
    // System.Void Reset()
    // Offset: 0xC9E284
    void Reset();
    // System.Int16 GetNextFullToken()
    // Offset: 0xC9E2A0
    int16_t GetNextFullToken();
    // System.Int16 GetNextToken()
    // Offset: 0xC9E31C
    int16_t GetNextToken();
    // System.String GetNextString()
    // Offset: 0xC9E334
    ::StringW GetNextString();
    // System.Void ThrowAwayNextString()
    // Offset: 0xC9E3AC
    void ThrowAwayNextString();
    // System.Void TagLastToken(System.Int16 tag)
    // Offset: 0xC9E3B0
    void TagLastToken(int16_t tag);
    // System.Int32 GetTokenCount()
    // Offset: 0xC9E430
    int GetTokenCount();
    // System.Void GoToPosition(System.Int32 position)
    // Offset: 0xC9E438
    void GoToPosition(int position);
    // System.Void .ctor()
    // Offset: 0xC9E188
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenizerStream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Util::TokenizerStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenizerStream*, creationType>()));
    }
  }; // System.Security.Util.TokenizerStream
  #pragma pack(pop)
  static check_size<sizeof(TokenizerStream), 72 + sizeof(int)> __System_Security_Util_TokenizerStreamSizeCheck;
  static_assert(sizeof(TokenizerStream) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::AddToken
// Il2CppName: AddToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)(int16_t)>(&System::Security::Util::TokenizerStream::AddToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "AddToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::AddString
// Il2CppName: AddString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)(::StringW)>(&System::Security::Util::TokenizerStream::AddString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "AddString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GetNextFullToken
// Il2CppName: GetNextFullToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::GetNextFullToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GetNextFullToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GetNextToken
// Il2CppName: GetNextToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::GetNextToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GetNextToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GetNextString
// Il2CppName: GetNextString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::GetNextString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GetNextString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::ThrowAwayNextString
// Il2CppName: ThrowAwayNextString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::ThrowAwayNextString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "ThrowAwayNextString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::TagLastToken
// Il2CppName: TagLastToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)(int16_t)>(&System::Security::Util::TokenizerStream::TagLastToken)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "TagLastToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GetTokenCount
// Il2CppName: GetTokenCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::GetTokenCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GetTokenCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GoToPosition
// Il2CppName: GoToPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)(int)>(&System::Security::Util::TokenizerStream::GoToPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GoToPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
