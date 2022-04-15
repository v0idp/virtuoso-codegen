// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: OscMessage
  struct OscMessage;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: OscMessages
  class OscMessages;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::OscMessages);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OscMessages*, "VROSC", "OscMessages");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.OscMessages
  // [TokenAttribute] Offset: FFFFFFFF
  class OscMessages : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0xF7FC40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OscMessages* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::OscMessages::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OscMessages*, creationType>()));
    }
    // static public System.String GetOSCMessageString(VROSC.OscMessage message, System.Object[] arguments)
    // Offset: 0xF7FB14
    static ::StringW GetOSCMessageString(::VROSC::OscMessage message, ::ArrayW<::Il2CppObject*> arguments);
  }; // VROSC.OscMessages
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::OscMessages::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::OscMessages::GetOSCMessageString
// Il2CppName: GetOSCMessageString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::VROSC::OscMessage, ::ArrayW<::Il2CppObject*>)>(&VROSC::OscMessages::GetOSCMessageString)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("VROSC", "OscMessage")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::OscMessages*), "GetOSCMessageString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, arguments});
  }
};
