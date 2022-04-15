// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.CallbackHandlers.MatchMethod
#include "Facebook/WitAi/CallbackHandlers/MatchMethod.hpp"
// Including type: Facebook.WitAi.CallbackHandlers.ComparisonMethod
#include "Facebook/WitAi/CallbackHandlers/ComparisonMethod.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Data
namespace Facebook::WitAi::Data {
  // Forward declaring type: WitValue
  class WitValue;
}
// Forward declaring namespace: Facebook::WitAi
namespace Facebook::WitAi {
  // Forward declaring type: WitResponseReference
  class WitResponseReference;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: ValuePathMatcher
  class ValuePathMatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::CallbackHandlers::ValuePathMatcher);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::CallbackHandlers::ValuePathMatcher*, "Facebook.WitAi.CallbackHandlers", "ValuePathMatcher");
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.CallbackHandlers.ValuePathMatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class ValuePathMatcher : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x6C823C
    // public System.String path
    // Size: 0x8
    // Offset: 0x10
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x6C8274
    // public Facebook.WitAi.Data.WitValue witValueReference
    // Size: 0x8
    // Offset: 0x18
    ::Facebook::WitAi::Data::WitValue* witValueReference;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Data::WitValue*) == 0x8);
    // [TooltipAttribute] Offset: 0x6C82AC
    // public System.Boolean contentRequired
    // Size: 0x1
    // Offset: 0x20
    bool contentRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: contentRequired and: matchMethod
    char __padding2[0x3] = {};
    // [TooltipAttribute] Offset: 0x6C82E4
    // public Facebook.WitAi.CallbackHandlers.MatchMethod matchMethod
    // Size: 0x4
    // Offset: 0x24
    ::Facebook::WitAi::CallbackHandlers::MatchMethod matchMethod;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::CallbackHandlers::MatchMethod) == 0x4);
    // [TooltipAttribute] Offset: 0x6C831C
    // public Facebook.WitAi.CallbackHandlers.ComparisonMethod comparisonMethod
    // Size: 0x4
    // Offset: 0x28
    ::Facebook::WitAi::CallbackHandlers::ComparisonMethod comparisonMethod;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::CallbackHandlers::ComparisonMethod) == 0x4);
    // Padding between fields: comparisonMethod and: matchValue
    char __padding4[0x4] = {};
    // [TooltipAttribute] Offset: 0x6C8354
    // public System.String matchValue
    // Size: 0x8
    // Offset: 0x30
    ::StringW matchValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x6C838C
    // public System.Double floatingPointComparisonTolerance
    // Size: 0x8
    // Offset: 0x38
    double floatingPointComparisonTolerance;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private Facebook.WitAi.WitResponseReference pathReference
    // Size: 0x8
    // Offset: 0x40
    ::Facebook::WitAi::WitResponseReference* pathReference;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::WitResponseReference*) == 0x8);
    public:
    // Get instance field reference: public System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // Get instance field reference: public Facebook.WitAi.Data.WitValue witValueReference
    [[deprecated("Use field access instead!")]] ::Facebook::WitAi::Data::WitValue*& dyn_witValueReference();
    // Get instance field reference: public System.Boolean contentRequired
    [[deprecated("Use field access instead!")]] bool& dyn_contentRequired();
    // Get instance field reference: public Facebook.WitAi.CallbackHandlers.MatchMethod matchMethod
    [[deprecated("Use field access instead!")]] ::Facebook::WitAi::CallbackHandlers::MatchMethod& dyn_matchMethod();
    // Get instance field reference: public Facebook.WitAi.CallbackHandlers.ComparisonMethod comparisonMethod
    [[deprecated("Use field access instead!")]] ::Facebook::WitAi::CallbackHandlers::ComparisonMethod& dyn_comparisonMethod();
    // Get instance field reference: public System.String matchValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_matchValue();
    // Get instance field reference: public System.Double floatingPointComparisonTolerance
    [[deprecated("Use field access instead!")]] double& dyn_floatingPointComparisonTolerance();
    // Get instance field reference: private Facebook.WitAi.WitResponseReference pathReference
    [[deprecated("Use field access instead!")]] ::Facebook::WitAi::WitResponseReference*& dyn_pathReference();
    // public Facebook.WitAi.WitResponseReference get_Reference()
    // Offset: 0x16703DC
    ::Facebook::WitAi::WitResponseReference* get_Reference();
    // public System.Void .ctor()
    // Offset: 0x1670708
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValuePathMatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::CallbackHandlers::ValuePathMatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValuePathMatcher*, creationType>()));
    }
  }; // Facebook.WitAi.CallbackHandlers.ValuePathMatcher
  #pragma pack(pop)
  static check_size<sizeof(ValuePathMatcher), 64 + sizeof(::Facebook::WitAi::WitResponseReference*)> __Facebook_WitAi_CallbackHandlers_ValuePathMatcherSizeCheck;
  static_assert(sizeof(ValuePathMatcher) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::ValuePathMatcher::get_Reference
// Il2CppName: get_Reference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::WitResponseReference* (Facebook::WitAi::CallbackHandlers::ValuePathMatcher::*)()>(&Facebook::WitAi::CallbackHandlers::ValuePathMatcher::get_Reference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::ValuePathMatcher*), "get_Reference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::ValuePathMatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
