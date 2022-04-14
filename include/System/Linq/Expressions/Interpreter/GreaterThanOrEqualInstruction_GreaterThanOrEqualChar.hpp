// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction
#include "System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction.hpp"
// Including type: System.Linq.Expressions.Interpreter.Instruction
#include "System/Linq/Expressions/Interpreter/Instruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualChar);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualChar*, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction/GreaterThanOrEqualChar");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction/System.Linq.Expressions.Interpreter.GreaterThanOrEqualChar
  // [TokenAttribute] Offset: FFFFFFFF
  class GreaterThanOrEqualInstruction::GreaterThanOrEqualChar : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction {
    public:
    // public System.Void .ctor(System.Object nullValue)
    // Offset: 0x16A5958
    // Implemented from: System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction
    // Base method: System.Void GreaterThanOrEqualInstruction::.ctor(System.Object nullValue)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GreaterThanOrEqualInstruction::GreaterThanOrEqualChar* New_ctor(::Il2CppObject* nullValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualChar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GreaterThanOrEqualInstruction::GreaterThanOrEqualChar*, creationType>(nullValue)));
    }
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x16A5960
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction/System.Linq.Expressions.Interpreter.GreaterThanOrEqualChar
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualChar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualChar::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualChar::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualChar::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction::GreaterThanOrEqualChar*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
