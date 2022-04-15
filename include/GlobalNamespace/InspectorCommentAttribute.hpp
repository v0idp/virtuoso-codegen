// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InspectorCommentAttribute
  class InspectorCommentAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::InspectorCommentAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InspectorCommentAttribute*, "", "InspectorCommentAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: InspectorCommentAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class InspectorCommentAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public readonly System.String message
    // Size: 0x8
    // Offset: 0x10
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return message;
    }
    // Get instance field reference: public readonly System.String message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_message();
    // public System.Void .ctor(System.String message)
    // Offset: 0x18A4570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InspectorCommentAttribute* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::InspectorCommentAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InspectorCommentAttribute*, creationType>(message)));
    }
  }; // InspectorCommentAttribute
  #pragma pack(pop)
  static check_size<sizeof(InspectorCommentAttribute), 16 + sizeof(::StringW)> __GlobalNamespace_InspectorCommentAttributeSizeCheck;
  static_assert(sizeof(InspectorCommentAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InspectorCommentAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
