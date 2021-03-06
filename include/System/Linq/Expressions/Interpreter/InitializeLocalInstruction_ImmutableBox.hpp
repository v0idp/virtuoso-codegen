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
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/ImmutableBox");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.InitializeLocalInstruction/System.Linq.Expressions.Interpreter.ImmutableBox
  // [TokenAttribute] Offset: FFFFFFFF
  class InitializeLocalInstruction::ImmutableBox : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.Object _defaultValue
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* defaultValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private readonly System.Object _defaultValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__defaultValue();
    // System.Void .ctor(System.Int32 index, System.Object defaultValue)
    // Offset: 0x16A6954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializeLocalInstruction::ImmutableBox* New_ctor(int index, ::Il2CppObject* defaultValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializeLocalInstruction::ImmutableBox*, creationType>(index, defaultValue)));
    }
    // public override System.String get_InstructionName()
    // Offset: 0x16A6A5C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x16A6980
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.InitializeLocalInstruction/System.Linq.Expressions.Interpreter.ImmutableBox
  #pragma pack(pop)
  static check_size<sizeof(InitializeLocalInstruction::ImmutableBox), 24 + sizeof(::Il2CppObject*)> __System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableBoxSizeCheck;
  static_assert(sizeof(InitializeLocalInstruction::ImmutableBox) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox::*)()>(&System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
