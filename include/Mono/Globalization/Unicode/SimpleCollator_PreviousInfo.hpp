// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Globalization.Unicode.SimpleCollator
#include "Mono/Globalization/Unicode/SimpleCollator.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator::PreviousInfo, "Mono.Globalization.Unicode", "SimpleCollator/PreviousInfo");
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.PreviousInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimpleCollator::PreviousInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 Code
    // Size: 0x4
    // Offset: 0x0
    int Code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Code and: SortKey
    char __padding0[0x4] = {};
    // public System.Byte* SortKey
    // Size: 0x8
    // Offset: 0x8
    uint8_t* SortKey;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    public:
    // Creating value type constructor for type: PreviousInfo
    constexpr PreviousInfo(int Code_ = {}, uint8_t* SortKey_ = {}) noexcept : Code{Code_}, SortKey{SortKey_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 Code
    [[deprecated("Use field access instead!")]] int& dyn_Code();
    // Get instance field reference: public System.Byte* SortKey
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_SortKey();
    // public System.Void .ctor(System.Boolean dummy)
    // Offset: 0xE59198
    PreviousInfo(bool dummy);
  }; // Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.PreviousInfo
  #pragma pack(pop)
  static check_size<sizeof(SimpleCollator::PreviousInfo), 8 + sizeof(uint8_t*)> __Mono_Globalization_Unicode_SimpleCollator_PreviousInfoSizeCheck;
  static_assert(sizeof(SimpleCollator::PreviousInfo) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SimpleCollator::PreviousInfo::PreviousInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
