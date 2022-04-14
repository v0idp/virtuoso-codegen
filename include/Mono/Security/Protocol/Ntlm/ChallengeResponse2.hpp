// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: Type2Message
  class Type2Message;
  // Forward declaring type: NtlmAuthLevel
  struct NtlmAuthLevel;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: ChallengeResponse2
  class ChallengeResponse2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::ChallengeResponse2);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::ChallengeResponse2*, "Mono.Security.Protocol.Ntlm", "ChallengeResponse2");
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.ChallengeResponse2
  // [TokenAttribute] Offset: FFFFFFFF
  class ChallengeResponse2 : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] magic
    static ::ArrayW<uint8_t> _get_magic();
    // Set static field: static private System.Byte[] magic
    static void _set_magic(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] nullEncMagic
    static ::ArrayW<uint8_t> _get_nullEncMagic();
    // Set static field: static private System.Byte[] nullEncMagic
    static void _set_nullEncMagic(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x163A4C8
    static void _cctor();
    // static private System.Byte[] Compute_LM(System.String password, System.Byte[] challenge)
    // Offset: 0x1638FD0
    static ::ArrayW<uint8_t> Compute_LM(::StringW password, ::ArrayW<uint8_t> challenge);
    // static private System.Byte[] Compute_NTLM_Password(System.String password)
    // Offset: 0x163980C
    static ::ArrayW<uint8_t> Compute_NTLM_Password(::StringW password);
    // static private System.Byte[] Compute_NTLM(System.String password, System.Byte[] challenge)
    // Offset: 0x1639910
    static ::ArrayW<uint8_t> Compute_NTLM(::StringW password, ::ArrayW<uint8_t> challenge);
    // static private System.Void Compute_NTLMv2_Session(System.String password, System.Byte[] challenge, out System.Byte[] lm, out System.Byte[] ntlm)
    // Offset: 0x1639988
    static void Compute_NTLMv2_Session(::StringW password, ::ArrayW<uint8_t> challenge, ByRef<::ArrayW<uint8_t>> lm, ByRef<::ArrayW<uint8_t>> ntlm);
    // static private System.Byte[] Compute_NTLMv2(Mono.Security.Protocol.Ntlm.Type2Message type2, System.String username, System.String password, System.String domain)
    // Offset: 0x1639B60
    static ::ArrayW<uint8_t> Compute_NTLMv2(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::StringW username, ::StringW password, ::StringW domain);
    // static public System.Void Compute(Mono.Security.Protocol.Ntlm.Type2Message type2, Mono.Security.Protocol.Ntlm.NtlmAuthLevel level, System.String username, System.String password, System.String domain, out System.Byte[] lm, out System.Byte[] ntlm)
    // Offset: 0x163A0B0
    static void Compute(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel level, ::StringW username, ::StringW password, ::StringW domain, ByRef<::ArrayW<uint8_t>> lm, ByRef<::ArrayW<uint8_t>> ntlm);
    // static private System.Byte[] GetResponse(System.Byte[] challenge, System.Byte[] pwd)
    // Offset: 0x16394EC
    static ::ArrayW<uint8_t> GetResponse(::ArrayW<uint8_t> challenge, ::ArrayW<uint8_t> pwd);
    // static private System.Byte[] PrepareDESKey(System.Byte[] key56bits, System.Int32 position)
    // Offset: 0x163A2C4
    static ::ArrayW<uint8_t> PrepareDESKey(::ArrayW<uint8_t> key56bits, int position);
    // static private System.Byte[] PasswordToKey(System.String password, System.Int32 position)
    // Offset: 0x1639360
    static ::ArrayW<uint8_t> PasswordToKey(::StringW password, int position);
  }; // Mono.Security.Protocol.Ntlm.ChallengeResponse2
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_LM
// Il2CppName: Compute_LM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_LM)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* challenge = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "Compute_LM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, challenge});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM_Password
// Il2CppName: Compute_NTLM_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM_Password)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "Compute_NTLM_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM
// Il2CppName: Compute_NTLM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* challenge = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "Compute_NTLM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, challenge});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2_Session
// Il2CppName: Compute_NTLMv2_Session
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>, ByRef<::ArrayW<uint8_t>>, ByRef<::ArrayW<uint8_t>>)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2_Session)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* challenge = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* lm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* ntlm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "Compute_NTLMv2_Session", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, challenge, lm, ntlm});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2
// Il2CppName: Compute_NTLMv2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::StringW, ::StringW, ::StringW)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2)> {
  static const MethodInfo* get() {
    static auto* type2 = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Ntlm", "Type2Message")->byval_arg;
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* domain = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "Compute_NTLMv2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type2, username, password, domain});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute
// Il2CppName: Compute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, ::StringW, ::StringW, ::StringW, ByRef<::ArrayW<uint8_t>>, ByRef<::ArrayW<uint8_t>>)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute)> {
  static const MethodInfo* get() {
    static auto* type2 = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Ntlm", "Type2Message")->byval_arg;
    static auto* level = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Ntlm", "NtlmAuthLevel")->byval_arg;
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* domain = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* ntlm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "Compute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type2, level, username, password, domain, lm, ntlm});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetResponse
// Il2CppName: GetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetResponse)> {
  static const MethodInfo* get() {
    static auto* challenge = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pwd = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "GetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge, pwd});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::PrepareDESKey
// Il2CppName: PrepareDESKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::PrepareDESKey)> {
  static const MethodInfo* get() {
    static auto* key56bits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "PrepareDESKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key56bits, position});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse2::PasswordToKey
// Il2CppName: PasswordToKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, int)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse2::PasswordToKey)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse2*), "PasswordToKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, position});
  }
};
