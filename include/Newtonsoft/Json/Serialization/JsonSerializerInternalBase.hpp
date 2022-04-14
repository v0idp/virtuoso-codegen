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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ErrorContext
  class ErrorContext;
  // Forward declaring type: ITraceWriter
  class ITraceWriter;
  // Forward declaring type: JsonSerializerProxy
  class JsonSerializerProxy;
  // Forward declaring type: JsonObjectContract
  class JsonObjectContract;
  // Forward declaring type: JsonProperty
  class JsonProperty;
  // Forward declaring type: JsonContract
  class JsonContract;
}
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: BidirectionalDictionary`2<TFirst, TSecond>
  template<typename TFirst, typename TSecond>
  class BidirectionalDictionary_2;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonSerializer
  class JsonSerializer;
  // Forward declaring type: NullValueHandling
  struct NullValueHandling;
  // Forward declaring type: IJsonLineInfo
  class IJsonLineInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonSerializerInternalBase
  class JsonSerializerInternalBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonSerializerInternalBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: 673840
  // [NullableContextAttribute] Offset: 673840
  class JsonSerializerInternalBase : public ::Il2CppObject {
    public:
    // Nested type: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer
    class ReferenceEqualsEqualityComparer;
    public:
    // [NullableAttribute] Offset: 0x6774A8
    // private Newtonsoft.Json.Serialization.ErrorContext _currentErrorContext
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Serialization::ErrorContext* currentErrorContext;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ErrorContext*) == 0x8);
    // [NullableAttribute] Offset: 0x6774BC
    // private Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> _mappings
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::Il2CppObject*>* mappings;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::Il2CppObject*>*) == 0x8);
    // readonly Newtonsoft.Json.JsonSerializer Serializer
    // Size: 0x8
    // Offset: 0x20
    ::Newtonsoft::Json::JsonSerializer* Serializer;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonSerializer*) == 0x8);
    // [NullableAttribute] Offset: 0x67752C
    // readonly Newtonsoft.Json.Serialization.ITraceWriter TraceWriter
    // Size: 0x8
    // Offset: 0x28
    ::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ITraceWriter*) == 0x8);
    // [NullableAttribute] Offset: 0x677540
    // protected Newtonsoft.Json.Serialization.JsonSerializerProxy InternalSerializer
    // Size: 0x8
    // Offset: 0x30
    ::Newtonsoft::Json::Serialization::JsonSerializerProxy* InternalSerializer;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonSerializerProxy*) == 0x8);
    public:
    // Get instance field reference: private Newtonsoft.Json.Serialization.ErrorContext _currentErrorContext
    [[deprecated]] ::Newtonsoft::Json::Serialization::ErrorContext*& dyn__currentErrorContext();
    // Get instance field reference: private Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> _mappings
    [[deprecated]] ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::Il2CppObject*>*& dyn__mappings();
    // Get instance field reference: readonly Newtonsoft.Json.JsonSerializer Serializer
    [[deprecated]] ::Newtonsoft::Json::JsonSerializer*& dyn_Serializer();
    // Get instance field reference: readonly Newtonsoft.Json.Serialization.ITraceWriter TraceWriter
    [[deprecated]] ::Newtonsoft::Json::Serialization::ITraceWriter*& dyn_TraceWriter();
    // Get instance field reference: protected Newtonsoft.Json.Serialization.JsonSerializerProxy InternalSerializer
    [[deprecated]] ::Newtonsoft::Json::Serialization::JsonSerializerProxy*& dyn_InternalSerializer();
    // Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> get_DefaultReferenceMappings()
    // Offset: 0xF51270
    ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::Il2CppObject*>* get_DefaultReferenceMappings();
    // protected System.Void .ctor(Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0xF511E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonSerializerInternalBase* New_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonSerializerInternalBase*, creationType>(serializer)));
    }
    // protected Newtonsoft.Json.NullValueHandling ResolvedNullValueHandling(Newtonsoft.Json.Serialization.JsonObjectContract containerContract, Newtonsoft.Json.Serialization.JsonProperty property)
    // Offset: 0xF51378
    ::Newtonsoft::Json::NullValueHandling ResolvedNullValueHandling(::Newtonsoft::Json::Serialization::JsonObjectContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* property);
    // private Newtonsoft.Json.Serialization.ErrorContext GetErrorContext(System.Object currentObject, System.Object member, System.String path, System.Exception error)
    // Offset: 0xF51400
    ::Newtonsoft::Json::Serialization::ErrorContext* GetErrorContext(::Il2CppObject* currentObject, ::Il2CppObject* member, ::StringW path, ::System::Exception* error);
    // protected System.Void ClearErrorContext()
    // Offset: 0xF514F4
    void ClearErrorContext();
    // protected System.Boolean IsErrorHandled(System.Object currentObject, Newtonsoft.Json.Serialization.JsonContract contract, System.Object keyValue, Newtonsoft.Json.IJsonLineInfo lineInfo, System.String path, System.Exception ex)
    // Offset: 0xF51558
    bool IsErrorHandled(::Il2CppObject* currentObject, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Il2CppObject* keyValue, ::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::System::Exception* ex);
  }; // Newtonsoft.Json.Serialization.JsonSerializerInternalBase
  #pragma pack(pop)
  static check_size<sizeof(JsonSerializerInternalBase), 48 + sizeof(::Newtonsoft::Json::Serialization::JsonSerializerProxy*)> __Newtonsoft_Json_Serialization_JsonSerializerInternalBaseSizeCheck;
  static_assert(sizeof(JsonSerializerInternalBase) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::get_DefaultReferenceMappings
// Il2CppName: get_DefaultReferenceMappings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::Il2CppObject*>* (Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)()>(&Newtonsoft::Json::Serialization::JsonSerializerInternalBase::get_DefaultReferenceMappings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalBase*), "get_DefaultReferenceMappings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ResolvedNullValueHandling
// Il2CppName: ResolvedNullValueHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::NullValueHandling (Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ResolvedNullValueHandling)> {
  static const MethodInfo* get() {
    static auto* containerContract = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonObjectContract")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalBase*), "ResolvedNullValueHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{containerContract, property});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::GetErrorContext
// Il2CppName: GetErrorContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ErrorContext* (Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)(::Il2CppObject*, ::Il2CppObject*, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalBase::GetErrorContext)> {
  static const MethodInfo* get() {
    static auto* currentObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalBase*), "GetErrorContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentObject, member, path, error});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ClearErrorContext
// Il2CppName: ClearErrorContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)()>(&Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ClearErrorContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalBase*), "ClearErrorContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::IsErrorHandled
// Il2CppName: IsErrorHandled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)(::Il2CppObject*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Il2CppObject*, ::Newtonsoft::Json::IJsonLineInfo*, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalBase::IsErrorHandled)> {
  static const MethodInfo* get() {
    static auto* currentObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* contract = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonContract")->byval_arg;
    static auto* keyValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* lineInfo = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "IJsonLineInfo")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalBase*), "IsErrorHandled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentObject, contract, keyValue, lineInfo, path, ex});
  }
};
