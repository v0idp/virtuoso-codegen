// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Expression
#include "System/Linq/Expressions/Expression.hpp"
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
  // Forward declaring type: ExpressionVisitor
  class ExpressionVisitor;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ConstantExpression
  class ConstantExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::ConstantExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ConstantExpression*, "System.Linq.Expressions", "ConstantExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.ConstantExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: 6A0DD4
  class ConstantExpression : public ::System::Linq::Expressions::Expression {
    public:
    public:
    // private readonly System.Object <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return Value;
    }
    // Get instance field reference: private readonly System.Object <Value>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$Value$k__BackingField();
    // public System.Object get_Value()
    // Offset: 0x11F955C
    ::Il2CppObject* get_Value();
    // System.Void .ctor(System.Object value)
    // Offset: 0x11F9448
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstantExpression* New_ctor(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::ConstantExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstantExpression*, creationType>(value)));
    }
    // public override System.Type get_Type()
    // Offset: 0x11F94C0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // public override System.Linq.Expressions.ExpressionType get_NodeType()
    // Offset: 0x11F9554
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.ExpressionType Expression::get_NodeType()
    ::System::Linq::Expressions::ExpressionType get_NodeType();
    // protected internal override System.Linq.Expressions.Expression Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    // Offset: 0x11F9564
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);
  }; // System.Linq.Expressions.ConstantExpression
  #pragma pack(pop)
  static check_size<sizeof(ConstantExpression), 16 + sizeof(::Il2CppObject*)> __System_Linq_Expressions_ConstantExpressionSizeCheck;
  static_assert(sizeof(ConstantExpression) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::ConstantExpression::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::ConstantExpression::*)()>(&System::Linq::Expressions::ConstantExpression::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConstantExpression*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConstantExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::ConstantExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::ConstantExpression::*)()>(&System::Linq::Expressions::ConstantExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConstantExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConstantExpression::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (System::Linq::Expressions::ConstantExpression::*)()>(&System::Linq::Expressions::ConstantExpression::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConstantExpression*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConstantExpression::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ConstantExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&System::Linq::Expressions::ConstantExpression::Accept)> {
  static const MethodInfo* get() {
    static auto* visitor = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionVisitor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConstantExpression*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visitor});
  }
};
