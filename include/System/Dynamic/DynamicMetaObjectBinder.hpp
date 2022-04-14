// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.CallSiteBinder
#include "System/Runtime/CompilerServices/CallSiteBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: DynamicMetaObject
  class DynamicMetaObject;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
  // Forward declaring type: Expression
  class Expression;
  // Forward declaring type: LabelTarget
  class LabelTarget;
}
// Completed forward declares
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Forward declaring type: DynamicMetaObjectBinder
  class DynamicMetaObjectBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::DynamicMetaObjectBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::DynamicMetaObjectBinder*, "System.Dynamic", "DynamicMetaObjectBinder");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.DynamicMetaObjectBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicMetaObjectBinder : public ::System::Runtime::CompilerServices::CallSiteBinder {
    public:
    // public System.Type get_ReturnType()
    // Offset: 0x11FB578
    ::System::Type* get_ReturnType();
    // System.Boolean get_IsStandardBinder()
    // Offset: 0x11FC17C
    bool get_IsStandardBinder();
    // static private System.Dynamic.DynamicMetaObject[] CreateArgumentMetaObjects(System.Object[] args, System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> parameters)
    // Offset: 0x11FBCD0
    static ::ArrayW<::System::Dynamic::DynamicMetaObject*> CreateArgumentMetaObjects(::ArrayW<::Il2CppObject*> args, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters);
    // public System.Dynamic.DynamicMetaObject Bind(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args);
    // public System.Linq.Expressions.Expression GetUpdateExpression(System.Type type)
    // Offset: 0x11FC098
    ::System::Linq::Expressions::Expression* GetUpdateExpression(::System::Type* type);
    // protected System.Void .ctor()
    // Offset: 0x11FB514
    // Implemented from: System.Runtime.CompilerServices.CallSiteBinder
    // Base method: System.Void CallSiteBinder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicMetaObjectBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::DynamicMetaObjectBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicMetaObjectBinder*, creationType>()));
    }
    // public override System.Linq.Expressions.Expression Bind(System.Object[] args, System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> parameters, System.Linq.Expressions.LabelTarget returnLabel)
    // Offset: 0x11FB5F0
    // Implemented from: System.Runtime.CompilerServices.CallSiteBinder
    // Base method: System.Linq.Expressions.Expression CallSiteBinder::Bind(System.Object[] args, System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> parameters, System.Linq.Expressions.LabelTarget returnLabel)
    ::System::Linq::Expressions::Expression* Bind(::ArrayW<::Il2CppObject*> args, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters, ::System::Linq::Expressions::LabelTarget* returnLabel);
  }; // System.Dynamic.DynamicMetaObjectBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObjectBinder::get_ReturnType
// Il2CppName: get_ReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Dynamic::DynamicMetaObjectBinder::*)()>(&System::Dynamic::DynamicMetaObjectBinder::get_ReturnType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObjectBinder*), "get_ReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObjectBinder::get_IsStandardBinder
// Il2CppName: get_IsStandardBinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Dynamic::DynamicMetaObjectBinder::*)()>(&System::Dynamic::DynamicMetaObjectBinder::get_IsStandardBinder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObjectBinder*), "get_IsStandardBinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObjectBinder::CreateArgumentMetaObjects
// Il2CppName: CreateArgumentMetaObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Dynamic::DynamicMetaObject*> (*)(::ArrayW<::Il2CppObject*>, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*)>(&System::Dynamic::DynamicMetaObjectBinder::CreateArgumentMetaObjects)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* parameters = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObjectBinder*), "CreateArgumentMetaObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, parameters});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObjectBinder::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::DynamicMetaObjectBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&System::Dynamic::DynamicMetaObjectBinder::Bind)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObjectBinder*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, args});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObjectBinder::GetUpdateExpression
// Il2CppName: GetUpdateExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Dynamic::DynamicMetaObjectBinder::*)(::System::Type*)>(&System::Dynamic::DynamicMetaObjectBinder::GetUpdateExpression)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObjectBinder*), "GetUpdateExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObjectBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObjectBinder::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Dynamic::DynamicMetaObjectBinder::*)(::ArrayW<::Il2CppObject*>, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LabelTarget*)>(&System::Dynamic::DynamicMetaObjectBinder::Bind)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* parameters = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")})->byval_arg;
    static auto* returnLabel = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LabelTarget")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObjectBinder*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, parameters, returnLabel});
  }
};
