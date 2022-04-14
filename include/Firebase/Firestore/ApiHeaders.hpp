// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: ApiHeaders
  class ApiHeaders;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::ApiHeaders);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ApiHeaders*, "Firebase.Firestore", "ApiHeaders");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.ApiHeaders
  // [TokenAttribute] Offset: FFFFFFFF
  class ApiHeaders : public ::Il2CppObject {
    public:
    // static public System.Void SetClientLanguage(System.String languageToken)
    // Offset: 0xD471A4
    static void SetClientLanguage(::StringW languageToken);
  }; // Firebase.Firestore.ApiHeaders
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::ApiHeaders::SetClientLanguage
// Il2CppName: SetClientLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Firebase::Firestore::ApiHeaders::SetClientLanguage)> {
  static const MethodInfo* get() {
    static auto* languageToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::ApiHeaders*), "SetClientLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{languageToken});
  }
};
