// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRMessenger
#include "GlobalNamespace/OVRMessenger.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRMessenger::BroadcastException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMessenger::BroadcastException*, "", "OVRMessenger/BroadcastException");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OVRMessenger/BroadcastException
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRMessenger::BroadcastException : public ::System::Exception {
    public:
    // public System.Void .ctor(System.String msg)
    // Offset: 0x133F580
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String msg)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMessenger::BroadcastException* New_ctor(::StringW msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRMessenger::BroadcastException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMessenger::BroadcastException*, creationType>(msg)));
    }
  }; // OVRMessenger/BroadcastException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMessenger::BroadcastException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
