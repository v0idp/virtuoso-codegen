// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlComplianceUtil
  class XmlComplianceUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlComplianceUtil);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlComplianceUtil*, "System.Xml", "XmlComplianceUtil");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlComplianceUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlComplianceUtil : public ::Il2CppObject {
    public:
    // static public System.String NonCDataNormalize(System.String value)
    // Offset: 0x1190BA8
    static ::StringW NonCDataNormalize(::StringW value);
    // static public System.String CDataNormalize(System.String value)
    // Offset: 0x1190E34
    static ::StringW CDataNormalize(::StringW value);
  }; // System.Xml.XmlComplianceUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlComplianceUtil::NonCDataNormalize
// Il2CppName: NonCDataNormalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::XmlComplianceUtil::NonCDataNormalize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlComplianceUtil*), "NonCDataNormalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlComplianceUtil::CDataNormalize
// Il2CppName: CDataNormalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::XmlComplianceUtil::CDataNormalize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlComplianceUtil*), "CDataNormalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
