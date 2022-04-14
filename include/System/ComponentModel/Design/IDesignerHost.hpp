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
// Forward declaring namespace: System::ComponentModel::Design
namespace System::ComponentModel::Design {
  // Forward declaring type: IDesigner
  class IDesigner;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComponent
  class IComponent;
}
// Completed forward declares
// Type namespace: System.ComponentModel.Design
namespace System::ComponentModel::Design {
  // Forward declaring type: IDesignerHost
  class IDesignerHost;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::Design::IDesignerHost);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IDesignerHost*, "System.ComponentModel.Design", "IDesignerHost");
// Type namespace: System.ComponentModel.Design
namespace System::ComponentModel::Design {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Design.IDesignerHost
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 69D0A4
  class IDesignerHost/*, public ::System::IServiceProvider*/ {
    public:
    // Creating interface conversion operator: operator ::System::IServiceProvider
    operator ::System::IServiceProvider() noexcept {
      return *reinterpret_cast<::System::IServiceProvider*>(this);
    }
    // public System.ComponentModel.Design.IDesigner GetDesigner(System.ComponentModel.IComponent component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::Design::IDesigner* GetDesigner(::System::ComponentModel::IComponent* component);
  }; // System.ComponentModel.Design.IDesignerHost
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Design::IDesignerHost::GetDesigner
// Il2CppName: GetDesigner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::Design::IDesigner* (System::ComponentModel::Design::IDesignerHost::*)(::System::ComponentModel::IComponent*)>(&System::ComponentModel::Design::IDesignerHost::GetDesigner)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "IComponent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::IDesignerHost*), "GetDesigner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};