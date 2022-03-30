// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: RSG
namespace RSG {
  // Forward declaring type: IRejectable
  class IRejectable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::IRejectable);
DEFINE_IL2CPP_ARG_TYPE(::RSG::IRejectable*, "RSG", "IRejectable");
// Type namespace: RSG
namespace RSG {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RSG.IRejectable
  // [TokenAttribute] Offset: FFFFFFFF
  class IRejectable {
    public:
    // public System.Void Reject(System.Exception ex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reject(::System::Exception* ex);
  }; // RSG.IRejectable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::IRejectable::Reject
// Il2CppName: Reject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::IRejectable::*)(::System::Exception*)>(&RSG::IRejectable::Reject)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::IRejectable*), "Reject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};