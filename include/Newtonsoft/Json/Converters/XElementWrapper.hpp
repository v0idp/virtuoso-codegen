// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XContainerWrapper
#include "Newtonsoft/Json/Converters/XContainerWrapper.hpp"
// Including type: Newtonsoft.Json.Converters.IXmlElement
#include "Newtonsoft/Json/Converters/IXmlElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Newtonsoft::Json::Converters
namespace Newtonsoft::Json::Converters {
  // Skipping declaration: IXmlNode because it is already included!
}
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XElement
  class XElement;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XElementWrapper
  class XElementWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XElementWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XElementWrapper*, "Newtonsoft.Json.Converters", "XElementWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XElementWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 674818
  // [NullableAttribute] Offset: 674818
  class XElementWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper/*, public ::Newtonsoft::Json::Converters::IXmlElement*/ {
    public:
    public:
    // [NullableAttribute] Offset: 0x677D68
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> _attributes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* attributes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Converters::IXmlElement
    operator ::Newtonsoft::Json::Converters::IXmlElement() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Converters::IXmlElement*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> _attributes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& dyn__attributes();
    // private System.Xml.Linq.XElement get_Element()
    // Offset: 0x1591EE0
    ::System::Xml::Linq::XElement* get_Element();
    // public System.Boolean get_IsEmpty()
    // Offset: 0x1592A34
    bool get_IsEmpty();
    // public System.Void .ctor(System.Xml.Linq.XElement element)
    // Offset: 0x1591108
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XElementWrapper* New_ctor(::System::Xml::Linq::XElement* element) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XElementWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XElementWrapper*, creationType>(element)));
    }
    // public System.Void SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode attribute)
    // Offset: 0x1591F5C
    void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute);
    // private System.Boolean HasImplicitNamespaceAttribute(System.String namespaceUri)
    // Offset: 0x15924DC
    bool HasImplicitNamespaceAttribute(::StringW namespaceUri);
    // public System.String GetPrefixOfNamespace(System.String namespaceUri)
    // Offset: 0x159295C
    ::StringW GetPrefixOfNamespace(::StringW namespaceUri);
    // public override System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> get_Attributes()
    // Offset: 0x1592010
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> XObjectWrapper::get_Attributes()
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();
    // public override System.String get_Value()
    // Offset: 0x15929C4
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.String XObjectWrapper::get_Value()
    ::StringW get_Value();
    // public override System.String get_LocalName()
    // Offset: 0x15929E4
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.String XObjectWrapper::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_NamespaceUri()
    // Offset: 0x1592A0C
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.String XObjectWrapper::get_NamespaceUri()
    ::StringW get_NamespaceUri();
    // public override Newtonsoft.Json.Converters.IXmlNode AppendChild(Newtonsoft.Json.Converters.IXmlNode newChild)
    // Offset: 0x15929A0
    // Implemented from: Newtonsoft.Json.Converters.XContainerWrapper
    // Base method: Newtonsoft.Json.Converters.IXmlNode XContainerWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode newChild)
    ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);
  }; // Newtonsoft.Json.Converters.XElementWrapper
  #pragma pack(pop)
  static check_size<sizeof(XElementWrapper), 32 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*)> __Newtonsoft_Json_Converters_XElementWrapperSizeCheck;
  static_assert(sizeof(XElementWrapper) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::get_Element
// Il2CppName: get_Element
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XElement* (Newtonsoft::Json::Converters::XElementWrapper::*)()>(&Newtonsoft::Json::Converters::XElementWrapper::get_Element)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "get_Element", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::get_IsEmpty
// Il2CppName: get_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::XElementWrapper::*)()>(&Newtonsoft::Json::Converters::XElementWrapper::get_IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "get_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::SetAttributeNode
// Il2CppName: SetAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::XElementWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(&Newtonsoft::Json::Converters::XElementWrapper::SetAttributeNode)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "IXmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "SetAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::HasImplicitNamespaceAttribute
// Il2CppName: HasImplicitNamespaceAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::XElementWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XElementWrapper::HasImplicitNamespaceAttribute)> {
  static const MethodInfo* get() {
    static auto* namespaceUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "HasImplicitNamespaceAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceUri});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::GetPrefixOfNamespace
// Il2CppName: GetPrefixOfNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XElementWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XElementWrapper::GetPrefixOfNamespace)> {
  static const MethodInfo* get() {
    static auto* namespaceUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "GetPrefixOfNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceUri});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (Newtonsoft::Json::Converters::XElementWrapper::*)()>(&Newtonsoft::Json::Converters::XElementWrapper::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XElementWrapper::*)()>(&Newtonsoft::Json::Converters::XElementWrapper::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XElementWrapper::*)()>(&Newtonsoft::Json::Converters::XElementWrapper::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::get_NamespaceUri
// Il2CppName: get_NamespaceUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XElementWrapper::*)()>(&Newtonsoft::Json::Converters::XElementWrapper::get_NamespaceUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "get_NamespaceUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XElementWrapper::AppendChild
// Il2CppName: AppendChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XElementWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(&Newtonsoft::Json::Converters::XElementWrapper::AppendChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "IXmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XElementWrapper*), "AppendChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild});
  }
};
