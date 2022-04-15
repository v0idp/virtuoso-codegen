// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ICustomTypeDescriptor
#include "System/ComponentModel/ICustomTypeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CustomTypeDescriptor
  class CustomTypeDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::CustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CustomTypeDescriptor*, "System.ComponentModel", "CustomTypeDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.CustomTypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomTypeDescriptor : public ::Il2CppObject/*, public ::System::ComponentModel::ICustomTypeDescriptor*/ {
    public:
    public:
    // private System.ComponentModel.ICustomTypeDescriptor _parent
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::ICustomTypeDescriptor* parent;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::ICustomTypeDescriptor*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor
    operator ::System::ComponentModel::ICustomTypeDescriptor() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Creating conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor*
    constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() const noexcept {
      return parent;
    }
    // Get instance field reference: private System.ComponentModel.ICustomTypeDescriptor _parent
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::ICustomTypeDescriptor*& dyn__parent();
    // protected System.Void .ctor()
    // Offset: 0x10EB430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomTypeDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::CustomTypeDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomTypeDescriptor*, creationType>()));
    }
    // protected System.Void .ctor(System.ComponentModel.ICustomTypeDescriptor parent)
    // Offset: 0x10EB438
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomTypeDescriptor* New_ctor(::System::ComponentModel::ICustomTypeDescriptor* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::CustomTypeDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomTypeDescriptor*, creationType>(parent)));
    }
    // public System.ComponentModel.AttributeCollection GetAttributes()
    // Offset: 0x10EB464
    ::System::ComponentModel::AttributeCollection* GetAttributes();
    // public System.ComponentModel.TypeConverter GetConverter()
    // Offset: 0x10EB550
    ::System::ComponentModel::TypeConverter* GetConverter();
    // public System.ComponentModel.PropertyDescriptorCollection GetProperties()
    // Offset: 0x10EB634
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();
    // public System.ComponentModel.PropertyDescriptorCollection GetProperties(System.Attribute[] attributes)
    // Offset: 0x10EB724
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::ArrayW<::System::Attribute*> attributes);
    // public System.Object GetPropertyOwner(System.ComponentModel.PropertyDescriptor pd)
    // Offset: 0x10EB828
    ::Il2CppObject* GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);
  }; // System.ComponentModel.CustomTypeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(CustomTypeDescriptor), 16 + sizeof(::System::ComponentModel::ICustomTypeDescriptor*)> __System_ComponentModel_CustomTypeDescriptorSizeCheck;
  static_assert(sizeof(CustomTypeDescriptor) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::CustomTypeDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::CustomTypeDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::CustomTypeDescriptor::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::CustomTypeDescriptor::*)()>(&System::ComponentModel::CustomTypeDescriptor::GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CustomTypeDescriptor*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CustomTypeDescriptor::GetConverter
// Il2CppName: GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::CustomTypeDescriptor::*)()>(&System::ComponentModel::CustomTypeDescriptor::GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CustomTypeDescriptor*), "GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CustomTypeDescriptor::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::CustomTypeDescriptor::*)()>(&System::ComponentModel::CustomTypeDescriptor::GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CustomTypeDescriptor*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CustomTypeDescriptor::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::CustomTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::CustomTypeDescriptor::GetProperties)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CustomTypeDescriptor*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CustomTypeDescriptor::GetPropertyOwner
// Il2CppName: GetPropertyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::CustomTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(&System::ComponentModel::CustomTypeDescriptor::GetPropertyOwner)> {
  static const MethodInfo* get() {
    static auto* pd = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CustomTypeDescriptor*), "GetPropertyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pd});
  }
};
