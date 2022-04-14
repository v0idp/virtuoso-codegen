// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IReadOnlyCollection`1
#include "System/Collections/Generic/IReadOnlyCollection_1.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: Enumerator because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Queue_1, "System.Collections.Generic", "Queue`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.Queue`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 69D514
  // [DebuggerTypeProxyAttribute] Offset: 69D514
  template<typename T>
  class Queue_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IReadOnlyCollection_1<T>, public ::System::Collections::ICollection*/ {
    public:
    // Nested type: ::System::Collections::Generic::Queue_1::Enumerator<T>
    struct Enumerator;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Collections.Generic.Queue`1/System.Collections.Generic.Enumerator
    // [TokenAttribute] Offset: FFFFFFFF
    struct Enumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = Queue_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Enumerator";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // private readonly System.Collections.Generic.Queue`1<T> _q
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::Queue_1<T>* q;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::Queue_1<T>*) == 0x8);
      // private readonly System.Int32 _version
      // Size: 0x4
      // Offset: 0x0
      int version;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 _index
      // Size: 0x4
      // Offset: 0x0
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private T _currentElement
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T currentElement;
      public:
      // Creating value type constructor for type: Enumerator
      constexpr Enumerator(::System::Collections::Generic::Queue_1<T>* q_ = {}, int version_ = {}, int index_ = {}, T currentElement_ = {}) noexcept : q{q_}, version{version_}, index{index_}, currentElement{currentElement_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
      operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Collections.Generic.Queue`1<T> _q
      [[deprecated]] ::System::Collections::Generic::Queue_1<T>*& dyn__q() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::dyn__q");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_q"))->offset;
        return *reinterpret_cast<::System::Collections::Generic::Queue_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Int32 _version
      [[deprecated]] int& dyn__version() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::dyn__version");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_version"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 _index
      [[deprecated]] int& dyn__index() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::dyn__index");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_index"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private T _currentElement
      [[deprecated]] T& dyn__currentElement() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::dyn__currentElement");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_currentElement"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      T get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::Collections::Generic::Queue_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::Collections::Generic::Queue_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // System.Void .ctor(System.Collections.Generic.Queue`1<T> q)
      // Offset: 0xFFFFFFFFFFFFFFFF
      Enumerator(::System::Collections::Generic::Queue_1<T>* q) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(q)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, q);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::Dispose");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::Collections::Generic::Queue_1<T>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::MoveNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::Collections::Generic::Queue_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // private System.Void ThrowEnumerationNotStartedOrEnded()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void ThrowEnumerationNotStartedOrEnded() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::ThrowEnumerationNotStartedOrEnded");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ThrowEnumerationNotStartedOrEnded", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enumerator::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::Collections::Generic::Queue_1<T>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // System.Collections.Generic.Queue`1/System.Collections.Generic.Enumerator
    // Could not write size check! Type: System.Collections.Generic.Queue`1/System.Collections.Generic.Enumerator is generic, or has no fields that are valid for size checks!
    public:
    // private T[] _array
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> array;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 _head
    // Size: 0x4
    // Offset: 0x0
    int head;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _tail
    // Size: 0x4
    // Offset: 0x0
    int tail;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x0
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x0
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IReadOnlyCollection_1<T>
    operator ::System::Collections::Generic::IReadOnlyCollection_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 MinimumGrow
    static int _get_MinimumGrow() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::_get_MinimumGrow");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Queue_1<T>*>::get(), "MinimumGrow"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 MinimumGrow
    static void _set_MinimumGrow(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::_set_MinimumGrow");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Queue_1<T>*>::get(), "MinimumGrow", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 GrowFactor
    static int _get_GrowFactor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::_get_GrowFactor");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Queue_1<T>*>::get(), "GrowFactor"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 GrowFactor
    static void _set_GrowFactor(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::_set_GrowFactor");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Queue_1<T>*>::get(), "GrowFactor", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] _array
    [[deprecated]] ::ArrayW<T>& dyn__array() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::dyn__array");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_array"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _head
    [[deprecated]] int& dyn__head() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::dyn__head");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_head"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _tail
    [[deprecated]] int& dyn__tail() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::dyn__tail");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_tail"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _size
    [[deprecated]] int& dyn__size() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::dyn__size");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_size"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _version
    [[deprecated]] int& dyn__version() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::dyn__version");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_version"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object _syncRoot
    [[deprecated]] ::Il2CppObject*& dyn__syncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::dyn__syncRoot");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_syncRoot"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::get_Count");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::Queue_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::System.Collections.ICollection.get_SyncRoot");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::Queue_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue_1<T>*, creationType>(capacity)));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::System.Collections.ICollection.CopyTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::Queue_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, index);
    }
    // public System.Void Enqueue(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Enqueue(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Enqueue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Collections.Generic.Queue`1/System.Collections.Generic.Enumerator<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::System::Collections::Generic::Queue_1<T>::Enumerator GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::System::Collections::Generic::Queue_1<T>::Enumerator, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::Queue_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::Queue_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public T Dequeue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Dequeue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::Dequeue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dequeue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // private System.Void SetCapacity(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetCapacity(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::SetCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(capacity)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, capacity);
    }
    // private System.Void MoveNext(ref System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MoveNext(ByRef<int> index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::MoveNext");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(index));
    }
    // private System.Void ThrowForEmptyQueue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ThrowForEmptyQueue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::ThrowForEmptyQueue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ThrowForEmptyQueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Queue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue_1<T>*, creationType>()));
    }
  }; // System.Collections.Generic.Queue`1
  // Could not write size check! Type: System.Collections.Generic.Queue`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
