// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptionProvider
#include "System/ComponentModel/TypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ICustomTypeDescriptor
  class ICustomTypeDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.Linq.ComponentModel
namespace MS::Internal::Xml::Linq::ComponentModel {
  // Forward declaring type: XTypeDescriptionProvider`1<T>
  template<typename T>
  class XTypeDescriptionProvider_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::MS::Internal::Xml::Linq::ComponentModel::XTypeDescriptionProvider_1, "MS.Internal.Xml.Linq.ComponentModel", "XTypeDescriptionProvider`1");
// Type namespace: MS.Internal.Xml.Linq.ComponentModel
namespace MS::Internal::Xml::Linq::ComponentModel {
  // WARNING Size may be invalid!
  // Autogenerated type: MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class XTypeDescriptionProvider_1 : public ::System::ComponentModel::TypeDescriptionProvider {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XTypeDescriptionProvider_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::Linq::ComponentModel::XTypeDescriptionProvider_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XTypeDescriptionProvider_1<T>*, creationType>()));
    }
    // public override System.ComponentModel.ICustomTypeDescriptor GetTypeDescriptor(System.Type type, System.Object instance)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.ICustomTypeDescriptor TypeDescriptionProvider::GetTypeDescriptor(System.Type type, System.Object instance)
    ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* type, ::Il2CppObject* instance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::Linq::ComponentModel::XTypeDescriptionProvider_1::GetTypeDescriptor");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::ComponentModel::TypeDescriptionProvider*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal__method, type, instance);
    }
  }; // MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1
  // Could not write size check! Type: MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
