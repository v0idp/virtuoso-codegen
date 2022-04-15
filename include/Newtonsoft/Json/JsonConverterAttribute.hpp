// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonConverterAttribute
  class JsonConverterAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonConverterAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConverterAttribute*, "Newtonsoft.Json", "JsonConverterAttribute");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonConverterAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 672214
  // [NullableAttribute] Offset: 672214
  // [AttributeUsageAttribute] Offset: 672214
  class JsonConverterAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.Type _converterType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* converterType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // [NullableAttribute] Offset: 0x674AA0
    // private readonly System.Object[] <ConverterParameters>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> ConverterParameters;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Get instance field reference: private readonly System.Type _converterType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__converterType();
    // Get instance field reference: private readonly System.Object[] <ConverterParameters>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_$ConverterParameters$k__BackingField();
    // public System.Type get_ConverterType()
    // Offset: 0xEF459C
    ::System::Type* get_ConverterType();
    // public System.Object[] get_ConverterParameters()
    // Offset: 0xEF45A4
    ::ArrayW<::Il2CppObject*> get_ConverterParameters();
  }; // Newtonsoft.Json.JsonConverterAttribute
  #pragma pack(pop)
  static check_size<sizeof(JsonConverterAttribute), 24 + sizeof(::ArrayW<::Il2CppObject*>)> __Newtonsoft_Json_JsonConverterAttributeSizeCheck;
  static_assert(sizeof(JsonConverterAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverterAttribute::get_ConverterType
// Il2CppName: get_ConverterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::JsonConverterAttribute::*)()>(&Newtonsoft::Json::JsonConverterAttribute::get_ConverterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverterAttribute*), "get_ConverterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters
// Il2CppName: get_ConverterParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (Newtonsoft::Json::JsonConverterAttribute::*)()>(&Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverterAttribute*), "get_ConverterParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
