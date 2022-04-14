// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: AnalyzeTypeIsResult
  struct AnalyzeTypeIsResult;
  // Forward declaring type: TypeBinaryExpression
  class TypeBinaryExpression;
  // Forward declaring type: Expression
  class Expression;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ConstantCheck
  class ConstantCheck;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::ConstantCheck);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ConstantCheck*, "System.Linq.Expressions", "ConstantCheck");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.ConstantCheck
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstantCheck : public ::Il2CppObject {
    public:
    // static System.Linq.Expressions.AnalyzeTypeIsResult AnalyzeTypeIs(System.Linq.Expressions.TypeBinaryExpression typeIs)
    // Offset: 0x11F9260
    static ::System::Linq::Expressions::AnalyzeTypeIsResult AnalyzeTypeIs(::System::Linq::Expressions::TypeBinaryExpression* typeIs);
    // static private System.Linq.Expressions.AnalyzeTypeIsResult AnalyzeTypeIs(System.Linq.Expressions.Expression operand, System.Type testType)
    // Offset: 0x11F927C
    static ::System::Linq::Expressions::AnalyzeTypeIsResult AnalyzeTypeIs(::System::Linq::Expressions::Expression* operand, ::System::Type* testType);
  }; // System.Linq.Expressions.ConstantCheck
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs
// Il2CppName: AnalyzeTypeIs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::AnalyzeTypeIsResult (*)(::System::Linq::Expressions::TypeBinaryExpression*)>(&System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs)> {
  static const MethodInfo* get() {
    static auto* typeIs = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "TypeBinaryExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConstantCheck*), "AnalyzeTypeIs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeIs});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs
// Il2CppName: AnalyzeTypeIs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::AnalyzeTypeIsResult (*)(::System::Linq::Expressions::Expression*, ::System::Type*)>(&System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs)> {
  static const MethodInfo* get() {
    static auto* operand = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* testType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConstantCheck*), "AnalyzeTypeIs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operand, testType});
  }
};