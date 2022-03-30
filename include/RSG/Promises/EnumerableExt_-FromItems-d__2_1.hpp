// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RSG.Promises.EnumerableExt
#include "RSG/Promises/EnumerableExt.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promises::EnumerableExt::$FromItems$d__2_1, "RSG.Promises", "EnumerableExt/<FromItems>d__2`1");
// Type namespace: RSG.Promises
namespace RSG::Promises {
  // WARNING Size may be invalid!
  // Autogenerated type: RSG.Promises.EnumerableExt/RSG.Promises.<FromItems>d__2`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class EnumerableExt::$FromItems$d__2_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<T>, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private T <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x0
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private T[] items
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> items;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // public T[] <>3__items
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> $$3__items;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private T[] <>7__wrap1
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> $$7__wrap1;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 <>7__wrap2
    // Size: 0x4
    // Offset: 0x0
    int $$7__wrap2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
    operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>1__state
    int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::dyn_$$1__state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T <>2__current
    T& dyn_$$2__current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::dyn_$$2__current");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::dyn_$$l__initialThreadId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>l__initialThreadId"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] items
    ::ArrayW<T>& dyn_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::dyn_items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "items"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T[] <>3__items
    ::ArrayW<T>& dyn_$$3__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::dyn_$$3__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>3__items"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] <>7__wrap1
    ::ArrayW<T>& dyn_$$7__wrap1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::dyn_$$7__wrap1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>7__wrap1"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>7__wrap2
    int& dyn_$$7__wrap2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::dyn_$$7__wrap2");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>7__wrap2"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private T System.Collections.Generic.IEnumerator<T>.get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T System_Collections_Generic_IEnumerator$T$_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::System.Collections.Generic.IEnumerator<T>.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableExt::$FromItems$d__2_1<T>* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableExt::$FromItems$d__2_1<T>*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_IDisposable_Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::System.IDisposable.Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Boolean MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::$FromItems$d__2_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // RSG.Promises.EnumerableExt/RSG.Promises.<FromItems>d__2`1
  // Could not write size check! Type: RSG.Promises.EnumerableExt/RSG.Promises.<FromItems>d__2`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
