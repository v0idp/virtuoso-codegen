// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: DynamicMetaObject
  class DynamicMetaObject;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Expression
  class Expression;
}
// Completed forward declares
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Forward declaring type: IDynamicMetaObjectProvider
  class IDynamicMetaObjectProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::IDynamicMetaObjectProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::IDynamicMetaObjectProvider*, "System.Dynamic", "IDynamicMetaObjectProvider");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.IDynamicMetaObjectProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IDynamicMetaObjectProvider {
    public:
    // public System.Dynamic.DynamicMetaObject GetMetaObject(System.Linq.Expressions.Expression parameter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* parameter);
  }; // System.Dynamic.IDynamicMetaObjectProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::IDynamicMetaObjectProvider::GetMetaObject
// Il2CppName: GetMetaObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::IDynamicMetaObjectProvider::*)(::System::Linq::Expressions::Expression*)>(&System::Dynamic::IDynamicMetaObjectProvider::GetMetaObject)> {
  static const MethodInfo* get() {
    static auto* parameter = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::IDynamicMetaObjectProvider*), "GetMetaObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameter});
  }
};
