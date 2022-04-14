// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Expression
  class Expression;
  // Forward declaring type: IArgumentProvider
  class IArgumentProvider;
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
  // Forward declaring type: IParameterProvider
  class IParameterProvider;
  // Forward declaring type: BinaryExpression
  class BinaryExpression;
  // Forward declaring type: BlockExpression
  class BlockExpression;
  // Forward declaring type: ConditionalExpression
  class ConditionalExpression;
  // Forward declaring type: ConstantExpression
  class ConstantExpression;
  // Forward declaring type: DefaultExpression
  class DefaultExpression;
  // Forward declaring type: GotoExpression
  class GotoExpression;
  // Forward declaring type: InvocationExpression
  class InvocationExpression;
  // Forward declaring type: LabelTarget
  class LabelTarget;
  // Forward declaring type: LabelExpression
  class LabelExpression;
  // Forward declaring type: Expression`1<TDelegate>
  template<typename TDelegate>
  class Expression_1;
  // Forward declaring type: LoopExpression
  class LoopExpression;
  // Forward declaring type: MemberExpression
  class MemberExpression;
  // Forward declaring type: IndexExpression
  class IndexExpression;
  // Forward declaring type: MethodCallExpression
  class MethodCallExpression;
  // Forward declaring type: NewArrayExpression
  class NewArrayExpression;
  // Forward declaring type: CatchBlock
  class CatchBlock;
  // Forward declaring type: TryExpression
  class TryExpression;
  // Forward declaring type: TypeBinaryExpression
  class TypeBinaryExpression;
  // Forward declaring type: UnaryExpression
  class UnaryExpression;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ExpressionVisitor
  class ExpressionVisitor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::ExpressionVisitor);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ExpressionVisitor*, "System.Linq.Expressions", "ExpressionVisitor");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.ExpressionVisitor
  // [TokenAttribute] Offset: FFFFFFFF
  class ExpressionVisitor : public ::Il2CppObject {
    public:
    // public System.Linq.Expressions.Expression Visit(System.Linq.Expressions.Expression node)
    // Offset: 0x15D24C8
    ::System::Linq::Expressions::Expression* Visit(::System::Linq::Expressions::Expression* node);
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> Visit(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> nodes)
    // Offset: 0x15D24EC
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* Visit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* nodes);
    // private System.Linq.Expressions.Expression[] VisitArguments(System.Linq.Expressions.IArgumentProvider nodes)
    // Offset: 0x15D2750
    ::ArrayW<::System::Linq::Expressions::Expression*> VisitArguments(::System::Linq::Expressions::IArgumentProvider* nodes);
    // private System.Linq.Expressions.ParameterExpression[] VisitParameters(System.Linq.Expressions.IParameterProvider nodes, System.String callerName)
    // Offset: 0x15D2758
    ::ArrayW<::System::Linq::Expressions::ParameterExpression*> VisitParameters(::System::Linq::Expressions::IParameterProvider* nodes, ::StringW callerName);
    // static public System.Collections.ObjectModel.ReadOnlyCollection`1<T> Visit(System.Collections.ObjectModel.ReadOnlyCollection`1<T> nodes, System.Func`2<T,T> elementVisitor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* Visit(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* nodes, ::System::Func_2<T, T>* elementVisitor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::ExpressionVisitor::Visit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Linq.Expressions", "ExpressionVisitor", "Visit", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(nodes), ::il2cpp_utils::ExtractType(elementVisitor)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, nodes, elementVisitor);
    }
    // public T VisitAndConvert(T node, System.String callerName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T VisitAndConvert(T node, ::StringW callerName) {
      static_assert(std::is_convertible_v<T, ::System::Linq::Expressions::Expression*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::ExpressionVisitor::VisitAndConvert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "VisitAndConvert", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node), ::il2cpp_utils::ExtractType(callerName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, node, callerName);
    }
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<T> VisitAndConvert(System.Collections.ObjectModel.ReadOnlyCollection`1<T> nodes, System.String callerName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* VisitAndConvert(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* nodes, ::StringW callerName) {
      static_assert(std::is_convertible_v<T, ::System::Linq::Expressions::Expression*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::ExpressionVisitor::VisitAndConvert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "VisitAndConvert", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(nodes), ::il2cpp_utils::ExtractType(callerName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*, false>(this, ___generic__method, nodes, callerName);
    }
    // protected internal System.Linq.Expressions.Expression VisitBinary(System.Linq.Expressions.BinaryExpression node)
    // Offset: 0x15D2760
    ::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitBlock(System.Linq.Expressions.BlockExpression node)
    // Offset: 0x15D29AC
    ::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitConditional(System.Linq.Expressions.ConditionalExpression node)
    // Offset: 0x15D2A94
    ::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitConstant(System.Linq.Expressions.ConstantExpression node)
    // Offset: 0x15D2B24
    ::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitDefault(System.Linq.Expressions.DefaultExpression node)
    // Offset: 0x15D2B2C
    ::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitExtension(System.Linq.Expressions.Expression node)
    // Offset: 0x15D2B34
    ::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* node);
    // protected internal System.Linq.Expressions.Expression VisitGoto(System.Linq.Expressions.GotoExpression node)
    // Offset: 0x15D2B5C
    ::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitInvocation(System.Linq.Expressions.InvocationExpression node)
    // Offset: 0x15D2BC8
    ::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* node);
    // protected System.Linq.Expressions.LabelTarget VisitLabelTarget(System.Linq.Expressions.LabelTarget node)
    // Offset: 0x15D2C58
    ::System::Linq::Expressions::LabelTarget* VisitLabelTarget(::System::Linq::Expressions::LabelTarget* node);
    // protected internal System.Linq.Expressions.Expression VisitLabel(System.Linq.Expressions.LabelExpression node)
    // Offset: 0x15D2C60
    ::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitLambda(System.Linq.Expressions.Expression`1<T> node)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::System::Linq::Expressions::Expression* VisitLambda(::System::Linq::Expressions::Expression_1<T>* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::ExpressionVisitor::VisitLambda");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Linq::Expressions::ExpressionVisitor*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___generic__method, node);
    }
    // protected internal System.Linq.Expressions.Expression VisitLoop(System.Linq.Expressions.LoopExpression node)
    // Offset: 0x15D2CCC
    ::System::Linq::Expressions::Expression* VisitLoop(::System::Linq::Expressions::LoopExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitMember(System.Linq.Expressions.MemberExpression node)
    // Offset: 0x15D2D58
    ::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitIndex(System.Linq.Expressions.IndexExpression node)
    // Offset: 0x15D2D98
    ::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitMethodCall(System.Linq.Expressions.MethodCallExpression node)
    // Offset: 0x15D2E20
    ::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitNewArray(System.Linq.Expressions.NewArrayExpression node)
    // Offset: 0x15D2ECC
    ::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitParameter(System.Linq.Expressions.ParameterExpression node)
    // Offset: 0x15D2F04
    ::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node);
    // protected System.Linq.Expressions.CatchBlock VisitCatchBlock(System.Linq.Expressions.CatchBlock node)
    // Offset: 0x15D2F0C
    ::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node);
    // protected internal System.Linq.Expressions.Expression VisitTry(System.Linq.Expressions.TryExpression node)
    // Offset: 0x15D2FD0
    ::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitTypeBinary(System.Linq.Expressions.TypeBinaryExpression node)
    // Offset: 0x15D30F4
    ::System::Linq::Expressions::Expression* VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* node);
    // protected internal System.Linq.Expressions.Expression VisitUnary(System.Linq.Expressions.UnaryExpression node)
    // Offset: 0x15D3134
    ::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* node);
    // static private System.Linq.Expressions.UnaryExpression ValidateUnary(System.Linq.Expressions.UnaryExpression before, System.Linq.Expressions.UnaryExpression after)
    // Offset: 0x15D3180
    static ::System::Linq::Expressions::UnaryExpression* ValidateUnary(::System::Linq::Expressions::UnaryExpression* before, ::System::Linq::Expressions::UnaryExpression* after);
    // static private System.Linq.Expressions.BinaryExpression ValidateBinary(System.Linq.Expressions.BinaryExpression before, System.Linq.Expressions.BinaryExpression after)
    // Offset: 0x15D283C
    static ::System::Linq::Expressions::BinaryExpression* ValidateBinary(::System::Linq::Expressions::BinaryExpression* before, ::System::Linq::Expressions::BinaryExpression* after);
    // static private System.Void ValidateChildType(System.Type before, System.Type after, System.String methodName)
    // Offset: 0x15D329C
    static void ValidateChildType(::System::Type* before, ::System::Type* after, ::StringW methodName);
    // protected System.Void .ctor()
    // Offset: 0x15D0194
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpressionVisitor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::ExpressionVisitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpressionVisitor*, creationType>()));
    }
  }; // System.Linq.Expressions.ExpressionVisitor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::Visit
// Il2CppName: Visit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::ExpressionVisitor::Visit)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "Visit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::Visit
// Il2CppName: Visit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*)>(&System::Linq::Expressions::ExpressionVisitor::Visit)> {
  static const MethodInfo* get() {
    static auto* nodes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "Visit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodes});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitArguments
// Il2CppName: VisitArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Linq::Expressions::Expression*> (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::IArgumentProvider*)>(&System::Linq::Expressions::ExpressionVisitor::VisitArguments)> {
  static const MethodInfo* get() {
    static auto* nodes = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "IArgumentProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodes});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitParameters
// Il2CppName: VisitParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Linq::Expressions::ParameterExpression*> (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::IParameterProvider*, ::StringW)>(&System::Linq::Expressions::ExpressionVisitor::VisitParameters)> {
  static const MethodInfo* get() {
    static auto* nodes = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "IParameterProvider")->byval_arg;
    static auto* callerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodes, callerName});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::Visit
// Il2CppName: Visit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitAndConvert
// Il2CppName: VisitAndConvert
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitAndConvert
// Il2CppName: VisitAndConvert
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitBinary
// Il2CppName: VisitBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::BinaryExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitBinary)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "BinaryExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitBlock
// Il2CppName: VisitBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::BlockExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitBlock)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "BlockExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitConditional
// Il2CppName: VisitConditional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::ConditionalExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitConditional)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ConditionalExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitConditional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitConstant
// Il2CppName: VisitConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::ConstantExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitConstant)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ConstantExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitDefault
// Il2CppName: VisitDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::DefaultExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitDefault)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "DefaultExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitExtension
// Il2CppName: VisitExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitExtension)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitGoto
// Il2CppName: VisitGoto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::GotoExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitGoto)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "GotoExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitGoto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitInvocation
// Il2CppName: VisitInvocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::InvocationExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitInvocation)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "InvocationExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitInvocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitLabelTarget
// Il2CppName: VisitLabelTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::LabelTarget* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::LabelTarget*)>(&System::Linq::Expressions::ExpressionVisitor::VisitLabelTarget)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LabelTarget")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitLabelTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitLabel
// Il2CppName: VisitLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::LabelExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitLabel)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LabelExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitLambda
// Il2CppName: VisitLambda
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitLoop
// Il2CppName: VisitLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::LoopExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitLoop)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LoopExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitMember
// Il2CppName: VisitMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::MemberExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitMember)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "MemberExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitIndex
// Il2CppName: VisitIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::IndexExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitIndex)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "IndexExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitMethodCall
// Il2CppName: VisitMethodCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::MethodCallExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitMethodCall)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "MethodCallExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitMethodCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitNewArray
// Il2CppName: VisitNewArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::NewArrayExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitNewArray)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "NewArrayExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitNewArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitParameter
// Il2CppName: VisitParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::ParameterExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitParameter)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitCatchBlock
// Il2CppName: VisitCatchBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::CatchBlock* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::CatchBlock*)>(&System::Linq::Expressions::ExpressionVisitor::VisitCatchBlock)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "CatchBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitCatchBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitTry
// Il2CppName: VisitTry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::TryExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitTry)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "TryExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitTry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitTypeBinary
// Il2CppName: VisitTypeBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::TypeBinaryExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitTypeBinary)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "TypeBinaryExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitTypeBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::VisitUnary
// Il2CppName: VisitUnary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::UnaryExpression*)>(&System::Linq::Expressions::ExpressionVisitor::VisitUnary)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "UnaryExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "VisitUnary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::ValidateUnary
// Il2CppName: ValidateUnary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::UnaryExpression* (*)(::System::Linq::Expressions::UnaryExpression*, ::System::Linq::Expressions::UnaryExpression*)>(&System::Linq::Expressions::ExpressionVisitor::ValidateUnary)> {
  static const MethodInfo* get() {
    static auto* before = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "UnaryExpression")->byval_arg;
    static auto* after = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "UnaryExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "ValidateUnary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{before, after});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::ValidateBinary
// Il2CppName: ValidateBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::BinaryExpression* (*)(::System::Linq::Expressions::BinaryExpression*, ::System::Linq::Expressions::BinaryExpression*)>(&System::Linq::Expressions::ExpressionVisitor::ValidateBinary)> {
  static const MethodInfo* get() {
    static auto* before = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "BinaryExpression")->byval_arg;
    static auto* after = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "BinaryExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "ValidateBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{before, after});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::ValidateChildType
// Il2CppName: ValidateChildType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::System::Type*, ::StringW)>(&System::Linq::Expressions::ExpressionVisitor::ValidateChildType)> {
  static const MethodInfo* get() {
    static auto* before = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* after = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ExpressionVisitor*), "ValidateChildType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{before, after, methodName});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::ExpressionVisitor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
