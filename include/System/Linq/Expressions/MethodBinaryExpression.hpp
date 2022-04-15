// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.SimpleBinaryExpression
#include "System/Linq/Expressions/SimpleBinaryExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: MethodBinaryExpression
  class MethodBinaryExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::MethodBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodBinaryExpression*, "System.Linq.Expressions", "MethodBinaryExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.MethodBinaryExpression
  // [TokenAttribute] Offset: FFFFFFFF
  class MethodBinaryExpression : public ::System::Linq::Expressions::SimpleBinaryExpression {
    public:
    public:
    // private readonly System.Reflection.MethodInfo _method
    // Size: 0x8
    // Offset: 0x30
    ::System::Reflection::MethodInfo* method;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::MethodInfo*
    constexpr operator ::System::Reflection::MethodInfo*() const noexcept {
      return method;
    }
    // Get instance field reference: private readonly System.Reflection.MethodInfo _method
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn__method();
    // System.Void .ctor(System.Linq.Expressions.ExpressionType nodeType, System.Linq.Expressions.Expression left, System.Linq.Expressions.Expression right, System.Type type, System.Reflection.MethodInfo method)
    // Offset: 0xE911CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodBinaryExpression* New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Type* type, ::System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::MethodBinaryExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodBinaryExpression*, creationType>(nodeType, left, right, type, method)));
    }
    // override System.Reflection.MethodInfo GetMethod()
    // Offset: 0xE91258
    // Implemented from: System.Linq.Expressions.BinaryExpression
    // Base method: System.Reflection.MethodInfo BinaryExpression::GetMethod()
    ::System::Reflection::MethodInfo* GetMethod();
  }; // System.Linq.Expressions.MethodBinaryExpression
  #pragma pack(pop)
  static check_size<sizeof(MethodBinaryExpression), 48 + sizeof(::System::Reflection::MethodInfo*)> __System_Linq_Expressions_MethodBinaryExpressionSizeCheck;
  static_assert(sizeof(MethodBinaryExpression) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::MethodBinaryExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::MethodBinaryExpression::GetMethod
// Il2CppName: GetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Linq::Expressions::MethodBinaryExpression::*)()>(&System::Linq::Expressions::MethodBinaryExpression::GetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodBinaryExpression*), "GetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
