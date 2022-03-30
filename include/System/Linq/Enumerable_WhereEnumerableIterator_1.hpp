// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Linq.Enumerable/System.Linq.Iterator`1
#include "System/Linq/Enumerable_Iterator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Skipping declaration: IEnumerator`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable::WhereEnumerableIterator_1, "System.Linq", "Enumerable/WhereEnumerableIterator`1");
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/System.Linq.WhereEnumerableIterator`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource>
  class Enumerable::WhereEnumerableIterator_1 : public ::System::Linq::Enumerable::Iterator_1<TSource> {
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
    // private System.Collections.Generic.IEnumerable`1<TSource> source
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IEnumerable_1<TSource>* source;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // private System.Func`2<TSource,System.Boolean> predicate
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TSource, bool>* predicate;
    // Field size check
    static_assert(sizeof(::System::Func_2<TSource, bool>*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<TSource> enumerator
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IEnumerator_1<TSource>* enumerator;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<TSource>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerable`1<TSource> source
    ::System::Collections::Generic::IEnumerable_1<TSource>*& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<TSource,System.Boolean> predicate
    ::System::Func_2<TSource, bool>*& dyn_predicate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::dyn_predicate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "predicate"))->offset;
      return *reinterpret_cast<::System::Func_2<TSource, bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerator`1<TSource> enumerator
    ::System::Collections::Generic::IEnumerator_1<TSource>*& dyn_enumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::dyn_enumerator");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "enumerator"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::WhereEnumerableIterator_1<TSource>* New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::WhereEnumerableIterator_1<TSource>*, creationType>(source, predicate)));
    }
    // public override System.Linq.Enumerable/System.Linq.Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Linq.Enumerable/System.Linq.Iterator`1<TSource> Iterator_1::Clone()
    ::System::Linq::Enumerable::Iterator_1<TSource>* Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::Clone");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Linq::Enumerable::Iterator_1<TSource>*, false>(this, ___internal__method);
    }
    // public override System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Void Iterator_1::Dispose()
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Boolean Iterator_1::MoveNext()
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public override System.Collections.Generic.IEnumerable`1<TResult> Select(System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Collections.Generic.IEnumerable`1<TResult> Iterator_1::Select(System.Func`2<TSource,TResult> selector)
    template<class TResult>
    ::System::Collections::Generic::IEnumerable_1<TResult>* Select(::System::Func_2<TSource, TResult>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::Select");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Select", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(selector)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___generic__method, selector);
    }
    // public override System.Collections.Generic.IEnumerable`1<TSource> Where(System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Collections.Generic.IEnumerable`1<TSource> Iterator_1::Where(System.Func`2<TSource,System.Boolean> predicate)
    ::System::Collections::Generic::IEnumerable_1<TSource>* Where(::System::Func_2<TSource, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::WhereEnumerableIterator_1::Where");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Where", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(predicate)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal__method, predicate);
    }
  }; // System.Linq.Enumerable/System.Linq.WhereEnumerableIterator`1
  // Could not write size check! Type: System.Linq.Enumerable/System.Linq.WhereEnumerableIterator`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"