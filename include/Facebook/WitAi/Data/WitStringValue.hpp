// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Data.WitValue
#include "Facebook/WitAi/Data/WitValue.hpp"
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
// Type namespace: Facebook.WitAi.Data
namespace Facebook::WitAi::Data {
  // Forward declaring type: WitStringValue
  class WitStringValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Data::WitStringValue);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::WitStringValue*, "Facebook.WitAi.Data", "WitStringValue");
// Type namespace: Facebook.WitAi.Data
namespace Facebook::WitAi::Data {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Data.WitStringValue
  // [TokenAttribute] Offset: FFFFFFFF
  class WitStringValue : public ::Facebook::WitAi::Data::WitValue {
    public:
    // public System.String GetStringValue(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x1106AE0
    ::StringW GetStringValue(::Facebook::WitAi::Lib::WitResponseNode* response);
    // public System.Void .ctor()
    // Offset: 0x1106BF4
    // Implemented from: Facebook.WitAi.Data.WitValue
    // Base method: System.Void WitValue::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitStringValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Data::WitStringValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitStringValue*, creationType>()));
    }
    // public override System.Object GetValue(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x1106ADC
    // Implemented from: Facebook.WitAi.Data.WitValue
    // Base method: System.Object WitValue::GetValue(Facebook.WitAi.Lib.WitResponseNode response)
    ::Il2CppObject* GetValue(::Facebook::WitAi::Lib::WitResponseNode* response);
    // public override System.Boolean Equals(Facebook.WitAi.Lib.WitResponseNode response, System.Object value)
    // Offset: 0x1106B28
    // Implemented from: Facebook.WitAi.Data.WitValue
    // Base method: System.Boolean WitValue::Equals(Facebook.WitAi.Lib.WitResponseNode response, System.Object value)
    bool Equals(::Facebook::WitAi::Lib::WitResponseNode* response, ::Il2CppObject* value);
  }; // Facebook.WitAi.Data.WitStringValue
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitStringValue::GetStringValue
// Il2CppName: GetStringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Data::WitStringValue::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Data::WitStringValue::GetStringValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::WitStringValue*), "GetStringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitStringValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitStringValue::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Facebook::WitAi::Data::WitStringValue::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Data::WitStringValue::GetValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::WitStringValue*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitStringValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Data::WitStringValue::*)(::Facebook::WitAi::Lib::WitResponseNode*, ::Il2CppObject*)>(&Facebook::WitAi::Data::WitStringValue::Equals)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::WitStringValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response, value});
  }
};
