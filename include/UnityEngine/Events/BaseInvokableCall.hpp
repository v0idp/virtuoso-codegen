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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Events::BaseInvokableCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::BaseInvokableCall*, "UnityEngine.Events", "BaseInvokableCall");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.BaseInvokableCall
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseInvokableCall : public ::Il2CppObject {
    public:
    // protected System.Void .ctor(System.Object target, System.Reflection.MethodInfo function)
    // Offset: 0x111DCF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInvokableCall* New_ctor(::Il2CppObject* target, ::System::Reflection::MethodInfo* function) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::BaseInvokableCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInvokableCall*, creationType>(target, function)));
    }
    // public System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invoke(::ArrayW<::Il2CppObject*> args);
    // static protected System.Void ThrowOnInvalidArg(System.Object arg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void ThrowOnInvalidArg(::Il2CppObject* arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::BaseInvokableCall::ThrowOnInvalidArg");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Events", "BaseInvokableCall", "ThrowOnInvalidArg", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, arg);
    }
    // static protected System.Boolean AllowInvoke(System.Delegate delegate)
    // Offset: 0x111DDBC
    static bool AllowInvoke(::System::Delegate* delegate);
    // public System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Find(::Il2CppObject* targetObj, ::System::Reflection::MethodInfo* method);
    // protected System.Void .ctor()
    // Offset: 0x111DCF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInvokableCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::BaseInvokableCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInvokableCall*, creationType>()));
    }
  }; // UnityEngine.Events.BaseInvokableCall
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::BaseInvokableCall::*)(::ArrayW<::Il2CppObject*>)>(&UnityEngine::Events::BaseInvokableCall::Invoke)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::BaseInvokableCall*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::ThrowOnInvalidArg
// Il2CppName: ThrowOnInvalidArg
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::AllowInvoke
// Il2CppName: AllowInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Delegate*)>(&UnityEngine::Events::BaseInvokableCall::AllowInvoke)> {
  static const MethodInfo* get() {
    static auto* delegate = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::BaseInvokableCall*), "AllowInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Events::BaseInvokableCall::*)(::Il2CppObject*, ::System::Reflection::MethodInfo*)>(&UnityEngine::Events::BaseInvokableCall::Find)> {
  static const MethodInfo* get() {
    static auto* targetObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::BaseInvokableCall*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetObj, method});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
