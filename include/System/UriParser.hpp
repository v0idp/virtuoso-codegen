// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.UriSyntaxFlags
#include "System/UriSyntaxFlags.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: UriFormatException
  class UriFormatException;
  // Forward declaring type: UriComponents
  struct UriComponents;
  // Forward declaring type: UriFormat
  struct UriFormat;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: UriParser
  class UriParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::UriParser);
DEFINE_IL2CPP_ARG_TYPE(::System::UriParser*, "System", "UriParser");
// Type namespace: System
namespace System {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.UriParser
  // [TokenAttribute] Offset: FFFFFFFF
  class UriParser : public ::Il2CppObject {
    public:
    // Nested type: ::System::UriParser::UriQuirksVersion
    struct UriQuirksVersion;
    // Nested type: ::System::UriParser::BuiltInUriParser
    class BuiltInUriParser;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.UriParser/System.UriQuirksVersion
    // [TokenAttribute] Offset: FFFFFFFF
    struct UriQuirksVersion/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: UriQuirksVersion
      constexpr UriQuirksVersion(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.UriParser/System.UriQuirksVersion V2
      static constexpr const int V2 = 2;
      // Get static field: static public System.UriParser/System.UriQuirksVersion V2
      static ::System::UriParser::UriQuirksVersion _get_V2();
      // Set static field: static public System.UriParser/System.UriQuirksVersion V2
      static void _set_V2(::System::UriParser::UriQuirksVersion value);
      // static field const value: static public System.UriParser/System.UriQuirksVersion V3
      static constexpr const int V3 = 3;
      // Get static field: static public System.UriParser/System.UriQuirksVersion V3
      static ::System::UriParser::UriQuirksVersion _get_V3();
      // Set static field: static public System.UriParser/System.UriQuirksVersion V3
      static void _set_V3(::System::UriParser::UriQuirksVersion value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // System.UriParser/System.UriQuirksVersion
    #pragma pack(pop)
    static check_size<sizeof(UriParser::UriQuirksVersion), 0 + sizeof(int)> __System_UriParser_UriQuirksVersionSizeCheck;
    static_assert(sizeof(UriParser::UriQuirksVersion) == 0x4);
    public:
    // private System.UriSyntaxFlags m_Flags
    // Size: 0x4
    // Offset: 0x10
    ::System::UriSyntaxFlags m_Flags;
    // Field size check
    static_assert(sizeof(::System::UriSyntaxFlags) == 0x4);
    // private System.UriSyntaxFlags m_UpdatableFlags
    // Size: 0x4
    // Offset: 0x14
    ::System::UriSyntaxFlags m_UpdatableFlags;
    // Field size check
    static_assert(sizeof(::System::UriSyntaxFlags) == 0x4);
    // private System.Boolean m_UpdatableFlagsUsed
    // Size: 0x1
    // Offset: 0x18
    bool m_UpdatableFlagsUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UpdatableFlagsUsed and: m_Port
    char __padding2[0x3] = {};
    // private System.Int32 m_Port
    // Size: 0x4
    // Offset: 0x1C
    int m_Port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_Scheme
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_Scheme;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // static field const value: static private System.UriSyntaxFlags SchemeOnlyFlags
    static constexpr const int SchemeOnlyFlags = 16;
    // Get static field: static private System.UriSyntaxFlags SchemeOnlyFlags
    static ::System::UriSyntaxFlags _get_SchemeOnlyFlags();
    // Set static field: static private System.UriSyntaxFlags SchemeOnlyFlags
    static void _set_SchemeOnlyFlags(::System::UriSyntaxFlags value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_Table
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* _get_m_Table();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_Table
    static void _set_m_Table(::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_TempTable
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* _get_m_TempTable();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_TempTable
    static void _set_m_TempTable(::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* value);
    // static field const value: static private System.UriSyntaxFlags c_UpdatableFlags
    static constexpr const int c_UpdatableFlags = 33554432;
    // Get static field: static private System.UriSyntaxFlags c_UpdatableFlags
    static ::System::UriSyntaxFlags _get_c_UpdatableFlags();
    // Set static field: static private System.UriSyntaxFlags c_UpdatableFlags
    static void _set_c_UpdatableFlags(::System::UriSyntaxFlags value);
    // static field const value: static System.Int32 NoDefaultPort
    static constexpr const int NoDefaultPort = -1;
    // Get static field: static System.Int32 NoDefaultPort
    static int _get_NoDefaultPort();
    // Set static field: static System.Int32 NoDefaultPort
    static void _set_NoDefaultPort(int value);
    // static field const value: static private System.Int32 c_InitialTableSize
    static constexpr const int c_InitialTableSize = 25;
    // Get static field: static private System.Int32 c_InitialTableSize
    static int _get_c_InitialTableSize();
    // Set static field: static private System.Int32 c_InitialTableSize
    static void _set_c_InitialTableSize(int value);
    // Get static field: static System.UriParser HttpUri
    static ::System::UriParser* _get_HttpUri();
    // Set static field: static System.UriParser HttpUri
    static void _set_HttpUri(::System::UriParser* value);
    // Get static field: static System.UriParser HttpsUri
    static ::System::UriParser* _get_HttpsUri();
    // Set static field: static System.UriParser HttpsUri
    static void _set_HttpsUri(::System::UriParser* value);
    // Get static field: static System.UriParser WsUri
    static ::System::UriParser* _get_WsUri();
    // Set static field: static System.UriParser WsUri
    static void _set_WsUri(::System::UriParser* value);
    // Get static field: static System.UriParser WssUri
    static ::System::UriParser* _get_WssUri();
    // Set static field: static System.UriParser WssUri
    static void _set_WssUri(::System::UriParser* value);
    // Get static field: static System.UriParser FtpUri
    static ::System::UriParser* _get_FtpUri();
    // Set static field: static System.UriParser FtpUri
    static void _set_FtpUri(::System::UriParser* value);
    // Get static field: static System.UriParser FileUri
    static ::System::UriParser* _get_FileUri();
    // Set static field: static System.UriParser FileUri
    static void _set_FileUri(::System::UriParser* value);
    // Get static field: static System.UriParser GopherUri
    static ::System::UriParser* _get_GopherUri();
    // Set static field: static System.UriParser GopherUri
    static void _set_GopherUri(::System::UriParser* value);
    // Get static field: static System.UriParser NntpUri
    static ::System::UriParser* _get_NntpUri();
    // Set static field: static System.UriParser NntpUri
    static void _set_NntpUri(::System::UriParser* value);
    // Get static field: static System.UriParser NewsUri
    static ::System::UriParser* _get_NewsUri();
    // Set static field: static System.UriParser NewsUri
    static void _set_NewsUri(::System::UriParser* value);
    // Get static field: static System.UriParser MailToUri
    static ::System::UriParser* _get_MailToUri();
    // Set static field: static System.UriParser MailToUri
    static void _set_MailToUri(::System::UriParser* value);
    // Get static field: static System.UriParser UuidUri
    static ::System::UriParser* _get_UuidUri();
    // Set static field: static System.UriParser UuidUri
    static void _set_UuidUri(::System::UriParser* value);
    // Get static field: static System.UriParser TelnetUri
    static ::System::UriParser* _get_TelnetUri();
    // Set static field: static System.UriParser TelnetUri
    static void _set_TelnetUri(::System::UriParser* value);
    // Get static field: static System.UriParser LdapUri
    static ::System::UriParser* _get_LdapUri();
    // Set static field: static System.UriParser LdapUri
    static void _set_LdapUri(::System::UriParser* value);
    // Get static field: static System.UriParser NetTcpUri
    static ::System::UriParser* _get_NetTcpUri();
    // Set static field: static System.UriParser NetTcpUri
    static void _set_NetTcpUri(::System::UriParser* value);
    // Get static field: static System.UriParser NetPipeUri
    static ::System::UriParser* _get_NetPipeUri();
    // Set static field: static System.UriParser NetPipeUri
    static void _set_NetPipeUri(::System::UriParser* value);
    // Get static field: static System.UriParser VsMacrosUri
    static ::System::UriParser* _get_VsMacrosUri();
    // Set static field: static System.UriParser VsMacrosUri
    static void _set_VsMacrosUri(::System::UriParser* value);
    // Get static field: static private readonly System.UriParser/System.UriQuirksVersion s_QuirksVersion
    static ::System::UriParser::UriQuirksVersion _get_s_QuirksVersion();
    // Set static field: static private readonly System.UriParser/System.UriQuirksVersion s_QuirksVersion
    static void _set_s_QuirksVersion(::System::UriParser::UriQuirksVersion value);
    // static field const value: static private System.Int32 c_MaxCapacity
    static constexpr const int c_MaxCapacity = 512;
    // Get static field: static private System.Int32 c_MaxCapacity
    static int _get_c_MaxCapacity();
    // Set static field: static private System.Int32 c_MaxCapacity
    static void _set_c_MaxCapacity(int value);
    // static field const value: static private System.UriSyntaxFlags UnknownV1SyntaxFlags
    static constexpr const int UnknownV1SyntaxFlags = 351342590;
    // Get static field: static private System.UriSyntaxFlags UnknownV1SyntaxFlags
    static ::System::UriSyntaxFlags _get_UnknownV1SyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags UnknownV1SyntaxFlags
    static void _set_UnknownV1SyntaxFlags(::System::UriSyntaxFlags value);
    // Get static field: static private readonly System.UriSyntaxFlags HttpSyntaxFlags
    static ::System::UriSyntaxFlags _get_HttpSyntaxFlags();
    // Set static field: static private readonly System.UriSyntaxFlags HttpSyntaxFlags
    static void _set_HttpSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags FtpSyntaxFlags
    static constexpr const int FtpSyntaxFlags = 367005533;
    // Get static field: static private System.UriSyntaxFlags FtpSyntaxFlags
    static ::System::UriSyntaxFlags _get_FtpSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags FtpSyntaxFlags
    static void _set_FtpSyntaxFlags(::System::UriSyntaxFlags value);
    // Get static field: static private readonly System.UriSyntaxFlags FileSyntaxFlags
    static ::System::UriSyntaxFlags _get_FileSyntaxFlags();
    // Set static field: static private readonly System.UriSyntaxFlags FileSyntaxFlags
    static void _set_FileSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags VsmacrosSyntaxFlags
    static constexpr const int VsmacrosSyntaxFlags = 399519697;
    // Get static field: static private System.UriSyntaxFlags VsmacrosSyntaxFlags
    static ::System::UriSyntaxFlags _get_VsmacrosSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags VsmacrosSyntaxFlags
    static void _set_VsmacrosSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags GopherSyntaxFlags
    static constexpr const int GopherSyntaxFlags = 337645405;
    // Get static field: static private System.UriSyntaxFlags GopherSyntaxFlags
    static ::System::UriSyntaxFlags _get_GopherSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags GopherSyntaxFlags
    static void _set_GopherSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags NewsSyntaxFlags
    static constexpr const int NewsSyntaxFlags = 268435536;
    // Get static field: static private System.UriSyntaxFlags NewsSyntaxFlags
    static ::System::UriSyntaxFlags _get_NewsSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags NewsSyntaxFlags
    static void _set_NewsSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags NntpSyntaxFlags
    static constexpr const int NntpSyntaxFlags = 337645405;
    // Get static field: static private System.UriSyntaxFlags NntpSyntaxFlags
    static ::System::UriSyntaxFlags _get_NntpSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags NntpSyntaxFlags
    static void _set_NntpSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags TelnetSyntaxFlags
    static constexpr const int TelnetSyntaxFlags = 337645405;
    // Get static field: static private System.UriSyntaxFlags TelnetSyntaxFlags
    static ::System::UriSyntaxFlags _get_TelnetSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags TelnetSyntaxFlags
    static void _set_TelnetSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags LdapSyntaxFlags
    static constexpr const int LdapSyntaxFlags = 337645565;
    // Get static field: static private System.UriSyntaxFlags LdapSyntaxFlags
    static ::System::UriSyntaxFlags _get_LdapSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags LdapSyntaxFlags
    static void _set_LdapSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags MailtoSyntaxFlags
    static constexpr const int MailtoSyntaxFlags = 335564796;
    // Get static field: static private System.UriSyntaxFlags MailtoSyntaxFlags
    static ::System::UriSyntaxFlags _get_MailtoSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags MailtoSyntaxFlags
    static void _set_MailtoSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags NetPipeSyntaxFlags
    static constexpr const int NetPipeSyntaxFlags = 400559729;
    // Get static field: static private System.UriSyntaxFlags NetPipeSyntaxFlags
    static ::System::UriSyntaxFlags _get_NetPipeSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags NetPipeSyntaxFlags
    static void _set_NetPipeSyntaxFlags(::System::UriSyntaxFlags value);
    // static field const value: static private System.UriSyntaxFlags NetTcpSyntaxFlags
    static constexpr const int NetTcpSyntaxFlags = 400559737;
    // Get static field: static private System.UriSyntaxFlags NetTcpSyntaxFlags
    static ::System::UriSyntaxFlags _get_NetTcpSyntaxFlags();
    // Set static field: static private System.UriSyntaxFlags NetTcpSyntaxFlags
    static void _set_NetTcpSyntaxFlags(::System::UriSyntaxFlags value);
    // Get instance field reference: private System.UriSyntaxFlags m_Flags
    [[deprecated]] ::System::UriSyntaxFlags& dyn_m_Flags();
    // Get instance field reference: private System.UriSyntaxFlags m_UpdatableFlags
    [[deprecated]] ::System::UriSyntaxFlags& dyn_m_UpdatableFlags();
    // Get instance field reference: private System.Boolean m_UpdatableFlagsUsed
    [[deprecated]] bool& dyn_m_UpdatableFlagsUsed();
    // Get instance field reference: private System.Int32 m_Port
    [[deprecated]] int& dyn_m_Port();
    // Get instance field reference: private System.String m_Scheme
    [[deprecated]] ::StringW& dyn_m_Scheme();
    // System.String get_SchemeName()
    // Offset: 0xC3F42C
    ::StringW get_SchemeName();
    // System.Int32 get_DefaultPort()
    // Offset: 0xC3F434
    int get_DefaultPort();
    // static System.Boolean get_ShouldUseLegacyV2Quirks()
    // Offset: 0xC3F288
    static bool get_ShouldUseLegacyV2Quirks();
    // System.UriSyntaxFlags get_Flags()
    // Offset: 0xC400A8
    ::System::UriSyntaxFlags get_Flags();
    // System.Boolean get_IsSimple()
    // Offset: 0xC40490
    bool get_IsSimple();
    // static private System.Void .cctor()
    // Offset: 0xC3F898
    static void _cctor();
    // System.Void .ctor(System.UriSyntaxFlags flags)
    // Offset: 0xC40118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriParser* New_ctor(::System::UriSyntaxFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::UriParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriParser*, creationType>(flags)));
    }
    // protected System.UriParser OnNewUri()
    // Offset: 0xC3F43C
    ::System::UriParser* OnNewUri();
    // protected System.Void InitializeAndValidate(System.Uri uri, out System.UriFormatException parsingError)
    // Offset: 0xC3F440
    void InitializeAndValidate(::System::Uri* uri, ByRef<::System::UriFormatException*> parsingError);
    // protected System.String Resolve(System.Uri baseUri, System.Uri relativeUri, out System.UriFormatException parsingError)
    // Offset: 0xC3F474
    ::StringW Resolve(::System::Uri* baseUri, ::System::Uri* relativeUri, ByRef<::System::UriFormatException*> parsingError);
    // protected System.String GetComponents(System.Uri uri, System.UriComponents components, System.UriFormat format)
    // Offset: 0xC3F670
    ::StringW GetComponents(::System::Uri* uri, ::System::UriComponents components, ::System::UriFormat format);
    // System.Boolean NotAny(System.UriSyntaxFlags flags)
    // Offset: 0xC3D748
    bool NotAny(::System::UriSyntaxFlags flags);
    // System.Boolean InFact(System.UriSyntaxFlags flags)
    // Offset: 0xC3D728
    bool InFact(::System::UriSyntaxFlags flags);
    // System.Boolean IsAllSet(System.UriSyntaxFlags flags)
    // Offset: 0xC40110
    bool IsAllSet(::System::UriSyntaxFlags flags);
    // private System.Boolean IsFullMatch(System.UriSyntaxFlags flags, System.UriSyntaxFlags expected)
    // Offset: 0xC400B0
    bool IsFullMatch(::System::UriSyntaxFlags flags, ::System::UriSyntaxFlags expected);
    // static System.UriParser FindOrFetchAsUnknownV1Syntax(System.String lwrCaseScheme)
    // Offset: 0xC40188
    static ::System::UriParser* FindOrFetchAsUnknownV1Syntax(::StringW lwrCaseScheme);
    // static System.UriParser GetSyntax(System.String lwrCaseScheme)
    // Offset: 0xC3D644
    static ::System::UriParser* GetSyntax(::StringW lwrCaseScheme);
    // System.UriParser InternalOnNewUri()
    // Offset: 0xC4049C
    ::System::UriParser* InternalOnNewUri();
    // System.Void InternalValidate(System.Uri thisUri, out System.UriFormatException parsingError)
    // Offset: 0xC404EC
    void InternalValidate(::System::Uri* thisUri, ByRef<::System::UriFormatException*> parsingError);
    // System.String InternalResolve(System.Uri thisBaseUri, System.Uri uriLink, out System.UriFormatException parsingError)
    // Offset: 0xC404F8
    ::StringW InternalResolve(::System::Uri* thisBaseUri, ::System::Uri* uriLink, ByRef<::System::UriFormatException*> parsingError);
    // System.String InternalGetComponents(System.Uri thisUri, System.UriComponents uriComponents, System.UriFormat uriFormat)
    // Offset: 0xC40504
    ::StringW InternalGetComponents(::System::Uri* thisUri, ::System::UriComponents uriComponents, ::System::UriFormat uriFormat);
  }; // System.UriParser
  #pragma pack(pop)
  static check_size<sizeof(UriParser), 32 + sizeof(::StringW)> __System_UriParserSizeCheck;
  static_assert(sizeof(UriParser) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::UriParser::UriQuirksVersion, "System", "UriParser/UriQuirksVersion");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UriParser::get_SchemeName
// Il2CppName: get_SchemeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UriParser::*)()>(&System::UriParser::get_SchemeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "get_SchemeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriParser::get_DefaultPort
// Il2CppName: get_DefaultPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::UriParser::*)()>(&System::UriParser::get_DefaultPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "get_DefaultPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriParser::get_ShouldUseLegacyV2Quirks
// Il2CppName: get_ShouldUseLegacyV2Quirks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::UriParser::get_ShouldUseLegacyV2Quirks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "get_ShouldUseLegacyV2Quirks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriParser::get_Flags
// Il2CppName: get_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriSyntaxFlags (System::UriParser::*)()>(&System::UriParser::get_Flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "get_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriParser::get_IsSimple
// Il2CppName: get_IsSimple
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UriParser::*)()>(&System::UriParser::get_IsSimple)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "get_IsSimple", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriParser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::UriParser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UriParser::OnNewUri
// Il2CppName: OnNewUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser* (System::UriParser::*)()>(&System::UriParser::OnNewUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "OnNewUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriParser::InitializeAndValidate
// Il2CppName: InitializeAndValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UriParser::*)(::System::Uri*, ByRef<::System::UriFormatException*>)>(&System::UriParser::InitializeAndValidate)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* parsingError = &::il2cpp_utils::GetClassFromName("System", "UriFormatException")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "InitializeAndValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, parsingError});
  }
};
// Writing MetadataGetter for method: System::UriParser::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UriParser::*)(::System::Uri*, ::System::Uri*, ByRef<::System::UriFormatException*>)>(&System::UriParser::Resolve)> {
  static const MethodInfo* get() {
    static auto* baseUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* relativeUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* parsingError = &::il2cpp_utils::GetClassFromName("System", "UriFormatException")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseUri, relativeUri, parsingError});
  }
};
// Writing MetadataGetter for method: System::UriParser::GetComponents
// Il2CppName: GetComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UriParser::*)(::System::Uri*, ::System::UriComponents, ::System::UriFormat)>(&System::UriParser::GetComponents)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* components = &::il2cpp_utils::GetClassFromName("System", "UriComponents")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "UriFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "GetComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, components, format});
  }
};
// Writing MetadataGetter for method: System::UriParser::NotAny
// Il2CppName: NotAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UriParser::*)(::System::UriSyntaxFlags)>(&System::UriParser::NotAny)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UriSyntaxFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "NotAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: System::UriParser::InFact
// Il2CppName: InFact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UriParser::*)(::System::UriSyntaxFlags)>(&System::UriParser::InFact)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UriSyntaxFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "InFact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: System::UriParser::IsAllSet
// Il2CppName: IsAllSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UriParser::*)(::System::UriSyntaxFlags)>(&System::UriParser::IsAllSet)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UriSyntaxFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "IsAllSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: System::UriParser::IsFullMatch
// Il2CppName: IsFullMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UriParser::*)(::System::UriSyntaxFlags, ::System::UriSyntaxFlags)>(&System::UriParser::IsFullMatch)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UriSyntaxFlags")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "UriSyntaxFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "IsFullMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags, expected});
  }
};
// Writing MetadataGetter for method: System::UriParser::FindOrFetchAsUnknownV1Syntax
// Il2CppName: FindOrFetchAsUnknownV1Syntax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser* (*)(::StringW)>(&System::UriParser::FindOrFetchAsUnknownV1Syntax)> {
  static const MethodInfo* get() {
    static auto* lwrCaseScheme = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "FindOrFetchAsUnknownV1Syntax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lwrCaseScheme});
  }
};
// Writing MetadataGetter for method: System::UriParser::GetSyntax
// Il2CppName: GetSyntax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser* (*)(::StringW)>(&System::UriParser::GetSyntax)> {
  static const MethodInfo* get() {
    static auto* lwrCaseScheme = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "GetSyntax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lwrCaseScheme});
  }
};
// Writing MetadataGetter for method: System::UriParser::InternalOnNewUri
// Il2CppName: InternalOnNewUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser* (System::UriParser::*)()>(&System::UriParser::InternalOnNewUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "InternalOnNewUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriParser::InternalValidate
// Il2CppName: InternalValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UriParser::*)(::System::Uri*, ByRef<::System::UriFormatException*>)>(&System::UriParser::InternalValidate)> {
  static const MethodInfo* get() {
    static auto* thisUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* parsingError = &::il2cpp_utils::GetClassFromName("System", "UriFormatException")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "InternalValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thisUri, parsingError});
  }
};
// Writing MetadataGetter for method: System::UriParser::InternalResolve
// Il2CppName: InternalResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UriParser::*)(::System::Uri*, ::System::Uri*, ByRef<::System::UriFormatException*>)>(&System::UriParser::InternalResolve)> {
  static const MethodInfo* get() {
    static auto* thisBaseUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* uriLink = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* parsingError = &::il2cpp_utils::GetClassFromName("System", "UriFormatException")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "InternalResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thisBaseUri, uriLink, parsingError});
  }
};
// Writing MetadataGetter for method: System::UriParser::InternalGetComponents
// Il2CppName: InternalGetComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UriParser::*)(::System::Uri*, ::System::UriComponents, ::System::UriFormat)>(&System::UriParser::InternalGetComponents)> {
  static const MethodInfo* get() {
    static auto* thisUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* uriComponents = &::il2cpp_utils::GetClassFromName("System", "UriComponents")->byval_arg;
    static auto* uriFormat = &::il2cpp_utils::GetClassFromName("System", "UriFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriParser*), "InternalGetComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thisUri, uriComponents, uriFormat});
  }
};
