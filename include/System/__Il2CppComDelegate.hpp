// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.__Il2CppComObject
#include "System/__Il2CppComObject.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: __Il2CppComDelegate
  class __Il2CppComDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::__Il2CppComDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::__Il2CppComDelegate*, "System", "__Il2CppComDelegate");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.__Il2CppComDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class __Il2CppComDelegate : public ::System::__Il2CppComObject {
    public:
    // protected override System.Void Finalize()
    // Offset: 0x139FAF0
    // Implemented from: System.__Il2CppComObject
    // Base method: System.Void __Il2CppComObject::Finalize()
    void Finalize();
  }; // System.__Il2CppComDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::__Il2CppComDelegate::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__Il2CppComDelegate::*)()>(&System::__Il2CppComDelegate::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__Il2CppComDelegate*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
