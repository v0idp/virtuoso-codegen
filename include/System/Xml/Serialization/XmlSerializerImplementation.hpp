// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializationWriter
  class XmlSerializationWriter;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializerImplementation
  class XmlSerializerImplementation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializerImplementation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializerImplementation*, "System.Xml.Serialization", "XmlSerializerImplementation");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializerImplementation
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializerImplementation : public ::Il2CppObject {
    public:
    // public System.Xml.Serialization.XmlSerializationWriter get_Writer()
    // Offset: 0x132D1BC
    ::System::Xml::Serialization::XmlSerializationWriter* get_Writer();
  }; // System.Xml.Serialization.XmlSerializerImplementation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializerImplementation::get_Writer
// Il2CppName: get_Writer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (System::Xml::Serialization::XmlSerializerImplementation::*)()>(&System::Xml::Serialization::XmlSerializerImplementation::get_Writer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializerImplementation*), "get_Writer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};