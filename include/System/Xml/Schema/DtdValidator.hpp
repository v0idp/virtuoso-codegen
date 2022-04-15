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
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: IdRefNode
  class IdRefNode;
  // Forward declaring type: SchemaAttDef
  class SchemaAttDef;
  // Forward declaring type: SchemaEntity
  class SchemaEntity;
  // Forward declaring type: SchemaInfo
  class SchemaInfo;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: HWStack
  class HWStack;
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: XmlValidatingReaderImpl
  class XmlValidatingReaderImpl;
  // Forward declaring type: IValidationEventHandling
  class IValidationEventHandling;
  // Forward declaring type: XmlTokenizedType
  struct XmlTokenizedType;
  // Forward declaring type: IDtdParserAdapter
  class IDtdParserAdapter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: DtdValidator
  class DtdValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::DtdValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DtdValidator*, "System.Xml.Schema", "DtdValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0xA9
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.DtdValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class DtdValidator : public ::System::Xml::Schema::BaseValidator {
    public:
    // Writing base type padding for base size: 0x7A to desired offset: 0x80
    char ___base_padding[0x6] = {};
    // Nested type: ::System::Xml::Schema::DtdValidator::NamespaceManager
    class NamespaceManager;
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
    // private System.Collections.Hashtable IDs
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Hashtable* IDs;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Xml.Schema.IdRefNode idRefListHead
    // Size: 0x8
    // Offset: 0xA0
    ::System::Xml::Schema::IdRefNode* idRefListHead;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::IdRefNode*) == 0x8);
    // private System.Boolean processIdentityConstraints
    // Size: 0x1
    // Offset: 0xA8
    bool processIdentityConstraints;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Xml.Schema.DtdValidator/System.Xml.Schema.NamespaceManager namespaceManager
    static ::System::Xml::Schema::DtdValidator::NamespaceManager* _get_namespaceManager();
    // Set static field: static private System.Xml.Schema.DtdValidator/System.Xml.Schema.NamespaceManager namespaceManager
    static void _set_namespaceManager(::System::Xml::Schema::DtdValidator::NamespaceManager* value);
    // Get instance field reference: private System.Xml.HWStack validationStack
    [[deprecated("Use field access instead!")]] ::System::Xml::HWStack*& dyn_validationStack();
    // Get instance field reference: private System.Collections.Hashtable attPresence
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_attPresence();
    // Get instance field reference: private System.Xml.XmlQualifiedName name
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn_name();
    // Get instance field reference: private System.Collections.Hashtable IDs
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_IDs();
    // Get instance field reference: private System.Xml.Schema.IdRefNode idRefListHead
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::IdRefNode*& dyn_idRefListHead();
    // Get instance field reference: private System.Boolean processIdentityConstraints
    [[deprecated("Use field access instead!")]] bool& dyn_processIdentityConstraints();
    // System.Void .ctor(System.Xml.XmlValidatingReaderImpl reader, System.Xml.IValidationEventHandling eventHandling, System.Boolean processIdentityConstraints)
    // Offset: 0xAEA764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DtdValidator* New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::DtdValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DtdValidator*, creationType>(reader, eventHandling, processIdentityConstraints)));
    }
    // static private System.Void .cctor()
    // Offset: 0xAED0C4
    static void _cctor();
    // private System.Void Init()
    // Offset: 0xAEA810
    void Init();
    // private System.Boolean MeetsStandAloneConstraint()
    // Offset: 0xAEAD44
    bool MeetsStandAloneConstraint();
    // private System.Void ValidatePIComment()
    // Offset: 0xAEADE8
    void ValidatePIComment();
    // private System.Void ValidateElement()
    // Offset: 0xAEAC30
    void ValidateElement();
    // private System.Void ValidateChildElement()
    // Offset: 0xAEB1C8
    void ValidateChildElement();
    // private System.Void ValidateStartElement()
    // Offset: 0xAEB44C
    void ValidateStartElement();
    // private System.Void ValidateEndStartElement()
    // Offset: 0xAEBE84
    void ValidateEndStartElement();
    // private System.Void ProcessElement()
    // Offset: 0xAEB324
    void ProcessElement();
    // private System.Void ValidateEndElement()
    // Offset: 0xAEB010
    void ValidateEndElement();
    // private System.Void ProcessTokenizedType(System.Xml.XmlTokenizedType ttype, System.String name)
    // Offset: 0xAEC294
    void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name);
    // private System.Void CheckValue(System.String value, System.Xml.Schema.SchemaAttDef attdef)
    // Offset: 0xAEB8CC
    void CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef);
    // System.Void AddID(System.String name, System.Object node)
    // Offset: 0xAEC4A8
    void AddID(::StringW name, ::Il2CppObject* node);
    // private System.Boolean GenEntity(System.Xml.XmlQualifiedName qname)
    // Offset: 0xAEAEB0
    bool GenEntity(::System::Xml::XmlQualifiedName* qname);
    // private System.Xml.Schema.SchemaEntity GetEntity(System.Xml.XmlQualifiedName qname, System.Boolean fParameterEntity)
    // Offset: 0xAEC5A8
    ::System::Xml::Schema::SchemaEntity* GetEntity(::System::Xml::XmlQualifiedName* qname, bool fParameterEntity);
    // private System.Void CheckForwardRefs()
    // Offset: 0xAEC148
    void CheckForwardRefs();
    // private System.Void Push(System.Xml.XmlQualifiedName elementName)
    // Offset: 0xAEA944
    void Push(::System::Xml::XmlQualifiedName* elementName);
    // private System.Boolean Pop()
    // Offset: 0xAEC0B4
    bool Pop();
    // static public System.Void SetDefaultTypedValue(System.Xml.Schema.SchemaAttDef attdef, System.Xml.IDtdParserAdapter readerAdapter)
    // Offset: 0xAEC8B0
    static void SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter);
    // static public System.Void CheckDefaultValue(System.Xml.Schema.SchemaAttDef attdef, System.Xml.Schema.SchemaInfo sinfo, System.Xml.IValidationEventHandling eventHandling, System.String baseUriStr)
    // Offset: 0xAECC88
    static void CheckDefaultValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::IValidationEventHandling* eventHandling, ::StringW baseUriStr);
    // public override System.Boolean get_PreserveWhitespace()
    // Offset: 0xAEC258
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Boolean BaseValidator::get_PreserveWhitespace()
    bool get_PreserveWhitespace();
    // public override System.Void Validate()
    // Offset: 0xAEAA38
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Void BaseValidator::Validate()
    void Validate();
    // public override System.Void CompleteValidation()
    // Offset: 0xAEC05C
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Void BaseValidator::CompleteValidation()
    void CompleteValidation();
    // public override System.Object FindId(System.String name)
    // Offset: 0xAEC58C
    // Implemented from: System.Xml.Schema.BaseValidator
    // Base method: System.Object BaseValidator::FindId(System.String name)
    ::Il2CppObject* FindId(::StringW name);
  }; // System.Xml.Schema.DtdValidator
  #pragma pack(pop)
  static check_size<sizeof(DtdValidator), 168 + sizeof(bool)> __System_Xml_Schema_DtdValidatorSizeCheck;
  static_assert(sizeof(DtdValidator) == 0xA9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::DtdValidator::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::MeetsStandAloneConstraint
// Il2CppName: MeetsStandAloneConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::MeetsStandAloneConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "MeetsStandAloneConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::ValidatePIComment
// Il2CppName: ValidatePIComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::ValidatePIComment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "ValidatePIComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::ValidateElement
// Il2CppName: ValidateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::ValidateElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "ValidateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::ValidateChildElement
// Il2CppName: ValidateChildElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::ValidateChildElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "ValidateChildElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::ValidateStartElement
// Il2CppName: ValidateStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::ValidateStartElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "ValidateStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::ValidateEndStartElement
// Il2CppName: ValidateEndStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::ValidateEndStartElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "ValidateEndStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::ProcessElement
// Il2CppName: ProcessElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::ProcessElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "ProcessElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::ValidateEndElement
// Il2CppName: ValidateEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::ValidateEndElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "ValidateEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::ProcessTokenizedType
// Il2CppName: ProcessTokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlTokenizedType, ::StringW)>(&System::Xml::Schema::DtdValidator::ProcessTokenizedType)> {
  static const MethodInfo* get() {
    static auto* ttype = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlTokenizedType")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "ProcessTokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ttype, name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::CheckValue
// Il2CppName: CheckValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)(::StringW, ::System::Xml::Schema::SchemaAttDef*)>(&System::Xml::Schema::DtdValidator::CheckValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attdef = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaAttDef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "CheckValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, attdef});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::AddID
// Il2CppName: AddID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)(::StringW, ::Il2CppObject*)>(&System::Xml::Schema::DtdValidator::AddID)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "AddID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, node});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::GenEntity
// Il2CppName: GenEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::DtdValidator::GenEntity)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "GenEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::GetEntity
// Il2CppName: GetEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaEntity* (System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*, bool)>(&System::Xml::Schema::DtdValidator::GetEntity)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* fParameterEntity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "GetEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname, fParameterEntity});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::CheckForwardRefs
// Il2CppName: CheckForwardRefs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::CheckForwardRefs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "CheckForwardRefs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::DtdValidator::Push)> {
  static const MethodInfo* get() {
    static auto* elementName = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementName});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::SetDefaultTypedValue
// Il2CppName: SetDefaultTypedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*)>(&System::Xml::Schema::DtdValidator::SetDefaultTypedValue)> {
  static const MethodInfo* get() {
    static auto* attdef = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaAttDef")->byval_arg;
    static auto* readerAdapter = &::il2cpp_utils::GetClassFromName("System.Xml", "IDtdParserAdapter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "SetDefaultTypedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attdef, readerAdapter});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::CheckDefaultValue
// Il2CppName: CheckDefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::IValidationEventHandling*, ::StringW)>(&System::Xml::Schema::DtdValidator::CheckDefaultValue)> {
  static const MethodInfo* get() {
    static auto* attdef = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaAttDef")->byval_arg;
    static auto* sinfo = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaInfo")->byval_arg;
    static auto* eventHandling = &::il2cpp_utils::GetClassFromName("System.Xml", "IValidationEventHandling")->byval_arg;
    static auto* baseUriStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "CheckDefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attdef, sinfo, eventHandling, baseUriStr});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::get_PreserveWhitespace
// Il2CppName: get_PreserveWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::get_PreserveWhitespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "get_PreserveWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::Validate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::CompleteValidation
// Il2CppName: CompleteValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DtdValidator::*)()>(&System::Xml::Schema::DtdValidator::CompleteValidation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "CompleteValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::FindId
// Il2CppName: FindId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::DtdValidator::*)(::StringW)>(&System::Xml::Schema::DtdValidator::FindId)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "FindId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
