// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
#include "MS/Internal/Xml/Linq/ComponentModel/XElementAttributePropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XElement
  class XElement;
  // Forward declaring type: XName
  class XName;
  // Forward declaring type: XAttribute
  class XAttribute;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c*, "MS.Internal.Xml.Linq.ComponentModel", "XElementAttributePropertyDescriptor/<>c");
// Type namespace: MS.Internal.Xml.Linq.ComponentModel
namespace MS::Internal::Xml::Linq::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/MS.Internal.Xml.Linq.ComponentModel.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class XElementAttributePropertyDescriptor::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/MS.Internal.Xml.Linq.ComponentModel.<>c <>9
    static ::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c* _get_$$9();
    // Set static field: static public readonly MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/MS.Internal.Xml.Linq.ComponentModel.<>c <>9
    static void _set_$$9(::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c* value);
    // Get static field: static public System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XAttribute> <>9__3_0
    static ::System::Func_3<::System::Xml::Linq::XElement*, ::System::Xml::Linq::XName*, ::System::Xml::Linq::XAttribute*>* _get_$$9__3_0();
    // Set static field: static public System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XAttribute> <>9__3_0
    static void _set_$$9__3_0(::System::Func_3<::System::Xml::Linq::XElement*, ::System::Xml::Linq::XName*, ::System::Xml::Linq::XAttribute*>* value);
    // static private System.Void .cctor()
    // Offset: 0x185E9C8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x185EA28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XElementAttributePropertyDescriptor::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XElementAttributePropertyDescriptor::$$c*, creationType>()));
    }
    // System.Xml.Linq.XAttribute <GetValue>b__3_0(System.Xml.Linq.XElement e, System.Xml.Linq.XName n)
    // Offset: 0x185EA30
    ::System::Xml::Linq::XAttribute* $GetValue$b__3_0(::System::Xml::Linq::XElement* e, ::System::Xml::Linq::XName* n);
  }; // MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/MS.Internal.Xml.Linq.ComponentModel.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c::$GetValue$b__3_0
// Il2CppName: <GetValue>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XAttribute* (MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c::*)(::System::Xml::Linq::XElement*, ::System::Xml::Linq::XName*)>(&MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c::$GetValue$b__3_0)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XElement")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor::$$c*), "<GetValue>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, n});
  }
};
