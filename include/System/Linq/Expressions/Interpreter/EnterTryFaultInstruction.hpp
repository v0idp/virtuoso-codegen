// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.IndexedBranchInstruction
#include "System/Linq/Expressions/Interpreter/IndexedBranchInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: TryFaultHandler
  class TryFaultHandler;
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: EnterTryFaultInstruction
  class EnterTryFaultInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*, "System.Linq.Expressions.Interpreter", "EnterTryFaultInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.EnterTryFaultInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class EnterTryFaultInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // private System.Linq.Expressions.Interpreter.TryFaultHandler _tryHandler
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Interpreter::TryFaultHandler* tryHandler;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::TryFaultHandler*) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private System.Linq.Expressions.Interpreter.TryFaultHandler _tryHandler
    [[deprecated]] ::System::Linq::Expressions::Interpreter::TryFaultHandler*& dyn__tryHandler();
    // System.Void SetTryHandler(System.Linq.Expressions.Interpreter.TryFaultHandler tryHandler)
    // Offset: 0x11FD0A4
    void SetTryHandler(::System::Linq::Expressions::Interpreter::TryFaultHandler* tryHandler);
    // public override System.String get_InstructionName()
    // Offset: 0x11FD058
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 get_ProducedContinuations()
    // Offset: 0x11FD09C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedContinuations()
    int get_ProducedContinuations();
    // System.Void .ctor(System.Int32 targetIndex)
    // Offset: 0x11FD050
    // Implemented from: System.Linq.Expressions.Interpreter.IndexedBranchInstruction
    // Base method: System.Void IndexedBranchInstruction::.ctor(System.Int32 targetIndex)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterTryFaultInstruction* New_ctor(int targetIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterTryFaultInstruction*, creationType>(targetIndex)));
    }
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x11FD0AC
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.EnterTryFaultInstruction
  #pragma pack(pop)
  static check_size<sizeof(EnterTryFaultInstruction), 24 + sizeof(::System::Linq::Expressions::Interpreter::TryFaultHandler*)> __System_Linq_Expressions_Interpreter_EnterTryFaultInstructionSizeCheck;
  static_assert(sizeof(EnterTryFaultInstruction) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::SetTryHandler
// Il2CppName: SetTryHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)(::System::Linq::Expressions::Interpreter::TryFaultHandler*)>(&System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::SetTryHandler)> {
  static const MethodInfo* get() {
    static auto* tryHandler = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "TryFaultHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*), "SetTryHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tryHandler});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)()>(&System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_ProducedContinuations
// Il2CppName: get_ProducedContinuations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)()>(&System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::get_ProducedContinuations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*), "get_ProducedContinuations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::EnterTryFaultInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};