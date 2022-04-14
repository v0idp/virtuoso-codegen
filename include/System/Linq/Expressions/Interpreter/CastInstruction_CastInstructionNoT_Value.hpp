// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.CastInstruction/System.Linq.Expressions.Interpreter.CastInstructionNoT
#include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionNoT.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT::Value);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT::Value*, "System.Linq.Expressions.Interpreter", "CastInstruction/CastInstructionNoT/Value");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.CastInstruction/System.Linq.Expressions.Interpreter.CastInstructionNoT/System.Linq.Expressions.Interpreter.Value
  // [TokenAttribute] Offset: FFFFFFFF
  class CastInstruction::CastInstructionNoT::Value : public ::System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT {
    public:
    // public System.Void .ctor(System.Type t)
    // Offset: 0x16B3E14
    // Implemented from: System.Linq.Expressions.Interpreter.CastInstruction/System.Linq.Expressions.Interpreter.CastInstructionNoT
    // Base method: System.Void CastInstructionNoT::.ctor(System.Type t)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CastInstruction::CastInstructionNoT::Value* New_ctor(::System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT::Value::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CastInstruction::CastInstructionNoT::Value*, creationType>(t)));
    }
    // protected override System.Void ConvertNull(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x16B3E1C
    // Implemented from: System.Linq.Expressions.Interpreter.CastInstruction/System.Linq.Expressions.Interpreter.CastInstructionNoT
    // Base method: System.Void CastInstructionNoT::ConvertNull(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    void ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.CastInstruction/System.Linq.Expressions.Interpreter.CastInstructionNoT/System.Linq.Expressions.Interpreter.Value
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT::Value::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT::Value::ConvertNull
// Il2CppName: ConvertNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT::Value::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT::Value::ConvertNull)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CastInstruction::CastInstructionNoT::Value*), "ConvertNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
