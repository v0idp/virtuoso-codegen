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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializer
  class XmlSerializer;
  // Forward declaring type: XmlRootAttribute
  class XmlRootAttribute;
  // Forward declaring type: XmlAttributeOverrides
  class XmlAttributeOverrides;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializerFactory
  class XmlSerializerFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializerFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializerFactory*, "System.Xml.Serialization", "XmlSerializerFactory");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializerFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializerFactory : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Hashtable serializersBySource
    static ::System::Collections::Hashtable* _get_serializersBySource();
    // Set static field: static private System.Collections.Hashtable serializersBySource
    static void _set_serializersBySource(::System::Collections::Hashtable* value);
    // static private System.Void .cctor()
    // Offset: 0x132D148
    static void _cctor();
    // public System.Xml.Serialization.XmlSerializer CreateSerializer(System.Type type)
    // Offset: 0x132CE90
    ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type);
    // public System.Xml.Serialization.XmlSerializer CreateSerializer(System.Type type, System.Xml.Serialization.XmlRootAttribute root)
    // Offset: 0x132D134
    ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root);
    // public System.Xml.Serialization.XmlSerializer CreateSerializer(System.Type type, System.Xml.Serialization.XmlAttributeOverrides overrides, System.Type[] extraTypes, System.Xml.Serialization.XmlRootAttribute root, System.String defaultNamespace)
    // Offset: 0x132CEA4
    ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides, ::ArrayW<::System::Type*> extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace);
    // public System.Void .ctor()
    // Offset: 0x132CE88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSerializerFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSerializerFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSerializerFactory*, creationType>()));
    }
  }; // System.Xml.Serialization.XmlSerializerFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializerFactory::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Serialization::XmlSerializerFactory::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializerFactory*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializerFactory::CreateSerializer
// Il2CppName: CreateSerializer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*)>(&System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializerFactory*), "CreateSerializer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializerFactory::CreateSerializer
// Il2CppName: CreateSerializer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*)>(&System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlRootAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializerFactory*), "CreateSerializer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, root});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializerFactory::CreateSerializer
// Il2CppName: CreateSerializer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::ArrayW<::System::Type*>, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(&System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* overrides = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlAttributeOverrides")->byval_arg;
    static auto* extraTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlRootAttribute")->byval_arg;
    static auto* defaultNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializerFactory*), "CreateSerializer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, overrides, extraTypes, root, defaultNamespace});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializerFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
