// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ObjectDisposedException
#include "System/ObjectDisposedException.hpp"
// Completed includes
// Type namespace: Unity
namespace Unity {
  // Forward declaring type: ThrowStub
  class ThrowStub___;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::ThrowStub___);
DEFINE_IL2CPP_ARG_TYPE(::Unity::ThrowStub___*, "Unity", "ThrowStub");
// Type namespace: Unity
namespace Unity {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Unity.ThrowStub
  // [TokenAttribute] Offset: FFFFFFFF
  class ThrowStub___ : public ::System::ObjectDisposedException {
    public:
    // static public System.Void ThrowNotSupportedException()
    // Offset: 0x1854D58
    static void ThrowNotSupportedException();
  }; // Unity.ThrowStub
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::ThrowStub___::ThrowNotSupportedException
// Il2CppName: ThrowNotSupportedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::ThrowStub___::ThrowNotSupportedException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::ThrowStub___*), "ThrowNotSupportedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
