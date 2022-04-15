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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XElement
  class XElement;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.Linq.ComponentModel
namespace MS::Internal::Xml::Linq::ComponentModel {
  // Forward declaring type: XElementValuePropertyDescriptor
  class XElementValuePropertyDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor*, "MS.Internal.Xml.Linq.ComponentModel", "XElementValuePropertyDescriptor");
// Type namespace: MS.Internal.Xml.Linq.ComponentModel
namespace MS::Internal::Xml::Linq::ComponentModel {
  // WARNING Size may be invalid!
  // Autogenerated type: MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class XElementValuePropertyDescriptor : public ::MS::Internal::Xml::Linq::ComponentModel::XPropertyDescriptor_2<::System::Xml::Linq::XElement*, ::StringW> {
    public:
    public:
    // private System.Xml.Linq.XElement element
    // Size: 0x8
    // Offset: 0x88
    ::System::Xml::Linq::XElement* element;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XElement*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Xml::Linq::XElement*
    constexpr operator ::System::Xml::Linq::XElement*() const noexcept {
      return element;
    }
    // Get instance field reference: private System.Xml.Linq.XElement element
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XElement*& dyn_element();
    // public System.Void .ctor()
    // Offset: 0x185C4F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XElementValuePropertyDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XElementValuePropertyDescriptor*, creationType>()));
    }
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x185C554
    // Implemented from: MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2
    // Base method: System.Boolean XPropertyDescriptor_2::get_IsReadOnly()
    bool get_IsReadOnly();
    // public override System.Object GetValue(System.Object component)
    // Offset: 0x185C55C
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Object PropertyDescriptor::GetValue(System.Object component)
    ::Il2CppObject* GetValue(::Il2CppObject* component);
    // public override System.Void SetValue(System.Object component, System.Object value)
    // Offset: 0x185C618
    // Implemented from: MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2
    // Base method: System.Void XPropertyDescriptor_2::SetValue(System.Object component, System.Object value)
    void SetValue(::Il2CppObject* component, ::Il2CppObject* value);
  }; // MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::*)()>(&MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::*)(::Il2CppObject*)>(&MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::GetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::*)(::Il2CppObject*, ::Il2CppObject*)>(&MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor::SetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, value});
  }
};
