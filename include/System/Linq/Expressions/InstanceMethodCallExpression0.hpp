// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.InstanceMethodCallExpression
#include "System/Linq/Expressions/InstanceMethodCallExpression.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: InstanceMethodCallExpression0
  class InstanceMethodCallExpression0;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::InstanceMethodCallExpression0);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InstanceMethodCallExpression0*, "System.Linq.Expressions", "InstanceMethodCallExpression0");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.InstanceMethodCallExpression0
  // [TokenAttribute] Offset: FFFFFFFF
  class InstanceMethodCallExpression0 : public ::System::Linq::Expressions::InstanceMethodCallExpression {
    public:
    // public override System.Int32 get_ArgumentCount()
    // Offset: 0xF175EC
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Int32 MethodCallExpression::get_ArgumentCount()
    int get_ArgumentCount();
    // public System.Void .ctor(System.Reflection.MethodInfo method, System.Linq.Expressions.Expression instance)
    // Offset: 0xF1756C
    // Implemented from: System.Linq.Expressions.InstanceMethodCallExpression
    // Base method: System.Void InstanceMethodCallExpression::.ctor(System.Reflection.MethodInfo method, System.Linq.Expressions.Expression instance)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstanceMethodCallExpression0* New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::InstanceMethodCallExpression0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstanceMethodCallExpression0*, creationType>(method, instance)));
    }
    // public override System.Linq.Expressions.Expression GetArgument(System.Int32 index)
    // Offset: 0xF17598
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Linq.Expressions.Expression MethodCallExpression::GetArgument(System.Int32 index)
    ::System::Linq::Expressions::Expression* GetArgument(int index);
    // override System.Linq.Expressions.MethodCallExpression Rewrite(System.Linq.Expressions.Expression instance, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> args)
    // Offset: 0xF175F4
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Linq.Expressions.MethodCallExpression MethodCallExpression::Rewrite(System.Linq.Expressions.Expression instance, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> args)
    ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);
  }; // System.Linq.Expressions.InstanceMethodCallExpression0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::InstanceMethodCallExpression0::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::InstanceMethodCallExpression0::*)()>(&System::Linq::Expressions::InstanceMethodCallExpression0::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InstanceMethodCallExpression0*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::InstanceMethodCallExpression0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::InstanceMethodCallExpression0::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::InstanceMethodCallExpression0::*)(int)>(&System::Linq::Expressions::InstanceMethodCallExpression0::GetArgument)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InstanceMethodCallExpression0*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::InstanceMethodCallExpression0::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::MethodCallExpression* (System::Linq::Expressions::InstanceMethodCallExpression0::*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(&System::Linq::Expressions::InstanceMethodCallExpression0::Rewrite)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InstanceMethodCallExpression0*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, args});
  }
};
