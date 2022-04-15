// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonException
#include "Newtonsoft/Json/JsonException.hpp"
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
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonWriter
  class JsonWriter;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonWriterException
  class JsonWriterException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonWriterException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonWriterException*, "Newtonsoft.Json", "JsonWriterException");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonWriterException
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 6726E4
  // [NullableAttribute] Offset: 6726E4
  class JsonWriterException : public ::Newtonsoft::Json::JsonException {
    public:
    public:
    // [NullableAttribute] Offset: 0x67505C
    // private readonly System.String <Path>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    ::StringW Path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Path;
    }
    // Get instance field reference: private readonly System.String <Path>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Path$k__BackingField();
    // public System.Void .ctor(System.String message, System.String path, System.Exception innerException)
    // Offset: 0x134615C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonWriterException* New_ctor(::StringW message, ::StringW path, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonWriterException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonWriterException*, creationType>(message, path, innerException)));
    }
    // static Newtonsoft.Json.JsonWriterException Create(Newtonsoft.Json.JsonWriter writer, System.String message, System.Exception ex)
    // Offset: 0x133DC0C
    static ::Newtonsoft::Json::JsonWriterException* Create(::Newtonsoft::Json::JsonWriter* writer, ::StringW message, ::System::Exception* ex);
    // static Newtonsoft.Json.JsonWriterException Create(System.String path, System.String message, System.Exception ex)
    // Offset: 0x134618C
    static ::Newtonsoft::Json::JsonWriterException* Create(::StringW path, ::StringW message, ::System::Exception* ex);
    // public System.Void .ctor()
    // Offset: 0x134614C
    // Implemented from: Newtonsoft.Json.JsonException
    // Base method: System.Void JsonException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonWriterException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonWriterException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonWriterException*, creationType>()));
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1346154
    // Implemented from: Newtonsoft.Json.JsonException
    // Base method: System.Void JsonException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonWriterException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonWriterException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonWriterException*, creationType>(info, context)));
    }
  }; // Newtonsoft.Json.JsonWriterException
  #pragma pack(pop)
  static check_size<sizeof(JsonWriterException), 136 + sizeof(::StringW)> __Newtonsoft_Json_JsonWriterExceptionSizeCheck;
  static_assert(sizeof(JsonWriterException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonWriterException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonWriterException::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonWriterException* (*)(::Newtonsoft::Json::JsonWriter*, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::JsonWriterException::Create)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonWriterException*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, message, ex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonWriterException::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonWriterException* (*)(::StringW, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::JsonWriterException::Create)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonWriterException*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, message, ex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonWriterException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonWriterException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
