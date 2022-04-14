// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.InvalidExpressionException
#include "System/Data/InvalidExpressionException.hpp"
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
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: EvaluateException
  class EvaluateException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::EvaluateException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::EvaluateException*, "System.Data", "EvaluateException");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.EvaluateException
  // [TokenAttribute] Offset: FFFFFFFF
  class EvaluateException : public ::System::Data::InvalidExpressionException {
    public:
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12ED688
    // Implemented from: System.Data.InvalidExpressionException
    // Base method: System.Void InvalidExpressionException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void DataException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EvaluateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::EvaluateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EvaluateException*, creationType>(info, context)));
    }
    // public System.Void .ctor()
    // Offset: 0x12ED6D0
    // Implemented from: System.Data.InvalidExpressionException
    // Base method: System.Void InvalidExpressionException::.ctor()
    // Base method: System.Void DataException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EvaluateException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::EvaluateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EvaluateException*, creationType>()));
    }
    // public System.Void .ctor(System.String s)
    // Offset: 0x12ED6D8
    // Implemented from: System.Data.InvalidExpressionException
    // Base method: System.Void InvalidExpressionException::.ctor(System.String s)
    // Base method: System.Void DataException::.ctor(System.String s)
    // Base method: System.Void SystemException::.ctor(System.String s)
    // Base method: System.Void Exception::.ctor(System.String s)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EvaluateException* New_ctor(::StringW s) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::EvaluateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EvaluateException*, creationType>(s)));
    }
  }; // System.Data.EvaluateException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::EvaluateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::EvaluateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::EvaluateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!