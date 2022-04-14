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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: CallSite`1<T>
  template<typename T>
  class CallSite_1;
  // Forward declaring type: RuleCache`1<T>
  template<typename T>
  class RuleCache_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: LabelTarget
  class LabelTarget;
  // Forward declaring type: Expression
  class Expression;
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
  // Forward declaring type: Expression`1<TDelegate>
  template<typename TDelegate>
  class Expression_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: CallSiteBinder
  class CallSiteBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::CallSiteBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CallSiteBinder*, "System.Runtime.CompilerServices", "CallSiteBinder");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.CallSiteBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class CallSiteBinder : public ::Il2CppObject {
    public:
    // Nested type: ::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1<T>
    template<typename T>
    class LambdaSignature_1;
    public:
    // System.Collections.Generic.Dictionary`2<System.Type,System.Object> Cache
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>* Cache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*() const noexcept {
      return Cache;
    }
    // Get static field: static private readonly System.Linq.Expressions.LabelTarget <UpdateLabel>k__BackingField
    static ::System::Linq::Expressions::LabelTarget* _get_$UpdateLabel$k__BackingField();
    // Set static field: static private readonly System.Linq.Expressions.LabelTarget <UpdateLabel>k__BackingField
    static void _set_$UpdateLabel$k__BackingField(::System::Linq::Expressions::LabelTarget* value);
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.Type,System.Object> Cache
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*& dyn_Cache();
    // static public System.Linq.Expressions.LabelTarget get_UpdateLabel()
    // Offset: 0x11F7CE4
    static ::System::Linq::Expressions::LabelTarget* get_UpdateLabel();
    // static private System.Void .cctor()
    // Offset: 0x11F7D48
    static void _cctor();
    // public System.Linq.Expressions.Expression Bind(System.Object[] args, System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> parameters, System.Linq.Expressions.LabelTarget returnLabel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Linq::Expressions::Expression* Bind(::ArrayW<::Il2CppObject*> args, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters, ::System::Linq::Expressions::LabelTarget* returnLabel);
    // public T BindDelegate(System.Runtime.CompilerServices.CallSite`1<T> site, System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T BindDelegate(::System::Runtime::CompilerServices::CallSite_1<T>* site, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::BindDelegate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Runtime::CompilerServices::CallSiteBinder*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, site, args);
    }
    // T BindCore(System.Runtime.CompilerServices.CallSite`1<T> site, System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T BindCore(::System::Runtime::CompilerServices::CallSite_1<T>* site, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::BindCore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BindCore", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(site), ::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, site, args);
    }
    // protected System.Void CacheTarget(T target)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void CacheTarget(T target) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::CacheTarget");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CacheTarget", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(target)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, target);
    }
    // static private System.Linq.Expressions.Expression`1<T> Stitch(System.Linq.Expressions.Expression binding, System.Runtime.CompilerServices.CallSiteBinder/System.Runtime.CompilerServices.LambdaSignature`1<T> signature)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Linq::Expressions::Expression_1<T>* Stitch(::System::Linq::Expressions::Expression* binding, ::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1<T>* signature) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::Stitch");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteBinder", "Stitch", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(binding), ::il2cpp_utils::ExtractType(signature)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Linq::Expressions::Expression_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, binding, signature);
    }
    // System.Runtime.CompilerServices.RuleCache`1<T> GetRuleCache()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::System::Runtime::CompilerServices::RuleCache_1<T>* GetRuleCache() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::GetRuleCache");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetRuleCache", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Runtime::CompilerServices::RuleCache_1<T>*, false>(this, ___generic__method);
    }
    // protected System.Void .ctor()
    // Offset: 0x11F7CDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallSiteBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallSiteBinder*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.CallSiteBinder
  #pragma pack(pop)
  static check_size<sizeof(CallSiteBinder), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*)> __System_Runtime_CompilerServices_CallSiteBinderSizeCheck;
  static_assert(sizeof(CallSiteBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::get_UpdateLabel
// Il2CppName: get_UpdateLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::LabelTarget* (*)()>(&System::Runtime::CompilerServices::CallSiteBinder::get_UpdateLabel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::CallSiteBinder*), "get_UpdateLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::CompilerServices::CallSiteBinder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::CallSiteBinder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Runtime::CompilerServices::CallSiteBinder::*)(::ArrayW<::Il2CppObject*>, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LabelTarget*)>(&System::Runtime::CompilerServices::CallSiteBinder::Bind)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* parameters = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")})->byval_arg;
    static auto* returnLabel = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LabelTarget")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::CallSiteBinder*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, parameters, returnLabel});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::BindDelegate
// Il2CppName: BindDelegate
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::BindCore
// Il2CppName: BindCore
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::CacheTarget
// Il2CppName: CacheTarget
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::Stitch
// Il2CppName: Stitch
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::GetRuleCache
// Il2CppName: GetRuleCache
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!