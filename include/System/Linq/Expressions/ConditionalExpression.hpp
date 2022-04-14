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
  // Forward declaring type: ConditionalExpression
  class ConditionalExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::ConditionalExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ConditionalExpression*, "System.Linq.Expressions", "ConditionalExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.ConditionalExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: 6A0D74
  class ConditionalExpression : public ::System::Linq::Expressions::Expression {
    public:
    public:
    // private readonly System.Linq.Expressions.Expression <Test>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::Expression* Test;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Linq.Expressions.Expression <IfTrue>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Expression* IfTrue;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Test>k__BackingField
    [[deprecated]] ::System::Linq::Expressions::Expression*& dyn_$Test$k__BackingField();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <IfTrue>k__BackingField
    [[deprecated]] ::System::Linq::Expressions::Expression*& dyn_$IfTrue$k__BackingField();
    // public System.Linq.Expressions.Expression get_Test()
    // Offset: 0x11F90CC
    ::System::Linq::Expressions::Expression* get_Test();
    // public System.Linq.Expressions.Expression get_IfTrue()
    // Offset: 0x11F90D4
    ::System::Linq::Expressions::Expression* get_IfTrue();
    // public System.Linq.Expressions.Expression get_IfFalse()
    // Offset: 0x11F90DC
    ::System::Linq::Expressions::Expression* get_IfFalse();
    // System.Void .ctor(System.Linq.Expressions.Expression test, System.Linq.Expressions.Expression ifTrue)
    // Offset: 0x11F8E08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalExpression* New_ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::ConditionalExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalExpression*, creationType>(test, ifTrue)));
    }
    // static System.Linq.Expressions.ConditionalExpression Make(System.Linq.Expressions.Expression test, System.Linq.Expressions.Expression ifTrue, System.Linq.Expressions.Expression ifFalse, System.Type type)
    // Offset: 0x11F8E84
    static ::System::Linq::Expressions::ConditionalExpression* Make(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type);
    // System.Linq.Expressions.Expression GetFalse()
    // Offset: 0x11F90E8
    ::System::Linq::Expressions::Expression* GetFalse();
    // public System.Linq.Expressions.ConditionalExpression Update(System.Linq.Expressions.Expression test, System.Linq.Expressions.Expression ifTrue, System.Linq.Expressions.Expression ifFalse)
    // Offset: 0x11F9174
    ::System::Linq::Expressions::ConditionalExpression* Update(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse);
    // public override System.Linq.Expressions.ExpressionType get_NodeType()
    // Offset: 0x11F90A4
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.ExpressionType Expression::get_NodeType()
    ::System::Linq::Expressions::ExpressionType get_NodeType();
    // public override System.Type get_Type()
    // Offset: 0x11F90AC
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // protected internal override System.Linq.Expressions.Expression Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    // Offset: 0x11F914C
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);
  }; // System.Linq.Expressions.ConditionalExpression
  #pragma pack(pop)
  static check_size<sizeof(ConditionalExpression), 24 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_ConditionalExpressionSizeCheck;
  static_assert(sizeof(ConditionalExpression) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::get_Test
// Il2CppName: get_Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ConditionalExpression::*)()>(&System::Linq::Expressions::ConditionalExpression::get_Test)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "get_Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::get_IfTrue
// Il2CppName: get_IfTrue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ConditionalExpression::*)()>(&System::Linq::Expressions::ConditionalExpression::get_IfTrue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "get_IfTrue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::get_IfFalse
// Il2CppName: get_IfFalse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ConditionalExpression::*)()>(&System::Linq::Expressions::ConditionalExpression::get_IfFalse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "get_IfFalse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::Make
// Il2CppName: Make
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ConditionalExpression* (*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*)>(&System::Linq::Expressions::ConditionalExpression::Make)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* ifTrue = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* ifFalse = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "Make", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test, ifTrue, ifFalse, type});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::GetFalse
// Il2CppName: GetFalse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ConditionalExpression::*)()>(&System::Linq::Expressions::ConditionalExpression::GetFalse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "GetFalse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ConditionalExpression* (System::Linq::Expressions::ConditionalExpression::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::ConditionalExpression::Update)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* ifTrue = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* ifFalse = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test, ifTrue, ifFalse});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (System::Linq::Expressions::ConditionalExpression::*)()>(&System::Linq::Expressions::ConditionalExpression::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::ConditionalExpression::*)()>(&System::Linq::Expressions::ConditionalExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ConditionalExpression::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ConditionalExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&System::Linq::Expressions::ConditionalExpression::Accept)> {
  static const MethodInfo* get() {
    static auto* visitor = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionVisitor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ConditionalExpression*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visitor});
  }
};
