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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LeftShiftInstruction
  class LeftShiftInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LeftShiftInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LeftShiftInstruction*, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LeftShiftInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class LeftShiftInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftSByte
    class LeftShiftSByte;
    // Nested type: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftInt16
    class LeftShiftInt16;
    // Nested type: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftInt32
    class LeftShiftInt32;
    // Nested type: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftInt64
    class LeftShiftInt64;
    // Nested type: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftByte
    class LeftShiftByte;
    // Nested type: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftUInt16
    class LeftShiftUInt16;
    // Nested type: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftUInt32
    class LeftShiftUInt32;
    // Nested type: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftUInt64
    class LeftShiftUInt64;
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_SByte
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_SByte();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_SByte
    static void _set_s_SByte(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int16
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int16();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int16
    static void _set_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int32
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int32();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int32
    static void _set_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int64
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int64();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int64
    static void _set_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Byte
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Byte();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Byte
    static void _set_s_Byte(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt16
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_UInt16();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt16
    static void _set_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt32
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_UInt32();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt32
    static void _set_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt64
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_UInt64();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt64
    static void _set_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value);
    // static public System.Linq.Expressions.Interpreter.Instruction Create(System.Type type)
    // Offset: 0xF1ABC8
    static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type);
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0xF21420
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0xF21428
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.String get_InstructionName()
    // Offset: 0xF21430
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // private System.Void .ctor()
    // Offset: 0xF21474
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Void Instruction::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeftShiftInstruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LeftShiftInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeftShiftInstruction*, creationType>()));
    }
  }; // System.Linq.Expressions.Interpreter.LeftShiftInstruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeftShiftInstruction::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*)>(&System::Linq::Expressions::Interpreter::LeftShiftInstruction::Create)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeftShiftInstruction*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LeftShiftInstruction::*)()>(&System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeftShiftInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LeftShiftInstruction::*)()>(&System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeftShiftInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::LeftShiftInstruction::*)()>(&System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeftShiftInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeftShiftInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
