// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.BlockExpression
#include "System/Linq/Expressions/BlockExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Block2
  class Block2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Block2);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Block2*, "System.Linq.Expressions", "Block2");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Block2
  // [TokenAttribute] Offset: FFFFFFFF
  class Block2 : public ::System::Linq::Expressions::BlockExpression {
    public:
    public:
    // private System.Object _arg0
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* arg0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg1
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Expression* arg1;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Get instance field reference: private System.Object _arg0
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__arg0();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg1
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn__arg1();
    // System.Void .ctor(System.Linq.Expressions.Expression arg0, System.Linq.Expressions.Expression arg1)
    // Offset: 0x11F440C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Block2* New_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Block2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Block2*, creationType>(arg0, arg1)));
    }
    // override System.Int32 get_ExpressionCount()
    // Offset: 0x11F45A0
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Int32 BlockExpression::get_ExpressionCount()
    int get_ExpressionCount();
    // override System.Linq.Expressions.Expression GetExpression(System.Int32 index)
    // Offset: 0x11F44A4
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Linq.Expressions.Expression BlockExpression::GetExpression(System.Int32 index)
    ::System::Linq::Expressions::Expression* GetExpression(int index);
    // override System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> GetOrMakeExpressions()
    // Offset: 0x11F45A8
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> BlockExpression::GetOrMakeExpressions()
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions();
    // override System.Linq.Expressions.BlockExpression Rewrite(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> variables, System.Linq.Expressions.Expression[] args)
    // Offset: 0x11F46FC
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Linq.Expressions.BlockExpression BlockExpression::Rewrite(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> variables, System.Linq.Expressions.Expression[] args)
    ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::ArrayW<::System::Linq::Expressions::Expression*> args);
  }; // System.Linq.Expressions.Block2
  #pragma pack(pop)
  static check_size<sizeof(Block2), 24 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_Block2SizeCheck;
  static_assert(sizeof(Block2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Block2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Block2::get_ExpressionCount
// Il2CppName: get_ExpressionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Block2::*)()>(&System::Linq::Expressions::Block2::get_ExpressionCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Block2*), "get_ExpressionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Block2::GetExpression
// Il2CppName: GetExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::Block2::*)(int)>(&System::Linq::Expressions::Block2::GetExpression)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Block2*), "GetExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Block2::GetOrMakeExpressions
// Il2CppName: GetOrMakeExpressions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (System::Linq::Expressions::Block2::*)()>(&System::Linq::Expressions::Block2::GetOrMakeExpressions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Block2*), "GetOrMakeExpressions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Block2::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::BlockExpression* (System::Linq::Expressions::Block2::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(&System::Linq::Expressions::Block2::Rewrite)> {
  static const MethodInfo* get() {
    static auto* variables = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")})->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Block2*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variables, args});
  }
};
