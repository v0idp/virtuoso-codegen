// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.BinaryExpression
#include "System/Linq/Expressions/BinaryExpression.hpp"
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
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ExpressionType
  struct ExpressionType;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: AssignBinaryExpression
  class AssignBinaryExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::AssignBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::AssignBinaryExpression*, "System.Linq.Expressions", "AssignBinaryExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.AssignBinaryExpression
  // [TokenAttribute] Offset: FFFFFFFF
  class AssignBinaryExpression : public ::System::Linq::Expressions::BinaryExpression {
    public:
    // public override System.Type get_Type()
    // Offset: 0x11F22A0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // public override System.Linq.Expressions.ExpressionType get_NodeType()
    // Offset: 0x11F22C0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.ExpressionType Expression::get_NodeType()
    ::System::Linq::Expressions::ExpressionType get_NodeType();
    // System.Void .ctor(System.Linq.Expressions.Expression left, System.Linq.Expressions.Expression right)
    // Offset: 0x11F2220
    // Implemented from: System.Linq.Expressions.BinaryExpression
    // Base method: System.Void BinaryExpression::.ctor(System.Linq.Expressions.Expression left, System.Linq.Expressions.Expression right)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssignBinaryExpression* New_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::AssignBinaryExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssignBinaryExpression*, creationType>(left, right)));
    }
  }; // System.Linq.Expressions.AssignBinaryExpression
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::AssignBinaryExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::AssignBinaryExpression::*)()>(&System::Linq::Expressions::AssignBinaryExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::AssignBinaryExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::AssignBinaryExpression::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (System::Linq::Expressions::AssignBinaryExpression::*)()>(&System::Linq::Expressions::AssignBinaryExpression::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::AssignBinaryExpression*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::AssignBinaryExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
