// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ValidationUtils
  class ValidationUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ValidationUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ValidationUtils*, "Newtonsoft.Json.Utilities", "ValidationUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ValidationUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidationUtils : public ::Il2CppObject {
    public:
    // static public System.Void ArgumentNotNull(System.Object value, System.String parameterName)
    // Offset: 0x158B0E0
    static void ArgumentNotNull(::Il2CppObject* value, ::StringW parameterName);
  }; // Newtonsoft.Json.Utilities.ValidationUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ValidationUtils::ArgumentNotNull
// Il2CppName: ArgumentNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::StringW)>(&Newtonsoft::Json::Utilities::ValidationUtils::ArgumentNotNull)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ValidationUtils*), "ArgumentNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, parameterName});
  }
};
