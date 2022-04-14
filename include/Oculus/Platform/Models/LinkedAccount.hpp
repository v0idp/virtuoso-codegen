// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.ServiceProvider
#include "Oculus/Platform/ServiceProvider.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LinkedAccount
  class LinkedAccount;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LinkedAccount);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LinkedAccount*, "Oculus.Platform.Models", "LinkedAccount");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LinkedAccount
  // [TokenAttribute] Offset: FFFFFFFF
  class LinkedAccount : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String AccessToken
    // Size: 0x8
    // Offset: 0x10
    ::StringW AccessToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly Oculus.Platform.ServiceProvider ServiceProvider
    // Size: 0x4
    // Offset: 0x18
    ::Oculus::Platform::ServiceProvider ServiceProvider;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::ServiceProvider) == 0x4);
    // Padding between fields: ServiceProvider and: UserId
    char __padding1[0x4] = {};
    // public readonly System.String UserId
    // Size: 0x8
    // Offset: 0x20
    ::StringW UserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String AccessToken
    [[deprecated]] ::StringW& dyn_AccessToken();
    // Get instance field reference: public readonly Oculus.Platform.ServiceProvider ServiceProvider
    [[deprecated]] ::Oculus::Platform::ServiceProvider& dyn_ServiceProvider();
    // Get instance field reference: public readonly System.String UserId
    [[deprecated]] ::StringW& dyn_UserId();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xB3D684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedAccount* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LinkedAccount::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedAccount*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LinkedAccount
  #pragma pack(pop)
  static check_size<sizeof(LinkedAccount), 32 + sizeof(::StringW)> __Oculus_Platform_Models_LinkedAccountSizeCheck;
  static_assert(sizeof(LinkedAccount) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LinkedAccount::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
