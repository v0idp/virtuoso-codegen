// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.DiscriminatedUnionConverter
#include "Newtonsoft/Json/Converters/DiscriminatedUnionConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass8_0*, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/<>c__DisplayClass8_0");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DiscriminatedUnionConverter::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 tag
    // Size: 0x4
    // Offset: 0x10
    int tag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return tag;
    }
    // Get instance field reference: public System.Int32 tag
    [[deprecated("Use field access instead!")]] int& dyn_tag();
    // public System.Void .ctor()
    // Offset: 0x159D928
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiscriminatedUnionConverter::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiscriminatedUnionConverter::$$c__DisplayClass8_0*, creationType>()));
    }
    // System.Boolean <WriteJson>b__0(Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.UnionCase c)
    // Offset: 0x159D930
    bool $WriteJson$b__0(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase* c);
  }; // Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(DiscriminatedUnionConverter::$$c__DisplayClass8_0), 16 + sizeof(int)> __Newtonsoft_Json_Converters_DiscriminatedUnionConverter_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(DiscriminatedUnionConverter::$$c__DisplayClass8_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass8_0::$WriteJson$b__0
// Il2CppName: <WriteJson>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass8_0::*)(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*)>(&Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass8_0::$WriteJson$b__0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/UnionCase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass8_0*), "<WriteJson>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
