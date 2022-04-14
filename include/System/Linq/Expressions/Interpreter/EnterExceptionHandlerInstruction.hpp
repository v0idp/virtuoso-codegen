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
  // Forward declaring type: EnterExceptionHandlerInstruction
  class EnterExceptionHandlerInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "System.Linq.Expressions.Interpreter", "EnterExceptionHandlerInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.EnterExceptionHandlerInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class EnterExceptionHandlerInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    public:
    // private readonly System.Boolean _hasValue
    // Size: 0x1
    // Offset: 0x10
    bool hasValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return hasValue;
    }
    // Get static field: static readonly System.Linq.Expressions.Interpreter.EnterExceptionHandlerInstruction Void
    static ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* _get_Void();
    // Set static field: static readonly System.Linq.Expressions.Interpreter.EnterExceptionHandlerInstruction Void
    static void _set_Void(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* value);
    // Get static field: static readonly System.Linq.Expressions.Interpreter.EnterExceptionHandlerInstruction NonVoid
    static ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* _get_NonVoid();
    // Set static field: static readonly System.Linq.Expressions.Interpreter.EnterExceptionHandlerInstruction NonVoid
    static void _set_NonVoid(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* value);
    // Get instance field reference: private readonly System.Boolean _hasValue
    [[deprecated]] bool& dyn__hasValue();
    // private System.Void .ctor(System.Boolean hasValue)
    // Offset: 0x11FC308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterExceptionHandlerInstruction* New_ctor(bool hasValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterExceptionHandlerInstruction*, creationType>(hasValue)));
    }
    // static private System.Void .cctor()
    // Offset: 0x11FC394
    static void _cctor();
    // public override System.String get_InstructionName()
    // Offset: 0x11FC338
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x11FC37C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x11FC384
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x11FC38C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.EnterExceptionHandlerInstruction
  #pragma pack(pop)
  static check_size<sizeof(EnterExceptionHandlerInstruction), 16 + sizeof(bool)> __System_Linq_Expressions_Interpreter_EnterExceptionHandlerInstructionSizeCheck;
  static_assert(sizeof(EnterExceptionHandlerInstruction) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(&System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(&System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(&System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
