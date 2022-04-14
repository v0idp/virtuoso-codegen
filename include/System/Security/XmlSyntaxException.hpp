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
// Type namespace: System.Security
namespace System::Security {
  // Forward declaring type: XmlSyntaxException
  class XmlSyntaxException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::XmlSyntaxException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::XmlSyntaxException*, "System.Security", "XmlSyntaxException");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.XmlSyntaxException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6842B0
  class XmlSyntaxException : public ::System::SystemException {
    public:
    // public System.Void .ctor(System.Int32 lineNumber)
    // Offset: 0x12196D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSyntaxException* New_ctor(int lineNumber) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::XmlSyntaxException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSyntaxException*, creationType>(lineNumber)));
    }
    // public System.Void .ctor(System.Int32 lineNumber, System.String message)
    // Offset: 0x1219778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSyntaxException* New_ctor(int lineNumber, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::XmlSyntaxException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSyntaxException*, creationType>(lineNumber, message)));
    }
    // public System.Void .ctor()
    // Offset: 0x12196CC
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSyntaxException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::XmlSyntaxException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSyntaxException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x121982C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSyntaxException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::XmlSyntaxException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSyntaxException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x1219834
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSyntaxException* New_ctor(::StringW message, ::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::XmlSyntaxException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSyntaxException*, creationType>(message, inner)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x121983C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSyntaxException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::XmlSyntaxException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSyntaxException*, creationType>(info, context)));
    }
  }; // System.Security.XmlSyntaxException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::XmlSyntaxException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::XmlSyntaxException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::XmlSyntaxException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::XmlSyntaxException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::XmlSyntaxException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::XmlSyntaxException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
