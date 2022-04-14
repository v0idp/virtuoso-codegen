// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.WitResponseReference
#include "Facebook/WitAi/WitResponseReference.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Forward declaring type: ArrayNodeReference
  class ArrayNodeReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::ArrayNodeReference);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::ArrayNodeReference*, "Facebook.WitAi", "ArrayNodeReference");
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.ArrayNodeReference
  // [TokenAttribute] Offset: FFFFFFFF
  class ArrayNodeReference : public ::Facebook::WitAi::WitResponseReference {
    public:
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x20
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return index;
    }
    // Get instance field reference: public System.Int32 index
    [[deprecated]] int& dyn_index();
    // public System.Void .ctor()
    // Offset: 0x166E6E8
    // Implemented from: Facebook.WitAi.WitResponseReference
    // Base method: System.Void WitResponseReference::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayNodeReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::ArrayNodeReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayNodeReference*, creationType>()));
    }
    // public override System.String GetStringValue(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x166E564
    // Implemented from: Facebook.WitAi.WitResponseReference
    // Base method: System.String WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode response)
    ::StringW GetStringValue(::Facebook::WitAi::Lib::WitResponseNode* response);
    // public override System.Int32 GetIntValue(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x166E5E0
    // Implemented from: Facebook.WitAi.WitResponseReference
    // Base method: System.Int32 WitResponseReference::GetIntValue(Facebook.WitAi.Lib.WitResponseNode response)
    int GetIntValue(::Facebook::WitAi::Lib::WitResponseNode* response);
    // public override System.Single GetFloatValue(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x166E660
    // Implemented from: Facebook.WitAi.WitResponseReference
    // Base method: System.Single WitResponseReference::GetFloatValue(Facebook.WitAi.Lib.WitResponseNode response)
    float GetFloatValue(::Facebook::WitAi::Lib::WitResponseNode* response);
  }; // Facebook.WitAi.ArrayNodeReference
  #pragma pack(pop)
  static check_size<sizeof(ArrayNodeReference), 32 + sizeof(int)> __Facebook_WitAi_ArrayNodeReferenceSizeCheck;
  static_assert(sizeof(ArrayNodeReference) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::ArrayNodeReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::ArrayNodeReference::GetStringValue
// Il2CppName: GetStringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::ArrayNodeReference::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::ArrayNodeReference::GetStringValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::ArrayNodeReference*), "GetStringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::ArrayNodeReference::GetIntValue
// Il2CppName: GetIntValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Facebook::WitAi::ArrayNodeReference::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::ArrayNodeReference::GetIntValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::ArrayNodeReference*), "GetIntValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::ArrayNodeReference::GetFloatValue
// Il2CppName: GetFloatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Facebook::WitAi::ArrayNodeReference::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::ArrayNodeReference::GetFloatValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::ArrayNodeReference*), "GetFloatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
