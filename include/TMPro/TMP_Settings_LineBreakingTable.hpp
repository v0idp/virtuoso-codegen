// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_Settings
#include "TMPro/TMP_Settings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_Settings::LineBreakingTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Settings::LineBreakingTable*, "TMPro", "TMP_Settings/LineBreakingTable");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Settings/TMPro.LineBreakingTable
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Settings::LineBreakingTable : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.Dictionary`2<System.Int32,System.Char> leadingCharacters
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>* leadingCharacters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.Int32,System.Char> followingCharacters
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>* followingCharacters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.Int32,System.Char> leadingCharacters
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>*& dyn_leadingCharacters();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.Int32,System.Char> followingCharacters
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>*& dyn_followingCharacters();
    // public System.Void .ctor()
    // Offset: 0x1821200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Settings::LineBreakingTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Settings::LineBreakingTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Settings::LineBreakingTable*, creationType>()));
    }
  }; // TMPro.TMP_Settings/TMPro.LineBreakingTable
  #pragma pack(pop)
  static check_size<sizeof(TMP_Settings::LineBreakingTable), 24 + sizeof(::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>*)> __TMPro_TMP_Settings_LineBreakingTableSizeCheck;
  static_assert(sizeof(TMP_Settings::LineBreakingTable) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Settings::LineBreakingTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
