// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
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
  // Forward declaring type: WriteState
  struct WriteState;
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWriter*, "System.Xml", "XmlWriter");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlWriter : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Char[] writeNodeBuffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppChar> writeNodeBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<::Il2CppChar>
    constexpr operator ::ArrayW<::Il2CppChar>() const noexcept {
      return writeNodeBuffer;
    }
    // Get instance field reference: private System.Char[] writeNodeBuffer
    [[deprecated]] ::ArrayW<::Il2CppChar>& dyn_writeNodeBuffer();
    // public System.Xml.WriteState get_WriteState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::WriteState get_WriteState();
    // public System.Void WriteStartDocument()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteStartDocument();
    // public System.Void WriteStartDocument(System.Boolean standalone)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteStartDocument(bool standalone);
    // public System.Void WriteEndDocument()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteEndDocument();
    // public System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);
    // public System.Void WriteStartElement(System.String localName, System.String ns)
    // Offset: 0xEC2AE0
    void WriteStartElement(::StringW localName, ::StringW ns);
    // public System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // public System.Void WriteEndElement()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteEndElement();
    // public System.Void WriteFullEndElement()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteFullEndElement();
    // public System.Void WriteAttributeString(System.String localName, System.String ns, System.String value)
    // Offset: 0xEC2AF8
    void WriteAttributeString(::StringW localName, ::StringW ns, ::StringW value);
    // public System.Void WriteAttributeString(System.String localName, System.String value)
    // Offset: 0xEC2B58
    void WriteAttributeString(::StringW localName, ::StringW value);
    // public System.Void WriteAttributeString(System.String prefix, System.String localName, System.String ns, System.String value)
    // Offset: 0xEC2BB8
    void WriteAttributeString(::StringW prefix, ::StringW localName, ::StringW ns, ::StringW value);
    // public System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);
    // public System.Void WriteEndAttribute()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteEndAttribute();
    // public System.Void WriteCData(System.String text)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteCData(::StringW text);
    // public System.Void WriteComment(System.String text)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteComment(::StringW text);
    // public System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteProcessingInstruction(::StringW name, ::StringW text);
    // public System.Void WriteEntityRef(System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteEntityRef(::StringW name);
    // public System.Void WriteCharEntity(System.Char ch)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteCharEntity(::Il2CppChar ch);
    // public System.Void WriteWhitespace(System.String ws)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteWhitespace(::StringW ws);
    // public System.Void WriteString(System.String text)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteString(::StringW text);
    // public System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteChars(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteRaw(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public System.Void WriteRaw(System.String data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteRaw(::StringW data);
    // public System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteBase64(::ArrayW<uint8_t> buffer, int index, int count);
    // public System.Void WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xEC2C0C
    void WriteBinHex(::ArrayW<uint8_t> buffer, int index, int count);
    // public System.Void Close()
    // Offset: 0xEC2C28
    void Close();
    // public System.Void Flush()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Flush();
    // public System.String LookupPrefix(System.String ns)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW LookupPrefix(::StringW ns);
    // public System.Void WriteValue(System.String value)
    // Offset: 0xEC2C2C
    void WriteValue(::StringW value);
    // public System.Void WriteAttributes(System.Xml.XmlReader reader, System.Boolean defattr)
    // Offset: 0xEC2C44
    void WriteAttributes(::System::Xml::XmlReader* reader, bool defattr);
    // public System.Void WriteNode(System.Xml.XmlReader reader, System.Boolean defattr)
    // Offset: 0xEC2ED0
    void WriteNode(::System::Xml::XmlReader* reader, bool defattr);
    // public System.Void WriteElementString(System.String localName, System.String ns, System.String value)
    // Offset: 0xEC3334
    void WriteElementString(::StringW localName, ::StringW ns, ::StringW value);
    // public System.Void Dispose()
    // Offset: 0xEC339C
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xEC33B0
    void Dispose(bool disposing);
    // static public System.Xml.XmlWriter Create(System.IO.Stream output, System.Xml.XmlWriterSettings settings)
    // Offset: 0xEC3404
    static ::System::Xml::XmlWriter* Create(::System::IO::Stream* output, ::System::Xml::XmlWriterSettings* settings);
    // static public System.Xml.XmlWriter Create(System.IO.TextWriter output, System.Xml.XmlWriterSettings settings)
    // Offset: 0xEC3974
    static ::System::Xml::XmlWriter* Create(::System::IO::TextWriter* output, ::System::Xml::XmlWriterSettings* settings);
    // protected System.Void .ctor()
    // Offset: 0xEC3CEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWriter*, creationType>()));
    }
  }; // System.Xml.XmlWriter
  #pragma pack(pop)
  static check_size<sizeof(XmlWriter), 16 + sizeof(::ArrayW<::Il2CppChar>)> __System_Xml_XmlWriterSizeCheck;
  static_assert(sizeof(XmlWriter) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlWriter::get_WriteState
// Il2CppName: get_WriteState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::WriteState (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::get_WriteState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "get_WriteState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteStartDocument
// Il2CppName: WriteStartDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::WriteStartDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteStartDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteStartDocument
// Il2CppName: WriteStartDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(bool)>(&System::Xml::XmlWriter::WriteStartDocument)> {
  static const MethodInfo* get() {
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteStartDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteEndDocument
// Il2CppName: WriteEndDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::WriteEndDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteEndDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteDocType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::WriteEndElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::WriteFullEndElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteAttributeString
// Il2CppName: WriteAttributeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteAttributeString)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteAttributeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, ns, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteAttributeString
// Il2CppName: WriteAttributeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteAttributeString)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteAttributeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteAttributeString
// Il2CppName: WriteAttributeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteAttributeString)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteAttributeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteStartAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteEndAttribute
// Il2CppName: WriteEndAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::WriteEndAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteEndAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteCData
// Il2CppName: WriteCData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW)>(&System::Xml::XmlWriter::WriteCData)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteCData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW)>(&System::Xml::XmlWriter::WriteComment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW)>(&System::Xml::XmlWriter::WriteEntityRef)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::Il2CppChar)>(&System::Xml::XmlWriter::WriteCharEntity)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW)>(&System::Xml::XmlWriter::WriteWhitespace)> {
  static const MethodInfo* get() {
    static auto* ws = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ws});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW)>(&System::Xml::XmlWriter::WriteString)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlWriter::WriteSurrogateCharEntity)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlWriter::WriteChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW)>(&System::Xml::XmlWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteBase64
// Il2CppName: WriteBase64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::XmlWriter::WriteBase64)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteBase64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteBinHex
// Il2CppName: WriteBinHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::XmlWriter::WriteBinHex)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteBinHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlWriter::*)(::StringW)>(&System::Xml::XmlWriter::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW)>(&System::Xml::XmlWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteAttributes
// Il2CppName: WriteAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::System::Xml::XmlReader*, bool)>(&System::Xml::XmlWriter::WriteAttributes)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* defattr = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, defattr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteNode
// Il2CppName: WriteNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::System::Xml::XmlReader*, bool)>(&System::Xml::XmlWriter::WriteNode)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* defattr = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, defattr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::WriteElementString
// Il2CppName: WriteElementString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWriter::WriteElementString)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "WriteElementString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, ns, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)()>(&System::Xml::XmlWriter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriter::*)(bool)>(&System::Xml::XmlWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlWriter* (*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(&System::Xml::XmlWriter::Create)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriterSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, settings});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlWriter* (*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*)>(&System::Xml::XmlWriter::Create)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriterSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriter*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, settings});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
