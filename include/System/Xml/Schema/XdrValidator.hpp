// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.BaseValidator
#include "System/Xml/Schema/BaseValidator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: HWStack
  class HWStack;
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: XmlNamespaceManager
  class XmlNamespaceManager;
  // Forward declaring type: XmlTokenizedType
  struct XmlTokenizedType;
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: XmlValidatingReaderImpl
  class XmlValidatingReaderImpl;
  // Forward declaring type: IValidationEventHandling
  class IValidationEventHandling;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: IdRefNode
  class IdRefNode;
  // Forward declaring type: Parser
  class Parser;
  // Forward declaring type: SchemaElementDecl
  class SchemaElementDecl;
  // Forward declaring type: SchemaAttDef
  class SchemaAttDef;
  // Forward declaring type: SchemaInfo
  class SchemaInfo;
  // Forward declaring type: ValidationEventHandler
  class ValidationEventHandler;
  // Forward declaring type: XmlSchemaCollection
  class XmlSchemaCollection;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XdrValidator
  class XdrValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XdrValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrValidator*, "System.Xml.Schema", "XdrValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XdrValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class XdrValidator : public ::System::Xml::Schema::BaseValidator {
    public:
    // Writing base type padding for base size: 0x7A to desired offset: 0x80
    char ___base_padding[0x6] = {};
    public:
    // private System.Xml.HWStack validationStack
    // Size: 0x8
    // Offset: 0x80
    ::System::Xml::HWStack* validationStack;
    // Field size check
    static_assert(sizeof(::System::Xml::HWStack*) == 0x8);
    // private System.Collections.Hashtable attPresence
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::Hashtable* attPresence;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Xml.XmlQualifiedName name
    // Size: 0x8
    // Offset: 0x90
    ::System::Xml::XmlQualifiedName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Xml.XmlNamespaceManager nsManager
    // Size: 0x8
    // Offset: 0x98
    ::System::Xml::XmlNamespaceManager* nsManager;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNamespaceManager*) == 0x8);
    // private System.Boolean isProcessContents
    // Size: 0x1
    // Offset: 0xA0
    bool isProcessContents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isProcessContents and: IDs
    char __padding4[0x7] = {};
    // private System.Collections.Hashtable IDs
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Hashtable* IDs;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Xml.Schema.IdRefNode idRefListHead
    // Size: 0x8
    // Offset: 0xB0
    ::System::Xml::Schema::IdRefNode* idRefListHead;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::IdRefNode*) == 0x8);
    // private System.Xml.Schema.Parser inlineSchemaParser
    // Size: 0x8
    // Offset: 0xB8
    ::System::Xml::Schema::Parser* inlineSchemaParser;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::Parser*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.HWStack validationStack
    [[deprecated("Use field access instead!")]] ::System::Xml::HWStack*& dyn_validationStack();
    // Get instance field reference: private System.Collections.Hashtable attPresence
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_attPresence();
    // Get instance field reference: private System.Xml.XmlQualifiedName name
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn_name();
    // Get instance field reference: private System.Xml.XmlNamespaceManager nsManager
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNamespaceManager*& dyn_nsManager();
    // Get instance field reference: private System.Boolean isProcessContents
    [[deprecated("Use field access instead!")]] bool& dyn_isProcessContents();
    // Get instance field reference: private System.Collections.Hashtable IDs
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_IDs();
    // Get instance field reference: private System.Xml.Schema.IdRefNode idRefListHead
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::IdRefNode*& dyn_idRefListHead();
    // Get instance field reference: private System.Xml.Schema.Parser inlineSchemaParser
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::Parser*& dyn_inlineSchemaParser();
    // private System.Boolean get_IsInlineSchemaStarted()
    // Offset: 0x11AC654
    bool get_IsInlineSchemaStarted();
    // private System.Boolean get_HasSchema()
    // Offset: 0x11AE840
    bool get_HasSchema();
    // private System.Void Init()
    // Offset: 0x11AC240
    void Init();
    // private System.Void ValidateElement()
    // Offset: 0x11AC848
    void ValidateElement();
    // private System.Void ValidateChildElement()
    // Offset: 0x11ACBC0
    void ValidateChildElement();
    // private System.Void ProcessInlineSchema()
    // Offset: 0x11AC664
    void ProcessInlineSchema();
    // private System.Void ProcessElement()
    // Offset: 0x11ACD1C
    void ProcessElement();
    // private System.Void ValidateEndElement()
    // Offset: 0x11AC9EC
    void ValidateEndElement();
    // private System.Xml.Schema.SchemaElementDecl ThoroughGetElementDecl()
    // Offset: 0x11ACDD0
    ::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl();
    // private System.Void ValidateStartElement()
    // Offset: 0x11AD0FC
    void ValidateStartElement();
    // private System.Void ValidateEndStartElement()
    // Offset: 0x11AD528
    void ValidateEndStartElement();
    // private System.Void LoadSchemaFromLocation(System.String uri)
    // Offset: 0x11AE19C
    void LoadSchemaFromLocation(::StringW uri);
    // private System.Void LoadSchema(System.String uri)
    // Offset: 0x11ADF64
    void LoadSchema(::StringW uri);
    // private System.Void ProcessTokenizedType(System.Xml.XmlTokenizedType ttype, System.String name)
    // Offset: 0x11AE8A0
    void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name);
    // private System.Void CheckValue(System.String value, System.Xml.Schema.SchemaAttDef attdef)
    // Offset: 0x11AD8B4
    void CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef);
    // static public System.Void CheckDefaultValue(System.String value, System.Xml.Schema.SchemaAttDef attdef, System.Xml.Schema.SchemaInfo sinfo, System.Xml.XmlNamespaceManager nsManager, System.Xml.XmlNameTable NameTable, System.Object sender, System.Xml.Schema.ValidationEventHandler eventhandler, System.String baseUri, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x11AA1D0
    static void CheckDefaultValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::XmlNamespaceManager* nsManager, ::System::Xml::XmlNameTable* NameTable, ::Il2CppObject* sender, ::System::Xml::Schema::ValidationEventHandler* eventhandler, ::StringW baseUri, int lineNo, int linePos);
    // System.Void AddID(System.String name, System.Object node)
    // Offset: 0x11AEAA8
    void AddID(::StringW name, ::Il2CppObject* node);
    // private System.Void Push(System.Xml.XmlQualifiedName elementName)
    // Offset: 0x11AC484
    void Push(::System::Xml::XmlQualifiedName* elementName);
    // private System.Void Pop()
    // Offset: 0x11ADED4
    void Pop();
    // private System.Void CheckForwardRefs()
    // Offset: 0x11AEC10
    void CheckForwardRefs();
    // private System.Xml.XmlQualifiedName QualifiedName(System.String name, System.String ns)
    // Offset: 0x11AE0FC
    ::System::Xml::XmlQualifiedName* QualifiedName(::StringW name, ::StringW ns);
    // public override System.Boolean get_PreserveWhitespace()
    // Offset: 0x11AE864
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Boolean BaseValidator::get_PreserveWhitespace()
    bool get_PreserveWhitespace();
    // System.Void .ctor(System.Xml.Schema.BaseValidator validator)
    // Offset: 0x11AC1B4
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Void BaseValidator::.ctor(System.Xml.Schema.BaseValidator validator)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XdrValidator* New_ctor(::System::Xml::Schema::BaseValidator* validator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XdrValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XdrValidator*, creationType>(validator)));
    }
    // System.Void .ctor(System.Xml.XmlValidatingReaderImpl reader, System.Xml.Schema.XmlSchemaCollection schemaCollection, System.Xml.IValidationEventHandling eventHandling)
    // Offset: 0x11AC3E0
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Void BaseValidator::.ctor(System.Xml.XmlValidatingReaderImpl reader, System.Xml.Schema.XmlSchemaCollection schemaCollection, System.Xml.IValidationEventHandling eventHandling)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XdrValidator* New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XdrValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XdrValidator*, creationType>(reader, schemaCollection, eventHandling)));
    }
    // public override System.Void Validate()
    // Offset: 0x11AC580
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Void BaseValidator::Validate()
    void Validate();
    // public override System.Void CompleteValidation()
    // Offset: 0x11AEB3C
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Void BaseValidator::CompleteValidation()
    void CompleteValidation();
    // public override System.Object FindId(System.String name)
    // Offset: 0x11AED20
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Object BaseValidator::FindId(System.String name)
    ::Il2CppObject* FindId(::StringW name);
  }; // System.Xml.Schema.XdrValidator
  #pragma pack(pop)
  static check_size<sizeof(XdrValidator), 184 + sizeof(::System::Xml::Schema::Parser*)> __System_Xml_Schema_XdrValidatorSizeCheck;
  static_assert(sizeof(XdrValidator) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::get_IsInlineSchemaStarted
// Il2CppName: get_IsInlineSchemaStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::get_IsInlineSchemaStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "get_IsInlineSchemaStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::get_HasSchema
// Il2CppName: get_HasSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::get_HasSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "get_HasSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ValidateElement
// Il2CppName: ValidateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::ValidateElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ValidateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ValidateChildElement
// Il2CppName: ValidateChildElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::ValidateChildElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ValidateChildElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ProcessInlineSchema
// Il2CppName: ProcessInlineSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::ProcessInlineSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ProcessInlineSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ProcessElement
// Il2CppName: ProcessElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::ProcessElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ProcessElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ValidateEndElement
// Il2CppName: ValidateEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::ValidateEndElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ValidateEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ThoroughGetElementDecl
// Il2CppName: ThoroughGetElementDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaElementDecl* (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::ThoroughGetElementDecl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ThoroughGetElementDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ValidateStartElement
// Il2CppName: ValidateStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::ValidateStartElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ValidateStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ValidateEndStartElement
// Il2CppName: ValidateEndStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::ValidateEndStartElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ValidateEndStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::LoadSchemaFromLocation
// Il2CppName: LoadSchemaFromLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)(::StringW)>(&System::Xml::Schema::XdrValidator::LoadSchemaFromLocation)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "LoadSchemaFromLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::LoadSchema
// Il2CppName: LoadSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)(::StringW)>(&System::Xml::Schema::XdrValidator::LoadSchema)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "LoadSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::ProcessTokenizedType
// Il2CppName: ProcessTokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)(::System::Xml::XmlTokenizedType, ::StringW)>(&System::Xml::Schema::XdrValidator::ProcessTokenizedType)> {
  static const MethodInfo* get() {
    static auto* ttype = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlTokenizedType")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "ProcessTokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ttype, name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::CheckValue
// Il2CppName: CheckValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)(::StringW, ::System::Xml::Schema::SchemaAttDef*)>(&System::Xml::Schema::XdrValidator::CheckValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attdef = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaAttDef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "CheckValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, attdef});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::CheckDefaultValue
// Il2CppName: CheckDefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::XmlNameTable*, ::Il2CppObject*, ::System::Xml::Schema::ValidationEventHandler*, ::StringW, int, int)>(&System::Xml::Schema::XdrValidator::CheckDefaultValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attdef = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaAttDef")->byval_arg;
    static auto* sinfo = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaInfo")->byval_arg;
    static auto* nsManager = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNamespaceManager")->byval_arg;
    static auto* NameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* eventhandler = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationEventHandler")->byval_arg;
    static auto* baseUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lineNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "CheckDefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, attdef, sinfo, nsManager, NameTable, sender, eventhandler, baseUri, lineNo, linePos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::AddID
// Il2CppName: AddID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)(::StringW, ::Il2CppObject*)>(&System::Xml::Schema::XdrValidator::AddID)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "AddID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, node});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XdrValidator::Push)> {
  static const MethodInfo* get() {
    static auto* elementName = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementName});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::CheckForwardRefs
// Il2CppName: CheckForwardRefs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::CheckForwardRefs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "CheckForwardRefs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::QualifiedName
// Il2CppName: QualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::XdrValidator::*)(::StringW, ::StringW)>(&System::Xml::Schema::XdrValidator::QualifiedName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "QualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::get_PreserveWhitespace
// Il2CppName: get_PreserveWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::get_PreserveWhitespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "get_PreserveWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::Validate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::CompleteValidation
// Il2CppName: CompleteValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrValidator::*)()>(&System::Xml::Schema::XdrValidator::CompleteValidation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "CompleteValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrValidator::FindId
// Il2CppName: FindId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XdrValidator::*)(::StringW)>(&System::Xml::Schema::XdrValidator::FindId)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrValidator*), "FindId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
