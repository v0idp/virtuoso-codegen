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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlAnyElementAttribute
  class XmlAnyElementAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlAnyElementAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAnyElementAttribute*, "System.Xml.Serialization", "XmlAnyElementAttribute");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlAnyElementAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 6A4410
  class XmlAnyElementAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String elementName
    // Size: 0x8
    // Offset: 0x10
    ::StringW elementName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String ns
    // Size: 0x8
    // Offset: 0x18
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 order
    // Size: 0x4
    // Offset: 0x20
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String elementName
    [[deprecated]] ::StringW& dyn_elementName();
    // Get instance field reference: private System.String ns
    [[deprecated]] ::StringW& dyn_ns();
    // Get instance field reference: private System.Int32 order
    [[deprecated]] int& dyn_order();
    // public System.String get_Name()
    // Offset: 0x11B2DBC
    ::StringW get_Name();
    // public System.String get_Namespace()
    // Offset: 0x11B2E14
    ::StringW get_Namespace();
    // public System.Int32 get_Order()
    // Offset: 0x11B2E1C
    int get_Order();
    // System.Void AddKeyHash(System.Text.StringBuilder sb)
    // Offset: 0x11B2E24
    void AddKeyHash(::System::Text::StringBuilder* sb);
    // public System.Void .ctor()
    // Offset: 0x11B2DAC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAnyElementAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlAnyElementAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAnyElementAttribute*, creationType>()));
    }
  }; // System.Xml.Serialization.XmlAnyElementAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlAnyElementAttribute), 32 + sizeof(int)> __System_Xml_Serialization_XmlAnyElementAttributeSizeCheck;
  static_assert(sizeof(XmlAnyElementAttribute) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAnyElementAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlAnyElementAttribute::*)()>(&System::Xml::Serialization::XmlAnyElementAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlAnyElementAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAnyElementAttribute::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlAnyElementAttribute::*)()>(&System::Xml::Serialization::XmlAnyElementAttribute::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlAnyElementAttribute*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAnyElementAttribute::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlAnyElementAttribute::*)()>(&System::Xml::Serialization::XmlAnyElementAttribute::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlAnyElementAttribute*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAnyElementAttribute::AddKeyHash
// Il2CppName: AddKeyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlAnyElementAttribute::*)(::System::Text::StringBuilder*)>(&System::Xml::Serialization::XmlAnyElementAttribute::AddKeyHash)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlAnyElementAttribute*), "AddKeyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAnyElementAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
