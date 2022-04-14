// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Unity.Collections.Allocator
#include "Unity/Collections/Allocator.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Skipping declaration: Enumerator because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeArray_1, "Unity.Collections", "NativeArray`1");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.NativeArray`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeContainerAttribute] Offset: 65E868
  // [NativeContainerSupportsDeferredConvertListToArray] Offset: 65E868
  // [DebuggerTypeProxyAttribute] Offset: 65E868
  // [NativeContainerSupportsMinMaxWriteRestrictionAttribute] Offset: 65E868
  // [NativeContainerSupportsDeallocateOnJobCompletionAttribute] Offset: 65E868
  // [DebuggerDisplayAttribute] Offset: 65E868
  // [DefaultMemberAttribute] Offset: 65E868
  template<typename T>
  struct NativeArray_1/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerable_1<T>, public ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>, public ::System::IDisposable*/ {
    public:
    // Nested type: ::Unity::Collections::NativeArray_1::Enumerator<T>
    struct Enumerator;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Unity.Collections.NativeArray`1/Unity.Collections.Enumerator
    // [TokenAttribute] Offset: FFFFFFFF
    // [ExcludeFromDocsAttribute] Offset: 65E950
    struct Enumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = NativeArray_1<T>;
      static constexpr std::string_view NESTED_NAME = "Enumerator";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // private Unity.Collections.NativeArray`1<T> m_Array
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      ::Unity::Collections::NativeArray_1<T> m_Array;
      // private System.Int32 m_Index
      // Size: 0x4
      // Offset: 0x0
      int m_Index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Enumerator
      constexpr Enumerator(::Unity::Collections::NativeArray_1<T> m_Array_ = {}, int m_Index_ = {}) noexcept : m_Array{m_Array_}, m_Index{m_Index_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
      operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private Unity.Collections.NativeArray`1<T> m_Array
      [[deprecated]] ::Unity::Collections::NativeArray_1<T>& dyn_m_Array() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Enumerator::dyn_m_Array");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Array"))->offset;
        return *reinterpret_cast<::Unity::Collections::NativeArray_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 m_Index
      [[deprecated]] int& dyn_m_Index() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Enumerator::dyn_m_Index");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Index"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      T get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Enumerator::get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Unity::Collections::NativeArray_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Enumerator::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Unity::Collections::NativeArray_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(ref Unity.Collections.NativeArray`1<T> array)
      // Offset: 0xFFFFFFFFFFFFFFFF
      Enumerator(ByRef<::Unity::Collections::NativeArray_1<T>> array) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Enumerator::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(array));
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Enumerator::Dispose");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Unity::Collections::NativeArray_1<T>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Enumerator::MoveNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Unity::Collections::NativeArray_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // public System.Void Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Enumerator::Reset");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Unity::Collections::NativeArray_1<T>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // Unity.Collections.NativeArray`1/Unity.Collections.Enumerator
    // Could not write size check! Type: Unity.Collections.NativeArray`1/Unity.Collections.Enumerator is generic, or has no fields that are valid for size checks!
    public:
    // [NativeDisableUnsafePtrRestrictionAttribute] Offset: 0x663E3C
    // System.Void* m_Buffer
    // Size: 0x8
    // Offset: 0x0
    void* m_Buffer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // System.Int32 m_Length
    // Size: 0x4
    // Offset: 0x0
    int m_Length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Unity.Collections.Allocator m_AllocatorLabel
    // Size: 0x4
    // Offset: 0x0
    ::Unity::Collections::Allocator m_AllocatorLabel;
    // Field size check
    static_assert(sizeof(::Unity::Collections::Allocator) == 0x4);
    public:
    // Creating value type constructor for type: NativeArray_1
    constexpr NativeArray_1(void* m_Buffer_ = {}, int m_Length_ = {}, ::Unity::Collections::Allocator m_AllocatorLabel_ = {}) noexcept : m_Buffer{m_Buffer_}, m_Length{m_Length_}, m_AllocatorLabel{m_AllocatorLabel_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>
    operator ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Void* m_Buffer
    [[deprecated]] void*& dyn_m_Buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::dyn_m_Buffer");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Buffer"))->offset;
      return *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 m_Length
    [[deprecated]] int& dyn_m_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::dyn_m_Length");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Length"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: Unity.Collections.Allocator m_AllocatorLabel
    [[deprecated]] ::Unity::Collections::Allocator& dyn_m_AllocatorLabel() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::dyn_m_AllocatorLabel");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_AllocatorLabel"))->offset;
      return *reinterpret_cast<::Unity::Collections::Allocator*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::get_Length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeArray_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public Unity.Collections.NativeArray`1/Unity.Collections.Enumerator<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::Unity::Collections::NativeArray_1<T>::Enumerator GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::Unity::Collections::NativeArray_1<T>::Enumerator, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeArray_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeArray_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public System.Boolean Equals(Unity.Collections.NativeArray`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Unity::Collections::NativeArray_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeArray_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeArray_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
  }; // Unity.Collections.NativeArray`1
  // Could not write size check! Type: Unity.Collections.NativeArray`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
