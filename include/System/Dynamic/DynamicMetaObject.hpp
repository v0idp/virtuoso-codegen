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
}
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: BindingRestrictions
  class BindingRestrictions;
  // Forward declaring type: GetMemberBinder
  class GetMemberBinder;
  // Forward declaring type: SetMemberBinder
  class SetMemberBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Forward declaring type: DynamicMetaObject
  class DynamicMetaObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::DynamicMetaObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::DynamicMetaObject*, "System.Dynamic", "DynamicMetaObject");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.DynamicMetaObject
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicMetaObject : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Linq.Expressions.Expression <Expression>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::Expression* Expression;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Dynamic.BindingRestrictions <Restrictions>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Dynamic::BindingRestrictions* Restrictions;
    // Field size check
    static_assert(sizeof(::System::Dynamic::BindingRestrictions*) == 0x8);
    // private readonly System.Object <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean <HasValue>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool HasValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static public readonly System.Dynamic.DynamicMetaObject[] EmptyMetaObjects
    static ::ArrayW<::System::Dynamic::DynamicMetaObject*> _get_EmptyMetaObjects();
    // Set static field: static public readonly System.Dynamic.DynamicMetaObject[] EmptyMetaObjects
    static void _set_EmptyMetaObjects(::ArrayW<::System::Dynamic::DynamicMetaObject*> value);
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Expression>k__BackingField
    [[deprecated]] ::System::Linq::Expressions::Expression*& dyn_$Expression$k__BackingField();
    // Get instance field reference: private readonly System.Dynamic.BindingRestrictions <Restrictions>k__BackingField
    [[deprecated]] ::System::Dynamic::BindingRestrictions*& dyn_$Restrictions$k__BackingField();
    // Get instance field reference: private readonly System.Object <Value>k__BackingField
    [[deprecated]] ::Il2CppObject*& dyn_$Value$k__BackingField();
    // Get instance field reference: private readonly System.Boolean <HasValue>k__BackingField
    [[deprecated]] bool& dyn_$HasValue$k__BackingField();
    // public System.Linq.Expressions.Expression get_Expression()
    // Offset: 0x11FAFC8
    ::System::Linq::Expressions::Expression* get_Expression();
    // public System.Dynamic.BindingRestrictions get_Restrictions()
    // Offset: 0x11FAFD0
    ::System::Dynamic::BindingRestrictions* get_Restrictions();
    // public System.Object get_Value()
    // Offset: 0x11FAFD8
    ::Il2CppObject* get_Value();
    // public System.Boolean get_HasValue()
    // Offset: 0x11FAFE0
    bool get_HasValue();
    // public System.Type get_RuntimeType()
    // Offset: 0x11FAFE8
    ::System::Type* get_RuntimeType();
    // public System.Type get_LimitType()
    // Offset: 0x11F4304
    ::System::Type* get_LimitType();
    // public System.Void .ctor(System.Linq.Expressions.Expression expression, System.Dynamic.BindingRestrictions restrictions)
    // Offset: 0x11FAF08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicMetaObject* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::DynamicMetaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicMetaObject*, creationType>(expression, restrictions)));
    }
    // public System.Void .ctor(System.Linq.Expressions.Expression expression, System.Dynamic.BindingRestrictions restrictions, System.Object value)
    // Offset: 0x11FAF98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicMetaObject* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::DynamicMetaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicMetaObject*, creationType>(expression, restrictions, value)));
    }
    // static private System.Void .cctor()
    // Offset: 0x11FB430
    static void _cctor();
    // public System.Dynamic.DynamicMetaObject BindGetMember(System.Dynamic.GetMemberBinder binder)
    // Offset: 0x11FB058
    ::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* binder);
    // public System.Dynamic.DynamicMetaObject BindSetMember(System.Dynamic.SetMemberBinder binder, System.Dynamic.DynamicMetaObject value)
    // Offset: 0x11FB0C8
    ::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* binder, ::System::Dynamic::DynamicMetaObject* value);
    // public System.Collections.Generic.IEnumerable`1<System.String> GetDynamicMemberNames()
    // Offset: 0x11FB140
    ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames();
    // static public System.Dynamic.DynamicMetaObject Create(System.Object value, System.Linq.Expressions.Expression expression)
    // Offset: 0x11FB204
    static ::System::Dynamic::DynamicMetaObject* Create(::Il2CppObject* value, ::System::Linq::Expressions::Expression* expression);
  }; // System.Dynamic.DynamicMetaObject
  #pragma pack(pop)
  static check_size<sizeof(DynamicMetaObject), 40 + sizeof(bool)> __System_Dynamic_DynamicMetaObjectSizeCheck;
  static_assert(sizeof(DynamicMetaObject) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::get_Expression
// Il2CppName: get_Expression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Dynamic::DynamicMetaObject::*)()>(&System::Dynamic::DynamicMetaObject::get_Expression)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "get_Expression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::get_Restrictions
// Il2CppName: get_Restrictions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::BindingRestrictions* (System::Dynamic::DynamicMetaObject::*)()>(&System::Dynamic::DynamicMetaObject::get_Restrictions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "get_Restrictions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Dynamic::DynamicMetaObject::*)()>(&System::Dynamic::DynamicMetaObject::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::get_HasValue
// Il2CppName: get_HasValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Dynamic::DynamicMetaObject::*)()>(&System::Dynamic::DynamicMetaObject::get_HasValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "get_HasValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::get_RuntimeType
// Il2CppName: get_RuntimeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Dynamic::DynamicMetaObject::*)()>(&System::Dynamic::DynamicMetaObject::get_RuntimeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "get_RuntimeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::get_LimitType
// Il2CppName: get_LimitType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Dynamic::DynamicMetaObject::*)()>(&System::Dynamic::DynamicMetaObject::get_LimitType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "get_LimitType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Dynamic::DynamicMetaObject::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::BindGetMember
// Il2CppName: BindGetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::GetMemberBinder*)>(&System::Dynamic::DynamicMetaObject::BindGetMember)> {
  static const MethodInfo* get() {
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Dynamic", "GetMemberBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "BindGetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binder});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::BindSetMember
// Il2CppName: BindSetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*)>(&System::Dynamic::DynamicMetaObject::BindSetMember)> {
  static const MethodInfo* get() {
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Dynamic", "SetMemberBinder")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "BindSetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binder, value});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::GetDynamicMemberNames
// Il2CppName: GetDynamicMemberNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (System::Dynamic::DynamicMetaObject::*)()>(&System::Dynamic::DynamicMetaObject::GetDynamicMemberNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "GetDynamicMemberNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::DynamicMetaObject::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (*)(::Il2CppObject*, ::System::Linq::Expressions::Expression*)>(&System::Dynamic::DynamicMetaObject::Create)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* expression = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::DynamicMetaObject*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, expression});
  }
};