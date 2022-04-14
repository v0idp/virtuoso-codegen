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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass9_0*, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/<>c__DisplayClass9_0");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DiscriminatedUnionConverter::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    public:
    // [NullableAttribute] Offset: 0x677BD0
    // public System.String caseName
    // Size: 0x8
    // Offset: 0x10
    ::StringW caseName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [NullableAttribute] Offset: 0x677BE4
    // public System.Func`2<Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.UnionCase,System.Boolean> <>9__0
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_2<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*, bool>* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Func_2<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*, bool>*) == 0x8);
    public:
    // Get instance field reference: public System.String caseName
    [[deprecated]] ::StringW& dyn_caseName();
    // Get instance field reference: public System.Func`2<Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.UnionCase,System.Boolean> <>9__0
    [[deprecated]] ::System::Func_2<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*, bool>*& dyn_$$9__0();
    // System.Boolean <ReadJson>b__0(Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.UnionCase c)
    // Offset: 0x159D95C
    bool $ReadJson$b__0(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase* c);
    // public System.Void .ctor()
    // Offset: 0x159D954
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiscriminatedUnionConverter::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiscriminatedUnionConverter::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(DiscriminatedUnionConverter::$$c__DisplayClass9_0), 24 + sizeof(::System::Func_2<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*, bool>*)> __Newtonsoft_Json_Converters_DiscriminatedUnionConverter_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(DiscriminatedUnionConverter::$$c__DisplayClass9_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass9_0::$ReadJson$b__0
// Il2CppName: <ReadJson>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass9_0::*)(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*)>(&Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass9_0::$ReadJson$b__0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/UnionCase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass9_0*), "<ReadJson>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::DiscriminatedUnionConverter::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!