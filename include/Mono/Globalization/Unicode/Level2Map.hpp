// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: Level2Map
  class Level2Map;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Globalization::Unicode::Level2Map);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::Level2Map*, "Mono.Globalization.Unicode", "Level2Map");
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.Level2Map
  // [TokenAttribute] Offset: FFFFFFFF
  class Level2Map : public ::Il2CppObject {
    public:
    public:
    // public System.Byte Source
    // Size: 0x1
    // Offset: 0x10
    uint8_t Source;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Replace
    // Size: 0x1
    // Offset: 0x11
    uint8_t Replace;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Get instance field reference: public System.Byte Source
    [[deprecated]] uint8_t& dyn_Source();
    // Get instance field reference: public System.Byte Replace
    [[deprecated]] uint8_t& dyn_Replace();
    // public System.Void .ctor(System.Byte source, System.Byte replace)
    // Offset: 0x10783C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Level2Map* New_ctor(uint8_t source, uint8_t replace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Globalization::Unicode::Level2Map::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Level2Map*, creationType>(source, replace)));
    }
  }; // Mono.Globalization.Unicode.Level2Map
  #pragma pack(pop)
  static check_size<sizeof(Level2Map), 17 + sizeof(uint8_t)> __Mono_Globalization_Unicode_Level2MapSizeCheck;
  static_assert(sizeof(Level2Map) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::Level2Map::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
