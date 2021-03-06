// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: PropertyDescriptor
  class PropertyDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ICustomTypeDescriptor
  class ICustomTypeDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ICustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ICustomTypeDescriptor*, "System.ComponentModel", "ICustomTypeDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ICustomTypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class ICustomTypeDescriptor {
    public:
    // public System.ComponentModel.AttributeCollection GetAttributes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::AttributeCollection* GetAttributes();
    // public System.ComponentModel.TypeConverter GetConverter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::TypeConverter* GetConverter();
    // public System.ComponentModel.PropertyDescriptorCollection GetProperties()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();
    // public System.ComponentModel.PropertyDescriptorCollection GetProperties(System.Attribute[] attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::ArrayW<::System::Attribute*> attributes);
    // public System.Object GetPropertyOwner(System.ComponentModel.PropertyDescriptor pd)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);
  }; // System.ComponentModel.ICustomTypeDescriptor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ICustomTypeDescriptor::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::ICustomTypeDescriptor::*)()>(&System::ComponentModel::ICustomTypeDescriptor::GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ICustomTypeDescriptor*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ICustomTypeDescriptor::GetConverter
// Il2CppName: GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::ICustomTypeDescriptor::*)()>(&System::ComponentModel::ICustomTypeDescriptor::GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ICustomTypeDescriptor*), "GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ICustomTypeDescriptor::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::ICustomTypeDescriptor::*)()>(&System::ComponentModel::ICustomTypeDescriptor::GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ICustomTypeDescriptor*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ICustomTypeDescriptor::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::ICustomTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::ICustomTypeDescriptor::GetProperties)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ICustomTypeDescriptor*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ICustomTypeDescriptor::GetPropertyOwner
// Il2CppName: GetPropertyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ICustomTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(&System::ComponentModel::ICustomTypeDescriptor::GetPropertyOwner)> {
  static const MethodInfo* get() {
    static auto* pd = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ICustomTypeDescriptor*), "GetPropertyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pd});
  }
};
