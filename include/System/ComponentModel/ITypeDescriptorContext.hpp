// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IServiceProvider
#include "System/IServiceProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IContainer
  class IContainer;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ITypeDescriptorContext);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ITypeDescriptorContext*, "System.ComponentModel", "ITypeDescriptorContext");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ITypeDescriptorContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 69CDC4
  class ITypeDescriptorContext/*, public ::System::IServiceProvider*/ {
    public:
    // Creating interface conversion operator: operator ::System::IServiceProvider
    operator ::System::IServiceProvider() noexcept {
      return *reinterpret_cast<::System::IServiceProvider*>(this);
    }
    // public System.ComponentModel.IContainer get_Container()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::IContainer* get_Container();
  }; // System.ComponentModel.ITypeDescriptorContext
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ITypeDescriptorContext::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IContainer* (System::ComponentModel::ITypeDescriptorContext::*)()>(&System::ComponentModel::ITypeDescriptorContext::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ITypeDescriptorContext*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};