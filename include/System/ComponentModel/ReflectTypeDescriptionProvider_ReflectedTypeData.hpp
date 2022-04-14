// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ReflectTypeDescriptionProvider
#include "System/ComponentModel/ReflectTypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: EventDescriptorCollection
  class EventDescriptorCollection;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, "System.ComponentModel", "ReflectTypeDescriptionProvider/ReflectedTypeData");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ReflectTypeDescriptionProvider/System.ComponentModel.ReflectedTypeData
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectTypeDescriptionProvider::ReflectedTypeData : public ::Il2CppObject {
    public:
    public:
    // private System.Type _type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.ComponentModel.AttributeCollection _attributes
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::AttributeCollection* attributes;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::AttributeCollection*) == 0x8);
    // private System.ComponentModel.EventDescriptorCollection _events
    // Size: 0x8
    // Offset: 0x20
    ::System::ComponentModel::EventDescriptorCollection* events;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::EventDescriptorCollection*) == 0x8);
    // private System.ComponentModel.PropertyDescriptorCollection _properties
    // Size: 0x8
    // Offset: 0x28
    ::System::ComponentModel::PropertyDescriptorCollection* properties;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyDescriptorCollection*) == 0x8);
    // private System.ComponentModel.TypeConverter _converter
    // Size: 0x8
    // Offset: 0x30
    ::System::ComponentModel::TypeConverter* converter;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeConverter*) == 0x8);
    // private System.Object[] _editors
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Il2CppObject*> editors;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Type[] _editorTypes
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Type*> editorTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Int32 _editorCount
    // Size: 0x4
    // Offset: 0x48
    int editorCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Type _type
    [[deprecated]] ::System::Type*& dyn__type();
    // Get instance field reference: private System.ComponentModel.AttributeCollection _attributes
    [[deprecated]] ::System::ComponentModel::AttributeCollection*& dyn__attributes();
    // Get instance field reference: private System.ComponentModel.EventDescriptorCollection _events
    [[deprecated]] ::System::ComponentModel::EventDescriptorCollection*& dyn__events();
    // Get instance field reference: private System.ComponentModel.PropertyDescriptorCollection _properties
    [[deprecated]] ::System::ComponentModel::PropertyDescriptorCollection*& dyn__properties();
    // Get instance field reference: private System.ComponentModel.TypeConverter _converter
    [[deprecated]] ::System::ComponentModel::TypeConverter*& dyn__converter();
    // Get instance field reference: private System.Object[] _editors
    [[deprecated]] ::ArrayW<::Il2CppObject*>& dyn__editors();
    // Get instance field reference: private System.Type[] _editorTypes
    [[deprecated]] ::ArrayW<::System::Type*>& dyn__editorTypes();
    // Get instance field reference: private System.Int32 _editorCount
    [[deprecated]] int& dyn__editorCount();
    // System.Boolean get_IsPopulated()
    // Offset: 0x9FCE30
    bool get_IsPopulated();
    // System.Void .ctor(System.Type type)
    // Offset: 0x9FCE04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectTypeDescriptionProvider::ReflectedTypeData* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectTypeDescriptionProvider::ReflectedTypeData*, creationType>(type)));
    }
    // System.ComponentModel.AttributeCollection GetAttributes()
    // Offset: 0x9FCE4C
    ::System::ComponentModel::AttributeCollection* GetAttributes();
    // System.ComponentModel.TypeConverter GetConverter(System.Object instance)
    // Offset: 0x9FD3E4
    ::System::ComponentModel::TypeConverter* GetConverter(::Il2CppObject* instance);
    // System.ComponentModel.PropertyDescriptorCollection GetProperties()
    // Offset: 0x9FDA98
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();
    // private System.Type GetTypeFromName(System.String typeName)
    // Offset: 0x9FD8C8
    ::System::Type* GetTypeFromName(::StringW typeName);
    // System.Void Refresh()
    // Offset: 0x9FDDD4
    void Refresh();
  }; // System.ComponentModel.ReflectTypeDescriptionProvider/System.ComponentModel.ReflectedTypeData
  #pragma pack(pop)
  static check_size<sizeof(ReflectTypeDescriptionProvider::ReflectedTypeData), 72 + sizeof(int)> __System_ComponentModel_ReflectTypeDescriptionProvider_ReflectedTypeDataSizeCheck;
  static_assert(sizeof(ReflectTypeDescriptionProvider::ReflectedTypeData) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::get_IsPopulated
// Il2CppName: get_IsPopulated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::get_IsPopulated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "get_IsPopulated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetConverter
// Il2CppName: GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::Il2CppObject*)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetConverter)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetTypeFromName
// Il2CppName: GetTypeFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)(::StringW)>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::GetTypeFromName)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "GetTypeFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::*)()>(&System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
