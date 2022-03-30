// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Dispatcher
#include "Firebase/Dispatcher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Dispatcher::CallbackStorage_1, "Firebase", "Dispatcher/CallbackStorage`1");
// Type namespace: Firebase
namespace Firebase {
  // WARNING Size may be invalid!
  // Autogenerated type: Firebase.Dispatcher/Firebase.CallbackStorage`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TResult>
  class Dispatcher::CallbackStorage_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0x5E00EC
    // private TResult <Result>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TResult Result;
    // [DebuggerBrowsableAttribute] Offset: 0x5E0128
    // private System.Exception <Exception>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::System::Exception* Exception;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private TResult <Result>k__BackingField
    TResult& dyn_$Result$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::CallbackStorage_1::dyn_$Result$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Result>k__BackingField"))->offset;
      return *reinterpret_cast<TResult*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Exception <Exception>k__BackingField
    ::System::Exception*& dyn_$Exception$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::CallbackStorage_1::dyn_$Exception$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Exception>k__BackingField"))->offset;
      return *reinterpret_cast<::System::Exception**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TResult get_Result()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResult get_Result() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::CallbackStorage_1::get_Result");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Result", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method);
    }
    // public System.Void set_Result(TResult value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Result(TResult value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::CallbackStorage_1::set_Result");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Result", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Exception get_Exception()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Exception* get_Exception() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::CallbackStorage_1::get_Exception");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Exception", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Exception*, false>(this, ___internal__method);
    }
    // public System.Void set_Exception(System.Exception value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Exception(::System::Exception* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::CallbackStorage_1::set_Exception");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Exception", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dispatcher::CallbackStorage_1<TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::CallbackStorage_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dispatcher::CallbackStorage_1<TResult>*, creationType>()));
    }
  }; // Firebase.Dispatcher/Firebase.CallbackStorage`1
  // Could not write size check! Type: Firebase.Dispatcher/Firebase.CallbackStorage`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"