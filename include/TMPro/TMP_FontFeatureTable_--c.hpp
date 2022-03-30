// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_FontFeatureTable
#include "TMPro/TMP_FontFeatureTable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_FontFeatureTable::$$c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontFeatureTable::$$c*, "TMPro", "TMP_FontFeatureTable/<>c");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_FontFeatureTable/TMPro.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TMP_FontFeatureTable::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly TMPro.TMP_FontFeatureTable/TMPro.<>c <>9
    static ::TMPro::TMP_FontFeatureTable::$$c* _get_$$9();
    // Set static field: static public readonly TMPro.TMP_FontFeatureTable/TMPro.<>c <>9
    static void _set_$$9(::TMPro::TMP_FontFeatureTable::$$c* value);
    // Get static field: static public System.Func`2<TMPro.TMP_GlyphPairAdjustmentRecord,System.UInt32> <>9__6_0
    static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<TMPro.TMP_GlyphPairAdjustmentRecord,System.UInt32> <>9__6_0
    static void _set_$$9__6_0(::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint>* value);
    // Get static field: static public System.Func`2<TMPro.TMP_GlyphPairAdjustmentRecord,System.UInt32> <>9__6_1
    static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint>* _get_$$9__6_1();
    // Set static field: static public System.Func`2<TMPro.TMP_GlyphPairAdjustmentRecord,System.UInt32> <>9__6_1
    static void _set_$$9__6_1(::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0x12463DC
    static void _cctor();
    // System.UInt32 <SortGlyphPairAdjustmentRecords>b__6_0(TMPro.TMP_GlyphPairAdjustmentRecord s)
    // Offset: 0x1246444
    uint $SortGlyphPairAdjustmentRecords$b__6_0(::TMPro::TMP_GlyphPairAdjustmentRecord* s);
    // System.UInt32 <SortGlyphPairAdjustmentRecords>b__6_1(TMPro.TMP_GlyphPairAdjustmentRecord s)
    // Offset: 0x124645C
    uint $SortGlyphPairAdjustmentRecords$b__6_1(::TMPro::TMP_GlyphPairAdjustmentRecord* s);
    // public System.Void .ctor()
    // Offset: 0x124643C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_FontFeatureTable::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_FontFeatureTable::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_FontFeatureTable::$$c*, creationType>()));
    }
  }; // TMPro.TMP_FontFeatureTable/TMPro.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_FontFeatureTable::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_FontFeatureTable::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontFeatureTable::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontFeatureTable::$$c::$SortGlyphPairAdjustmentRecords$b__6_0
// Il2CppName: <SortGlyphPairAdjustmentRecords>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::TMP_FontFeatureTable::$$c::*)(::TMPro::TMP_GlyphPairAdjustmentRecord*)>(&TMPro::TMP_FontFeatureTable::$$c::$SortGlyphPairAdjustmentRecords$b__6_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_GlyphPairAdjustmentRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontFeatureTable::$$c*), "<SortGlyphPairAdjustmentRecords>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontFeatureTable::$$c::$SortGlyphPairAdjustmentRecords$b__6_1
// Il2CppName: <SortGlyphPairAdjustmentRecords>b__6_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::TMP_FontFeatureTable::$$c::*)(::TMPro::TMP_GlyphPairAdjustmentRecord*)>(&TMPro::TMP_FontFeatureTable::$$c::$SortGlyphPairAdjustmentRecords$b__6_1)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_GlyphPairAdjustmentRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontFeatureTable::$$c*), "<SortGlyphPairAdjustmentRecords>b__6_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontFeatureTable::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
