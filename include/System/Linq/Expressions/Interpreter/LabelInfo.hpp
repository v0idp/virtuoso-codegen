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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: BranchLabel
  class BranchLabel;
  // Forward declaring type: LabelScopeInfo
  class LabelScopeInfo;
  // Forward declaring type: LightCompiler
  class LightCompiler;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: LabelTarget
  class LabelTarget;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LabelInfo
  class LabelInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LabelInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LabelInfo*, "System.Linq.Expressions.Interpreter", "LabelInfo");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LabelInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class LabelInfo : public ::Il2CppObject {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::LabelInfo::$$c
    class $$c;
    public:
    // private readonly System.Linq.Expressions.LabelTarget _node
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::LabelTarget* node;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::LabelTarget*) == 0x8);
    // private System.Linq.Expressions.Interpreter.BranchLabel _label
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Interpreter::BranchLabel* label;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::BranchLabel*) == 0x8);
    // private System.Object _definitions
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* definitions;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Linq.Expressions.Interpreter.LabelScopeInfo> _references
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* references;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*) == 0x8);
    // private System.Boolean _acrossBlockJump
    // Size: 0x1
    // Offset: 0x30
    bool acrossBlockJump;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.LabelTarget _node
    [[deprecated]] ::System::Linq::Expressions::LabelTarget*& dyn__node();
    // Get instance field reference: private System.Linq.Expressions.Interpreter.BranchLabel _label
    [[deprecated]] ::System::Linq::Expressions::Interpreter::BranchLabel*& dyn__label();
    // Get instance field reference: private System.Object _definitions
    [[deprecated]] ::Il2CppObject*& dyn__definitions();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Linq.Expressions.Interpreter.LabelScopeInfo> _references
    [[deprecated]] ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*& dyn__references();
    // Get instance field reference: private System.Boolean _acrossBlockJump
    [[deprecated]] bool& dyn__acrossBlockJump();
    // private System.Boolean get_HasDefinitions()
    // Offset: 0xF202B8
    bool get_HasDefinitions();
    // private System.Boolean get_HasMultipleDefinitions()
    // Offset: 0xF209C4
    bool get_HasMultipleDefinitions();
    // System.Void .ctor(System.Linq.Expressions.LabelTarget node)
    // Offset: 0xF20144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LabelInfo* New_ctor(::System::Linq::Expressions::LabelTarget* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LabelInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LabelInfo*, creationType>(node)));
    }
    // System.Linq.Expressions.Interpreter.BranchLabel GetLabel(System.Linq.Expressions.Interpreter.LightCompiler compiler)
    // Offset: 0xF201D0
    ::System::Linq::Expressions::Interpreter::BranchLabel* GetLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler);
    // System.Void Reference(System.Linq.Expressions.Interpreter.LabelScopeInfo block)
    // Offset: 0xF20230
    void Reference(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block);
    // System.Void Define(System.Linq.Expressions.Interpreter.LabelScopeInfo block)
    // Offset: 0xF20594
    void Define(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block);
    // private System.Void ValidateJump(System.Linq.Expressions.Interpreter.LabelScopeInfo reference)
    // Offset: 0xF202C8
    void ValidateJump(::System::Linq::Expressions::Interpreter::LabelScopeInfo* reference);
    // System.Void ValidateFinish()
    // Offset: 0xF20CF0
    void ValidateFinish();
    // private System.Void EnsureLabel(System.Linq.Expressions.Interpreter.LightCompiler compiler)
    // Offset: 0xF201F4
    void EnsureLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler);
    // private System.Boolean DefinedIn(System.Linq.Expressions.Interpreter.LabelScopeInfo scope)
    // Offset: 0xF20A44
    bool DefinedIn(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope);
    // private System.Linq.Expressions.Interpreter.LabelScopeInfo FirstDefinition()
    // Offset: 0xF20B14
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo* FirstDefinition();
    // private System.Void AddDefinition(System.Linq.Expressions.Interpreter.LabelScopeInfo scope)
    // Offset: 0xF207DC
    void AddDefinition(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope);
    // static T CommonNode(T first, T second, System.Func`2<T,T> parent)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T CommonNode(T first, T second, ::System::Func_2<T, T>* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LabelInfo::CommonNode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Linq.Expressions.Interpreter", "LabelInfo", "CommonNode", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(first), ::il2cpp_utils::ExtractType(second), ::il2cpp_utils::ExtractType(parent)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, first, second, parent);
    }
  }; // System.Linq.Expressions.Interpreter.LabelInfo
  #pragma pack(pop)
  static check_size<sizeof(LabelInfo), 48 + sizeof(bool)> __System_Linq_Expressions_Interpreter_LabelInfoSizeCheck;
  static_assert(sizeof(LabelInfo) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::get_HasDefinitions
// Il2CppName: get_HasDefinitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::LabelInfo::*)()>(&System::Linq::Expressions::Interpreter::LabelInfo::get_HasDefinitions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "get_HasDefinitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::get_HasMultipleDefinitions
// Il2CppName: get_HasMultipleDefinitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::LabelInfo::*)()>(&System::Linq::Expressions::Interpreter::LabelInfo::get_HasMultipleDefinitions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "get_HasMultipleDefinitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::GetLabel
// Il2CppName: GetLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::BranchLabel* (System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LightCompiler*)>(&System::Linq::Expressions::Interpreter::LabelInfo::GetLabel)> {
  static const MethodInfo* get() {
    static auto* compiler = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LightCompiler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "GetLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compiler});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::Reference
// Il2CppName: Reference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&System::Linq::Expressions::Interpreter::LabelInfo::Reference)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LabelScopeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "Reference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::Define
// Il2CppName: Define
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&System::Linq::Expressions::Interpreter::LabelInfo::Define)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LabelScopeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "Define", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::ValidateJump
// Il2CppName: ValidateJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&System::Linq::Expressions::Interpreter::LabelInfo::ValidateJump)> {
  static const MethodInfo* get() {
    static auto* reference = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LabelScopeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "ValidateJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reference});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::ValidateFinish
// Il2CppName: ValidateFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LabelInfo::*)()>(&System::Linq::Expressions::Interpreter::LabelInfo::ValidateFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "ValidateFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::EnsureLabel
// Il2CppName: EnsureLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LightCompiler*)>(&System::Linq::Expressions::Interpreter::LabelInfo::EnsureLabel)> {
  static const MethodInfo* get() {
    static auto* compiler = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LightCompiler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "EnsureLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compiler});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::DefinedIn
// Il2CppName: DefinedIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&System::Linq::Expressions::Interpreter::LabelInfo::DefinedIn)> {
  static const MethodInfo* get() {
    static auto* scope = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LabelScopeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "DefinedIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scope});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::FirstDefinition
// Il2CppName: FirstDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LabelScopeInfo* (System::Linq::Expressions::Interpreter::LabelInfo::*)()>(&System::Linq::Expressions::Interpreter::LabelInfo::FirstDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "FirstDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::AddDefinition
// Il2CppName: AddDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&System::Linq::Expressions::Interpreter::LabelInfo::AddDefinition)> {
  static const MethodInfo* get() {
    static auto* scope = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LabelScopeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo*), "AddDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scope});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::CommonNode
// Il2CppName: CommonNode
// Cannot write MetadataGetter for generic methods!
