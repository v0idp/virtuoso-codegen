// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.InstructionArray
#include "System/Linq/Expressions/Interpreter/InstructionArray.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: DebugInfo
  class DebugInfo;
  // Forward declaring type: LocalVariable
  class LocalVariable;
  // Forward declaring type: LocalVariables
  class LocalVariables;
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: Interpreter
  class Interpreter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::Interpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::Interpreter*, "System.Linq.Expressions.Interpreter", "Interpreter");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.Interpreter
  // [TokenAttribute] Offset: FFFFFFFF
  class Interpreter : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Linq.Expressions.Interpreter.InstructionArray _instructions
    // Size: 0x28
    // Offset: 0x10
    ::System::Linq::Expressions::Interpreter::InstructionArray instructions;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::InstructionArray) == 0x28);
    // readonly System.Object[] _objects
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Il2CppObject*> objects;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // readonly System.Linq.Expressions.Interpreter.RuntimeLabel[] _labels
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> labels;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>) == 0x8);
    // readonly System.Linq.Expressions.Interpreter.DebugInfo[] _debugInfos
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*> debugInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*>) == 0x8);
    // private readonly System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Int32 <LocalCount>k__BackingField
    // Size: 0x4
    // Offset: 0x58
    int LocalCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: LocalCount and: ClosureVariables
    char __padding5[0x4] = {};
    // private readonly System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> <ClosureVariables>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* ClosureVariables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*) == 0x8);
    public:
    // Get static field: static readonly System.Object NoValue
    static ::Il2CppObject* _get_NoValue();
    // Set static field: static readonly System.Object NoValue
    static void _set_NoValue(::Il2CppObject* value);
    // Get instance field reference: private readonly System.Linq.Expressions.Interpreter.InstructionArray _instructions
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Interpreter::InstructionArray& dyn__instructions();
    // Get instance field reference: readonly System.Object[] _objects
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__objects();
    // Get instance field reference: readonly System.Linq.Expressions.Interpreter.RuntimeLabel[] _labels
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>& dyn__labels();
    // Get instance field reference: readonly System.Linq.Expressions.Interpreter.DebugInfo[] _debugInfos
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*>& dyn__debugInfos();
    // Get instance field reference: private readonly System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <LocalCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$LocalCount$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> <ClosureVariables>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*& dyn_$ClosureVariables$k__BackingField();
    // System.String get_Name()
    // Offset: 0xF1EFB0
    ::StringW get_Name();
    // System.Int32 get_LocalCount()
    // Offset: 0xF1EFB8
    int get_LocalCount();
    // System.Int32 get_ClosureSize()
    // Offset: 0xF1EFC0
    int get_ClosureSize();
    // System.Linq.Expressions.Interpreter.InstructionArray get_Instructions()
    // Offset: 0xF1F01C
    ::System::Linq::Expressions::Interpreter::InstructionArray get_Instructions();
    // System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> get_ClosureVariables()
    // Offset: 0xF1F030
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* get_ClosureVariables();
    // System.Void .ctor(System.String name, System.Linq.Expressions.Interpreter.LocalVariables locals, System.Linq.Expressions.Interpreter.InstructionArray instructions, System.Linq.Expressions.Interpreter.DebugInfo[] debugInfos)
    // Offset: 0xF1EF30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Interpreter* New_ctor(::StringW name, ::System::Linq::Expressions::Interpreter::LocalVariables* locals, ::System::Linq::Expressions::Interpreter::InstructionArray instructions, ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*> debugInfos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::Interpreter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Interpreter*, creationType>(name, locals, instructions, debugInfos)));
    }
    // static private System.Void .cctor()
    // Offset: 0xF1F0B8
    static void _cctor();
    // public System.Void Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0xF1F038
    void Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.Interpreter
  #pragma pack(pop)
  static check_size<sizeof(Interpreter), 96 + sizeof(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*)> __System_Linq_Expressions_Interpreter_InterpreterSizeCheck;
  static_assert(sizeof(Interpreter) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Interpreter::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::Interpreter::*)()>(&System::Linq::Expressions::Interpreter::Interpreter::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Interpreter*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Interpreter::get_LocalCount
// Il2CppName: get_LocalCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Interpreter::*)()>(&System::Linq::Expressions::Interpreter::Interpreter::get_LocalCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Interpreter*), "get_LocalCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Interpreter::get_ClosureSize
// Il2CppName: get_ClosureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Interpreter::*)()>(&System::Linq::Expressions::Interpreter::Interpreter::get_ClosureSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Interpreter*), "get_ClosureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Interpreter::get_Instructions
// Il2CppName: get_Instructions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::InstructionArray (System::Linq::Expressions::Interpreter::Interpreter::*)()>(&System::Linq::Expressions::Interpreter::Interpreter::get_Instructions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Interpreter*), "get_Instructions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Interpreter::get_ClosureVariables
// Il2CppName: get_ClosureVariables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* (System::Linq::Expressions::Interpreter::Interpreter::*)()>(&System::Linq::Expressions::Interpreter::Interpreter::get_ClosureVariables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Interpreter*), "get_ClosureVariables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Interpreter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Interpreter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Linq::Expressions::Interpreter::Interpreter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Interpreter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Interpreter::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::Interpreter::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::Interpreter::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Interpreter*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
