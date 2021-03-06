// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2
#include "MS/Internal/Xml/Linq/ComponentModel/XPropertyDescriptor_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MS::Internal::Xml::Linq::ComponentModel
namespace MS::Internal::Xml::Linq::ComponentModel {
  // Forward declaring type: XDeferredSingleton`1<T>
  template<typename T>
  class XDeferredSingleton_1;
}
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XElement
  class XElement;
  // Forward declaring type: XAttribute
  class XAttribute;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.Linq.ComponentModel
namespace MS::Internal::Xml::Linq::ComponentModel {
  // Forward declaring type: XElementAttributePropertyDescriptor
  class XElementAttributePropertyDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor*, "MS.Internal.Xml.Linq.ComponentModel", "XElementAttributePropertyDescriptor");
// Type namespace: MS.Internal.Xml.Linq.ComponentModel
namespace MS::Internal::Xml::Linq::ComponentModel {
  // WARNING Size may be invalid!
  // Autogenerated type: MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class XElementAttributePropertyDescriptor : public ::MS::Internal::Xml::Linq::ComponentModel::XPropertyDescriptor_2<::System::Xml::Linq::XElement*, ::Il2CppObject*> {
    public:
    // Nested type: ::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c
    class $$c;
    public:
    // private MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute> value
    // Size: 0x8
    // Offset: 0x88
    ::MS::Internal::Xml::Linq::ComponentModel::XDeferredSingleton_1<::System::Xml::Linq::XAttribute*>* value;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::Linq::ComponentModel::XDeferredSingleton_1<::System::Xml::Linq::XAttribute*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::MS::Internal::Xml::Linq::ComponentModel::XDeferredSingleton_1<::System::Xml::Linq::XAttribute*>*
    constexpr operator ::MS::Internal::Xml::Linq::ComponentModel::XDeferredSingleton_1<::System::Xml::Linq::XAttribute*>*() const noexcept {
      return value;
    }
    // Get instance field reference: private MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute> value
    [[deprecated("Use field access instead!")]] ::MS::Internal::Xml::Linq::ComponentModel::XDeferredSingleton_1<::System::Xml::Linq::XAttribute*>*& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x185BCC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XElementAttributePropertyDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XElementAttributePropertyDescriptor*, creationType>()));
    }
    // public override System.Object GetValue(System.Object component)
    // Offset: 0x185BD24
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Object PropertyDescriptor::GetValue(System.Object component)
    ::Il2CppObject* GetValue(::Il2CppObject* component);
  }; // MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::*)(::Il2CppObject*)>(&MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::GetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
