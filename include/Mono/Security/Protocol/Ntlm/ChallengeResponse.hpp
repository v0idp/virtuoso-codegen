// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: ChallengeResponse
  class ChallengeResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::ChallengeResponse);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::ChallengeResponse*, "Mono.Security.Protocol.Ntlm", "ChallengeResponse");
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.ChallengeResponse
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: 6F8624
  class ChallengeResponse : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: challenge
    char __padding0[0x7] = {};
    // private System.Byte[] _challenge
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> challenge;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] _lmpwd
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> lmpwd;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] _ntpwd
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> ntpwd;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private System.Byte[] magic
    static ::ArrayW<uint8_t> _get_magic();
    // Set static field: static private System.Byte[] magic
    static void _set_magic(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] nullEncMagic
    static ::ArrayW<uint8_t> _get_nullEncMagic();
    // Set static field: static private System.Byte[] nullEncMagic
    static void _set_nullEncMagic(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Boolean _disposed
    [[deprecated("Use field access instead!")]] bool& dyn__disposed();
    // Get instance field reference: private System.Byte[] _challenge
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__challenge();
    // Get instance field reference: private System.Byte[] _lmpwd
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__lmpwd();
    // Get instance field reference: private System.Byte[] _ntpwd
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__ntpwd();
    // public System.Void set_Password(System.String value)
    // Offset: 0x16380B4
    void set_Password(::StringW value);
    // public System.Void set_Challenge(System.Byte[] value)
    // Offset: 0x163850C
    void set_Challenge(::ArrayW<uint8_t> value);
    // public System.Byte[] get_LM()
    // Offset: 0x16388B0
    ::ArrayW<uint8_t> get_LM();
    // public System.Byte[] get_NT()
    // Offset: 0x1638C1C
    ::ArrayW<uint8_t> get_NT();
    // public System.Void .ctor()
    // Offset: 0x1637FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChallengeResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Ntlm::ChallengeResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChallengeResponse*, creationType>()));
    }
    // public System.Void .ctor(System.String password, System.Byte[] challenge)
    // Offset: 0x1638070
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChallengeResponse* New_ctor(::StringW password, ::ArrayW<uint8_t> challenge) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Ntlm::ChallengeResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChallengeResponse*, creationType>(password, challenge)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1638EFC
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0x163868C
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1638C80
    void Dispose(bool disposing);
    // private System.Byte[] GetResponse(System.Byte[] pwd)
    // Offset: 0x1638914
    ::ArrayW<uint8_t> GetResponse(::ArrayW<uint8_t> pwd);
    // private System.Byte[] PrepareDESKey(System.Byte[] key56bits, System.Int32 position)
    // Offset: 0x1638CF8
    ::ArrayW<uint8_t> PrepareDESKey(::ArrayW<uint8_t> key56bits, int position);
    // private System.Byte[] PasswordToKey(System.String password, System.Int32 position)
    // Offset: 0x16386FC
    ::ArrayW<uint8_t> PasswordToKey(::StringW password, int position);
    // protected override System.Void Finalize()
    // Offset: 0x1638618
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Mono.Security.Protocol.Ntlm.ChallengeResponse
  #pragma pack(pop)
  static check_size<sizeof(ChallengeResponse), 40 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_Protocol_Ntlm_ChallengeResponseSizeCheck;
  static_assert(sizeof(ChallengeResponse) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::set_Password
// Il2CppName: set_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::set_Password)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "set_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::set_Challenge
// Il2CppName: set_Challenge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::set_Challenge)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "set_Challenge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::get_LM
// Il2CppName: get_LM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::get_LM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "get_LM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::get_NT
// Il2CppName: get_NT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::get_NT)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "get_NT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(bool)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::GetResponse
// Il2CppName: GetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::GetResponse)> {
  static const MethodInfo* get() {
    static auto* pwd = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "GetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pwd});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::PrepareDESKey
// Il2CppName: PrepareDESKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::PrepareDESKey)> {
  static const MethodInfo* get() {
    static auto* key56bits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "PrepareDESKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key56bits, position});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::PasswordToKey
// Il2CppName: PasswordToKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::StringW, int)>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::PasswordToKey)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "PasswordToKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, position});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::ChallengeResponse::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&Mono::Security::Protocol::Ntlm::ChallengeResponse::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::ChallengeResponse*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
