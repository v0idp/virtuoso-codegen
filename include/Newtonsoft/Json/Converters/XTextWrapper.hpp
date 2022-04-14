// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XObjectWrapper
#include "Newtonsoft/Json/Converters/XObjectWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XText
  class XText;
}
// Forward declaring namespace: Newtonsoft::Json::Converters
namespace Newtonsoft::Json::Converters {
  // Skipping declaration: IXmlNode because it is already included!
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XTextWrapper
  class XTextWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XTextWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XTextWrapper*, "Newtonsoft.Json.Converters", "XTextWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XTextWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 674698
  // [NullableAttribute] Offset: 674698
  class XTextWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
    public:
    // private System.Xml.Linq.XText get_Text()
    // Offset: 0x1592C58
    ::System::Xml::Linq::XText* get_Text();
    // public System.Void .ctor(System.Xml.Linq.XText text)
    // Offset: 0x1591160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XTextWrapper* New_ctor(::System::Xml::Linq::XText* text) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XTextWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XTextWrapper*, creationType>(text)));
    }
    // public override System.String get_Value()
    // Offset: 0x1592CD4
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.String XObjectWrapper::get_Value()
    ::StringW get_Value();
    // public override Newtonsoft.Json.Converters.IXmlNode get_ParentNode()
    // Offset: 0x1592CF4
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: Newtonsoft.Json.Converters.IXmlNode XObjectWrapper::get_ParentNode()
    ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();
  }; // Newtonsoft.Json.Converters.XTextWrapper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XTextWrapper::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XText* (Newtonsoft::Json::Converters::XTextWrapper::*)()>(&Newtonsoft::Json::Converters::XTextWrapper::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XTextWrapper*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XTextWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XTextWrapper::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XTextWrapper::*)()>(&Newtonsoft::Json::Converters::XTextWrapper::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XTextWrapper*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XTextWrapper::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XTextWrapper::*)()>(&Newtonsoft::Json::Converters::XTextWrapper::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XTextWrapper*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
