// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonContract
#include "Newtonsoft/Json/Serialization/JsonContract.hpp"
// Including type: Newtonsoft.Json.ReferenceLoopHandling
#include "Newtonsoft/Json/ReferenceLoopHandling.hpp"
// Including type: Newtonsoft.Json.TypeNameHandling
#include "Newtonsoft/Json/TypeNameHandling.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonConverter
  class JsonConverter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonContainerContract
  class JsonContainerContract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonContainerContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContainerContract*, "Newtonsoft.Json.Serialization", "JsonContainerContract");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonContainerContract
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 67359C
  // [NullableAttribute] Offset: 67359C
  class JsonContainerContract : public ::Newtonsoft::Json::Serialization::JsonContract {
    public:
    public:
    // private Newtonsoft.Json.Serialization.JsonContract _itemContract
    // Size: 0x8
    // Offset: 0x90
    ::Newtonsoft::Json::Serialization::JsonContract* itemContract;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonContract*) == 0x8);
    // private Newtonsoft.Json.Serialization.JsonContract _finalItemContract
    // Size: 0x8
    // Offset: 0x98
    ::Newtonsoft::Json::Serialization::JsonContract* finalItemContract;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonContract*) == 0x8);
    // private Newtonsoft.Json.JsonConverter <ItemConverter>k__BackingField
    // Size: 0x8
    // Offset: 0xA0
    ::Newtonsoft::Json::JsonConverter* ItemConverter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonConverter*) == 0x8);
    // private System.Nullable`1<System.Boolean> <ItemIsReference>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0xA8
    ::System::Nullable_1<bool> ItemIsReference;
    // private System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> <ItemReferenceLoopHandling>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0xAC
    ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ItemReferenceLoopHandling;
    // private System.Nullable`1<Newtonsoft.Json.TypeNameHandling> <ItemTypeNameHandling>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0xB4
    ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ItemTypeNameHandling;
    public:
    // Get instance field reference: private Newtonsoft.Json.Serialization.JsonContract _itemContract
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonContract*& dyn__itemContract();
    // Get instance field reference: private Newtonsoft.Json.Serialization.JsonContract _finalItemContract
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonContract*& dyn__finalItemContract();
    // Get instance field reference: private Newtonsoft.Json.JsonConverter <ItemConverter>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::JsonConverter*& dyn_$ItemConverter$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.Boolean> <ItemIsReference>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_$ItemIsReference$k__BackingField();
    // Get instance field reference: private System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> <ItemReferenceLoopHandling>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& dyn_$ItemReferenceLoopHandling$k__BackingField();
    // Get instance field reference: private System.Nullable`1<Newtonsoft.Json.TypeNameHandling> <ItemTypeNameHandling>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& dyn_$ItemTypeNameHandling$k__BackingField();
    // Newtonsoft.Json.Serialization.JsonContract get_ItemContract()
    // Offset: 0xEF2928
    ::Newtonsoft::Json::Serialization::JsonContract* get_ItemContract();
    // System.Void set_ItemContract(Newtonsoft.Json.Serialization.JsonContract value)
    // Offset: 0xEF2930
    void set_ItemContract(::Newtonsoft::Json::Serialization::JsonContract* value);
    // Newtonsoft.Json.Serialization.JsonContract get_FinalItemContract()
    // Offset: 0xEF2978
    ::Newtonsoft::Json::Serialization::JsonContract* get_FinalItemContract();
    // public Newtonsoft.Json.JsonConverter get_ItemConverter()
    // Offset: 0xEF2980
    ::Newtonsoft::Json::JsonConverter* get_ItemConverter();
    // public System.Void set_ItemConverter(Newtonsoft.Json.JsonConverter value)
    // Offset: 0xEF2988
    void set_ItemConverter(::Newtonsoft::Json::JsonConverter* value);
    // public System.Nullable`1<System.Boolean> get_ItemIsReference()
    // Offset: 0xEF2990
    ::System::Nullable_1<bool> get_ItemIsReference();
    // public System.Void set_ItemIsReference(System.Nullable`1<System.Boolean> value)
    // Offset: 0xEF2998
    void set_ItemIsReference(::System::Nullable_1<bool> value);
    // public System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> get_ItemReferenceLoopHandling()
    // Offset: 0xEF29A0
    ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling();
    // public System.Void set_ItemReferenceLoopHandling(System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> value)
    // Offset: 0xEF29A8
    void set_ItemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);
    // public System.Nullable`1<Newtonsoft.Json.TypeNameHandling> get_ItemTypeNameHandling()
    // Offset: 0xEF29B0
    ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling();
    // public System.Void set_ItemTypeNameHandling(System.Nullable`1<Newtonsoft.Json.TypeNameHandling> value)
    // Offset: 0xEF29B8
    void set_ItemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);
    // System.Void .ctor(System.Type underlyingType)
    // Offset: 0xEF1F60
    // Implemented from: Newtonsoft.Json.Serialization.JsonContract
    // Base method: System.Void JsonContract::.ctor(System.Type underlyingType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonContainerContract* New_ctor(::System::Type* underlyingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonContainerContract::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonContainerContract*, creationType>(underlyingType)));
    }
  }; // Newtonsoft.Json.Serialization.JsonContainerContract
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemContract
// Il2CppName: get_ItemContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (Newtonsoft::Json::Serialization::JsonContainerContract::*)()>(&Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemContract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "get_ItemContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemContract
// Il2CppName: set_ItemContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContainerContract::*)(::Newtonsoft::Json::Serialization::JsonContract*)>(&Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemContract)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonContract")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "set_ItemContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::get_FinalItemContract
// Il2CppName: get_FinalItemContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (Newtonsoft::Json::Serialization::JsonContainerContract::*)()>(&Newtonsoft::Json::Serialization::JsonContainerContract::get_FinalItemContract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "get_FinalItemContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemConverter
// Il2CppName: get_ItemConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (Newtonsoft::Json::Serialization::JsonContainerContract::*)()>(&Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "get_ItemConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemConverter
// Il2CppName: set_ItemConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContainerContract::*)(::Newtonsoft::Json::JsonConverter*)>(&Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemConverter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonConverter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "set_ItemConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemIsReference
// Il2CppName: get_ItemIsReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (Newtonsoft::Json::Serialization::JsonContainerContract::*)()>(&Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemIsReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "get_ItemIsReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemIsReference
// Il2CppName: set_ItemIsReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContainerContract::*)(::System::Nullable_1<bool>)>(&Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemIsReference)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "set_ItemIsReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemReferenceLoopHandling
// Il2CppName: get_ItemReferenceLoopHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> (Newtonsoft::Json::Serialization::JsonContainerContract::*)()>(&Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemReferenceLoopHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "get_ItemReferenceLoopHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemReferenceLoopHandling
// Il2CppName: set_ItemReferenceLoopHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContainerContract::*)(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>)>(&Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemReferenceLoopHandling)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "ReferenceLoopHandling")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "set_ItemReferenceLoopHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemTypeNameHandling
// Il2CppName: get_ItemTypeNameHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> (Newtonsoft::Json::Serialization::JsonContainerContract::*)()>(&Newtonsoft::Json::Serialization::JsonContainerContract::get_ItemTypeNameHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "get_ItemTypeNameHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemTypeNameHandling
// Il2CppName: set_ItemTypeNameHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContainerContract::*)(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>)>(&Newtonsoft::Json::Serialization::JsonContainerContract::set_ItemTypeNameHandling)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "TypeNameHandling")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContainerContract*), "set_ItemTypeNameHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContainerContract::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
