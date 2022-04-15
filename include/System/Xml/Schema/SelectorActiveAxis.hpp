// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.ActiveAxis
#include "System/Xml/Schema/ActiveAxis.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: ConstraintStruct
  class ConstraintStruct;
  // Forward declaring type: Asttree
  class Asttree;
  // Forward declaring type: KeySequence
  class KeySequence;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SelectorActiveAxis
  class SelectorActiveAxis;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::SelectorActiveAxis);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SelectorActiveAxis*, "System.Xml.Schema", "SelectorActiveAxis");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SelectorActiveAxis
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectorActiveAxis : public ::System::Xml::Schema::ActiveAxis {
    public:
    public:
    // private System.Xml.Schema.ConstraintStruct cs
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::ConstraintStruct* cs;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::ConstraintStruct*) == 0x8);
    // private System.Collections.ArrayList KSs
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::ArrayList* KSs;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Int32 KSpointer
    // Size: 0x4
    // Offset: 0x38
    int KSpointer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Xml.Schema.ConstraintStruct cs
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::ConstraintStruct*& dyn_cs();
    // Get instance field reference: private System.Collections.ArrayList KSs
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_KSs();
    // Get instance field reference: private System.Int32 KSpointer
    [[deprecated("Use field access instead!")]] int& dyn_KSpointer();
    // public System.Int32 get_lastDepth()
    // Offset: 0xF6CEE4
    int get_lastDepth();
    // public System.Void .ctor(System.Xml.Schema.Asttree axisTree, System.Xml.Schema.ConstraintStruct cs)
    // Offset: 0xF6CF90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectorActiveAxis* New_ctor(::System::Xml::Schema::Asttree* axisTree, ::System::Xml::Schema::ConstraintStruct* cs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SelectorActiveAxis::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectorActiveAxis*, creationType>(axisTree, cs)));
    }
    // public System.Int32 PushKS(System.Int32 errline, System.Int32 errcol)
    // Offset: 0xF6D05C
    int PushKS(int errline, int errcol);
    // public System.Xml.Schema.KeySequence PopKS()
    // Offset: 0xF6D348
    ::System::Xml::Schema::KeySequence* PopKS();
    // public override System.Boolean EndElement(System.String localname, System.String URN)
    // Offset: 0xF6D00C
    // Implemented from: System.Xml.Schema.ActiveAxis
    // Base method: System.Boolean ActiveAxis::EndElement(System.String localname, System.String URN)
    bool EndElement(::StringW localname, ::StringW URN);
  }; // System.Xml.Schema.SelectorActiveAxis
  #pragma pack(pop)
  static check_size<sizeof(SelectorActiveAxis), 56 + sizeof(int)> __System_Xml_Schema_SelectorActiveAxisSizeCheck;
  static_assert(sizeof(SelectorActiveAxis) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SelectorActiveAxis::get_lastDepth
// Il2CppName: get_lastDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SelectorActiveAxis::*)()>(&System::Xml::Schema::SelectorActiveAxis::get_lastDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SelectorActiveAxis*), "get_lastDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SelectorActiveAxis::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::SelectorActiveAxis::PushKS
// Il2CppName: PushKS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SelectorActiveAxis::*)(int, int)>(&System::Xml::Schema::SelectorActiveAxis::PushKS)> {
  static const MethodInfo* get() {
    static auto* errline = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* errcol = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SelectorActiveAxis*), "PushKS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errline, errcol});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SelectorActiveAxis::PopKS
// Il2CppName: PopKS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::KeySequence* (System::Xml::Schema::SelectorActiveAxis::*)()>(&System::Xml::Schema::SelectorActiveAxis::PopKS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SelectorActiveAxis*), "PopKS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SelectorActiveAxis::EndElement
// Il2CppName: EndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SelectorActiveAxis::*)(::StringW, ::StringW)>(&System::Xml::Schema::SelectorActiveAxis::EndElement)> {
  static const MethodInfo* get() {
    static auto* localname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* URN = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SelectorActiveAxis*), "EndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localname, URN});
  }
};
