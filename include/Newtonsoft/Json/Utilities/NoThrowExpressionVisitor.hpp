// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.ExpressionVisitor
#include "System/Linq/Expressions/ExpressionVisitor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Expression
  class Expression;
  // Forward declaring type: ConditionalExpression
  class ConditionalExpression;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: NoThrowExpressionVisitor
  class NoThrowExpressionVisitor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*, "Newtonsoft.Json.Utilities", "NoThrowExpressionVisitor");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.NoThrowExpressionVisitor
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 672BA8
  // [NullableAttribute] Offset: 672BA8
  class NoThrowExpressionVisitor : public ::System::Linq::Expressions::ExpressionVisitor {
    public:
    // Get static field: static readonly System.Object ErrorResult
    static ::Il2CppObject* _get_ErrorResult();
    // Set static field: static readonly System.Object ErrorResult
    static void _set_ErrorResult(::Il2CppObject* value);
    // static private System.Void .cctor()
    // Offset: 0x13485F8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13485F0
    // Implemented from: System.Linq.Expressions.ExpressionVisitor
    // Base method: System.Void ExpressionVisitor::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoThrowExpressionVisitor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoThrowExpressionVisitor*, creationType>()));
    }
    // protected override System.Linq.Expressions.Expression VisitConditional(System.Linq.Expressions.ConditionalExpression node)
    // Offset: 0x13484E4
    // Implemented from: System.Linq.Expressions.ExpressionVisitor
    // Base method: System.Linq.Expressions.Expression ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression node)
    ::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node);
  }; // Newtonsoft.Json.Utilities.NoThrowExpressionVisitor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::VisitConditional
// Il2CppName: VisitConditional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::*)(::System::Linq::Expressions::ConditionalExpression*)>(&Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::VisitConditional)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ConditionalExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*), "VisitConditional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
