// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: IXmlLineInfo
  class IXmlLineInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::IXmlLineInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IXmlLineInfo*, "System.Xml", "IXmlLineInfo");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.IXmlLineInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class IXmlLineInfo {
    public:
    // public System.Int32 get_LineNumber()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_LineNumber();
    // public System.Int32 get_LinePosition()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_LinePosition();
    // public System.Boolean HasLineInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool HasLineInfo();
  }; // System.Xml.IXmlLineInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::IXmlLineInfo::get_LineNumber
// Il2CppName: get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::IXmlLineInfo::*)()>(&System::Xml::IXmlLineInfo::get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IXmlLineInfo*), "get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IXmlLineInfo::get_LinePosition
// Il2CppName: get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::IXmlLineInfo::*)()>(&System::Xml::IXmlLineInfo::get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IXmlLineInfo*), "get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IXmlLineInfo::HasLineInfo
// Il2CppName: HasLineInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IXmlLineInfo::*)()>(&System::Xml::IXmlLineInfo::HasLineInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IXmlLineInfo*), "HasLineInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
