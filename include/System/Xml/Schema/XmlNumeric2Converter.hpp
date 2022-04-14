// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlBaseConverter
#include "System/Xml/Schema/XmlBaseConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlNumeric2Converter
  class XmlNumeric2Converter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlNumeric2Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlNumeric2Converter*, "System.Xml.Schema", "XmlNumeric2Converter");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlNumeric2Converter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlNumeric2Converter : public ::System::Xml::Schema::XmlBaseConverter {
    public:
    // static public System.Xml.Schema.XmlValueConverter Create(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x1021FE4
    static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);
    // protected System.Void .ctor(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x1021F70
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlSchemaType schemaType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNumeric2Converter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlNumeric2Converter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNumeric2Converter*, creationType>(schemaType)));
    }
    // public override System.Double ToDouble(System.String value)
    // Offset: 0x1022040
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Double XmlBaseConverter::ToDouble(System.String value)
    double ToDouble(::StringW value);
    // public override System.Double ToDouble(System.Object value)
    // Offset: 0x1022138
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Double XmlBaseConverter::ToDouble(System.Object value)
    double ToDouble(::Il2CppObject* value);
    // public override System.Single ToSingle(System.Double value)
    // Offset: 0x10224C8
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Single XmlBaseConverter::ToSingle(System.Double value)
    float ToSingle(double value);
    // public override System.Single ToSingle(System.String value)
    // Offset: 0x10224D0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Single XmlBaseConverter::ToSingle(System.String value)
    float ToSingle(::StringW value);
    // public override System.Single ToSingle(System.Object value)
    // Offset: 0x10225C8
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Single XmlBaseConverter::ToSingle(System.Object value)
    float ToSingle(::Il2CppObject* value);
    // public override System.String ToString(System.Double value)
    // Offset: 0x102297C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Double value)
    ::StringW ToString(double value);
    // public override System.String ToString(System.Single value)
    // Offset: 0x1022A4C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Single value)
    ::StringW ToString(float value);
    // public override System.String ToString(System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x1022AF0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    ::StringW ToString(::Il2CppObject* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.Double value, System.Type destinationType)
    // Offset: 0x1022E90
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Double value, System.Type destinationType)
    ::Il2CppObject* ChangeType(double value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x102325C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x1023664
    // Implemented from: System.Xml.Schema.XmlValueConverter
    // Base method: System.Object XmlValueConverter::ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
  }; // System.Xml.Schema.XmlNumeric2Converter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlNumeric2Converter::Create)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Xml::Schema::XmlNumeric2Converter::*)(::StringW)>(&System::Xml::Schema::XmlNumeric2Converter::ToDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Xml::Schema::XmlNumeric2Converter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlNumeric2Converter::ToDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Xml::Schema::XmlNumeric2Converter::*)(double)>(&System::Xml::Schema::XmlNumeric2Converter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Xml::Schema::XmlNumeric2Converter::*)(::StringW)>(&System::Xml::Schema::XmlNumeric2Converter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Xml::Schema::XmlNumeric2Converter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlNumeric2Converter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlNumeric2Converter::*)(double)>(&System::Xml::Schema::XmlNumeric2Converter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlNumeric2Converter::*)(float)>(&System::Xml::Schema::XmlNumeric2Converter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlNumeric2Converter::*)(::Il2CppObject*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlNumeric2Converter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric2Converter::*)(double, ::System::Type*)>(&System::Xml::Schema::XmlNumeric2Converter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric2Converter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlNumeric2Converter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric2Converter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric2Converter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlNumeric2Converter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric2Converter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
