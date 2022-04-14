// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonWriter
  class JsonWriter;
  // Forward declaring type: JsonSerializer
  class JsonSerializer;
  // Forward declaring type: JsonReader
  class JsonReader;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonConverter
  class JsonConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConverter*, "Newtonsoft.Json", "JsonConverter");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 6721D4
  // [NullableAttribute] Offset: 6721D4
  class JsonConverter : public ::Il2CppObject {
    public:
    // public System.Boolean get_CanRead()
    // Offset: 0xEF4584
    bool get_CanRead();
    // public System.Boolean get_CanWrite()
    // Offset: 0xEF458C
    bool get_CanWrite();
    // public System.Void WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppObject* value, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public System.Object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Il2CppObject* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public System.Boolean CanConvert(System.Type objectType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CanConvert(::System::Type* objectType);
    // protected System.Void .ctor()
    // Offset: 0xEF4594
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonConverter*, creationType>()));
    }
  }; // Newtonsoft.Json.JsonConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverter::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonConverter::*)()>(&Newtonsoft::Json::JsonConverter::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverter*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverter::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonConverter::*)()>(&Newtonsoft::Json::JsonConverter::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverter*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverter::WriteJson
// Il2CppName: WriteJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonConverter::*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::JsonConverter::WriteJson)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverter*), "WriteJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, value, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverter::ReadJson
// Il2CppName: ReadJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::JsonConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::JsonConverter::ReadJson)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* existingValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverter*), "ReadJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, objectType, existingValue, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverter::CanConvert
// Il2CppName: CanConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonConverter::*)(::System::Type*)>(&Newtonsoft::Json::JsonConverter::CanConvert)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverter*), "CanConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
