// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.InitializeLocalInstruction
#include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction.hpp"
// Including type: System.Linq.Expressions.Interpreter.Instruction
#include "System/Linq/Expressions/Interpreter/Instruction.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/ParameterBox");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.InitializeLocalInstruction/System.Linq.Expressions.Interpreter.ParameterBox
  // [TokenAttribute] Offset: FFFFFFFF
  class InitializeLocalInstruction::ParameterBox : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
    public:
    // public override System.String get_InstructionName()
    // Offset: 0x16A7338
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public System.Void .ctor(System.Int32 index)
    // Offset: 0x16A7240
    // Implemented from: System.Linq.Expressions.Interpreter.InitializeLocalInstruction
    // Base method: System.Void InitializeLocalInstruction::.ctor(System.Int32 index)
    // Base method: System.Void LocalAccessInstruction::.ctor(System.Int32 index)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializeLocalInstruction::ParameterBox* New_ctor(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializeLocalInstruction::ParameterBox*, creationType>(index)));
    }
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x16A7248
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.InitializeLocalInstruction/System.Linq.Expressions.Interpreter.ParameterBox
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox::*)()>(&System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};