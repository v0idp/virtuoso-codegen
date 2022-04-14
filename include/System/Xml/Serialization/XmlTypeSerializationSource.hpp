// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.SerializationSource
#include "System/Xml/Serialization/SerializationSource.hpp"
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
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlRootAttribute
  class XmlRootAttribute;
  // Forward declaring type: XmlAttributeOverrides
  class XmlAttributeOverrides;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeSerializationSource
  class XmlTypeSerializationSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeSerializationSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeSerializationSource*, "System.Xml.Serialization", "XmlTypeSerializationSource");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlTypeSerializationSource
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTypeSerializationSource : public ::System::Xml::Serialization::SerializationSource {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    public:
    // private System.String attributeOverridesHash
    // Size: 0x8
    // Offset: 0x28
    ::StringW attributeOverridesHash;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type type
    // Size: 0x8
    // Offset: 0x30
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.String rootHash
    // Size: 0x8
    // Offset: 0x38
    ::StringW rootHash;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String attributeOverridesHash
    [[deprecated]] ::StringW& dyn_attributeOverridesHash();
    // Get instance field reference: private System.Type type
    [[deprecated]] ::System::Type*& dyn_type();
    // Get instance field reference: private System.String rootHash
    [[deprecated]] ::StringW& dyn_rootHash();
    // public System.Void .ctor(System.Type type, System.Xml.Serialization.XmlRootAttribute root, System.Xml.Serialization.XmlAttributeOverrides attributeOverrides, System.String namspace, System.Type[] includedTypes)
    // Offset: 0x10892F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTypeSerializationSource* New_ctor(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW namspace, ::ArrayW<::System::Type*> includedTypes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlTypeSerializationSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTypeSerializationSource*, creationType>(type, root, attributeOverrides, namspace, includedTypes)));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x108940C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1089500
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Xml.Serialization.XmlTypeSerializationSource
  #pragma pack(pop)
  static check_size<sizeof(XmlTypeSerializationSource), 56 + sizeof(::StringW)> __System_Xml_Serialization_XmlTypeSerializationSourceSizeCheck;
  static_assert(sizeof(XmlTypeSerializationSource) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeSerializationSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeSerializationSource::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeSerializationSource::*)(::Il2CppObject*)>(&System::Xml::Serialization::XmlTypeSerializationSource::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeSerializationSource*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeSerializationSource::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlTypeSerializationSource::*)()>(&System::Xml::Serialization::XmlTypeSerializationSource::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeSerializationSource*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
