// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ArrayLengthInstruction
  class ArrayLengthInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ArrayLengthInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ArrayLengthInstruction*, "System.Linq.Expressions.Interpreter", "ArrayLengthInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.ArrayLengthInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class ArrayLengthInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    // Get static field: static public readonly System.Linq.Expressions.Interpreter.ArrayLengthInstruction Instance
    static ::System::Linq::Expressions::Interpreter::ArrayLengthInstruction* _get_Instance();
    // Set static field: static public readonly System.Linq.Expressions.Interpreter.ArrayLengthInstruction Instance
    static void _set_Instance(::System::Linq::Expressions::Interpreter::ArrayLengthInstruction* value);
    // static private System.Void .cctor()
    // Offset: 0x11F21C0
    static void _cctor();
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x11F20BC
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x11F20C4
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.String get_InstructionName()
    // Offset: 0x11F20CC
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // private System.Void .ctor()
    // Offset: 0x11F2110
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Void Instruction::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayLengthInstruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::ArrayLengthInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayLengthInstruction*, creationType>()));
    }
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x11F2118
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.ArrayLengthInstruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayLengthInstruction::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Linq::Expressions::Interpreter::ArrayLengthInstruction::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ArrayLengthInstruction*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayLengthInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::ArrayLengthInstruction::*)()>(&System::Linq::Expressions::Interpreter::ArrayLengthInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ArrayLengthInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayLengthInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::ArrayLengthInstruction::*)()>(&System::Linq::Expressions::Interpreter::ArrayLengthInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ArrayLengthInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayLengthInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::ArrayLengthInstruction::*)()>(&System::Linq::Expressions::Interpreter::ArrayLengthInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ArrayLengthInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayLengthInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayLengthInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::ArrayLengthInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::ArrayLengthInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ArrayLengthInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
