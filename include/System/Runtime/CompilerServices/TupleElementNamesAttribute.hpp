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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: TupleElementNamesAttribute
  class TupleElementNamesAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::TupleElementNamesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TupleElementNamesAttribute*, "System.Runtime.CompilerServices", "TupleElementNamesAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.TupleElementNamesAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: 57C684
  // [AttributeUsageAttribute] Offset: 57C684
  class TupleElementNamesAttribute : public ::System::Attribute {
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
    // private readonly System.String[] _transformNames
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> transformNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::StringW>
    constexpr operator ::ArrayW<::StringW>() const noexcept {
      return transformNames;
    }
    // Get instance field reference: private readonly System.String[] _transformNames
    ::ArrayW<::StringW>& dyn__transformNames();
    // public System.Void .ctor(System.String[] transformNames)
    // Offset: 0xCA086C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TupleElementNamesAttribute* New_ctor(::ArrayW<::StringW> transformNames) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::TupleElementNamesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TupleElementNamesAttribute*, creationType>(transformNames)));
    }
  }; // System.Runtime.CompilerServices.TupleElementNamesAttribute
  #pragma pack(pop)
  static check_size<sizeof(TupleElementNamesAttribute), 16 + sizeof(::ArrayW<::StringW>)> __System_Runtime_CompilerServices_TupleElementNamesAttributeSizeCheck;
  static_assert(sizeof(TupleElementNamesAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TupleElementNamesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!