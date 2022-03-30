// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_SpriteAsset
#include "TMPro/TMP_SpriteAsset.hpp"
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
  // Forward declaring type: TMP_SpriteGlyph
  class TMP_SpriteGlyph;
  // Forward declaring type: TMP_SpriteCharacter
  class TMP_SpriteCharacter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_SpriteAsset::$$c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAsset::$$c*, "TMPro", "TMP_SpriteAsset/<>c");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SpriteAsset/TMPro.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TMP_SpriteAsset::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly TMPro.TMP_SpriteAsset/TMPro.<>c <>9
    static ::TMPro::TMP_SpriteAsset::$$c* _get_$$9();
    // Set static field: static public readonly TMPro.TMP_SpriteAsset/TMPro.<>c <>9
    static void _set_$$9(::TMPro::TMP_SpriteAsset::$$c* value);
    // Get static field: static public System.Func`2<TMPro.TMP_SpriteGlyph,System.UInt32> <>9__40_0
    static ::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint>* _get_$$9__40_0();
    // Set static field: static public System.Func`2<TMPro.TMP_SpriteGlyph,System.UInt32> <>9__40_0
    static void _set_$$9__40_0(::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint>* value);
    // Get static field: static public System.Func`2<TMPro.TMP_SpriteCharacter,System.UInt32> <>9__41_0
    static ::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint>* _get_$$9__41_0();
    // Set static field: static public System.Func`2<TMPro.TMP_SpriteCharacter,System.UInt32> <>9__41_0
    static void _set_$$9__41_0(::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0x1247AC0
    static void _cctor();
    // System.UInt32 <SortGlyphTable>b__40_0(TMPro.TMP_SpriteGlyph item)
    // Offset: 0x1247B28
    uint $SortGlyphTable$b__40_0(::TMPro::TMP_SpriteGlyph* item);
    // System.UInt32 <SortCharacterTable>b__41_0(TMPro.TMP_SpriteCharacter c)
    // Offset: 0x1247B44
    uint $SortCharacterTable$b__41_0(::TMPro::TMP_SpriteCharacter* c);
    // public System.Void .ctor()
    // Offset: 0x1247B20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteAsset::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_SpriteAsset::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteAsset::$$c*, creationType>()));
    }
  }; // TMPro.TMP_SpriteAsset/TMPro.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_SpriteAsset::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::$$c::$SortGlyphTable$b__40_0
// Il2CppName: <SortGlyphTable>b__40_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::TMP_SpriteAsset::$$c::*)(::TMPro::TMP_SpriteGlyph*)>(&TMPro::TMP_SpriteAsset::$$c::$SortGlyphTable$b__40_0)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteGlyph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset::$$c*), "<SortGlyphTable>b__40_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::$$c::$SortCharacterTable$b__41_0
// Il2CppName: <SortCharacterTable>b__41_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::TMP_SpriteAsset::$$c::*)(::TMPro::TMP_SpriteCharacter*)>(&TMPro::TMP_SpriteAsset::$$c::$SortCharacterTable$b__41_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteCharacter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset::$$c*), "<SortCharacterTable>b__41_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
