// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Array::EmptyInternalEnumerator_1, "System", "Array/EmptyInternalEnumerator`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Array/System.EmptyInternalEnumerator`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Array::EmptyInternalEnumerator_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
    operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static public readonly System.Array/System.EmptyInternalEnumerator`1<T> Value
    static ::System::Array::EmptyInternalEnumerator_1<T>* _get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::_get_Value");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Array::EmptyInternalEnumerator_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Array::EmptyInternalEnumerator_1<T>*>::get(), "Value"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly System.Array/System.EmptyInternalEnumerator`1<T> Value
    static void _set_Value(::System::Array::EmptyInternalEnumerator_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::_set_Value");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Array::EmptyInternalEnumerator_1<T>*>::get(), "Value", value));
    }
    // public T get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::get_Current");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Array::EmptyInternalEnumerator_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Array::EmptyInternalEnumerator_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Array::EmptyInternalEnumerator_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Array::EmptyInternalEnumerator_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Array::EmptyInternalEnumerator_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Array::EmptyInternalEnumerator_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Array::EmptyInternalEnumerator_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::EmptyInternalEnumerator_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Array::EmptyInternalEnumerator_1<T>*, creationType>()));
    }
  }; // System.Array/System.EmptyInternalEnumerator`1
  // Could not write size check! Type: System.Array/System.EmptyInternalEnumerator`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
