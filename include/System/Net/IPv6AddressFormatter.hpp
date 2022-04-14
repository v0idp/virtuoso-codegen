// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: IPv6AddressFormatter
  struct IPv6AddressFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPv6AddressFormatter, "System.Net", "IPv6AddressFormatter");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.IPv6AddressFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  struct IPv6AddressFormatter/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt16[] address
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint16_t> address;
    // Field size check
    static_assert(sizeof(::ArrayW<uint16_t>) == 0x8);
    // private System.Int64 scopeId
    // Size: 0x8
    // Offset: 0x8
    int64_t scopeId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: IPv6AddressFormatter
    constexpr IPv6AddressFormatter(::ArrayW<uint16_t> address_ = ::ArrayW<uint16_t>(static_cast<void*>(nullptr)), int64_t scopeId_ = {}) noexcept : address{address_}, scopeId{scopeId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.UInt16[] address
    [[deprecated]] ::ArrayW<uint16_t>& dyn_address();
    // Get instance field reference: private System.Int64 scopeId
    [[deprecated]] int64_t& dyn_scopeId();
    // public System.Void .ctor(System.UInt16[] addr, System.Int64 scopeId)
    // Offset: 0x10F2744
    // ABORTED: conflicts with another method.  IPv6AddressFormatter(::ArrayW<uint16_t> addr, int64_t scopeId);
    // static private System.UInt16 SwapUShort(System.UInt16 number)
    // Offset: 0x10F41A4
    static uint16_t SwapUShort(uint16_t number);
    // private System.UInt32 AsIPv4Int()
    // Offset: 0x10F41B0
    uint AsIPv4Int();
    // private System.Boolean IsIPv4Compatible()
    // Offset: 0x10F41FC
    bool IsIPv4Compatible();
    // private System.Boolean IsIPv4Mapped()
    // Offset: 0x10F4274
    bool IsIPv4Mapped();
    // public override System.String ToString()
    // Offset: 0x10F274C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Net.IPv6AddressFormatter
  #pragma pack(pop)
  static check_size<sizeof(IPv6AddressFormatter), 8 + sizeof(int64_t)> __System_Net_IPv6AddressFormatterSizeCheck;
  static_assert(sizeof(IPv6AddressFormatter) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::IPv6AddressFormatter
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::SwapUShort
// Il2CppName: SwapUShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint16_t)>(&System::Net::IPv6AddressFormatter::SwapUShort)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPv6AddressFormatter), "SwapUShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::AsIPv4Int
// Il2CppName: AsIPv4Int
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Net::IPv6AddressFormatter::*)()>(&System::Net::IPv6AddressFormatter::AsIPv4Int)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPv6AddressFormatter), "AsIPv4Int", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::IsIPv4Compatible
// Il2CppName: IsIPv4Compatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IPv6AddressFormatter::*)()>(&System::Net::IPv6AddressFormatter::IsIPv4Compatible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPv6AddressFormatter), "IsIPv4Compatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::IsIPv4Mapped
// Il2CppName: IsIPv4Mapped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IPv6AddressFormatter::*)()>(&System::Net::IPv6AddressFormatter::IsIPv4Mapped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPv6AddressFormatter), "IsIPv4Mapped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::IPv6AddressFormatter::*)()>(&System::Net::IPv6AddressFormatter::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPv6AddressFormatter), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
