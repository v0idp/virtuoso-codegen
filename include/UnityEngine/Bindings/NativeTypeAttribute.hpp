// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Bindings.CodegenOptions
#include "UnityEngine/Bindings/CodegenOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: NativeTypeAttribute
  class NativeTypeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::NativeTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeTypeAttribute*, "UnityEngine.Bindings", "NativeTypeAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeTypeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 5BA590
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class NativeTypeAttribute : public ::System::Attribute {
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
    // [DebuggerBrowsableAttribute] Offset: 0x5BAC14
    // private System.String <Header>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Header;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x5BAC50
    // private System.String <IntermediateScriptingStructName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW IntermediateScriptingStructName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x5BAC8C
    // private UnityEngine.Bindings.CodegenOptions <CodegenOptions>k__BackingField
    // Size: 0x14
    // Offset: 0x20
    ::UnityEngine::Bindings::CodegenOptions CodegenOptions;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bindings::CodegenOptions) == 0x14);
    public:
    // Get instance field reference: private System.String <Header>k__BackingField
    ::StringW& dyn_$Header$k__BackingField();
    // Get instance field reference: private System.String <IntermediateScriptingStructName>k__BackingField
    ::StringW& dyn_$IntermediateScriptingStructName$k__BackingField();
    // Get instance field reference: private UnityEngine.Bindings.CodegenOptions <CodegenOptions>k__BackingField
    ::UnityEngine::Bindings::CodegenOptions& dyn_$CodegenOptions$k__BackingField();
    // public System.Void set_Header(System.String value)
    // Offset: 0x12FA2B4
    void set_Header(::StringW value);
    // public System.Void set_IntermediateScriptingStructName(System.String value)
    // Offset: 0x12FA2BC
    void set_IntermediateScriptingStructName(::StringW value);
    // public System.Void set_CodegenOptions(UnityEngine.Bindings.CodegenOptions value)
    // Offset: 0x12FA2C4
    void set_CodegenOptions(::UnityEngine::Bindings::CodegenOptions value);
    // public System.Void .ctor(UnityEngine.Bindings.CodegenOptions codegenOptions)
    // Offset: 0x12FA2F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeTypeAttribute* New_ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeTypeAttribute*, creationType>(codegenOptions)));
    }
    // public System.Void .ctor(System.String header)
    // Offset: 0x12FA320
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeTypeAttribute* New_ctor(::StringW header) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeTypeAttribute*, creationType>(header)));
    }
    // public System.Void .ctor(UnityEngine.Bindings.CodegenOptions codegenOptions, System.String intermediateStructName)
    // Offset: 0x12FA42C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeTypeAttribute* New_ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions, ::StringW intermediateStructName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeTypeAttribute*, creationType>(codegenOptions, intermediateStructName)));
    }
    // public System.Void .ctor()
    // Offset: 0x12FA2CC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeTypeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeTypeAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.NativeTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeTypeAttribute), 32 + sizeof(::UnityEngine::Bindings::CodegenOptions)> __UnityEngine_Bindings_NativeTypeAttributeSizeCheck;
  static_assert(sizeof(NativeTypeAttribute) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::set_Header
// Il2CppName: set_Header
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeTypeAttribute::*)(::StringW)>(&UnityEngine::Bindings::NativeTypeAttribute::set_Header)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeTypeAttribute*), "set_Header", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::set_IntermediateScriptingStructName
// Il2CppName: set_IntermediateScriptingStructName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeTypeAttribute::*)(::StringW)>(&UnityEngine::Bindings::NativeTypeAttribute::set_IntermediateScriptingStructName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeTypeAttribute*), "set_IntermediateScriptingStructName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::set_CodegenOptions
// Il2CppName: set_CodegenOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeTypeAttribute::*)(::UnityEngine::Bindings::CodegenOptions)>(&UnityEngine::Bindings::NativeTypeAttribute::set_CodegenOptions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Bindings", "CodegenOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeTypeAttribute*), "set_CodegenOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
