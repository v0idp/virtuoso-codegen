// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlAnyAttributeAttribute
  class XmlAnyAttributeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlAnyAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAnyAttributeAttribute*, "System.Xml.Serialization", "XmlAnyAttributeAttribute");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlAnyAttributeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 6A43FC
  class XmlAnyAttributeAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x11AED3C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAnyAttributeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlAnyAttributeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAnyAttributeAttribute*, creationType>()));
    }
  }; // System.Xml.Serialization.XmlAnyAttributeAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAnyAttributeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!