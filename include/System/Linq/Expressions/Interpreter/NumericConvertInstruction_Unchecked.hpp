// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.NumericConvertInstruction
#include "System/Linq/Expressions/Interpreter/NumericConvertInstruction.hpp"
// Including type: System.TypeCode
#include "System/TypeCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction/Unchecked");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.NumericConvertInstruction/System.Linq.Expressions.Interpreter.Unchecked
  // [TokenAttribute] Offset: FFFFFFFF
  class NumericConvertInstruction::Unchecked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
    public:
    // private System.Object ConvertInt32(System.Int32 obj)
    // Offset: 0x16B037C
    ::Il2CppObject* ConvertInt32(int obj);
    // private System.Object ConvertInt64(System.Int64 obj)
    // Offset: 0x16B05C0
    ::Il2CppObject* ConvertInt64(int64_t obj);
    // private System.Object ConvertUInt64(System.UInt64 obj)
    // Offset: 0x16B07D8
    ::Il2CppObject* ConvertUInt64(uint64_t obj);
    // private System.Object ConvertDouble(System.Double obj)
    // Offset: 0x16B09F4
    ::Il2CppObject* ConvertDouble(double obj);
    // public override System.String get_InstructionName()
    // Offset: 0x16AFFB0
    // Implemented from: System.Linq.Expressions.Interpreter.NumericConvertInstruction
    // Base method: System.String NumericConvertInstruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public System.Void .ctor(System.TypeCode from, System.TypeCode to, System.Boolean isLiftedToNull)
    // Offset: 0x16AFFF4
    // Implemented from: System.Linq.Expressions.Interpreter.NumericConvertInstruction
    // Base method: System.Void NumericConvertInstruction::.ctor(System.TypeCode from, System.TypeCode to, System.Boolean isLiftedToNull)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NumericConvertInstruction::Unchecked* New_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NumericConvertInstruction::Unchecked*, creationType>(from, to, isLiftedToNull)));
    }
    // protected override System.Object Convert(System.Object obj)
    // Offset: 0x16B0000
    // Implemented from: System.Linq.Expressions.Interpreter.NumericConvertInstruction
    // Base method: System.Object NumericConvertInstruction::Convert(System.Object obj)
    ::Il2CppObject* Convert(::Il2CppObject* obj);
  }; // System.Linq.Expressions.Interpreter.NumericConvertInstruction/System.Linq.Expressions.Interpreter.Unchecked
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::ConvertInt32
// Il2CppName: ConvertInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::*)(int)>(&System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::ConvertInt32)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked*), "ConvertInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::ConvertInt64
// Il2CppName: ConvertInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::*)(int64_t)>(&System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::ConvertInt64)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked*), "ConvertInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::ConvertUInt64
// Il2CppName: ConvertUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::*)(uint64_t)>(&System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::ConvertUInt64)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked*), "ConvertUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::ConvertDouble
// Il2CppName: ConvertDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::*)(double)>(&System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::ConvertDouble)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked*), "ConvertDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::*)()>(&System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::*)(::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked::Convert)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NumericConvertInstruction::Unchecked*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
