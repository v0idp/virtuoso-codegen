// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ObjectModel.KeyedCollection`2
#include "System/Collections/ObjectModel/KeyedCollection_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonProperty
  class JsonProperty;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: StringComparison
  struct StringComparison;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonPropertyCollection
  class JsonPropertyCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonPropertyCollection*, "Newtonsoft.Json.Serialization", "JsonPropertyCollection");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonPropertyCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: 6737BC
  // [NullableContextAttribute] Offset: 6737BC
  class JsonPropertyCollection : public ::System::Collections::ObjectModel::KeyedCollection_2<::StringW, ::Newtonsoft::Json::Serialization::JsonProperty*> {
    public:
    public:
    // private readonly System.Type _type
    // Size: 0x8
    // Offset: 0x38
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty> _list
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* list;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Type _type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__type();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty> _list
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>*& dyn__list();
    // public System.Void .ctor(System.Type type)
    // Offset: 0xF496A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonPropertyCollection* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonPropertyCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonPropertyCollection*, creationType>(type)));
    }
    // protected System.String GetKeyForItem(Newtonsoft.Json.Serialization.JsonProperty item)
    // Offset: 0xF497F0
    ::StringW GetKeyForItem(::Newtonsoft::Json::Serialization::JsonProperty* item);
    // public System.Void AddProperty(Newtonsoft.Json.Serialization.JsonProperty property)
    // Offset: 0xF49808
    void AddProperty(::Newtonsoft::Json::Serialization::JsonProperty* property);
    // public Newtonsoft.Json.Serialization.JsonProperty GetClosestMatchProperty(System.String propertyName)
    // Offset: 0xF49B10
    ::Newtonsoft::Json::Serialization::JsonProperty* GetClosestMatchProperty(::StringW propertyName);
    // private System.Boolean TryGetValue(System.String key, out Newtonsoft.Json.Serialization.JsonProperty item)
    // Offset: 0xF49C48
    bool TryGetValue(::StringW key, ByRef<::Newtonsoft::Json::Serialization::JsonProperty*> item);
    // public Newtonsoft.Json.Serialization.JsonProperty GetProperty(System.String propertyName, System.StringComparison comparisonType)
    // Offset: 0xF49B54
    ::Newtonsoft::Json::Serialization::JsonProperty* GetProperty(::StringW propertyName, ::System::StringComparison comparisonType);
  }; // Newtonsoft.Json.Serialization.JsonPropertyCollection
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPropertyCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPropertyCollection::GetKeyForItem
// Il2CppName: GetKeyForItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(&Newtonsoft::Json::Serialization::JsonPropertyCollection::GetKeyForItem)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonPropertyCollection*), "GetKeyForItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPropertyCollection::AddProperty
// Il2CppName: AddProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(&Newtonsoft::Json::Serialization::JsonPropertyCollection::AddProperty)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonPropertyCollection*), "AddProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPropertyCollection::GetClosestMatchProperty
// Il2CppName: GetClosestMatchProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::StringW)>(&Newtonsoft::Json::Serialization::JsonPropertyCollection::GetClosestMatchProperty)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonPropertyCollection*), "GetClosestMatchProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPropertyCollection::TryGetValue
// Il2CppName: TryGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::StringW, ByRef<::Newtonsoft::Json::Serialization::JsonProperty*>)>(&Newtonsoft::Json::Serialization::JsonPropertyCollection::TryGetValue)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonProperty")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonPropertyCollection*), "TryGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonPropertyCollection::GetProperty
// Il2CppName: GetProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::StringW, ::System::StringComparison)>(&Newtonsoft::Json::Serialization::JsonPropertyCollection::GetProperty)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* comparisonType = &::il2cpp_utils::GetClassFromName("System", "StringComparison")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonPropertyCollection*), "GetProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName, comparisonType});
  }
};
