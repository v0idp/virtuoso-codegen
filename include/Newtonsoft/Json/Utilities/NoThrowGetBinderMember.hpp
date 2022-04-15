// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Dynamic.GetMemberBinder
#include "System/Dynamic/GetMemberBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: DynamicMetaObject
  class DynamicMetaObject;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: NoThrowGetBinderMember
  class NoThrowGetBinderMember;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::NoThrowGetBinderMember);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*, "Newtonsoft.Json.Utilities", "NoThrowGetBinderMember");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.NoThrowGetBinderMember
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 672B28
  // [NullableAttribute] Offset: 672B28
  class NoThrowGetBinderMember : public ::System::Dynamic::GetMemberBinder {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    public:
    // private readonly System.Dynamic.GetMemberBinder _innerBinder
    // Size: 0x8
    // Offset: 0x28
    ::System::Dynamic::GetMemberBinder* innerBinder;
    // Field size check
    static_assert(sizeof(::System::Dynamic::GetMemberBinder*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Dynamic.GetMemberBinder _innerBinder
    [[deprecated("Use field access instead!")]] ::System::Dynamic::GetMemberBinder*& dyn__innerBinder();
    // public System.Void .ctor(System.Dynamic.GetMemberBinder innerBinder)
    // Offset: 0x134866C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoThrowGetBinderMember* New_ctor(::System::Dynamic::GetMemberBinder* innerBinder) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoThrowGetBinderMember*, creationType>(innerBinder)));
    }
    // public override System.Dynamic.DynamicMetaObject FallbackGetMember(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject errorSuggestion)
    // Offset: 0x13486A8
    // Implemented from: System.Dynamic.GetMemberBinder
    // Base method: System.Dynamic.DynamicMetaObject GetMemberBinder::FallbackGetMember(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject errorSuggestion)
    ::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* errorSuggestion);
  }; // Newtonsoft.Json.Utilities.NoThrowGetBinderMember
  #pragma pack(pop)
  static check_size<sizeof(NoThrowGetBinderMember), 40 + sizeof(::System::Dynamic::GetMemberBinder*)> __Newtonsoft_Json_Utilities_NoThrowGetBinderMemberSizeCheck;
  static_assert(sizeof(NoThrowGetBinderMember) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::NoThrowGetBinderMember::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::NoThrowGetBinderMember::FallbackGetMember
// Il2CppName: FallbackGetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (Newtonsoft::Json::Utilities::NoThrowGetBinderMember::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(&Newtonsoft::Json::Utilities::NoThrowGetBinderMember::FallbackGetMember)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* errorSuggestion = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::NoThrowGetBinderMember*), "FallbackGetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, errorSuggestion});
  }
};
