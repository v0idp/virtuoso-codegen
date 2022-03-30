// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainStatus
  struct X509ChainStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainStatus, "System.Security.Cryptography.X509Certificates", "X509ChainStatus");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct X509ChainStatus/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags status
    // Size: 0x14
    // Offset: 0x0
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags) == 0x14);
    // private System.String info
    // Size: 0x8
    // Offset: 0x8
    ::StringW info;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: X509ChainStatus
    constexpr X509ChainStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status_ = {}, ::StringW info_ = {}) noexcept : status{status_}, info{info_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags status
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags& dyn_status();
    // Get instance field reference: private System.String info
    ::StringW& dyn_info();
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flag)
    // Offset: 0xAC8394
    X509ChainStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag);
    // static System.String GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flags)
    // Offset: 0xAC8560
    static ::StringW GetInformation(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags);
  }; // System.Security.Cryptography.X509Certificates.X509ChainStatus
  #pragma pack(pop)
  static check_size<sizeof(X509ChainStatus), 8 + sizeof(::StringW)> __System_Security_Cryptography_X509Certificates_X509ChainStatusSizeCheck;
  static_assert(sizeof(X509ChainStatus) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainStatus::X509ChainStatus
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainStatus::GetInformation
// Il2CppName: GetInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::GetInformation)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainStatus), "GetInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
