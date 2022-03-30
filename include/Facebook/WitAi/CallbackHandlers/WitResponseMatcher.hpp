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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: ValuePathMatcher
  class ValuePathMatcher;
  // Forward declaring type: FormattedValueEvents
  class FormattedValueEvents;
  // Forward declaring type: MultiValueEvent
  class MultiValueEvent;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: WitResponseMatcher
  class WitResponseMatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::CallbackHandlers::WitResponseMatcher);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::CallbackHandlers::WitResponseMatcher*, "Facebook.WitAi.CallbackHandlers", "WitResponseMatcher");
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.CallbackHandlers.WitResponseMatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class WitResponseMatcher : public ::Facebook::WitAi::CallbackHandlers::WitResponseHandler {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0x5B1F58
    // public System.String intent
    // Size: 0x8
    // Offset: 0x20
    ::StringW intent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [RangeAttribute] Offset: 0x5B1FA4
    // [FormerlySerializedAsAttribute] Offset: 0x5B1FA4
    // public System.Single confidenceThreshold
    // Size: 0x4
    // Offset: 0x28
    float confidenceThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: confidenceThreshold and: valueMatchers
    char __padding1[0x4] = {};
    // [FormerlySerializedAsAttribute] Offset: 0x5B2008
    // [HeaderAttribute] Offset: 0x5B2008
    // public Facebook.WitAi.CallbackHandlers.ValuePathMatcher[] valueMatchers
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Facebook::WitAi::CallbackHandlers::ValuePathMatcher*> valueMatchers;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facebook::WitAi::CallbackHandlers::ValuePathMatcher*>) == 0x8);
    // [HeaderAttribute] Offset: 0x5B2078
    // private Facebook.WitAi.CallbackHandlers.FormattedValueEvents[] formattedValueEvents
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Facebook::WitAi::CallbackHandlers::FormattedValueEvents*> formattedValueEvents;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facebook::WitAi::CallbackHandlers::FormattedValueEvents*>) == 0x8);
    // private Facebook.WitAi.CallbackHandlers.MultiValueEvent onMultiValueEvent
    // Size: 0x8
    // Offset: 0x40
    ::Facebook::WitAi::CallbackHandlers::MultiValueEvent* onMultiValueEvent;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::CallbackHandlers::MultiValueEvent*) == 0x8);
    public:
    // Get static field: static private System.Text.RegularExpressions.Regex valueRegex
    static ::System::Text::RegularExpressions::Regex* _get_valueRegex();
    // Set static field: static private System.Text.RegularExpressions.Regex valueRegex
    static void _set_valueRegex(::System::Text::RegularExpressions::Regex* value);
    // Get instance field reference: public System.String intent
    ::StringW& dyn_intent();
    // Get instance field reference: public System.Single confidenceThreshold
    float& dyn_confidenceThreshold();
    // Get instance field reference: public Facebook.WitAi.CallbackHandlers.ValuePathMatcher[] valueMatchers
    ::ArrayW<::Facebook::WitAi::CallbackHandlers::ValuePathMatcher*>& dyn_valueMatchers();
    // Get instance field reference: private Facebook.WitAi.CallbackHandlers.FormattedValueEvents[] formattedValueEvents
    ::ArrayW<::Facebook::WitAi::CallbackHandlers::FormattedValueEvents*>& dyn_formattedValueEvents();
    // Get instance field reference: private Facebook.WitAi.CallbackHandlers.MultiValueEvent onMultiValueEvent
    ::Facebook::WitAi::CallbackHandlers::MultiValueEvent*& dyn_onMultiValueEvent();
    // private System.Boolean ValueMatches(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x1104650
    bool ValueMatches(::Facebook::WitAi::Lib::WitResponseNode* response);
    // private System.Boolean CompareDouble(System.String value, Facebook.WitAi.CallbackHandlers.ValuePathMatcher matcher)
    // Offset: 0x1104A24
    bool CompareDouble(::StringW value, ::Facebook::WitAi::CallbackHandlers::ValuePathMatcher* matcher);
    // private System.Boolean CompareFloat(System.String value, Facebook.WitAi.CallbackHandlers.ValuePathMatcher matcher)
    // Offset: 0x11048C8
    bool CompareFloat(::StringW value, ::Facebook::WitAi::CallbackHandlers::ValuePathMatcher* matcher);
    // private System.Boolean CompareInt(System.String value, Facebook.WitAi.CallbackHandlers.ValuePathMatcher matcher)
    // Offset: 0x11047F4
    bool CompareInt(::StringW value, ::Facebook::WitAi::CallbackHandlers::ValuePathMatcher* matcher);
    // private System.Boolean IntentMatches(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x1104334
    bool IntentMatches(::Facebook::WitAi::Lib::WitResponseNode* response);
    // public System.Void .ctor()
    // Offset: 0x1104BB8
    // Implemented from: Facebook.WitAi.CallbackHandlers.WitResponseHandler
    // Base method: System.Void WitResponseHandler::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseMatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::CallbackHandlers::WitResponseMatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseMatcher*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1104C24
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x1103F70
    // Implemented from: Facebook.WitAi.CallbackHandlers.WitResponseHandler
    // Base method: System.Void WitResponseHandler::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode response)
    void OnHandleResponse(::Facebook::WitAi::Lib::WitResponseNode* response);
  }; // Facebook.WitAi.CallbackHandlers.WitResponseMatcher
  #pragma pack(pop)
  static check_size<sizeof(WitResponseMatcher), 64 + sizeof(::Facebook::WitAi::CallbackHandlers::MultiValueEvent*)> __Facebook_WitAi_CallbackHandlers_WitResponseMatcherSizeCheck;
  static_assert(sizeof(WitResponseMatcher) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::WitResponseMatcher::ValueMatches
// Il2CppName: ValueMatches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::CallbackHandlers::WitResponseMatcher::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::CallbackHandlers::WitResponseMatcher::ValueMatches)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::WitResponseMatcher*), "ValueMatches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::WitResponseMatcher::CompareDouble
// Il2CppName: CompareDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::CallbackHandlers::WitResponseMatcher::*)(::StringW, ::Facebook::WitAi::CallbackHandlers::ValuePathMatcher*)>(&Facebook::WitAi::CallbackHandlers::WitResponseMatcher::CompareDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* matcher = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.CallbackHandlers", "ValuePathMatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::WitResponseMatcher*), "CompareDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, matcher});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::WitResponseMatcher::CompareFloat
// Il2CppName: CompareFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::CallbackHandlers::WitResponseMatcher::*)(::StringW, ::Facebook::WitAi::CallbackHandlers::ValuePathMatcher*)>(&Facebook::WitAi::CallbackHandlers::WitResponseMatcher::CompareFloat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* matcher = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.CallbackHandlers", "ValuePathMatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::WitResponseMatcher*), "CompareFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, matcher});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::WitResponseMatcher::CompareInt
// Il2CppName: CompareInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::CallbackHandlers::WitResponseMatcher::*)(::StringW, ::Facebook::WitAi::CallbackHandlers::ValuePathMatcher*)>(&Facebook::WitAi::CallbackHandlers::WitResponseMatcher::CompareInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* matcher = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.CallbackHandlers", "ValuePathMatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::WitResponseMatcher*), "CompareInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, matcher});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::WitResponseMatcher::IntentMatches
// Il2CppName: IntentMatches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::CallbackHandlers::WitResponseMatcher::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::CallbackHandlers::WitResponseMatcher::IntentMatches)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::WitResponseMatcher*), "IntentMatches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::WitResponseMatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::WitResponseMatcher::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Facebook::WitAi::CallbackHandlers::WitResponseMatcher::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::WitResponseMatcher*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::WitResponseMatcher::OnHandleResponse
// Il2CppName: OnHandleResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::CallbackHandlers::WitResponseMatcher::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::CallbackHandlers::WitResponseMatcher::OnHandleResponse)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::WitResponseMatcher*), "OnHandleResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
