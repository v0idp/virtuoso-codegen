// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlAsyncCheckReader
#include "System/Xml/XmlAsyncCheckReader.hpp"
// Including type: System.Xml.IXmlNamespaceResolver
#include "System/Xml/IXmlNamespaceResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNamespaceScope
  struct XmlNamespaceScope;
  // Skipping declaration: XmlReader because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlAsyncCheckReaderWithNS
  class XmlAsyncCheckReaderWithNS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlAsyncCheckReaderWithNS);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckReaderWithNS*, "System.Xml", "XmlAsyncCheckReaderWithNS");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlAsyncCheckReaderWithNS
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlAsyncCheckReaderWithNS : public ::System::Xml::XmlAsyncCheckReader/*, public ::System::Xml::IXmlNamespaceResolver*/ {
    public:
    public:
    // private readonly System.Xml.IXmlNamespaceResolver readerAsIXmlNamespaceResolver
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::IXmlNamespaceResolver* readerAsIXmlNamespaceResolver;
    // Field size check
    static_assert(sizeof(::System::Xml::IXmlNamespaceResolver*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Xml::IXmlNamespaceResolver
    operator ::System::Xml::IXmlNamespaceResolver() noexcept {
      return *reinterpret_cast<::System::Xml::IXmlNamespaceResolver*>(this);
    }
    // Creating conversion operator: operator ::System::Xml::IXmlNamespaceResolver*
    constexpr operator ::System::Xml::IXmlNamespaceResolver*() const noexcept {
      return readerAsIXmlNamespaceResolver;
    }
    // Get instance field reference: private readonly System.Xml.IXmlNamespaceResolver readerAsIXmlNamespaceResolver
    [[deprecated("Use field access instead!")]] ::System::Xml::IXmlNamespaceResolver*& dyn_readerAsIXmlNamespaceResolver();
    // private System.Collections.Generic.IDictionary`2<System.String,System.String> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(System.Xml.XmlNamespaceScope scope)
    // Offset: 0x11B5880
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);
    // private System.String System.Xml.IXmlNamespaceResolver.LookupNamespace(System.String prefix)
    // Offset: 0x11B593C
    ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);
    // private System.String System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String namespaceName)
    // Offset: 0x11B59FC
    ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);
    // public System.Void .ctor(System.Xml.XmlReader reader)
    // Offset: 0x11B4270
    // Implemented from: System.Xml.XmlAsyncCheckReader
    // Base method: System.Void XmlAsyncCheckReader::.ctor(System.Xml.XmlReader reader)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAsyncCheckReaderWithNS* New_ctor(::System::Xml::XmlReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlAsyncCheckReaderWithNS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAsyncCheckReaderWithNS*, creationType>(reader)));
    }
  }; // System.Xml.XmlAsyncCheckReaderWithNS
  #pragma pack(pop)
  static check_size<sizeof(XmlAsyncCheckReaderWithNS), 32 + sizeof(::System::Xml::IXmlNamespaceResolver*)> __System_Xml_XmlAsyncCheckReaderWithNSSizeCheck;
  static_assert(sizeof(XmlAsyncCheckReaderWithNS) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
// Il2CppName: System.Xml.IXmlNamespaceResolver.GetNamespacesInScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (System::Xml::XmlAsyncCheckReaderWithNS::*)(::System::Xml::XmlNamespaceScope)>(&System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  static const MethodInfo* get() {
    static auto* scope = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNamespaceScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckReaderWithNS*), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scope});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_LookupNamespace
// Il2CppName: System.Xml.IXmlNamespaceResolver.LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAsyncCheckReaderWithNS::*)(::StringW)>(&System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckReaderWithNS*), "System.Xml.IXmlNamespaceResolver.LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_LookupPrefix
// Il2CppName: System.Xml.IXmlNamespaceResolver.LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAsyncCheckReaderWithNS::*)(::StringW)>(&System::Xml::XmlAsyncCheckReaderWithNS::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckReaderWithNS*), "System.Xml.IXmlNamespaceResolver.LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceName});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckReaderWithNS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
