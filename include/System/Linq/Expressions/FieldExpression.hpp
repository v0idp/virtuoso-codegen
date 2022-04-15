// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.MemberExpression
#include "System/Linq/Expressions/MemberExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: FieldExpression
  class FieldExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::FieldExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::FieldExpression*, "System.Linq.Expressions", "FieldExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.FieldExpression
  // [TokenAttribute] Offset: FFFFFFFF
  class FieldExpression : public ::System::Linq::Expressions::MemberExpression {
    public:
    public:
    // private readonly System.Reflection.FieldInfo _field
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::FieldInfo* field;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldInfo*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Linq::Expressions::Expression*
    constexpr operator ::System::Linq::Expressions::Expression*() const noexcept = delete;
    // Get instance field reference: private readonly System.Reflection.FieldInfo _field
    [[deprecated("Use field access instead!")]] ::System::Reflection::FieldInfo*& dyn__field();
    // public System.Void .ctor(System.Linq.Expressions.Expression expression, System.Reflection.FieldInfo member)
    // Offset: 0xF146BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldExpression* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* member) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::FieldExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldExpression*, creationType>(expression, member)));
    }
    // public override System.Type get_Type()
    // Offset: 0xF146F0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // override System.Reflection.MemberInfo GetMember()
    // Offset: 0xF146E8
    // Implemented from: System.Linq.Expressions.MemberExpression
    // Base method: System.Reflection.MemberInfo MemberExpression::GetMember()
    ::System::Reflection::MemberInfo* GetMember();
  }; // System.Linq.Expressions.FieldExpression
  #pragma pack(pop)
  static check_size<sizeof(FieldExpression), 24 + sizeof(::System::Reflection::FieldInfo*)> __System_Linq_Expressions_FieldExpressionSizeCheck;
  static_assert(sizeof(FieldExpression) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::FieldExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::FieldExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::FieldExpression::*)()>(&System::Linq::Expressions::FieldExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::FieldExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::FieldExpression::GetMember
// Il2CppName: GetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (System::Linq::Expressions::FieldExpression::*)()>(&System::Linq::Expressions::FieldExpression::GetMember)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::FieldExpression*), "GetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
