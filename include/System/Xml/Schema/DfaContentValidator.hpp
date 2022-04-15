// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.ContentValidator
#include "System/Xml/Schema/ContentValidator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
  // Forward declaring type: ValidationState
  class ValidationState;
  // Forward declaring type: XmlSchemaSet
  class XmlSchemaSet;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: DfaContentValidator
  class DfaContentValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::DfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DfaContentValidator*, "System.Xml.Schema", "DfaContentValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.DfaContentValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class DfaContentValidator : public ::System::Xml::Schema::ContentValidator {
    public:
    // Writing base type padding for base size: 0x16 to desired offset: 0x18
    char ___base_padding[0x2] = {};
    public:
    // private System.Int32[][] transitionTable
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::ArrayW<int>> transitionTable;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<int>>) == 0x8);
    // private System.Xml.Schema.SymbolsDictionary symbols
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::SymbolsDictionary* symbols;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SymbolsDictionary*) == 0x8);
    public:
    // Get instance field reference: private System.Int32[][] transitionTable
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<int>>& dyn_transitionTable();
    // Get instance field reference: private System.Xml.Schema.SymbolsDictionary symbols
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SymbolsDictionary*& dyn_symbols();
    // System.Void .ctor(System.Int32[][] transitionTable, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.XmlSchemaContentType contentType, System.Boolean isOpen, System.Boolean isEmptiable)
    // Offset: 0x10AF9DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DfaContentValidator* New_ctor(::ArrayW<::ArrayW<int>> transitionTable, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::DfaContentValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DfaContentValidator*, creationType>(transitionTable, symbols, contentType, isOpen, isEmptiable)));
    }
    // public override System.Void InitValidation(System.Xml.Schema.ValidationState context)
    // Offset: 0x10AFA88
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Void ContentValidator::InitValidation(System.Xml.Schema.ValidationState context)
    void InitValidation(::System::Xml::Schema::ValidationState* context);
    // public override System.Object ValidateElement(System.Xml.XmlQualifiedName name, System.Xml.Schema.ValidationState context, out System.Int32 errorCode)
    // Offset: 0x10AFB04
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Object ContentValidator::ValidateElement(System.Xml.XmlQualifiedName name, System.Xml.Schema.ValidationState context, out System.Int32 errorCode)
    ::Il2CppObject* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ByRef<int> errorCode);
    // public override System.Boolean CompleteValidation(System.Xml.Schema.ValidationState context)
    // Offset: 0x10AFC40
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Boolean ContentValidator::CompleteValidation(System.Xml.Schema.ValidationState context)
    bool CompleteValidation(::System::Xml::Schema::ValidationState* context);
    // public override System.Collections.ArrayList ExpectedElements(System.Xml.Schema.ValidationState context, System.Boolean isRequiredOnly)
    // Offset: 0x10AFC58
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Collections.ArrayList ContentValidator::ExpectedElements(System.Xml.Schema.ValidationState context, System.Boolean isRequiredOnly)
    ::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);
    // public override System.Collections.ArrayList ExpectedParticles(System.Xml.Schema.ValidationState context, System.Boolean isRequiredOnly, System.Xml.Schema.XmlSchemaSet schemaSet)
    // Offset: 0x10AFE40
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Collections.ArrayList ContentValidator::ExpectedParticles(System.Xml.Schema.ValidationState context, System.Boolean isRequiredOnly, System.Xml.Schema.XmlSchemaSet schemaSet)
    ::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet);
  }; // System.Xml.Schema.DfaContentValidator
  #pragma pack(pop)
  static check_size<sizeof(DfaContentValidator), 32 + sizeof(::System::Xml::Schema::SymbolsDictionary*)> __System_Xml_Schema_DfaContentValidatorSizeCheck;
  static_assert(sizeof(DfaContentValidator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::DfaContentValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::DfaContentValidator::InitValidation
// Il2CppName: InitValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DfaContentValidator::*)(::System::Xml::Schema::ValidationState*)>(&System::Xml::Schema::DfaContentValidator::InitValidation)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DfaContentValidator*), "InitValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DfaContentValidator::ValidateElement
// Il2CppName: ValidateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::DfaContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ByRef<int>)>(&System::Xml::Schema::DfaContentValidator::ValidateElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DfaContentValidator*), "ValidateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, context, errorCode});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DfaContentValidator::CompleteValidation
// Il2CppName: CompleteValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::DfaContentValidator::*)(::System::Xml::Schema::ValidationState*)>(&System::Xml::Schema::DfaContentValidator::CompleteValidation)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DfaContentValidator*), "CompleteValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DfaContentValidator::ExpectedElements
// Il2CppName: ExpectedElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Xml::Schema::DfaContentValidator::*)(::System::Xml::Schema::ValidationState*, bool)>(&System::Xml::Schema::DfaContentValidator::ExpectedElements)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    static auto* isRequiredOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DfaContentValidator*), "ExpectedElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, isRequiredOnly});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DfaContentValidator::ExpectedParticles
// Il2CppName: ExpectedParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Xml::Schema::DfaContentValidator::*)(::System::Xml::Schema::ValidationState*, bool, ::System::Xml::Schema::XmlSchemaSet*)>(&System::Xml::Schema::DfaContentValidator::ExpectedParticles)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    static auto* isRequiredOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* schemaSet = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DfaContentValidator*), "ExpectedParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, isRequiredOnly, schemaSet});
  }
};
