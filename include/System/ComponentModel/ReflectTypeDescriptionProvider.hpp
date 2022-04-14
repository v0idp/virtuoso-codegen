// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptionProvider
#include "System/ComponentModel/TypeDescriptionProvider.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
  // Forward declaring type: IExtenderProvider
  class IExtenderProvider;
  // Forward declaring type: PropertyDescriptor
  class PropertyDescriptor;
  // Forward declaring type: ICustomTypeDescriptor
  class ICustomTypeDescriptor;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: IServiceProvider
  class IServiceProvider;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ReflectTypeDescriptionProvider
  class ReflectTypeDescriptionProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ReflectTypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectTypeDescriptionProvider*, "System.ComponentModel", "ReflectTypeDescriptionProvider");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ReflectTypeDescriptionProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
    public:
    // Nested type: ::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData
    class ReflectedTypeData;
    public:
    // private System.Collections.Hashtable _typeData
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Hashtable* typeData;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Hashtable*
    constexpr operator ::System::Collections::Hashtable*() const noexcept {
      return typeData;
    }
    // Get static field: static private System.Type[] _typeConstructor
    static ::ArrayW<::System::Type*> _get__typeConstructor();
    // Set static field: static private System.Type[] _typeConstructor
    static void _set__typeConstructor(::ArrayW<::System::Type*> value);
    // Get static field: static private System.Collections.Hashtable _intrinsicTypeConverters
    static ::System::Collections::Hashtable* _get__intrinsicTypeConverters();
    // Set static field: static private System.Collections.Hashtable _intrinsicTypeConverters
    static void _set__intrinsicTypeConverters(::System::Collections::Hashtable* value);
    // Get static field: static private System.Object _intrinsicReferenceKey
    static ::Il2CppObject* _get__intrinsicReferenceKey();
    // Set static field: static private System.Object _intrinsicReferenceKey
    static void _set__intrinsicReferenceKey(::Il2CppObject* value);
    // Get static field: static private System.Object _intrinsicNullableKey
    static ::Il2CppObject* _get__intrinsicNullableKey();
    // Set static field: static private System.Object _intrinsicNullableKey
    static void _set__intrinsicNullableKey(::Il2CppObject* value);
    // Get static field: static private System.Object _dictionaryKey
    static ::Il2CppObject* _get__dictionaryKey();
    // Set static field: static private System.Object _dictionaryKey
    static void _set__dictionaryKey(::Il2CppObject* value);
    // Get static field: static private System.Collections.Hashtable _propertyCache
    static ::System::Collections::Hashtable* _get__propertyCache();
    // Set static field: static private System.Collections.Hashtable _propertyCache
    static void _set__propertyCache(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable _attributeCache
    static ::System::Collections::Hashtable* _get__attributeCache();
    // Set static field: static private System.Collections.Hashtable _attributeCache
    static void _set__attributeCache(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable _extendedPropertyCache
    static ::System::Collections::Hashtable* _get__extendedPropertyCache();
    // Set static field: static private System.Collections.Hashtable _extendedPropertyCache
    static void _set__extendedPropertyCache(::System::Collections::Hashtable* value);
    // Get static field: static private readonly System.Guid _extenderProviderKey
    static ::System::Guid _get__extenderProviderKey();
    // Set static field: static private readonly System.Guid _extenderProviderKey
    static void _set__extenderProviderKey(::System::Guid value);
    // Get static field: static private readonly System.Guid _extenderPropertiesKey
    static ::System::Guid _get__extenderPropertiesKey();
    // Set static field: static private readonly System.Guid _extenderPropertiesKey
    static void _set__extenderPropertiesKey(::System::Guid value);
    // Get static field: static private readonly System.Guid _extenderProviderPropertiesKey
    static ::System::Guid _get__extenderProviderPropertiesKey();
    // Set static field: static private readonly System.Guid _extenderProviderPropertiesKey
    static void _set__extenderProviderPropertiesKey(::System::Guid value);
    // Get static field: static private readonly System.Type[] _skipInterfaceAttributeList
    static ::ArrayW<::System::Type*> _get__skipInterfaceAttributeList();
    // Set static field: static private readonly System.Type[] _skipInterfaceAttributeList
    static void _set__skipInterfaceAttributeList(::ArrayW<::System::Type*> value);
    // Get static field: static private System.Object _internalSyncObject
    static ::Il2CppObject* _get__internalSyncObject();
    // Set static field: static private System.Object _internalSyncObject
    static void _set__internalSyncObject(::Il2CppObject* value);
    // Get instance field reference: private System.Collections.Hashtable _typeData
    [[deprecated]] ::System::Collections::Hashtable*& dyn__typeData();
    // static private System.Collections.Hashtable get_IntrinsicTypeConverters()
    // Offset: 0x141255C
    static ::System::Collections::Hashtable* get_IntrinsicTypeConverters();
    // static private System.Void .cctor()
    // Offset: 0x1417704
    static void _cctor();
    // static private System.Object CreateInstance(System.Type objectType, System.Type callingType)
    // Offset: 0x1413244
    static ::Il2CppObject* CreateInstance(::System::Type* objectType, ::System::Type* callingType);
    // System.ComponentModel.AttributeCollection GetAttributes(System.Type type)
    // Offset: 0x1413354
    ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* type);
    // System.ComponentModel.TypeConverter GetConverter(System.Type type, System.Object instance)
    // Offset: 0x14139A8
    ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type, ::Il2CppObject* instance);
    // System.ComponentModel.AttributeCollection GetExtendedAttributes(System.Object instance)
    // Offset: 0x14139DC
    ::System::ComponentModel::AttributeCollection* GetExtendedAttributes(::Il2CppObject* instance);
    // System.ComponentModel.TypeConverter GetExtendedConverter(System.Object instance)
    // Offset: 0x1413A40
    ::System::ComponentModel::TypeConverter* GetExtendedConverter(::Il2CppObject* instance);
    // System.ComponentModel.PropertyDescriptorCollection GetExtendedProperties(System.Object instance)
    // Offset: 0x1413A80
    ::System::ComponentModel::PropertyDescriptorCollection* GetExtendedProperties(::Il2CppObject* instance);
    // static private System.ComponentModel.IExtenderProvider[] GetExtenders(System.Collections.ICollection components, System.Object instance, System.Collections.IDictionary cache)
    // Offset: 0x1415494
    static ::ArrayW<::System::ComponentModel::IExtenderProvider*> GetExtenders(::System::Collections::ICollection* components, ::Il2CppObject* instance, ::System::Collections::IDictionary* cache);
    // System.Object GetExtendedPropertyOwner(System.Object instance, System.ComponentModel.PropertyDescriptor pd)
    // Offset: 0x1415FF8
    ::Il2CppObject* GetExtendedPropertyOwner(::Il2CppObject* instance, ::System::ComponentModel::PropertyDescriptor* pd);
    // System.ComponentModel.PropertyDescriptorCollection GetProperties(System.Type type)
    // Offset: 0x14160AC
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* type);
    // System.Object GetPropertyOwner(System.Type type, System.Object instance, System.ComponentModel.PropertyDescriptor pd)
    // Offset: 0x1416030
    ::Il2CppObject* GetPropertyOwner(::System::Type* type, ::Il2CppObject* instance, ::System::ComponentModel::PropertyDescriptor* pd);
    // private System.ComponentModel.ReflectTypeDescriptionProvider/System.ComponentModel.ReflectedTypeData GetTypeData(System.Type type, System.Boolean createIfNeeded)
    // Offset: 0x1413378
    ::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData* GetTypeData(::System::Type* type, bool createIfNeeded);
    // static private System.Type GetTypeFromName(System.String typeName)
    // Offset: 0x14160E0
    static ::System::Type* GetTypeFromName(::StringW typeName);
    // System.Boolean IsPopulated(System.Type type)
    // Offset: 0x1416210
    bool IsPopulated(::System::Type* type);
    // static private System.Attribute[] ReflectGetAttributes(System.Type type)
    // Offset: 0x1416238
    static ::ArrayW<::System::Attribute*> ReflectGetAttributes(::System::Type* type);
    // static System.Attribute[] ReflectGetAttributes(System.Reflection.MemberInfo member)
    // Offset: 0x1411054
    static ::ArrayW<::System::Attribute*> ReflectGetAttributes(::System::Reflection::MemberInfo* member);
    // static private System.ComponentModel.PropertyDescriptor[] ReflectGetExtendedProperties(System.ComponentModel.IExtenderProvider provider)
    // Offset: 0x1414034
    static ::ArrayW<::System::ComponentModel::PropertyDescriptor*> ReflectGetExtendedProperties(::System::ComponentModel::IExtenderProvider* provider);
    // static private System.ComponentModel.PropertyDescriptor[] ReflectGetProperties(System.Type type)
    // Offset: 0x14166E0
    static ::ArrayW<::System::ComponentModel::PropertyDescriptor*> ReflectGetProperties(::System::Type* type);
    // System.Void Refresh(System.Type type)
    // Offset: 0x1416D68
    void Refresh(::System::Type* type);
    // static private System.Object SearchIntrinsicTable(System.Collections.Hashtable table, System.Type callingType)
    // Offset: 0x1416D90
    static ::Il2CppObject* SearchIntrinsicTable(::System::Collections::Hashtable* table, ::System::Type* callingType);
    // System.Void .ctor()
    // Offset: 0x1412554
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Void TypeDescriptionProvider::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectTypeDescriptionProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectTypeDescriptionProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectTypeDescriptionProvider*, creationType>()));
    }
    // public override System.Object CreateInstance(System.IServiceProvider provider, System.Type objectType, System.Type[] argTypes, System.Object[] args)
    // Offset: 0x1413064
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Object TypeDescriptionProvider::CreateInstance(System.IServiceProvider provider, System.Type objectType, System.Type[] argTypes, System.Object[] args)
    ::Il2CppObject* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::Il2CppObject*> args);
    // public override System.Collections.IDictionary GetCache(System.Object instance)
    // Offset: 0x1413600
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Collections.IDictionary TypeDescriptionProvider::GetCache(System.Object instance)
    ::System::Collections::IDictionary* GetCache(::Il2CppObject* instance);
    // protected internal override System.ComponentModel.IExtenderProvider[] GetExtenderProviders(System.Object instance)
    // Offset: 0x1414FB4
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.IExtenderProvider[] TypeDescriptionProvider::GetExtenderProviders(System.Object instance)
    ::ArrayW<::System::ComponentModel::IExtenderProvider*> GetExtenderProviders(::Il2CppObject* instance);
    // public override System.ComponentModel.ICustomTypeDescriptor GetExtendedTypeDescriptor(System.Object instance)
    // Offset: 0x14160A4
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.ICustomTypeDescriptor TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object instance)
    ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::Il2CppObject* instance);
    // public override System.Type GetReflectionType(System.Type objectType, System.Object instance)
    // Offset: 0x14160D0
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Type TypeDescriptionProvider::GetReflectionType(System.Type objectType, System.Object instance)
    ::System::Type* GetReflectionType(::System::Type* objectType, ::Il2CppObject* instance);
    // public override System.ComponentModel.ICustomTypeDescriptor GetTypeDescriptor(System.Type objectType, System.Object instance)
    // Offset: 0x14160D8
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.ICustomTypeDescriptor TypeDescriptionProvider::GetTypeDescriptor(System.Type objectType, System.Object instance)
    ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::Il2CppObject* instance);
  }; // System.ComponentModel.ReflectTypeDescriptionProvider
  #pragma pack(pop)
  static check_size<sizeof(ReflectTypeDescriptionProvider), 32 + sizeof(::System::Collections::Hashtable*)> __System_ComponentModel_ReflectTypeDescriptionProviderSizeCheck;
  static_assert(sizeof(ReflectTypeDescriptionProvider) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::get_IntrinsicTypeConverters
// Il2CppName: get_IntrinsicTypeConverters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::get_IntrinsicTypeConverters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "get_IntrinsicTypeConverters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*, ::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* callingType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, callingType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetConverter
// Il2CppName: GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetConverter)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedAttributes
// Il2CppName: GetExtendedAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedAttributes)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetExtendedAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedConverter
// Il2CppName: GetExtendedConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedConverter)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetExtendedConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedProperties
// Il2CppName: GetExtendedProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedProperties)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetExtendedProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenders
// Il2CppName: GetExtenders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (*)(::System::Collections::ICollection*, ::Il2CppObject*, ::System::Collections::IDictionary*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenders)> {
  static const MethodInfo* get() {
    static auto* components = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* cache = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetExtenders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{components, instance, cache});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedPropertyOwner
// Il2CppName: GetExtendedPropertyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::Il2CppObject*, ::System::ComponentModel::PropertyDescriptor*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedPropertyOwner)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* pd = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetExtendedPropertyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, pd});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetProperties)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetPropertyOwner
// Il2CppName: GetPropertyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*, ::System::ComponentModel::PropertyDescriptor*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetPropertyOwner)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* pd = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetPropertyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, instance, pd});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeData
// Il2CppName: GetTypeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, bool)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeData)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* createIfNeeded = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetTypeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, createIfNeeded});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeFromName
// Il2CppName: GetTypeFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeFromName)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetTypeFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::IsPopulated
// Il2CppName: IsPopulated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::IsPopulated)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "IsPopulated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes
// Il2CppName: ReflectGetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "ReflectGetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes
// Il2CppName: ReflectGetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::MemberInfo*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes)> {
  static const MethodInfo* get() {
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "ReflectGetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{member});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetExtendedProperties
// Il2CppName: ReflectGetExtendedProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::PropertyDescriptor*> (*)(::System::ComponentModel::IExtenderProvider*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetExtendedProperties)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "IExtenderProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "ReflectGetExtendedProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetProperties
// Il2CppName: ReflectGetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::PropertyDescriptor*> (*)(::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetProperties)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "ReflectGetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::Refresh)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::SearchIntrinsicTable
// Il2CppName: SearchIntrinsicTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Collections::Hashtable*, ::System::Type*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::SearchIntrinsicTable)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Collections", "Hashtable")->byval_arg;
    static auto* callingType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "SearchIntrinsicTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, callingType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::Il2CppObject*>)>(&System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IServiceProvider")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, objectType, argTypes, args});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetCache
// Il2CppName: GetCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetCache)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenderProviders
// Il2CppName: GetExtenderProviders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenderProviders)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetExtenderProviders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedTypeDescriptor
// Il2CppName: GetExtendedTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetExtendedTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetReflectionType
// Il2CppName: GetReflectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetReflectionType)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetReflectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeDescriptor
// Il2CppName: GetTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider*), "GetTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};
