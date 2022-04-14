// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaNames
  class SchemaNames;
  // Forward declaring type: ValidationEventHandler
  class ValidationEventHandler;
  // Forward declaring type: XmlSchemaCompilationSettings
  class XmlSchemaCompilationSettings;
  // Forward declaring type: XmlSchemaObjectTable
  class XmlSchemaObjectTable;
  // Forward declaring type: XmlSchemaObject
  class XmlSchemaObject;
  // Forward declaring type: XmlSeverityType
  struct XmlSeverityType;
  // Forward declaring type: XmlSchemaException
  class XmlSchemaException;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: BaseProcessor
  class BaseProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::BaseProcessor);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BaseProcessor*, "System.Xml.Schema", "BaseProcessor");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.BaseProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseProcessor : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.XmlNameTable nameTable
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlNameTable* nameTable;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNameTable*) == 0x8);
    // private System.Xml.Schema.SchemaNames schemaNames
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::SchemaNames* schemaNames;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaNames*) == 0x8);
    // private System.Xml.Schema.ValidationEventHandler eventHandler
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::ValidationEventHandler* eventHandler;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::ValidationEventHandler*) == 0x8);
    // private System.Xml.Schema.XmlSchemaCompilationSettings compilationSettings
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaCompilationSettings*) == 0x8);
    // private System.Int32 errorCount
    // Size: 0x4
    // Offset: 0x30
    int errorCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: errorCount and: NsXml
    char __padding4[0x4] = {};
    // private System.String NsXml
    // Size: 0x8
    // Offset: 0x38
    ::StringW NsXml;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlNameTable nameTable
    [[deprecated]] ::System::Xml::XmlNameTable*& dyn_nameTable();
    // Get instance field reference: private System.Xml.Schema.SchemaNames schemaNames
    [[deprecated]] ::System::Xml::Schema::SchemaNames*& dyn_schemaNames();
    // Get instance field reference: private System.Xml.Schema.ValidationEventHandler eventHandler
    [[deprecated]] ::System::Xml::Schema::ValidationEventHandler*& dyn_eventHandler();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaCompilationSettings compilationSettings
    [[deprecated]] ::System::Xml::Schema::XmlSchemaCompilationSettings*& dyn_compilationSettings();
    // Get instance field reference: private System.Int32 errorCount
    [[deprecated]] int& dyn_errorCount();
    // Get instance field reference: private System.String NsXml
    [[deprecated]] ::StringW& dyn_NsXml();
    // protected System.Xml.XmlNameTable get_NameTable()
    // Offset: 0xB5CEB0
    ::System::Xml::XmlNameTable* get_NameTable();
    // protected System.Xml.Schema.SchemaNames get_SchemaNames()
    // Offset: 0xB5CEB8
    ::System::Xml::Schema::SchemaNames* get_SchemaNames();
    // protected System.Xml.Schema.ValidationEventHandler get_EventHandler()
    // Offset: 0xB5CF30
    ::System::Xml::Schema::ValidationEventHandler* get_EventHandler();
    // protected System.Xml.Schema.XmlSchemaCompilationSettings get_CompilationSettings()
    // Offset: 0xB5CF38
    ::System::Xml::Schema::XmlSchemaCompilationSettings* get_CompilationSettings();
    // protected System.Boolean get_HasErrors()
    // Offset: 0xB5CF40
    bool get_HasErrors();
    // public System.Void .ctor(System.Xml.XmlNameTable nameTable, System.Xml.Schema.SchemaNames schemaNames, System.Xml.Schema.ValidationEventHandler eventHandler)
    // Offset: 0xB5CD90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseProcessor* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::BaseProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseProcessor*, creationType>(nameTable, schemaNames, eventHandler)));
    }
    // public System.Void .ctor(System.Xml.XmlNameTable nameTable, System.Xml.Schema.SchemaNames schemaNames, System.Xml.Schema.ValidationEventHandler eventHandler, System.Xml.Schema.XmlSchemaCompilationSettings compilationSettings)
    // Offset: 0xB5CE18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseProcessor* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::BaseProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseProcessor*, creationType>(nameTable, schemaNames, eventHandler, compilationSettings)));
    }
    // protected System.Void AddToTable(System.Xml.Schema.XmlSchemaObjectTable table, System.Xml.XmlQualifiedName qname, System.Xml.Schema.XmlSchemaObject item)
    // Offset: 0xB5CF50
    void AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* table, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* item);
    // private System.Boolean IsValidAttributeGroupRedefine(System.Xml.Schema.XmlSchemaObject existingObject, System.Xml.Schema.XmlSchemaObject item, System.Xml.Schema.XmlSchemaObjectTable table)
    // Offset: 0xB5D3B4
    bool IsValidAttributeGroupRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table);
    // private System.Boolean IsValidGroupRedefine(System.Xml.Schema.XmlSchemaObject existingObject, System.Xml.Schema.XmlSchemaObject item, System.Xml.Schema.XmlSchemaObjectTable table)
    // Offset: 0xB5D60C
    bool IsValidGroupRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table);
    // private System.Boolean IsValidTypeRedefine(System.Xml.Schema.XmlSchemaObject existingObject, System.Xml.Schema.XmlSchemaObject item, System.Xml.Schema.XmlSchemaObjectTable table)
    // Offset: 0xB5D4E0
    bool IsValidTypeRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table);
    // protected System.Void SendValidationEvent(System.String code, System.Xml.Schema.XmlSchemaObject source)
    // Offset: 0xB5D7B0
    void SendValidationEvent(::StringW code, ::System::Xml::Schema::XmlSchemaObject* source);
    // protected System.Void SendValidationEvent(System.String code, System.String msg, System.Xml.Schema.XmlSchemaObject source)
    // Offset: 0xB5D724
    void SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSchemaObject* source);
    // protected System.Void SendValidationEvent(System.String code, System.String msg1, System.String msg2, System.Xml.Schema.XmlSchemaObject source)
    // Offset: 0xB5D8F0
    void SendValidationEvent(::StringW code, ::StringW msg1, ::StringW msg2, ::System::Xml::Schema::XmlSchemaObject* source);
    // protected System.Void SendValidationEvent(System.String code, System.String[] args, System.Exception innerException, System.Xml.Schema.XmlSchemaObject source)
    // Offset: 0xB5DA10
    void SendValidationEvent(::StringW code, ::ArrayW<::StringW> args, ::System::Exception* innerException, ::System::Xml::Schema::XmlSchemaObject* source);
    // protected System.Void SendValidationEvent(System.String code, System.String msg1, System.String msg2, System.String sourceUri, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0xB5DAD8
    void SendValidationEvent(::StringW code, ::StringW msg1, ::StringW msg2, ::StringW sourceUri, int lineNumber, int linePosition);
    // protected System.Void SendValidationEvent(System.String code, System.Xml.Schema.XmlSchemaObject source, System.Xml.Schema.XmlSeverityType severity)
    // Offset: 0xB5DC10
    void SendValidationEvent(::StringW code, ::System::Xml::Schema::XmlSchemaObject* source, ::System::Xml::Schema::XmlSeverityType severity);
    // protected System.Void SendValidationEvent(System.Xml.Schema.XmlSchemaException e)
    // Offset: 0xB5DC98
    void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e);
    // protected System.Void SendValidationEvent(System.String code, System.String msg, System.Xml.Schema.XmlSchemaObject source, System.Xml.Schema.XmlSeverityType severity)
    // Offset: 0xB5DCA0
    void SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSchemaObject* source, ::System::Xml::Schema::XmlSeverityType severity);
    // protected System.Void SendValidationEvent(System.Xml.Schema.XmlSchemaException e, System.Xml.Schema.XmlSeverityType severity)
    // Offset: 0xB5D82C
    void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);
    // protected System.Void SendValidationEventNoThrow(System.Xml.Schema.XmlSchemaException e, System.Xml.Schema.XmlSeverityType severity)
    // Offset: 0xB5DD30
    void SendValidationEventNoThrow(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);
  }; // System.Xml.Schema.BaseProcessor
  #pragma pack(pop)
  static check_size<sizeof(BaseProcessor), 56 + sizeof(::StringW)> __System_Xml_Schema_BaseProcessorSizeCheck;
  static_assert(sizeof(BaseProcessor) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::get_NameTable
// Il2CppName: get_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (System::Xml::Schema::BaseProcessor::*)()>(&System::Xml::Schema::BaseProcessor::get_NameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "get_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::get_SchemaNames
// Il2CppName: get_SchemaNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaNames* (System::Xml::Schema::BaseProcessor::*)()>(&System::Xml::Schema::BaseProcessor::get_SchemaNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "get_SchemaNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::get_EventHandler
// Il2CppName: get_EventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::ValidationEventHandler* (System::Xml::Schema::BaseProcessor::*)()>(&System::Xml::Schema::BaseProcessor::get_EventHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "get_EventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::get_CompilationSettings
// Il2CppName: get_CompilationSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaCompilationSettings* (System::Xml::Schema::BaseProcessor::*)()>(&System::Xml::Schema::BaseProcessor::get_CompilationSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "get_CompilationSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::get_HasErrors
// Il2CppName: get_HasErrors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BaseProcessor::*)()>(&System::Xml::Schema::BaseProcessor::get_HasErrors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "get_HasErrors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::AddToTable
// Il2CppName: AddToTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::BaseProcessor::AddToTable)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectTable")->byval_arg;
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "AddToTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, qname, item});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::IsValidAttributeGroupRedefine
// Il2CppName: IsValidAttributeGroupRedefine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*)>(&System::Xml::Schema::BaseProcessor::IsValidAttributeGroupRedefine)> {
  static const MethodInfo* get() {
    static auto* existingObject = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "IsValidAttributeGroupRedefine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existingObject, item, table});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::IsValidGroupRedefine
// Il2CppName: IsValidGroupRedefine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*)>(&System::Xml::Schema::BaseProcessor::IsValidGroupRedefine)> {
  static const MethodInfo* get() {
    static auto* existingObject = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "IsValidGroupRedefine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existingObject, item, table});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::IsValidTypeRedefine
// Il2CppName: IsValidTypeRedefine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*)>(&System::Xml::Schema::BaseProcessor::IsValidTypeRedefine)> {
  static const MethodInfo* get() {
    static auto* existingObject = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "IsValidTypeRedefine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existingObject, item, table});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::StringW, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, source});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, msg, source});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* msg1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* msg2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, msg1, msg2, source});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::StringW, ::ArrayW<::StringW>, ::System::Exception*, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* innerException = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, args, innerException, source});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::StringW, ::StringW, ::StringW, ::StringW, int, int)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* msg1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* msg2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sourceUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lineNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, msg1, msg2, sourceUri, lineNumber, linePosition});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::StringW, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSeverityType)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* severity = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSeverityType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, source, severity});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaException*)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSeverityType)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* severity = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSeverityType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, msg, source, severity});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEvent
// Il2CppName: SendValidationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(&System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaException")->byval_arg;
    static auto* severity = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSeverityType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, severity});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BaseProcessor::SendValidationEventNoThrow
// Il2CppName: SendValidationEventNoThrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(&System::Xml::Schema::BaseProcessor::SendValidationEventNoThrow)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaException")->byval_arg;
    static auto* severity = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSeverityType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BaseProcessor*), "SendValidationEventNoThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, severity});
  }
};
