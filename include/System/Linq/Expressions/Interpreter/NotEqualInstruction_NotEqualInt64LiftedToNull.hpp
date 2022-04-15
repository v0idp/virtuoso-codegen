// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.NotEqualInstruction
#include "System/Linq/Expressions/Interpreter/NotEqualInstruction.hpp"
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
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NotEqualInstruction::NotEqualInt64LiftedToNull);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NotEqualInstruction::NotEqualInt64LiftedToNull*, "System.Linq.Expressions.Interpreter", "NotEqualInstruction/NotEqualInt64LiftedToNull");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.NotEqualInstruction/System.Linq.Expressions.Interpreter.NotEqualInt64LiftedToNull
  // [TokenAttribute] Offset: FFFFFFFF
  class NotEqualInstruction::NotEqualInt64LiftedToNull : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction {
    public:
    // public System.Void .ctor()
    // Offset: 0x16ADA08
    // Implemented from: System.Linq.Expressions.Interpreter.NotEqualInstruction
    // Base method: System.Void NotEqualInstruction::.ctor()
    // Base method: System.Void Instruction::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotEqualInstruction::NotEqualInt64LiftedToNull* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::NotEqualInstruction::NotEqualInt64LiftedToNull::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotEqualInstruction::NotEqualInt64LiftedToNull*, creationType>()));
    }
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x16AD914
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.NotEqualInstruction/System.Linq.Expressions.Interpreter.NotEqualInt64LiftedToNull
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NotEqualInstruction::NotEqualInt64LiftedToNull::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NotEqualInstruction::NotEqualInt64LiftedToNull::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::NotEqualInstruction::NotEqualInt64LiftedToNull::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::NotEqualInstruction::NotEqualInt64LiftedToNull::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NotEqualInstruction::NotEqualInt64LiftedToNull*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
