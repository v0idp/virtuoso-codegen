// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Forward declaring type: SoapMethodAttribute
  class SoapMethodAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapMethodAttribute*, "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapMethodAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 57C2CC
  // [ComVisibleAttribute] Offset: 57C2CC
  class SoapMethodAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
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
    // private System.String _responseElement
    // Size: 0x8
    // Offset: 0x28
    ::StringW responseElement;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _responseNamespace
    // Size: 0x8
    // Offset: 0x30
    ::StringW responseNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _returnElement
    // Size: 0x8
    // Offset: 0x38
    ::StringW returnElement;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _soapAction
    // Size: 0x8
    // Offset: 0x40
    ::StringW soapAction;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _useAttribute
    // Size: 0x1
    // Offset: 0x48
    bool useAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAttribute and: _namespace
    char __padding4[0x7] = {};
    // private System.String _namespace
    // Size: 0x8
    // Offset: 0x50
    ::StringW _namespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _responseElement
    ::StringW& dyn__responseElement();
    // Get instance field reference: private System.String _responseNamespace
    ::StringW& dyn__responseNamespace();
    // Get instance field reference: private System.String _returnElement
    ::StringW& dyn__returnElement();
    // Get instance field reference: private System.String _soapAction
    ::StringW& dyn__soapAction();
    // Get instance field reference: private System.Boolean _useAttribute
    bool& dyn__useAttribute();
    // Get instance field reference: private System.String _namespace
    ::StringW& dyn__namespace();
    // public override System.Boolean get_UseAttribute()
    // Offset: 0xF595FC
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Boolean SoapAttribute::get_UseAttribute()
    bool get_UseAttribute();
    // public override System.String get_XmlNamespace()
    // Offset: 0xF59604
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.String SoapAttribute::get_XmlNamespace()
    ::StringW get_XmlNamespace();
    // public System.Void .ctor()
    // Offset: 0xF595F4
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapMethodAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Metadata::SoapMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapMethodAttribute*, creationType>()));
    }
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0xF5960C
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(SoapMethodAttribute), 80 + sizeof(::StringW)> __System_Runtime_Remoting_Metadata_SoapMethodAttributeSizeCheck;
  static_assert(sizeof(SoapMethodAttribute) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute
// Il2CppName: get_UseAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapMethodAttribute*), "get_UseAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace
// Il2CppName: get_XmlNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapMethodAttribute*), "get_XmlNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject
// Il2CppName: SetReflectionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject)> {
  static const MethodInfo* get() {
    static auto* reflectionObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapMethodAttribute*), "SetReflectionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reflectionObject});
  }
};
