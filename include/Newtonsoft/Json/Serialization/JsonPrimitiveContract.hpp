// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonContract
#include "Newtonsoft/Json/Serialization/JsonContract.hpp"
// Including type: Newtonsoft.Json.Utilities.PrimitiveTypeCode
#include "Newtonsoft/Json/Utilities/PrimitiveTypeCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonPrimitiveContract
  class JsonPrimitiveContract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonPrimitiveContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonPrimitiveContract*, "Newtonsoft.Json.Serialization", "JsonPrimitiveContract");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonPrimitiveContract
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 67373C
  // [NullableAttribute] Offset: 67373C
  class JsonPrimitiveContract : public ::Newtonsoft::Json::Serialization::JsonContract {
    public:
    public:
    // private Newtonsoft.Json.Utilities.PrimitiveTypeCode <TypeCode>k__BackingField
    // Size: 0x4
    // Offset: 0x8C
    ::Newtonsoft::Json::Utilities::PrimitiveTypeCode TypeCode;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::PrimitiveTypeCode) == 0x4);
    public:
    // Creating conversion operator: operator ::Newtonsoft::Json::Utilities::PrimitiveTypeCode
    constexpr operator ::Newtonsoft::Json::Utilities::PrimitiveTypeCode() const noexcept {
      return TypeCode;
    }
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.ReadType> ReadTypeMap
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>* _get_ReadTypeMap();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.ReadType> ReadTypeMap
    static void _set_ReadTypeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>* value);
    // Get instance field reference: private Newtonsoft.Json.Utilities.PrimitiveTypeCode <TypeCode>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Utilities::PrimitiveTypeCode& dyn_$TypeCode$k__BackingField();
    // Newtonsoft.Json.Utilities.PrimitiveTypeCode get_TypeCode()
    // Offset: 0xF48D78
    ::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode();
    // System.Void set_TypeCode(Newtonsoft.Json.Utilities.PrimitiveTypeCode value)
    // Offset: 0xF48D80
    void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value);
    // static private System.Void .cctor()
    // Offset: 0xF48E94
    static void _cctor();
    // public System.Void .ctor(System.Type underlyingType)
    // Offset: 0xF48D88
    // Implemented from: Newtonsoft.Json.Serialization.JsonContract
    // Base method: System.Void JsonContract::.ctor(System.Type underlyingType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonPrimitiveContract* New_ctor(::System::Type* underlyingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonPrimitiveContract::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonPrimitiveContract*, creationType>(underlyingType)));
    }
  }; // Newtonsoft.Json.Serialization.JsonPrimitiveContract
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPrimitiveContract::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (Newtonsoft::Json::Serialization::JsonPrimitiveContract::*)()>(&Newtonsoft::Json::Serialization::JsonPrimitiveContract::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonPrimitiveContract*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPrimitiveContract::set_TypeCode
// Il2CppName: set_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonPrimitiveContract::*)(::Newtonsoft::Json::Utilities::PrimitiveTypeCode)>(&Newtonsoft::Json::Serialization::JsonPrimitiveContract::set_TypeCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "PrimitiveTypeCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonPrimitiveContract*), "set_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPrimitiveContract::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Serialization::JsonPrimitiveContract::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonPrimitiveContract*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPrimitiveContract::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
