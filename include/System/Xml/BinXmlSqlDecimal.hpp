// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: BinXmlSqlDecimal
  struct BinXmlSqlDecimal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinXmlSqlDecimal, "System.Xml", "BinXmlSqlDecimal");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.BinXmlSqlDecimal
  // [TokenAttribute] Offset: FFFFFFFF
  struct BinXmlSqlDecimal/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Byte m_bLen
    // Size: 0x1
    // Offset: 0x0
    uint8_t m_bLen;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Byte m_bPrec
    // Size: 0x1
    // Offset: 0x1
    uint8_t m_bPrec;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Byte m_bScale
    // Size: 0x1
    // Offset: 0x2
    uint8_t m_bScale;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Byte m_bSign
    // Size: 0x1
    // Offset: 0x3
    uint8_t m_bSign;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.UInt32 m_data1
    // Size: 0x4
    // Offset: 0x4
    uint m_data1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 m_data2
    // Size: 0x4
    // Offset: 0x8
    uint m_data2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 m_data3
    // Size: 0x4
    // Offset: 0xC
    uint m_data3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 m_data4
    // Size: 0x4
    // Offset: 0x10
    uint m_data4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: BinXmlSqlDecimal
    constexpr BinXmlSqlDecimal(uint8_t m_bLen_ = {}, uint8_t m_bPrec_ = {}, uint8_t m_bScale_ = {}, uint8_t m_bSign_ = {}, uint m_data1_ = {}, uint m_data2_ = {}, uint m_data3_ = {}, uint m_data4_ = {}) noexcept : m_bLen{m_bLen_}, m_bPrec{m_bPrec_}, m_bScale{m_bScale_}, m_bSign{m_bSign_}, m_data1{m_data1_}, m_data2{m_data2_}, m_data3{m_data3_}, m_data4{m_data4_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Byte NUMERIC_MAX_PRECISION
    static uint8_t _get_NUMERIC_MAX_PRECISION();
    // Set static field: static private readonly System.Byte NUMERIC_MAX_PRECISION
    static void _set_NUMERIC_MAX_PRECISION(uint8_t value);
    // Get static field: static private readonly System.Byte MaxPrecision
    static uint8_t _get_MaxPrecision();
    // Set static field: static private readonly System.Byte MaxPrecision
    static void _set_MaxPrecision(uint8_t value);
    // Get static field: static private readonly System.Byte MaxScale
    static uint8_t _get_MaxScale();
    // Set static field: static private readonly System.Byte MaxScale
    static void _set_MaxScale(uint8_t value);
    // Get static field: static private readonly System.Int32 x_cNumeMax
    static int _get_x_cNumeMax();
    // Set static field: static private readonly System.Int32 x_cNumeMax
    static void _set_x_cNumeMax(int value);
    // Get static field: static private readonly System.Int64 x_lInt32Base
    static int64_t _get_x_lInt32Base();
    // Set static field: static private readonly System.Int64 x_lInt32Base
    static void _set_x_lInt32Base(int64_t value);
    // Get static field: static private readonly System.UInt64 x_ulInt32Base
    static uint64_t _get_x_ulInt32Base();
    // Set static field: static private readonly System.UInt64 x_ulInt32Base
    static void _set_x_ulInt32Base(uint64_t value);
    // Get static field: static private readonly System.UInt64 x_ulInt32BaseForMod
    static uint64_t _get_x_ulInt32BaseForMod();
    // Set static field: static private readonly System.UInt64 x_ulInt32BaseForMod
    static void _set_x_ulInt32BaseForMod(uint64_t value);
    // Get static field: static readonly System.UInt64 x_llMax
    static uint64_t _get_x_llMax();
    // Set static field: static readonly System.UInt64 x_llMax
    static void _set_x_llMax(uint64_t value);
    // Get static field: static private readonly System.Double DUINT_BASE
    static double _get_DUINT_BASE();
    // Set static field: static private readonly System.Double DUINT_BASE
    static void _set_DUINT_BASE(double value);
    // Get static field: static private readonly System.Double DUINT_BASE2
    static double _get_DUINT_BASE2();
    // Set static field: static private readonly System.Double DUINT_BASE2
    static void _set_DUINT_BASE2(double value);
    // Get static field: static private readonly System.Double DUINT_BASE3
    static double _get_DUINT_BASE3();
    // Set static field: static private readonly System.Double DUINT_BASE3
    static void _set_DUINT_BASE3(double value);
    // Get static field: static private readonly System.UInt32[] x_rgulShiftBase
    static ::ArrayW<uint> _get_x_rgulShiftBase();
    // Set static field: static private readonly System.UInt32[] x_rgulShiftBase
    static void _set_x_rgulShiftBase(::ArrayW<uint> value);
    // Get static field: static private readonly System.Byte[] rgCLenFromPrec
    static ::ArrayW<uint8_t> _get_rgCLenFromPrec();
    // Set static field: static private readonly System.Byte[] rgCLenFromPrec
    static void _set_rgCLenFromPrec(::ArrayW<uint8_t> value);
    // Get instance field reference: System.Byte m_bLen
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_bLen();
    // Get instance field reference: System.Byte m_bPrec
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_bPrec();
    // Get instance field reference: System.Byte m_bScale
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_bScale();
    // Get instance field reference: System.Byte m_bSign
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_bSign();
    // Get instance field reference: System.UInt32 m_data1
    [[deprecated("Use field access instead!")]] uint& dyn_m_data1();
    // Get instance field reference: System.UInt32 m_data2
    [[deprecated("Use field access instead!")]] uint& dyn_m_data2();
    // Get instance field reference: System.UInt32 m_data3
    [[deprecated("Use field access instead!")]] uint& dyn_m_data3();
    // Get instance field reference: System.UInt32 m_data4
    [[deprecated("Use field access instead!")]] uint& dyn_m_data4();
    // public System.Boolean get_IsPositive()
    // Offset: 0xB61B58
    bool get_IsPositive();
    // public System.Void .ctor(System.Byte[] data, System.Int32 offset, System.Boolean trim)
    // Offset: 0xB61B68
    BinXmlSqlDecimal(::ArrayW<uint8_t> data, int offset, bool trim);
    // static private System.Void .cctor()
    // Offset: 0xB6257C
    static void _cctor();
    // static private System.UInt32 UIntFromByteArray(System.Byte[] data, System.Int32 offset)
    // Offset: 0xB61E38
    static uint UIntFromByteArray(::ArrayW<uint8_t> data, int offset);
    // static private System.Void MpDiv1(System.UInt32[] rgulU, ref System.Int32 ciulU, System.UInt32 iulD, out System.UInt32 iulR)
    // Offset: 0xB620A4
    static void MpDiv1(::ArrayW<uint> rgulU, ByRef<int> ciulU, uint iulD, ByRef<uint> iulR);
    // static private System.Void MpNormalize(System.UInt32[] rgulU, ref System.Int32 ciulU)
    // Offset: 0xB621A0
    static void MpNormalize(::ArrayW<uint> rgulU, ByRef<int> ciulU);
    // static private System.Char ChFromDigit(System.UInt32 uiDigit)
    // Offset: 0xB621F8
    static ::Il2CppChar ChFromDigit(uint uiDigit);
    // public System.Decimal ToDecimal()
    // Offset: 0xB62200
    ::System::Decimal ToDecimal();
    // private System.Void TrimTrailingZeros()
    // Offset: 0xB61EB8
    void TrimTrailingZeros();
    // public override System.String ToString()
    // Offset: 0xB622A8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Xml.BinXmlSqlDecimal
  #pragma pack(pop)
  static check_size<sizeof(BinXmlSqlDecimal), 16 + sizeof(uint)> __System_Xml_BinXmlSqlDecimalSizeCheck;
  static_assert(sizeof(BinXmlSqlDecimal) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::get_IsPositive
// Il2CppName: get_IsPositive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::BinXmlSqlDecimal::*)()>(&System::Xml::BinXmlSqlDecimal::get_IsPositive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), "get_IsPositive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::BinXmlSqlDecimal
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::BinXmlSqlDecimal::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::UIntFromByteArray
// Il2CppName: UIntFromByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlSqlDecimal::UIntFromByteArray)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), "UIntFromByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::MpDiv1
// Il2CppName: MpDiv1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ByRef<int>, uint, ByRef<uint>)>(&System::Xml::BinXmlSqlDecimal::MpDiv1)> {
  static const MethodInfo* get() {
    static auto* rgulU = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ciulU = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* iulD = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* iulR = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), "MpDiv1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgulU, ciulU, iulD, iulR});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::MpNormalize
// Il2CppName: MpNormalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ByRef<int>)>(&System::Xml::BinXmlSqlDecimal::MpNormalize)> {
  static const MethodInfo* get() {
    static auto* rgulU = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ciulU = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), "MpNormalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgulU, ciulU});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::ChFromDigit
// Il2CppName: ChFromDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(uint)>(&System::Xml::BinXmlSqlDecimal::ChFromDigit)> {
  static const MethodInfo* get() {
    static auto* uiDigit = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), "ChFromDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uiDigit});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::ToDecimal
// Il2CppName: ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Xml::BinXmlSqlDecimal::*)()>(&System::Xml::BinXmlSqlDecimal::ToDecimal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), "ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::TrimTrailingZeros
// Il2CppName: TrimTrailingZeros
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::BinXmlSqlDecimal::*)()>(&System::Xml::BinXmlSqlDecimal::TrimTrailingZeros)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), "TrimTrailingZeros", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlSqlDecimal::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::BinXmlSqlDecimal::*)()>(&System::Xml::BinXmlSqlDecimal::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlSqlDecimal), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
