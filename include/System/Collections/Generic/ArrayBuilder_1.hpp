// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: ArrayBuilder`1<T>
  template<typename T>
  struct ArrayBuilder_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::ArrayBuilder_1, "System.Collections.Generic", "ArrayBuilder`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Collections.Generic.ArrayBuilder`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6A1A88
  template<typename T>
  struct ArrayBuilder_1/*, public ::System::ValueType*/ {
    public:
    public:
    // private T[] _array
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> array;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ArrayBuilder_1
    constexpr ArrayBuilder_1(::ArrayW<T> array_ = ::ArrayW<T>(static_cast<void*>(nullptr)), int count_ = {}) noexcept : array{array_}, count{count_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] _array
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn__array() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::dyn__array");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_array"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _count
    [[deprecated("Use field access instead!")]] int& dyn__count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::dyn__count");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Capacity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::get_Capacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Capacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ArrayBuilder_1(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(capacity)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, capacity);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public System.Void UncheckedAdd(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UncheckedAdd(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::UncheckedAdd");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "UncheckedAdd", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // private System.Void EnsureCapacity(System.Int32 minimum)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EnsureCapacity(int minimum) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArrayBuilder_1::EnsureCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "EnsureCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(minimum)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, minimum);
    }
  }; // System.Collections.Generic.ArrayBuilder`1
  // Could not write size check! Type: System.Collections.Generic.ArrayBuilder`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
