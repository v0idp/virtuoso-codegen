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
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: CatchBlock
  class CatchBlock;
  // Forward declaring type: ExpressionType
  struct ExpressionType;
  // Forward declaring type: ExpressionVisitor
  class ExpressionVisitor;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: TryExpression
  class TryExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::TryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::TryExpression*, "System.Linq.Expressions", "TryExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.TryExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: 6A1504
  class TryExpression : public ::System::Linq::Expressions::Expression {
    public:
    public:
    // private readonly System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Linq.Expressions.Expression <Body>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Expression* Body;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.CatchBlock> <Handlers>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* Handlers;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*) == 0x8);
    // private readonly System.Linq.Expressions.Expression <Finally>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Linq::Expressions::Expression* Finally;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Linq.Expressions.Expression <Fault>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::System::Linq::Expressions::Expression* Fault;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Type <Type>k__BackingField
    [[deprecated]] ::System::Type*& dyn_$Type$k__BackingField();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Body>k__BackingField
    [[deprecated]] ::System::Linq::Expressions::Expression*& dyn_$Body$k__BackingField();
    // Get instance field reference: private readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.CatchBlock> <Handlers>k__BackingField
    [[deprecated]] ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*& dyn_$Handlers$k__BackingField();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Finally>k__BackingField
    [[deprecated]] ::System::Linq::Expressions::Expression*& dyn_$Finally$k__BackingField();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Fault>k__BackingField
    [[deprecated]] ::System::Linq::Expressions::Expression*& dyn_$Fault$k__BackingField();
    // public System.Linq.Expressions.Expression get_Body()
    // Offset: 0xE9E8D0
    ::System::Linq::Expressions::Expression* get_Body();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.CatchBlock> get_Handlers()
    // Offset: 0xE9E8D8
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* get_Handlers();
    // public System.Linq.Expressions.Expression get_Finally()
    // Offset: 0xE9E8E0
    ::System::Linq::Expressions::Expression* get_Finally();
    // public System.Linq.Expressions.Expression get_Fault()
    // Offset: 0xE9E8E8
    ::System::Linq::Expressions::Expression* get_Fault();
    // System.Void .ctor(System.Type type, System.Linq.Expressions.Expression body, System.Linq.Expressions.Expression finally, System.Linq.Expressions.Expression fault, System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.CatchBlock> handlers)
    // Offset: 0xE9E820
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TryExpression* New_ctor(::System::Type* type, ::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally, ::System::Linq::Expressions::Expression* fault, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* handlers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::TryExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TryExpression*, creationType>(type, body, finally, fault, handlers)));
    }
    // public System.Linq.Expressions.TryExpression Update(System.Linq.Expressions.Expression body, System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.CatchBlock> handlers, System.Linq.Expressions.Expression finally, System.Linq.Expressions.Expression fault)
    // Offset: 0xE9E91C
    ::System::Linq::Expressions::TryExpression* Update(::System::Linq::Expressions::Expression* body, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>* handlers, ::System::Linq::Expressions::Expression* finally, ::System::Linq::Expressions::Expression* fault);
    // public override System.Type get_Type()
    // Offset: 0xE9E8C0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // public override System.Linq.Expressions.ExpressionType get_NodeType()
    // Offset: 0xE9E8C8
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.ExpressionType Expression::get_NodeType()
    ::System::Linq::Expressions::ExpressionType get_NodeType();
    // protected internal override System.Linq.Expressions.Expression Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    // Offset: 0xE9E8F0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);
  }; // System.Linq.Expressions.TryExpression
  #pragma pack(pop)
  static check_size<sizeof(TryExpression), 48 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_TryExpressionSizeCheck;
  static_assert(sizeof(TryExpression) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::get_Body
// Il2CppName: get_Body
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::TryExpression::*)()>(&System::Linq::Expressions::TryExpression::get_Body)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TryExpression*), "get_Body", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::get_Handlers
// Il2CppName: get_Handlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* (System::Linq::Expressions::TryExpression::*)()>(&System::Linq::Expressions::TryExpression::get_Handlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TryExpression*), "get_Handlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::get_Finally
// Il2CppName: get_Finally
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::TryExpression::*)()>(&System::Linq::Expressions::TryExpression::get_Finally)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TryExpression*), "get_Finally", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::get_Fault
// Il2CppName: get_Fault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::TryExpression::*)()>(&System::Linq::Expressions::TryExpression::get_Fault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TryExpression*), "get_Fault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::TryExpression* (System::Linq::Expressions::TryExpression::*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::TryExpression::Update)> {
  static const MethodInfo* get() {
    static auto* body = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* handlers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "CatchBlock")})->byval_arg;
    static auto* finally = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* fault = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TryExpression*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{body, handlers, finally, fault});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::TryExpression::*)()>(&System::Linq::Expressions::TryExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TryExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (System::Linq::Expressions::TryExpression::*)()>(&System::Linq::Expressions::TryExpression::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TryExpression*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TryExpression::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::TryExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&System::Linq::Expressions::TryExpression::Accept)> {
  static const MethodInfo* get() {
    static auto* visitor = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionVisitor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TryExpression*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visitor});
  }
};