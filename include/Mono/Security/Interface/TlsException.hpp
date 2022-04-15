// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: Mono.Security.Interface.AlertDescription
#include "Mono/Security/Interface/AlertDescription.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: Alert
  class Alert;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: TlsException
  class TlsException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Interface::TlsException);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::TlsException*, "Mono.Security.Interface", "TlsException");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.TlsException
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsException : public ::System::Exception {
    public:
    public:
    // private Mono.Security.Interface.Alert alert
    // Size: 0x8
    // Offset: 0x88
    ::Mono::Security::Interface::Alert* alert;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::Alert*) == 0x8);
    public:
    // Creating conversion operator: operator ::Mono::Security::Interface::Alert*
    constexpr operator ::Mono::Security::Interface::Alert*() const noexcept {
      return alert;
    }
    // Get instance field reference: private Mono.Security.Interface.Alert alert
    [[deprecated("Use field access instead!")]] ::Mono::Security::Interface::Alert*& dyn_alert();
    // public System.Void .ctor(Mono.Security.Interface.Alert alert, System.String message)
    // Offset: 0x1645660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsException* New_ctor(::Mono::Security::Interface::Alert* alert, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Interface::TlsException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsException*, creationType>(alert, message)));
    }
    // public System.Void .ctor(Mono.Security.Interface.AlertDescription description, System.String message)
    // Offset: 0x16456E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsException* New_ctor(::Mono::Security::Interface::AlertDescription description, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Interface::TlsException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsException*, creationType>(description, message)));
    }
  }; // Mono.Security.Interface.TlsException
  #pragma pack(pop)
  static check_size<sizeof(TlsException), 136 + sizeof(::Mono::Security::Interface::Alert*)> __Mono_Security_Interface_TlsExceptionSizeCheck;
  static_assert(sizeof(TlsException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::TlsException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Interface::TlsException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
