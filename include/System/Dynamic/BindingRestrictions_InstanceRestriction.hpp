// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Dynamic.BindingRestrictions
#include "System/Dynamic/BindingRestrictions.hpp"
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
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::BindingRestrictions::InstanceRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BindingRestrictions::InstanceRestriction*, "System.Dynamic", "BindingRestrictions/InstanceRestriction");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.BindingRestrictions/System.Dynamic.InstanceRestriction
  // [TokenAttribute] Offset: FFFFFFFF
  class BindingRestrictions::InstanceRestriction : public ::System::Dynamic::BindingRestrictions {
    public:
    public:
    // private readonly System.Linq.Expressions.Expression _expression
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::Expression* expression;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Object _instance
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _expression
    [[deprecated]] ::System::Linq::Expressions::Expression*& dyn__expression();
    // Get instance field reference: private readonly System.Object _instance
    [[deprecated]] ::Il2CppObject*& dyn__instance();
    // System.Void .ctor(System.Linq.Expressions.Expression parameter, System.Object instance)
    // Offset: 0xEA5A18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindingRestrictions::InstanceRestriction* New_ctor(::System::Linq::Expressions::Expression* parameter, ::Il2CppObject* instance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::BindingRestrictions::InstanceRestriction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindingRestrictions::InstanceRestriction*, creationType>(parameter, instance)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEA5A94
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEA5B34
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // override System.Linq.Expressions.Expression GetExpression()
    // Offset: 0xEA5B8C
    // Implemented from: System.Dynamic.BindingRestrictions
    // Base method: System.Linq.Expressions.Expression BindingRestrictions::GetExpression()
    ::System::Linq::Expressions::Expression* GetExpression();
  }; // System.Dynamic.BindingRestrictions/System.Dynamic.InstanceRestriction
  #pragma pack(pop)
  static check_size<sizeof(BindingRestrictions::InstanceRestriction), 24 + sizeof(::Il2CppObject*)> __System_Dynamic_BindingRestrictions_InstanceRestrictionSizeCheck;
  static_assert(sizeof(BindingRestrictions::InstanceRestriction) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::InstanceRestriction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::InstanceRestriction::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Dynamic::BindingRestrictions::InstanceRestriction::*)(::Il2CppObject*)>(&System::Dynamic::BindingRestrictions::InstanceRestriction::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::InstanceRestriction*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::InstanceRestriction::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Dynamic::BindingRestrictions::InstanceRestriction::*)()>(&System::Dynamic::BindingRestrictions::InstanceRestriction::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::InstanceRestriction*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::InstanceRestriction::GetExpression
// Il2CppName: GetExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Dynamic::BindingRestrictions::InstanceRestriction::*)()>(&System::Dynamic::BindingRestrictions::InstanceRestriction::GetExpression)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::InstanceRestriction*), "GetExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
