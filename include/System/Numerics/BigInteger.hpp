// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Numerics
namespace System::Numerics {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Numerics
namespace System::Numerics {
  // Forward declaring type: BigInteger
  struct BigInteger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigInteger, "System.Numerics", "BigInteger");
// Type namespace: System.Numerics
namespace System::Numerics {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Numerics.BigInteger
  // [TokenAttribute] Offset: FFFFFFFF
  struct BigInteger/*, public ::System::ValueType, public ::System::IComparable_1<::System::Numerics::BigInteger>, public ::System::IEquatable_1<::System::Numerics::BigInteger>, public ::System::IFormattable, public ::System::IComparable*/ {
    public:
    // Nested type: ::System::Numerics::BigInteger::GetBytesMode
    struct GetBytesMode;
    public:
    // readonly System.Int32 _sign
    // Size: 0x4
    // Offset: 0x0
    int sign;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sign and: bits
    char __padding0[0x4] = {};
    // readonly System.UInt32[] _bits
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint> bits;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Creating value type constructor for type: BigInteger
    constexpr BigInteger(int sign_ = {}, ::ArrayW<uint> bits_ = ::ArrayW<uint>(static_cast<void*>(nullptr))) noexcept : sign{sign_}, bits{bits_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::Numerics::BigInteger>
    operator ::System::IComparable_1<::System::Numerics::BigInteger>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::Numerics::BigInteger>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Numerics::BigInteger>
    operator ::System::IEquatable_1<::System::Numerics::BigInteger>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Numerics::BigInteger>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Get static field: static private readonly System.Numerics.BigInteger s_bnMinInt
    static ::System::Numerics::BigInteger _get_s_bnMinInt();
    // Set static field: static private readonly System.Numerics.BigInteger s_bnMinInt
    static void _set_s_bnMinInt(::System::Numerics::BigInteger value);
    // Get static field: static private readonly System.Numerics.BigInteger s_bnOneInt
    static ::System::Numerics::BigInteger _get_s_bnOneInt();
    // Set static field: static private readonly System.Numerics.BigInteger s_bnOneInt
    static void _set_s_bnOneInt(::System::Numerics::BigInteger value);
    // Get static field: static private readonly System.Numerics.BigInteger s_bnZeroInt
    static ::System::Numerics::BigInteger _get_s_bnZeroInt();
    // Set static field: static private readonly System.Numerics.BigInteger s_bnZeroInt
    static void _set_s_bnZeroInt(::System::Numerics::BigInteger value);
    // Get static field: static private readonly System.Numerics.BigInteger s_bnMinusOneInt
    static ::System::Numerics::BigInteger _get_s_bnMinusOneInt();
    // Set static field: static private readonly System.Numerics.BigInteger s_bnMinusOneInt
    static void _set_s_bnMinusOneInt(::System::Numerics::BigInteger value);
    // Get static field: static private readonly System.Byte[] s_success
    static ::ArrayW<uint8_t> _get_s_success();
    // Set static field: static private readonly System.Byte[] s_success
    static void _set_s_success(::ArrayW<uint8_t> value);
    // Get instance field reference: readonly System.Int32 _sign
    [[deprecated]] int& dyn__sign();
    // Get instance field reference: readonly System.UInt32[] _bits
    [[deprecated]] ::ArrayW<uint>& dyn__bits();
    // static public System.Numerics.BigInteger get_Zero()
    // Offset: 0x188F254
    static ::System::Numerics::BigInteger get_Zero();
    // public System.Boolean get_IsZero()
    // Offset: 0x188F2B8
    bool get_IsZero();
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0x188E12C
    BigInteger(int value);
    // public System.Void .ctor(System.UInt32 value)
    // Offset: 0x188E1BC
    BigInteger(uint value);
    // public System.Void .ctor(System.Int64 value)
    // Offset: 0x188E254
    BigInteger(int64_t value);
    // public System.Void .ctor(System.UInt64 value)
    // Offset: 0x188E394
    BigInteger(uint64_t value);
    // public System.Void .ctor(System.Single value)
    // Offset: 0x188E470
    BigInteger(float value);
    // public System.Void .ctor(System.Double value)
    // Offset: 0x188E478
    BigInteger(double value);
    // public System.Void .ctor(System.Decimal value)
    // Offset: 0x188E8B8
    BigInteger(::System::Decimal value);
    // public System.Void .ctor(System.Byte[] value)
    // Offset: 0x188EAC0
    BigInteger(::ArrayW<uint8_t> value);
    // public System.Void .ctor(System.ReadOnlySpan`1<System.Byte> value)
    // Offset: 0x188EB98
    BigInteger(::System::ReadOnlySpan_1<uint8_t> value);
    // System.Void .ctor(System.Int32 n, System.UInt32[] rgu)
    // Offset: 0x188F088
    // ABORTED: conflicts with another method.  BigInteger(int n, ::ArrayW<uint> rgu);
    // System.Void .ctor(System.UInt32[] value, System.Boolean negative)
    // Offset: 0x188F094
    BigInteger(::ArrayW<uint> value, bool negative);
    // static private System.Void .cctor()
    // Offset: 0x189215C
    static void _cctor();
    // static public System.Numerics.BigInteger Parse(System.String value, System.IFormatProvider provider)
    // Offset: 0x188F2C8
    static ::System::Numerics::BigInteger Parse(::StringW value, ::System::IFormatProvider* provider);
    // static public System.Numerics.BigInteger Parse(System.String value, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x188F35C
    static ::System::Numerics::BigInteger Parse(::StringW value, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);
    // public System.Boolean Equals(System.Int64 other)
    // Offset: 0x188F5DC
    bool Equals(int64_t other);
    // public System.Boolean Equals(System.Numerics.BigInteger other)
    // Offset: 0x188F514
    bool Equals(::System::Numerics::BigInteger other);
    // public System.Int32 CompareTo(System.Int64 other)
    // Offset: 0x188F6D8
    int CompareTo(int64_t other);
    // public System.Int32 CompareTo(System.Numerics.BigInteger other)
    // Offset: 0x188F77C
    int CompareTo(::System::Numerics::BigInteger other);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x188F8B8
    int CompareTo(::Il2CppObject* obj);
    // public System.Byte[] ToByteArray()
    // Offset: 0x188F99C
    ::ArrayW<uint8_t> ToByteArray();
    // private System.Byte[] TryGetBytes(System.Numerics.BigInteger/System.Numerics.GetBytesMode mode, System.Span`1<System.Byte> destination, ref System.Int32 bytesWritten)
    // Offset: 0x188F9D0
    ::ArrayW<uint8_t> TryGetBytes(::System::Numerics::BigInteger::GetBytesMode mode, ::System::Span_1<uint8_t> destination, ByRef<int> bytesWritten);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0x1890678
    ::StringW ToString(::System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0x18906B0
    ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);
    // static private System.Numerics.BigInteger Add(System.UInt32[] leftBits, System.Int32 leftSign, System.UInt32[] rightBits, System.Int32 rightSign)
    // Offset: 0x18906F4
    static ::System::Numerics::BigInteger Add(::ArrayW<uint> leftBits, int leftSign, ::ArrayW<uint> rightBits, int rightSign);
    // static private System.Numerics.BigInteger Subtract(System.UInt32[] leftBits, System.Int32 leftSign, System.UInt32[] rightBits, System.Int32 rightSign)
    // Offset: 0x1890B80
    static ::System::Numerics::BigInteger Subtract(::ArrayW<uint> leftBits, int leftSign, ::ArrayW<uint> rightBits, int rightSign);
    // static public System.Byte op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x18910CC
    explicit operator uint8_t();
    // static public System.SByte op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x1891258
    explicit operator int8_t();
    // static public System.Int16 op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x18912F4
    explicit operator int16_t();
    // static public System.UInt16 op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x1891390
    explicit operator uint16_t();
    // static public System.Int32 op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x1891168
    explicit operator int();
    // static public System.UInt32 op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x189142C
    explicit operator uint();
    // static public System.Int64 op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x18914E8
    explicit operator int64_t();
    // static public System.UInt64 op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x18915B0
    explicit operator uint64_t();
    // static public System.Single op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x189167C
    explicit operator float();
    // static public System.Double op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x18916F4
    explicit operator double();
    // static public System.Decimal op_Explicit(System.Numerics.BigInteger value)
    // Offset: 0x1891930
    explicit operator ::System::Decimal();
    // static System.Int32 GetDiffLength(System.UInt32[] rgu1, System.UInt32[] rgu2, System.Int32 cu)
    // Offset: 0x188F664
    static int GetDiffLength(::ArrayW<uint> rgu1, ::ArrayW<uint> rgu2, int cu);
    // public override System.Int32 GetHashCode()
    // Offset: 0x188F430
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x188F48C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x188FE84
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Numerics.BigInteger
  #pragma pack(pop)
  static check_size<sizeof(BigInteger), 8 + sizeof(::ArrayW<uint>)> __System_Numerics_BigIntegerSizeCheck;
  static_assert(sizeof(BigInteger) == 0x10);
  // static public System.Numerics.BigInteger op_Subtraction(System.Numerics.BigInteger left, System.Numerics.BigInteger right)
  // Offset: 0x1890ABC
  ::System::Numerics::BigInteger operator-(const ::System::Numerics::BigInteger& left, const ::System::Numerics::BigInteger& right);
  // static public System.Numerics.BigInteger op_UnaryNegation(System.Numerics.BigInteger value)
  // Offset: 0x1891A88
  ::System::Numerics::BigInteger operator-(const ::System::Numerics::BigInteger& value);
  // static public System.Numerics.BigInteger op_Addition(System.Numerics.BigInteger left, System.Numerics.BigInteger right)
  // Offset: 0x1891A90
  ::System::Numerics::BigInteger operator+(const ::System::Numerics::BigInteger& left, const ::System::Numerics::BigInteger& right);
  // static public System.Numerics.BigInteger op_Multiply(System.Numerics.BigInteger left, System.Numerics.BigInteger right)
  // Offset: 0x1891B54
  ::System::Numerics::BigInteger operator*(const ::System::Numerics::BigInteger& left, const ::System::Numerics::BigInteger& right);
  // static public System.Boolean op_LessThanOrEqual(System.Numerics.BigInteger left, System.Numerics.BigInteger right)
  // Offset: 0x1891FD4
  bool operator <=(const ::System::Numerics::BigInteger& left, const ::System::Numerics::BigInteger& right);
  // static public System.Boolean op_Inequality(System.Numerics.BigInteger left, System.Numerics.BigInteger right)
  // Offset: 0x1892008
  bool operator !=(const ::System::Numerics::BigInteger& left, const ::System::Numerics::BigInteger& right);
  // static public System.Boolean op_LessThan(System.Numerics.BigInteger left, System.Int64 right)
  // Offset: 0x189203C
  bool operator <(const ::System::Numerics::BigInteger& left, const int64_t& right);
  // static public System.Boolean op_LessThanOrEqual(System.Numerics.BigInteger left, System.Int64 right)
  // Offset: 0x1892068
  bool operator <=(const ::System::Numerics::BigInteger& left, const int64_t& right);
  // static public System.Boolean op_Equality(System.Numerics.BigInteger left, System.Int64 right)
  // Offset: 0x1892098
  bool operator ==(const ::System::Numerics::BigInteger& left, const int64_t& right);
  // static public System.Boolean op_Inequality(System.Numerics.BigInteger left, System.Int64 right)
  // Offset: 0x18920C4
  bool operator !=(const ::System::Numerics::BigInteger& left, const int64_t& right);
  // static public System.Boolean op_LessThan(System.Int64 left, System.Numerics.BigInteger right)
  // Offset: 0x18920F4
  bool operator <(const int64_t& left, const ::System::Numerics::BigInteger& right);
  // static public System.Boolean op_LessThanOrEqual(System.Int64 left, System.Numerics.BigInteger right)
  // Offset: 0x1892128
  bool operator <=(const int64_t& left, const ::System::Numerics::BigInteger& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Numerics::BigInteger::get_Zero
// Il2CppName: get_Zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)()>(&System::Numerics::BigInteger::get_Zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "get_Zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::get_IsZero
// Il2CppName: get_IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::BigInteger::*)()>(&System::Numerics::BigInteger::get_IsZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "get_IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::BigInteger
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigInteger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Numerics::BigInteger::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::StringW, ::System::IFormatProvider*)>(&System::Numerics::BigInteger::Parse)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, provider});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(&System::Numerics::BigInteger::Parse)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, style, provider});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::BigInteger::*)(int64_t)>(&System::Numerics::BigInteger::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::BigInteger::*)(::System::Numerics::BigInteger)>(&System::Numerics::BigInteger::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Numerics::BigInteger::*)(int64_t)>(&System::Numerics::BigInteger::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Numerics::BigInteger::*)(::System::Numerics::BigInteger)>(&System::Numerics::BigInteger::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Numerics::BigInteger::*)(::Il2CppObject*)>(&System::Numerics::BigInteger::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::ToByteArray
// Il2CppName: ToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Numerics::BigInteger::*)()>(&System::Numerics::BigInteger::ToByteArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "ToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::TryGetBytes
// Il2CppName: TryGetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Numerics::BigInteger::*)(::System::Numerics::BigInteger::GetBytesMode, ::System::Span_1<uint8_t>, ByRef<int>)>(&System::Numerics::BigInteger::TryGetBytes)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger/GetBytesMode")->byval_arg;
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "TryGetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode, destination, bytesWritten});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::BigInteger::*)(::System::IFormatProvider*)>(&System::Numerics::BigInteger::ToString)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::BigInteger::*)(::StringW, ::System::IFormatProvider*)>(&System::Numerics::BigInteger::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&System::Numerics::BigInteger::Add)> {
  static const MethodInfo* get() {
    static auto* leftBits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* leftSign = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rightBits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* rightSign = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leftBits, leftSign, rightBits, rightSign});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&System::Numerics::BigInteger::Subtract)> {
  static const MethodInfo* get() {
    static auto* leftBits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* leftSign = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rightBits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* rightSign = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leftBits, leftSign, rightBits, rightSign});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator uint8_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator int8_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator int16_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator uint16_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator int
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator uint
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator int64_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator uint64_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator float
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator double
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator ::System::Decimal
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::GetDiffLength
// Il2CppName: GetDiffLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>, ::ArrayW<uint>, int)>(&System::Numerics::BigInteger::GetDiffLength)> {
  static const MethodInfo* get() {
    static auto* rgu1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* rgu2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* cu = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "GetDiffLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgu1, rgu2, cu});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Numerics::BigInteger::*)()>(&System::Numerics::BigInteger::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::BigInteger::*)(::Il2CppObject*)>(&System::Numerics::BigInteger::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::BigInteger::*)()>(&System::Numerics::BigInteger::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigInteger), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator-
// Il2CppName: op_UnaryNegation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Numerics::BigInteger::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
