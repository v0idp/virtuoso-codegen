// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: Newtonsoft.Json.ReferenceLoopHandling
#include "Newtonsoft/Json/ReferenceLoopHandling.hpp"
// Including type: Newtonsoft.Json.TypeNameHandling
#include "Newtonsoft/Json/TypeNameHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: NamingStrategy
  class NamingStrategy;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonContainerAttribute
  class JsonContainerAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonContainerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonContainerAttribute*, "Newtonsoft.Json", "JsonContainerAttribute");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.JsonContainerAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 672134
  // [NullableAttribute] Offset: 672134
  // [AttributeUsageAttribute] Offset: 672134
  class JsonContainerAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Type <ItemConverterType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* ItemConverterType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // [NullableAttribute] Offset: 0x674938
    // private System.Object[] <ItemConverterParameters>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> ItemConverterParameters;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private Newtonsoft.Json.Serialization.NamingStrategy <NamingStrategyInstance>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Newtonsoft::Json::Serialization::NamingStrategy* NamingStrategyInstance;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::NamingStrategy*) == 0x8);
    // System.Nullable`1<System.Boolean> _isReference
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<bool> isReference;
    // System.Nullable`1<System.Boolean> _itemIsReference
    // Size: 0xFFFFFFFF
    // Offset: 0x2A
    ::System::Nullable_1<bool> itemIsReference;
    // System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> _itemReferenceLoopHandling
    // Size: 0xFFFFFFFF
    // Offset: 0x2C
    ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> itemReferenceLoopHandling;
    // System.Nullable`1<Newtonsoft.Json.TypeNameHandling> _itemTypeNameHandling
    // Size: 0xFFFFFFFF
    // Offset: 0x34
    ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> itemTypeNameHandling;
    // private System.Type _namingStrategyType
    // Size: 0x8
    // Offset: 0x40
    ::System::Type* namingStrategyType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // [NullableAttribute] Offset: 0x6749C0
    // private System.Object[] _namingStrategyParameters
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::Il2CppObject*> namingStrategyParameters;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Get instance field reference: private System.Type <ItemConverterType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$ItemConverterType$k__BackingField();
    // Get instance field reference: private System.Object[] <ItemConverterParameters>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_$ItemConverterParameters$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Serialization.NamingStrategy <NamingStrategyInstance>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::NamingStrategy*& dyn_$NamingStrategyInstance$k__BackingField();
    // Get instance field reference: System.Nullable`1<System.Boolean> _isReference
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn__isReference();
    // Get instance field reference: System.Nullable`1<System.Boolean> _itemIsReference
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn__itemIsReference();
    // Get instance field reference: System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> _itemReferenceLoopHandling
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& dyn__itemReferenceLoopHandling();
    // Get instance field reference: System.Nullable`1<Newtonsoft.Json.TypeNameHandling> _itemTypeNameHandling
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& dyn__itemTypeNameHandling();
    // Get instance field reference: private System.Type _namingStrategyType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__namingStrategyType();
    // Get instance field reference: private System.Object[] _namingStrategyParameters
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__namingStrategyParameters();
    // public System.Type get_ItemConverterType()
    // Offset: 0xEF28F8
    ::System::Type* get_ItemConverterType();
    // public System.Object[] get_ItemConverterParameters()
    // Offset: 0xEF2900
    ::ArrayW<::Il2CppObject*> get_ItemConverterParameters();
    // public System.Type get_NamingStrategyType()
    // Offset: 0xEF2908
    ::System::Type* get_NamingStrategyType();
    // public System.Object[] get_NamingStrategyParameters()
    // Offset: 0xEF2910
    ::ArrayW<::Il2CppObject*> get_NamingStrategyParameters();
    // Newtonsoft.Json.Serialization.NamingStrategy get_NamingStrategyInstance()
    // Offset: 0xEF2918
    ::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategyInstance();
    // System.Void set_NamingStrategyInstance(Newtonsoft.Json.Serialization.NamingStrategy value)
    // Offset: 0xEF2920
    void set_NamingStrategyInstance(::Newtonsoft::Json::Serialization::NamingStrategy* value);
  }; // Newtonsoft.Json.JsonContainerAttribute
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonContainerAttribute::get_ItemConverterType
// Il2CppName: get_ItemConverterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::JsonContainerAttribute::*)()>(&Newtonsoft::Json::JsonContainerAttribute::get_ItemConverterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonContainerAttribute*), "get_ItemConverterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonContainerAttribute::get_ItemConverterParameters
// Il2CppName: get_ItemConverterParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (Newtonsoft::Json::JsonContainerAttribute::*)()>(&Newtonsoft::Json::JsonContainerAttribute::get_ItemConverterParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonContainerAttribute*), "get_ItemConverterParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonContainerAttribute::get_NamingStrategyType
// Il2CppName: get_NamingStrategyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::JsonContainerAttribute::*)()>(&Newtonsoft::Json::JsonContainerAttribute::get_NamingStrategyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonContainerAttribute*), "get_NamingStrategyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonContainerAttribute::get_NamingStrategyParameters
// Il2CppName: get_NamingStrategyParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (Newtonsoft::Json::JsonContainerAttribute::*)()>(&Newtonsoft::Json::JsonContainerAttribute::get_NamingStrategyParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonContainerAttribute*), "get_NamingStrategyParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonContainerAttribute::get_NamingStrategyInstance
// Il2CppName: get_NamingStrategyInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::NamingStrategy* (Newtonsoft::Json::JsonContainerAttribute::*)()>(&Newtonsoft::Json::JsonContainerAttribute::get_NamingStrategyInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonContainerAttribute*), "get_NamingStrategyInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonContainerAttribute::set_NamingStrategyInstance
// Il2CppName: set_NamingStrategyInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonContainerAttribute::*)(::Newtonsoft::Json::Serialization::NamingStrategy*)>(&Newtonsoft::Json::JsonContainerAttribute::set_NamingStrategyInstance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "NamingStrategy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonContainerAttribute*), "set_NamingStrategyInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
