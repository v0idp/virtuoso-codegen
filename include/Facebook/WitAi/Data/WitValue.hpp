// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi
namespace Facebook::WitAi {
  // Forward declaring type: WitResponseReference
  class WitResponseReference;
}
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Data
namespace Facebook::WitAi::Data {
  // Forward declaring type: WitValue
  class WitValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Data::WitValue);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::WitValue*, "Facebook.WitAi.Data", "WitValue");
// Type namespace: Facebook.WitAi.Data
namespace Facebook::WitAi::Data {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Data.WitValue
  // [TokenAttribute] Offset: FFFFFFFF
  class WitValue : public ::UnityEngine::ScriptableObject {
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
    // public System.String path
    // Size: 0x8
    // Offset: 0x18
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Facebook.WitAi.WitResponseReference reference
    // Size: 0x8
    // Offset: 0x20
    ::Facebook::WitAi::WitResponseReference* reference;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::WitResponseReference*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String path
    ::StringW& dyn_path();
    // Get instance field reference: private Facebook.WitAi.WitResponseReference reference
    ::Facebook::WitAi::WitResponseReference*& dyn_reference();
    // public Facebook.WitAi.WitResponseReference get_Reference()
    // Offset: 0x10F9C38
    ::Facebook::WitAi::WitResponseReference* get_Reference();
    // public System.Object GetValue(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetValue(::Facebook::WitAi::Lib::WitResponseNode* response);
    // public System.Boolean Equals(Facebook.WitAi.Lib.WitResponseNode response, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Facebook::WitAi::Lib::WitResponseNode* response, ::Il2CppObject* value);
    // public System.String ToString(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x1106E44
    ::StringW ToString(::Facebook::WitAi::Lib::WitResponseNode* response);
    // protected System.Void .ctor()
    // Offset: 0x10FEA08
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Data::WitValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitValue*, creationType>()));
    }
  }; // Facebook.WitAi.Data.WitValue
  #pragma pack(pop)
  static check_size<sizeof(WitValue), 32 + sizeof(::Facebook::WitAi::WitResponseReference*)> __Facebook_WitAi_Data_WitValueSizeCheck;
  static_assert(sizeof(WitValue) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitValue::get_Reference
// Il2CppName: get_Reference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::WitResponseReference* (Facebook::WitAi::Data::WitValue::*)()>(&Facebook::WitAi::Data::WitValue::get_Reference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::WitValue*), "get_Reference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitValue::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Facebook::WitAi::Data::WitValue::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Data::WitValue::GetValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::WitValue*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Data::WitValue::*)(::Facebook::WitAi::Lib::WitResponseNode*, ::Il2CppObject*)>(&Facebook::WitAi::Data::WitValue::Equals)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::WitValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response, value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Data::WitValue::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Data::WitValue::ToString)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::WitValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::WitValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
