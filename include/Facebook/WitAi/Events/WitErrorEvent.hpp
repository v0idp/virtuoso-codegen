// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`2
#include "UnityEngine/Events/UnityEvent_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Facebook.WitAi.Events
namespace Facebook::WitAi::Events {
  // Forward declaring type: WitErrorEvent
  class WitErrorEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Events::WitErrorEvent);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Events::WitErrorEvent*, "Facebook.WitAi.Events", "WitErrorEvent");
// Type namespace: Facebook.WitAi.Events
namespace Facebook::WitAi::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Facebook.WitAi.Events.WitErrorEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class WitErrorEvent : public ::UnityEngine::Events::UnityEvent_2<::StringW, ::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x167094C
    // Implemented from: UnityEngine.Events.UnityEvent`2
    // Base method: System.Void UnityEvent_2::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitErrorEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Events::WitErrorEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitErrorEvent*, creationType>()));
    }
  }; // Facebook.WitAi.Events.WitErrorEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Events::WitErrorEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
