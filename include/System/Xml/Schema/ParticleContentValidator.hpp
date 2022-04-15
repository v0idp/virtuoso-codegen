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
  // Forward declaring type: Positions
  class Positions;
  // Forward declaring type: SyntaxTreeNode
  class SyntaxTreeNode;
  // Forward declaring type: NamespaceList
  class NamespaceList;
  // Forward declaring type: InteriorNode
  class InteriorNode;
  // Forward declaring type: BitSet
  class BitSet;
  // Forward declaring type: ValidationState
  class ValidationState;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Stack
  class Stack;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: ParticleContentValidator
  class ParticleContentValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::ParticleContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ParticleContentValidator*, "System.Xml.Schema", "ParticleContentValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.ParticleContentValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class ParticleContentValidator : public ::System::Xml::Schema::ContentValidator {
    public:
    // Writing base type padding for base size: 0x16 to desired offset: 0x18
    char ___base_padding[0x2] = {};
    public:
    // private System.Xml.Schema.SymbolsDictionary symbols
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::SymbolsDictionary* symbols;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SymbolsDictionary*) == 0x8);
    // private System.Xml.Schema.Positions positions
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::Positions* positions;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::Positions*) == 0x8);
    // private System.Collections.Stack stack
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Stack* stack;
    // Field size check
    static_assert(sizeof(::System::Collections::Stack*) == 0x8);
    // private System.Xml.Schema.SyntaxTreeNode contentNode
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Schema::SyntaxTreeNode* contentNode;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SyntaxTreeNode*) == 0x8);
    // private System.Boolean isPartial
    // Size: 0x1
    // Offset: 0x38
    bool isPartial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPartial and: minMaxNodesCount
    char __padding4[0x3] = {};
    // private System.Int32 minMaxNodesCount
    // Size: 0x4
    // Offset: 0x3C
    int minMaxNodesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean enableUpaCheck
    // Size: 0x1
    // Offset: 0x40
    bool enableUpaCheck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Xml.Schema.SymbolsDictionary symbols
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SymbolsDictionary*& dyn_symbols();
    // Get instance field reference: private System.Xml.Schema.Positions positions
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::Positions*& dyn_positions();
    // Get instance field reference: private System.Collections.Stack stack
    [[deprecated("Use field access instead!")]] ::System::Collections::Stack*& dyn_stack();
    // Get instance field reference: private System.Xml.Schema.SyntaxTreeNode contentNode
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SyntaxTreeNode*& dyn_contentNode();
    // Get instance field reference: private System.Boolean isPartial
    [[deprecated("Use field access instead!")]] bool& dyn_isPartial();
    // Get instance field reference: private System.Int32 minMaxNodesCount
    [[deprecated("Use field access instead!")]] int& dyn_minMaxNodesCount();
    // Get instance field reference: private System.Boolean enableUpaCheck
    [[deprecated("Use field access instead!")]] bool& dyn_enableUpaCheck();
    // public System.Void .ctor(System.Xml.Schema.XmlSchemaContentType contentType, System.Boolean enableUpaCheck)
    // Offset: 0xAFA804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::ParticleContentValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleContentValidator*, creationType>(contentType, enableUpaCheck)));
    }
    // public System.Void Start()
    // Offset: 0xAFA948
    void Start();
    // public System.Void OpenGroup()
    // Offset: 0xAFAA5C
    void OpenGroup();
    // public System.Void CloseGroup()
    // Offset: 0xAFAA84
    void CloseGroup();
    // public System.Boolean Exists(System.Xml.XmlQualifiedName name)
    // Offset: 0xAFABD8
    bool Exists(::System::Xml::XmlQualifiedName* name);
    // public System.Void AddName(System.Xml.XmlQualifiedName name, System.Object particle)
    // Offset: 0xAFABF4
    void AddName(::System::Xml::XmlQualifiedName* name, ::Il2CppObject* particle);
    // public System.Void AddNamespaceList(System.Xml.Schema.NamespaceList namespaceList, System.Object particle)
    // Offset: 0xAFAD8C
    void AddNamespaceList(::System::Xml::Schema::NamespaceList* namespaceList, ::Il2CppObject* particle);
    // private System.Void AddLeafNode(System.Xml.Schema.SyntaxTreeNode node)
    // Offset: 0xAFACA4
    void AddLeafNode(::System::Xml::Schema::SyntaxTreeNode* node);
    // public System.Void AddChoice()
    // Offset: 0xAFAE20
    void AddChoice();
    // public System.Void AddSequence()
    // Offset: 0xAFAF0C
    void AddSequence();
    // public System.Void AddStar()
    // Offset: 0xAFAFF8
    void AddStar();
    // public System.Void AddPlus()
    // Offset: 0xAFB1B8
    void AddPlus();
    // public System.Void AddQMark()
    // Offset: 0xAFB220
    void AddQMark();
    // public System.Void AddLeafRange(System.Decimal min, System.Decimal max)
    // Offset: 0xAFB280
    void AddLeafRange(::System::Decimal min, ::System::Decimal max);
    // private System.Void Closure(System.Xml.Schema.InteriorNode node)
    // Offset: 0xAFB058
    void Closure(::System::Xml::Schema::InteriorNode* node);
    // public System.Xml.Schema.ContentValidator Finish(System.Boolean useDFA)
    // Offset: 0xAFB378
    ::System::Xml::Schema::ContentValidator* Finish(bool useDFA);
    // private System.Xml.Schema.BitSet[] CalculateTotalFollowposForRangeNodes(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet[] followpos, out System.Xml.Schema.BitSet posWithRangeTerminals)
    // Offset: 0xAFB974
    ::ArrayW<::System::Xml::Schema::BitSet*> CalculateTotalFollowposForRangeNodes(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos, ByRef<::System::Xml::Schema::BitSet*> posWithRangeTerminals);
    // private System.Void CheckCMUPAWithLeafRangeNodes(System.Xml.Schema.BitSet curpos)
    // Offset: 0xAFBE24
    void CheckCMUPAWithLeafRangeNodes(::System::Xml::Schema::BitSet* curpos);
    // private System.Xml.Schema.BitSet GetApplicableMinMaxFollowPos(System.Xml.Schema.BitSet curpos, System.Xml.Schema.BitSet posWithRangeTerminals, System.Xml.Schema.BitSet[] minmaxFollowPos)
    // Offset: 0xAFBC88
    ::System::Xml::Schema::BitSet* GetApplicableMinMaxFollowPos(::System::Xml::Schema::BitSet* curpos, ::System::Xml::Schema::BitSet* posWithRangeTerminals, ::ArrayW<::System::Xml::Schema::BitSet*> minmaxFollowPos);
    // private System.Void CheckUniqueParticleAttribution(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet[] followpos)
    // Offset: 0xAFBFBC
    void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos);
    // private System.Void CheckUniqueParticleAttribution(System.Xml.Schema.BitSet curpos)
    // Offset: 0xAFC624
    void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* curpos);
    // private System.Int32[][] BuildTransitionTable(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet[] followpos, System.Int32 endMarkerPos)
    // Offset: 0xAFC050
    ::ArrayW<::ArrayW<int>> BuildTransitionTable(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos, int endMarkerPos);
    // public System.Void .ctor(System.Xml.Schema.XmlSchemaContentType contentType)
    // Offset: 0xAFA7FC
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Void ContentValidator::.ctor(System.Xml.Schema.XmlSchemaContentType contentType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::ParticleContentValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleContentValidator*, creationType>(contentType)));
    }
    // public override System.Void InitValidation(System.Xml.Schema.ValidationState context)
    // Offset: 0xAFA888
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Void ContentValidator::InitValidation(System.Xml.Schema.ValidationState context)
    void InitValidation(::System::Xml::Schema::ValidationState* context);
    // public override System.Object ValidateElement(System.Xml.XmlQualifiedName name, System.Xml.Schema.ValidationState context, out System.Int32 errorCode)
    // Offset: 0xAFA8C8
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Object ContentValidator::ValidateElement(System.Xml.XmlQualifiedName name, System.Xml.Schema.ValidationState context, out System.Int32 errorCode)
    ::Il2CppObject* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ByRef<int> errorCode);
    // public override System.Boolean CompleteValidation(System.Xml.Schema.ValidationState context)
    // Offset: 0xAFA908
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Boolean ContentValidator::CompleteValidation(System.Xml.Schema.ValidationState context)
    bool CompleteValidation(::System::Xml::Schema::ValidationState* context);
  }; // System.Xml.Schema.ParticleContentValidator
  #pragma pack(pop)
  static check_size<sizeof(ParticleContentValidator), 64 + sizeof(bool)> __System_Xml_Schema_ParticleContentValidatorSizeCheck;
  static_assert(sizeof(ParticleContentValidator) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)()>(&System::Xml::Schema::ParticleContentValidator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::OpenGroup
// Il2CppName: OpenGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)()>(&System::Xml::Schema::ParticleContentValidator::OpenGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "OpenGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::CloseGroup
// Il2CppName: CloseGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)()>(&System::Xml::Schema::ParticleContentValidator::CloseGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "CloseGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::Exists
// Il2CppName: Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::ParticleContentValidator::Exists)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddName
// Il2CppName: AddName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::XmlQualifiedName*, ::Il2CppObject*)>(&System::Xml::Schema::ParticleContentValidator::AddName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* particle = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, particle});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddNamespaceList
// Il2CppName: AddNamespaceList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::NamespaceList*, ::Il2CppObject*)>(&System::Xml::Schema::ParticleContentValidator::AddNamespaceList)> {
  static const MethodInfo* get() {
    static auto* namespaceList = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "NamespaceList")->byval_arg;
    static auto* particle = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddNamespaceList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceList, particle});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddLeafNode
// Il2CppName: AddLeafNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::SyntaxTreeNode*)>(&System::Xml::Schema::ParticleContentValidator::AddLeafNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SyntaxTreeNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddLeafNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddChoice
// Il2CppName: AddChoice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)()>(&System::Xml::Schema::ParticleContentValidator::AddChoice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddChoice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddSequence
// Il2CppName: AddSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)()>(&System::Xml::Schema::ParticleContentValidator::AddSequence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddStar
// Il2CppName: AddStar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)()>(&System::Xml::Schema::ParticleContentValidator::AddStar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddStar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddPlus
// Il2CppName: AddPlus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)()>(&System::Xml::Schema::ParticleContentValidator::AddPlus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddPlus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddQMark
// Il2CppName: AddQMark
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)()>(&System::Xml::Schema::ParticleContentValidator::AddQMark)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddQMark", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::AddLeafRange
// Il2CppName: AddLeafRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Decimal, ::System::Decimal)>(&System::Xml::Schema::ParticleContentValidator::AddLeafRange)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "AddLeafRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::Closure
// Il2CppName: Closure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::InteriorNode*)>(&System::Xml::Schema::ParticleContentValidator::Closure)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "InteriorNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "Closure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::ContentValidator* (System::Xml::Schema::ParticleContentValidator::*)(bool)>(&System::Xml::Schema::ParticleContentValidator::Finish)> {
  static const MethodInfo* get() {
    static auto* useDFA = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useDFA});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::CalculateTotalFollowposForRangeNodes
// Il2CppName: CalculateTotalFollowposForRangeNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::Schema::BitSet*> (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>, ByRef<::System::Xml::Schema::BitSet*>)>(&System::Xml::Schema::ParticleContentValidator::CalculateTotalFollowposForRangeNodes)> {
  static const MethodInfo* get() {
    static auto* firstpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* followpos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet"), 1)->byval_arg;
    static auto* posWithRangeTerminals = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "CalculateTotalFollowposForRangeNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstpos, followpos, posWithRangeTerminals});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::CheckCMUPAWithLeafRangeNodes
// Il2CppName: CheckCMUPAWithLeafRangeNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*)>(&System::Xml::Schema::ParticleContentValidator::CheckCMUPAWithLeafRangeNodes)> {
  static const MethodInfo* get() {
    static auto* curpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "CheckCMUPAWithLeafRangeNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curpos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::GetApplicableMinMaxFollowPos
// Il2CppName: GetApplicableMinMaxFollowPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::BitSet* (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>)>(&System::Xml::Schema::ParticleContentValidator::GetApplicableMinMaxFollowPos)> {
  static const MethodInfo* get() {
    static auto* curpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* posWithRangeTerminals = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* minmaxFollowPos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "GetApplicableMinMaxFollowPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curpos, posWithRangeTerminals, minmaxFollowPos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution
// Il2CppName: CheckUniqueParticleAttribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>)>(&System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution)> {
  static const MethodInfo* get() {
    static auto* firstpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* followpos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "CheckUniqueParticleAttribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstpos, followpos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution
// Il2CppName: CheckUniqueParticleAttribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*)>(&System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution)> {
  static const MethodInfo* get() {
    static auto* curpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "CheckUniqueParticleAttribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curpos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::BuildTransitionTable
// Il2CppName: BuildTransitionTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<int>> (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>, int)>(&System::Xml::Schema::ParticleContentValidator::BuildTransitionTable)> {
  static const MethodInfo* get() {
    static auto* firstpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* followpos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet"), 1)->byval_arg;
    static auto* endMarkerPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "BuildTransitionTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstpos, followpos, endMarkerPos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::InitValidation
// Il2CppName: InitValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::ValidationState*)>(&System::Xml::Schema::ParticleContentValidator::InitValidation)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "InitValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::ValidateElement
// Il2CppName: ValidateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ByRef<int>)>(&System::Xml::Schema::ParticleContentValidator::ValidateElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "ValidateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, context, errorCode});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ParticleContentValidator::CompleteValidation
// Il2CppName: CompleteValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::ValidationState*)>(&System::Xml::Schema::ParticleContentValidator::CompleteValidation)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ParticleContentValidator*), "CompleteValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
