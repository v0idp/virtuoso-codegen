// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.CallbackHandlers.WitResponseHandler
#include "Facebook/WitAi/CallbackHandlers/WitResponseHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: SimpleIntentHandler
  class SimpleIntentHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::CallbackHandlers::SimpleIntentHandler);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::CallbackHandlers::SimpleIntentHandler*, "Facebook.WitAi.CallbackHandlers", "SimpleIntentHandler");
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.CallbackHandlers.SimpleIntentHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleIntentHandler : public ::Facebook::WitAi::CallbackHandlers::WitResponseHandler {
    public:
    public:
    // public System.String intent
    // Size: 0x8
    // Offset: 0x20
    ::StringW intent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [RangeAttribute] Offset: 0x6C7FA8
    // public System.Single confidence
    // Size: 0x4
    // Offset: 0x28
    float confidence;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: confidence and: onIntentTriggered
    char __padding1[0x4] = {};
    // private UnityEngine.Events.UnityEvent onIntentTriggered
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Events::UnityEvent* onIntentTriggered;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    public:
    // Get instance field reference: public System.String intent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_intent();
    // Get instance field reference: public System.Single confidence
    [[deprecated("Use field access instead!")]] float& dyn_confidence();
    // Get instance field reference: private UnityEngine.Events.UnityEvent onIntentTriggered
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onIntentTriggered();
    // public UnityEngine.Events.UnityEvent get_OnIntentTriggered()
    // Offset: 0x166FEC4
    ::UnityEngine::Events::UnityEvent* get_OnIntentTriggered();
    // public System.Void .ctor()
    // Offset: 0x1670048
    // Implemented from: Facebook.WitAi.CallbackHandlers.WitResponseHandler
    // Base method: System.Void WitResponseHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleIntentHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::CallbackHandlers::SimpleIntentHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleIntentHandler*, creationType>()));
    }
    // protected override System.Void OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x166FECC
    // Implemented from: Facebook.WitAi.CallbackHandlers.WitResponseHandler
    // Base method: System.Void WitResponseHandler::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode response)
    void OnHandleResponse(::Facebook::WitAi::Lib::WitResponseNode* response);
  }; // Facebook.WitAi.CallbackHandlers.SimpleIntentHandler
  #pragma pack(pop)
  static check_size<sizeof(SimpleIntentHandler), 48 + sizeof(::UnityEngine::Events::UnityEvent*)> __Facebook_WitAi_CallbackHandlers_SimpleIntentHandlerSizeCheck;
  static_assert(sizeof(SimpleIntentHandler) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::SimpleIntentHandler::get_OnIntentTriggered
// Il2CppName: get_OnIntentTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Facebook::WitAi::CallbackHandlers::SimpleIntentHandler::*)()>(&Facebook::WitAi::CallbackHandlers::SimpleIntentHandler::get_OnIntentTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::SimpleIntentHandler*), "get_OnIntentTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::SimpleIntentHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::SimpleIntentHandler::OnHandleResponse
// Il2CppName: OnHandleResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::CallbackHandlers::SimpleIntentHandler::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::CallbackHandlers::SimpleIntentHandler::OnHandleResponse)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::SimpleIntentHandler*), "OnHandleResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
