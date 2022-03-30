// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CalApplicationSuggestion
  class CalApplicationSuggestion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::CalApplicationSuggestion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CalApplicationSuggestion*, "Oculus.Platform.Models", "CalApplicationSuggestion");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CalApplicationSuggestion
  // [TokenAttribute] Offset: FFFFFFFF
  class CalApplicationSuggestion : public ::Il2CppObject {
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
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String SocialContext
    // Size: 0x8
    // Offset: 0x18
    ::StringW SocialContext;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.UInt64 ID
    uint64_t& dyn_ID();
    // Get instance field reference: public readonly System.String SocialContext
    ::StringW& dyn_SocialContext();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x7DA404
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CalApplicationSuggestion* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::CalApplicationSuggestion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CalApplicationSuggestion*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CalApplicationSuggestion
  #pragma pack(pop)
  static check_size<sizeof(CalApplicationSuggestion), 24 + sizeof(::StringW)> __Oculus_Platform_Models_CalApplicationSuggestionSizeCheck;
  static_assert(sizeof(CalApplicationSuggestion) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CalApplicationSuggestion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!