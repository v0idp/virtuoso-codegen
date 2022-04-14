// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Skipping declaration: <GetEnumeratorWorker>d__7 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: HybridReferenceDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class HybridReferenceDictionary_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2, "System.Linq.Expressions.Interpreter", "HybridReferenceDictionary`2");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6A1734
  template<typename TKey, typename TValue>
  class HybridReferenceDictionary_2 : public ::Il2CppObject {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7<TKey, TValue>
    class $GetEnumeratorWorker$d__7;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/System.Linq.Expressions.Interpreter.<GetEnumeratorWorker>d__7
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $GetEnumeratorWorker$d__7 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*/ {
      public:
      using declaring_type = HybridReferenceDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<GetEnumeratorWorker>d__7";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Collections.Generic.KeyValuePair`2<TKey,TValue> <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> $$2__current;
      // public System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<TKey,TValue> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>* $$4__this;
      // Field size check
      static_assert(sizeof(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>*) == 0x8);
      // private System.Int32 <i>5__1
      // Size: 0x4
      // Offset: 0x0
      int $i$5__1;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>
      operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      [[deprecated]] int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Collections.Generic.KeyValuePair`2<TKey,TValue> <>2__current
      [[deprecated]] ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<TKey,TValue> <>4__this
      [[deprecated]] ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <i>5__1
      [[deprecated]] int& dyn_$i$5__1() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::dyn_$i$5__1");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<i>5__1"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System_Collections_Generic_IEnumerator$System_Collections_Generic_KeyValuePair$TKey_TValue$$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>::$GetEnumeratorWorker$d__7*), -1)));
        return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>::$GetEnumeratorWorker$d__7*), -1)));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename HybridReferenceDictionary_2<TKey, TValue>::$GetEnumeratorWorker$d__7* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename HybridReferenceDictionary_2<TKey, TValue>::$GetEnumeratorWorker$d__7*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>::$GetEnumeratorWorker$d__7*), -1)));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>::$GetEnumeratorWorker$d__7*), -1)));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::$GetEnumeratorWorker$d__7::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<TKey, TValue>::$GetEnumeratorWorker$d__7*), -1)));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/System.Linq.Expressions.Interpreter.<GetEnumeratorWorker>d__7
    // Could not write size check! Type: System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/System.Linq.Expressions.Interpreter.<GetEnumeratorWorker>d__7 is generic, or has no fields that are valid for size checks!
    public:
    // private System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] _keysAndValues
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> keysAndValues;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>) == 0x8);
    // private System.Collections.Generic.Dictionary`2<TKey,TValue> _dict
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TKey, TValue>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] _keysAndValues
    [[deprecated]] ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>& dyn__keysAndValues() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::dyn__keysAndValues");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_keysAndValues"))->offset;
      return *reinterpret_cast<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<TKey,TValue> _dict
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& dyn__dict() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::dyn__dict");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_dict"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TValue get_Item(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue get_Item(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, key);
    }
    // public System.Void set_Item(TKey key, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetValue(TKey key, ByRef<TValue> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::TryGetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key, byref(value));
    }
    // public System.Void Remove(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key);
    }
    // public System.Boolean ContainsKey(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ContainsKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::ContainsKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ContainsKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> GetEnumeratorWorker()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumeratorWorker() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::GetEnumeratorWorker");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumeratorWorker", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HybridReferenceDictionary_2<TKey, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HybridReferenceDictionary_2<TKey, TValue>*, creationType>()));
    }
  }; // System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2
  // Could not write size check! Type: System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
