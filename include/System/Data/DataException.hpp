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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataException
  class DataException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataException*, "System.Data", "DataException");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataException
  // [TokenAttribute] Offset: FFFFFFFF
  class DataException : public ::System::SystemException {
    public:
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xF98004
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataException*, creationType>(info, context)));
    }
    // public System.Void .ctor()
    // Offset: 0xF9804C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataException*, creationType>()));
    }
    // public System.Void .ctor(System.String s)
    // Offset: 0xF980AC
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String s)
    // Base method: System.Void Exception::.ctor(System.String s)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataException* New_ctor(::StringW s) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataException*, creationType>(s)));
    }
    // public System.Void .ctor(System.String s, System.Exception innerException)
    // Offset: 0xF980DC
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String s, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String s, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataException* New_ctor(::StringW s, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataException*, creationType>(s, innerException)));
    }
  }; // System.Data.DataException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
