// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ErrorContext
  class ErrorContext;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ErrorEventArgs
  class ErrorEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ErrorEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ErrorEventArgs*, "Newtonsoft.Json.Serialization", "ErrorEventArgs");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.ErrorEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 6734A4
  // [NullableAttribute] Offset: 6734A4
  class ErrorEventArgs : public ::System::EventArgs {
    public:
    public:
    // [NullableAttribute] Offset: 0x676590
    // private readonly System.Object <CurrentObject>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* CurrentObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly Newtonsoft.Json.Serialization.ErrorContext <ErrorContext>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Serialization::ErrorContext* ErrorContext;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ErrorContext*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Object <CurrentObject>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$CurrentObject$k__BackingField();
    // Get instance field reference: private readonly Newtonsoft.Json.Serialization.ErrorContext <ErrorContext>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ErrorContext*& dyn_$ErrorContext$k__BackingField();
    // public System.Void .ctor(System.Object currentObject, Newtonsoft.Json.Serialization.ErrorContext errorContext)
    // Offset: 0xDCFD70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ErrorEventArgs* New_ctor(::Il2CppObject* currentObject, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::ErrorEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ErrorEventArgs*, creationType>(currentObject, errorContext)));
    }
  }; // Newtonsoft.Json.Serialization.ErrorEventArgs
  #pragma pack(pop)
  static check_size<sizeof(ErrorEventArgs), 24 + sizeof(::Newtonsoft::Json::Serialization::ErrorContext*)> __Newtonsoft_Json_Serialization_ErrorEventArgsSizeCheck;
  static_assert(sizeof(ErrorEventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ErrorEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
