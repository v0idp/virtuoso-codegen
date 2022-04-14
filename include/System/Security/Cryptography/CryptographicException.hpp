// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CryptographicException
  class CryptographicException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::CryptographicException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptographicException*, "System.Security.Cryptography", "CryptographicException");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CryptographicException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6844C4
  class CryptographicException : public ::System::SystemException {
    public:
    // public System.Void .ctor(System.String format, System.String insert)
    // Offset: 0x13FAB9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptographicException* New_ctor(::StringW format, ::StringW insert) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CryptographicException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptographicException*, creationType>(format, insert)));
    }
    // public System.Void .ctor()
    // Offset: 0x13FAAF8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptographicException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CryptographicException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptographicException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x13FAB68
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptographicException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CryptographicException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptographicException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x13FAC60
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptographicException* New_ctor(::StringW message, ::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CryptographicException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptographicException*, creationType>(message, inner)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13FAC94
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptographicException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CryptographicException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptographicException*, creationType>(info, context)));
    }
  }; // System.Security.Cryptography.CryptographicException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CryptographicException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CryptographicException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CryptographicException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CryptographicException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CryptographicException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
