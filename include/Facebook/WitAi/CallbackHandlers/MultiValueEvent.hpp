// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: MultiValueEvent
  class MultiValueEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::CallbackHandlers::MultiValueEvent);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::CallbackHandlers::MultiValueEvent*, "Facebook.WitAi.CallbackHandlers", "MultiValueEvent");
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // WARNING Size may be invalid!
  // Autogenerated type: Facebook.WitAi.CallbackHandlers.MultiValueEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiValueEvent : public ::UnityEngine::Events::UnityEvent_1<::ArrayW<::StringW>> {
    public:
    // public System.Void .ctor()
    // Offset: 0x10F93F8
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiValueEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::CallbackHandlers::MultiValueEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiValueEvent*, creationType>()));
    }
  }; // Facebook.WitAi.CallbackHandlers.MultiValueEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::MultiValueEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
