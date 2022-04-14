// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.LocalAccessInstruction
#include "System/Linq/Expressions/Interpreter/LocalAccessInstruction.hpp"
// Including type: System.Linq.Expressions.Interpreter.IBoxableInstruction
#include "System/Linq/Expressions/Interpreter/IBoxableInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LoadLocalInstruction
  class LoadLocalInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LoadLocalInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LoadLocalInstruction*, "System.Linq.Expressions.Interpreter", "LoadLocalInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LoadLocalInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction/*, public ::System::Linq::Expressions::Interpreter::IBoxableInstruction*/ {
    public:
    // Creating interface conversion operator: operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction
    operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction() noexcept {
      return *reinterpret_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(this);
    }
    // public System.Linq.Expressions.Interpreter.Instruction BoxIfIndexMatches(System.Int32 index)
    // Offset: 0xE8FFCC
    ::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(int index);
    // public override System.Int32 get_ProducedStack()
    // Offset: 0xE8FEE4
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.String get_InstructionName()
    // Offset: 0xE8FEEC
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // System.Void .ctor(System.Int32 index)
    // Offset: 0xE8FEB8
    // Implemented from: System.Linq.Expressions.Interpreter.LocalAccessInstruction
    // Base method: System.Void LocalAccessInstruction::.ctor(System.Int32 index)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadLocalInstruction* New_ctor(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LoadLocalInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadLocalInstruction*, creationType>(index)));
    }
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0xE8FF30
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.LoadLocalInstruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadLocalInstruction::BoxIfIndexMatches
// Il2CppName: BoxIfIndexMatches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)(int)>(&System::Linq::Expressions::Interpreter::LoadLocalInstruction::BoxIfIndexMatches)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadLocalInstruction*), "BoxIfIndexMatches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)()>(&System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadLocalInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)()>(&System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadLocalInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadLocalInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadLocalInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::LoadLocalInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadLocalInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
