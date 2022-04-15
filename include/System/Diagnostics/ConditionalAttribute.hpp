// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: ConditionalAttribute
  class ConditionalAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::ConditionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ConditionalAttribute*, "System.Diagnostics", "ConditionalAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.ConditionalAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 6879D4
  // [ComVisibleAttribute] Offset: 6879D4
  class ConditionalAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String m_conditionString
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_conditionString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_conditionString;
    }
    // Get instance field reference: private System.String m_conditionString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_conditionString();
    // public System.Void .ctor(System.String conditionString)
    // Offset: 0xE3C3DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalAttribute* New_ctor(::StringW conditionString) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::ConditionalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalAttribute*, creationType>(conditionString)));
    }
  }; // System.Diagnostics.ConditionalAttribute
  #pragma pack(pop)
  static check_size<sizeof(ConditionalAttribute), 16 + sizeof(::StringW)> __System_Diagnostics_ConditionalAttributeSizeCheck;
  static_assert(sizeof(ConditionalAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::ConditionalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
