// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: ValueEvent
  class ValueEvent;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: FormattedValueEvents
  class FormattedValueEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::CallbackHandlers::FormattedValueEvents);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::CallbackHandlers::FormattedValueEvents*, "Facebook.WitAi.CallbackHandlers", "FormattedValueEvents");
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.CallbackHandlers.FormattedValueEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class FormattedValueEvents : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x6C8204
    // public System.String format
    // Size: 0x8
    // Offset: 0x10
    ::StringW format;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Facebook.WitAi.CallbackHandlers.ValueEvent onFormattedValueEvent
    // Size: 0x8
    // Offset: 0x18
    ::Facebook::WitAi::CallbackHandlers::ValueEvent* onFormattedValueEvent;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::CallbackHandlers::ValueEvent*) == 0x8);
    public:
    // Get instance field reference: public System.String format
    [[deprecated("Use field access instead!")]] ::StringW& dyn_format();
    // Get instance field reference: public Facebook.WitAi.CallbackHandlers.ValueEvent onFormattedValueEvent
    [[deprecated("Use field access instead!")]] ::Facebook::WitAi::CallbackHandlers::ValueEvent*& dyn_onFormattedValueEvent();
    // public System.Void .ctor()
    // Offset: 0x166EC64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormattedValueEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::CallbackHandlers::FormattedValueEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormattedValueEvents*, creationType>()));
    }
  }; // Facebook.WitAi.CallbackHandlers.FormattedValueEvents
  #pragma pack(pop)
  static check_size<sizeof(FormattedValueEvents), 24 + sizeof(::Facebook::WitAi::CallbackHandlers::ValueEvent*)> __Facebook_WitAi_CallbackHandlers_FormattedValueEventsSizeCheck;
  static_assert(sizeof(FormattedValueEvents) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::FormattedValueEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
