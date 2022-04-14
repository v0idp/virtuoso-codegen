// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.CommentHandling
#include "Newtonsoft/Json/Linq/CommentHandling.hpp"
// Including type: Newtonsoft.Json.Linq.LineInfoHandling
#include "Newtonsoft/Json/Linq/LineInfoHandling.hpp"
// Including type: Newtonsoft.Json.Linq.DuplicatePropertyNameHandling
#include "Newtonsoft/Json/Linq/DuplicatePropertyNameHandling.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JsonLoadSettings
  class JsonLoadSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonLoadSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonLoadSettings*, "Newtonsoft.Json.Linq", "JsonLoadSettings");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JsonLoadSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class JsonLoadSettings : public ::Il2CppObject {
    public:
    public:
    // private Newtonsoft.Json.Linq.CommentHandling _commentHandling
    // Size: 0x4
    // Offset: 0x10
    ::Newtonsoft::Json::Linq::CommentHandling commentHandling;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::CommentHandling) == 0x4);
    // private Newtonsoft.Json.Linq.LineInfoHandling _lineInfoHandling
    // Size: 0x4
    // Offset: 0x14
    ::Newtonsoft::Json::Linq::LineInfoHandling lineInfoHandling;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::LineInfoHandling) == 0x4);
    // private Newtonsoft.Json.Linq.DuplicatePropertyNameHandling _duplicatePropertyNameHandling
    // Size: 0x4
    // Offset: 0x18
    ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling duplicatePropertyNameHandling;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling) == 0x4);
    public:
    // Get instance field reference: private Newtonsoft.Json.Linq.CommentHandling _commentHandling
    [[deprecated]] ::Newtonsoft::Json::Linq::CommentHandling& dyn__commentHandling();
    // Get instance field reference: private Newtonsoft.Json.Linq.LineInfoHandling _lineInfoHandling
    [[deprecated]] ::Newtonsoft::Json::Linq::LineInfoHandling& dyn__lineInfoHandling();
    // Get instance field reference: private Newtonsoft.Json.Linq.DuplicatePropertyNameHandling _duplicatePropertyNameHandling
    [[deprecated]] ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling& dyn__duplicatePropertyNameHandling();
    // public Newtonsoft.Json.Linq.CommentHandling get_CommentHandling()
    // Offset: 0xEF6374
    ::Newtonsoft::Json::Linq::CommentHandling get_CommentHandling();
    // public Newtonsoft.Json.Linq.LineInfoHandling get_LineInfoHandling()
    // Offset: 0xEF637C
    ::Newtonsoft::Json::Linq::LineInfoHandling get_LineInfoHandling();
    // public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling get_DuplicatePropertyNameHandling()
    // Offset: 0xEF6384
    ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling get_DuplicatePropertyNameHandling();
  }; // Newtonsoft.Json.Linq.JsonLoadSettings
  #pragma pack(pop)
  static check_size<sizeof(JsonLoadSettings), 24 + sizeof(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling)> __Newtonsoft_Json_Linq_JsonLoadSettingsSizeCheck;
  static_assert(sizeof(JsonLoadSettings) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonLoadSettings::get_CommentHandling
// Il2CppName: get_CommentHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::CommentHandling (Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&Newtonsoft::Json::Linq::JsonLoadSettings::get_CommentHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JsonLoadSettings*), "get_CommentHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonLoadSettings::get_LineInfoHandling
// Il2CppName: get_LineInfoHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::LineInfoHandling (Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&Newtonsoft::Json::Linq::JsonLoadSettings::get_LineInfoHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JsonLoadSettings*), "get_LineInfoHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonLoadSettings::get_DuplicatePropertyNameHandling
// Il2CppName: get_DuplicatePropertyNameHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling (Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&Newtonsoft::Json::Linq::JsonLoadSettings::get_DuplicatePropertyNameHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JsonLoadSettings*), "get_DuplicatePropertyNameHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
