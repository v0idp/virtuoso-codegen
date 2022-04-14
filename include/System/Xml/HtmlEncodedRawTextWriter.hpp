// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlEncodedRawTextWriter
#include "System/Xml/XmlEncodedRawTextWriter.hpp"
// Including type: System.Xml.ElementProperties
#include "System/Xml/ElementProperties.hpp"
// Including type: System.Xml.AttributeProperties
#include "System/Xml/AttributeProperties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: ByteStack
  class ByteStack;
  // Forward declaring type: TernaryTreeReadOnly
  class TernaryTreeReadOnly;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Skipping declaration: XmlStandalone because it is already included!
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: HtmlEncodedRawTextWriter
  class HtmlEncodedRawTextWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::HtmlEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlEncodedRawTextWriter*, "System.Xml", "HtmlEncodedRawTextWriter");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xE9
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.HtmlEncodedRawTextWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class HtmlEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter {
    public:
    // Writing base type padding for base size: 0xBE to desired offset: 0xC0
    char ___base_padding[0x2] = {};
    public:
    // protected System.Xml.ByteStack elementScope
    // Size: 0x8
    // Offset: 0xC0
    ::System::Xml::ByteStack* elementScope;
    // Field size check
    static_assert(sizeof(::System::Xml::ByteStack*) == 0x8);
    // protected System.Xml.ElementProperties currentElementProperties
    // Size: 0x4
    // Offset: 0xC8
    ::System::Xml::ElementProperties currentElementProperties;
    // Field size check
    static_assert(sizeof(::System::Xml::ElementProperties) == 0x4);
    // private System.Xml.AttributeProperties currentAttributeProperties
    // Size: 0x4
    // Offset: 0xCC
    ::System::Xml::AttributeProperties currentAttributeProperties;
    // Field size check
    static_assert(sizeof(::System::Xml::AttributeProperties) == 0x4);
    // private System.Boolean endsWithAmpersand
    // Size: 0x1
    // Offset: 0xD0
    bool endsWithAmpersand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: endsWithAmpersand and: uriEscapingBuffer
    char __padding3[0x7] = {};
    // private System.Byte[] uriEscapingBuffer
    // Size: 0x8
    // Offset: 0xD8
    ::ArrayW<uint8_t> uriEscapingBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String mediaType
    // Size: 0x8
    // Offset: 0xE0
    ::StringW mediaType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean doNotEscapeUriAttributes
    // Size: 0x1
    // Offset: 0xE8
    bool doNotEscapeUriAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static protected System.Xml.TernaryTreeReadOnly elementPropertySearch
    static ::System::Xml::TernaryTreeReadOnly* _get_elementPropertySearch();
    // Set static field: static protected System.Xml.TernaryTreeReadOnly elementPropertySearch
    static void _set_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value);
    // Get static field: static protected System.Xml.TernaryTreeReadOnly attributePropertySearch
    static ::System::Xml::TernaryTreeReadOnly* _get_attributePropertySearch();
    // Set static field: static protected System.Xml.TernaryTreeReadOnly attributePropertySearch
    static void _set_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value);
    // Get instance field reference: protected System.Xml.ByteStack elementScope
    [[deprecated]] ::System::Xml::ByteStack*& dyn_elementScope();
    // Get instance field reference: protected System.Xml.ElementProperties currentElementProperties
    [[deprecated]] ::System::Xml::ElementProperties& dyn_currentElementProperties();
    // Get instance field reference: private System.Xml.AttributeProperties currentAttributeProperties
    [[deprecated]] ::System::Xml::AttributeProperties& dyn_currentAttributeProperties();
    // Get instance field reference: private System.Boolean endsWithAmpersand
    [[deprecated]] bool& dyn_endsWithAmpersand();
    // Get instance field reference: private System.Byte[] uriEscapingBuffer
    [[deprecated]] ::ArrayW<uint8_t>& dyn_uriEscapingBuffer();
    // Get instance field reference: private System.String mediaType
    [[deprecated]] ::StringW& dyn_mediaType();
    // Get instance field reference: private System.Boolean doNotEscapeUriAttributes
    [[deprecated]] bool& dyn_doNotEscapeUriAttributes();
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0xAEEFC0
    void Init(::System::Xml::XmlWriterSettings* settings);
    // protected System.Void WriteMetaElement()
    // Offset: 0xAEF594
    void WriteMetaElement();
    // protected System.Void WriteHtmlElementTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0xAEFE30
    void WriteHtmlElementTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteHtmlAttributeTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0xAEFDEC
    void WriteHtmlAttributeTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void WriteHtmlAttributeText(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0xAF0358
    void WriteHtmlAttributeText(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void WriteUriAttributeText(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0xAEFFF8
    void WriteUriAttributeText(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void OutputRestAmps()
    // Offset: 0xAEFB48
    void OutputRestAmps();
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0xAEEF90
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HtmlEncodedRawTextWriter* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::HtmlEncodedRawTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HtmlEncodedRawTextWriter*, creationType>(writer, settings)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0xAEF140
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HtmlEncodedRawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::HtmlEncodedRawTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HtmlEncodedRawTextWriter*, creationType>(stream, settings)));
    }
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0xAEF170
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0xAEF174
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::StringW xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0xAEF178
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xAEF3E8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // override System.Void StartElementContent()
    // Offset: 0xAEF530
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xAEF6AC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xAEF7D0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xAEF8F4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0xAEFA9C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // public override System.Void WriteProcessingInstruction(System.String target, System.String text)
    // Offset: 0xAEFC18
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteProcessingInstruction(System.String target, System.String text)
    void WriteProcessingInstruction(::StringW target, ::StringW text);
    // public override System.Void WriteString(System.String text)
    // Offset: 0xAEFD78
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteString(System.String text)
    void WriteString(::StringW text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0xAEFE48
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::StringW name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0xAEFEA4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0xAEFF00
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xAEFF5C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::ArrayW<::Il2CppChar> buffer, int index, int count);
  }; // System.Xml.HtmlEncodedRawTextWriter
  #pragma pack(pop)
  static check_size<sizeof(HtmlEncodedRawTextWriter), 232 + sizeof(bool)> __System_Xml_HtmlEncodedRawTextWriterSizeCheck;
  static_assert(sizeof(HtmlEncodedRawTextWriter) == 0xE9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::System::Xml::XmlWriterSettings*)>(&System::Xml::HtmlEncodedRawTextWriter::Init)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriterSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteMetaElement
// Il2CppName: WriteMetaElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)()>(&System::Xml::HtmlEncodedRawTextWriter::WriteMetaElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteMetaElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteHtmlElementTextBlock
// Il2CppName: WriteHtmlElementTextBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Xml::HtmlEncodedRawTextWriter::WriteHtmlElementTextBlock)> {
  static const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pSrcEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteHtmlElementTextBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, pSrcEnd});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeTextBlock
// Il2CppName: WriteHtmlAttributeTextBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeTextBlock)> {
  static const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pSrcEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteHtmlAttributeTextBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, pSrcEnd});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeText
// Il2CppName: WriteHtmlAttributeText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeText)> {
  static const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pSrcEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteHtmlAttributeText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, pSrcEnd});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteUriAttributeText
// Il2CppName: WriteUriAttributeText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Xml::HtmlEncodedRawTextWriter::WriteUriAttributeText)> {
  static const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pSrcEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteUriAttributeText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, pSrcEnd});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::OutputRestAmps
// Il2CppName: OutputRestAmps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)()>(&System::Xml::HtmlEncodedRawTextWriter::OutputRestAmps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "OutputRestAmps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::System::Xml::XmlStandalone)>(&System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlStandalone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* xmldecl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmldecl});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteDocType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)()>(&System::Xml::HtmlEncodedRawTextWriter::StartElementContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteFullEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteStartAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteEndAttribute
// Il2CppName: WriteEndAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)()>(&System::Xml::HtmlEncodedRawTextWriter::WriteEndAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteEndAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, text});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteString)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(&System::Xml::HtmlEncodedRawTextWriter::WriteEntityRef)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::Il2CppChar)>(&System::Xml::HtmlEncodedRawTextWriter::WriteCharEntity)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::HtmlEncodedRawTextWriter::WriteSurrogateCharEntity)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::HtmlEncodedRawTextWriter::WriteChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};