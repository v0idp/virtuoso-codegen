// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ValueTuple`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  struct ValueTuple_5;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ValueTuple_5, "System", "ValueTuple`5");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.ValueTuple`5
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  struct ValueTuple_5/*, public ::System::ValueType, public ::System::IEquatable_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>, public ::System::IComparable_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>, public ::System::Collections::IStructuralEquatable, public ::System::Collections::IStructuralComparable, public ::System::IComparable*/ {
    public:
    public:
    // public T1 Item1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 Item1;
    // public T2 Item2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 Item2;
    // public T3 Item3
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T3 Item3;
    // public T4 Item4
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T4 Item4;
    // public T5 Item5
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T5 Item5;
    public:
    // Creating value type constructor for type: ValueTuple_5
    constexpr ValueTuple_5(T1 Item1_ = {}, T2 Item2_ = {}, T3 Item3_ = {}, T4 Item4_ = {}, T5 Item5_ = {}) noexcept : Item1{Item1_}, Item2{Item2_}, Item3{Item3_}, Item4{Item4_}, Item5{Item5_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>
    operator ::System::IEquatable_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>
    operator ::System::IComparable_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IStructuralEquatable
    operator ::System::Collections::IStructuralEquatable() noexcept {
      return *reinterpret_cast<::System::Collections::IStructuralEquatable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IStructuralComparable
    operator ::System::Collections::IStructuralComparable() noexcept {
      return *reinterpret_cast<::System::Collections::IStructuralComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public T1 Item1
    [[deprecated("Use field access instead!")]] T1& dyn_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::dyn_Item1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item1"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T2 Item2
    [[deprecated("Use field access instead!")]] T2& dyn_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::dyn_Item2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item2"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T3 Item3
    [[deprecated("Use field access instead!")]] T3& dyn_Item3() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::dyn_Item3");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item3"))->offset;
      return *reinterpret_cast<T3*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T4 Item4
    [[deprecated("Use field access instead!")]] T4& dyn_Item4() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::dyn_Item4");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item4"))->offset;
      return *reinterpret_cast<T4*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T5 Item5
    [[deprecated("Use field access instead!")]] T5& dyn_Item5() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::dyn_Item5");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item5"))->offset;
      return *reinterpret_cast<T5*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // ABORTED: conflicts with another method.  ValueTuple_5(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5)
    // public System.Boolean Equals(System.ValueTuple`5<T1,T2,T3,T4,T5> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::System::ValueTuple_5<T1, T2, T3, T4, T5> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_5<T1, T2, T3, T4, T5>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, ::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::System.Collections.IStructuralEquatable.Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_5<T1, T2, T3, T4, T5>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_IComparable_CompareTo(::Il2CppObject* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::System.IComparable.CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_5<T1, T2, T3, T4, T5>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // public System.Int32 CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CompareTo(::System::ValueTuple_5<T1, T2, T3, T4, T5> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_5<T1, T2, T3, T4, T5>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, ::System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::System.Collections.IStructuralComparable.CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_5<T1, T2, T3, T4, T5>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::System.Collections.IStructuralEquatable.GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_5<T1, T2, T3, T4, T5>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, comparer);
    }
    // private System.Int32 GetHashCodeCore(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetHashCodeCore(::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::GetHashCodeCore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHashCodeCore", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, comparer);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_5::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
  }; // System.ValueTuple`5
  // Could not write size check! Type: System.ValueTuple`5 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
