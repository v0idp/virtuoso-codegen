// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: Component
  class Component;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::Component);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Component*, "System.ComponentModel", "Component");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Component
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 69C9B0
  // [ClassInterfaceAttribute] Offset: 69C9B0
  // [DesignerCategoryAttribute] Offset: 69C9B0
  class Component : public ::System::MarshalByRefObject {
    public:
    // Get static field: static private readonly System.Object EventDisposed
    static ::Il2CppObject* _get_EventDisposed();
    // Set static field: static private readonly System.Object EventDisposed
    static void _set_EventDisposed(::Il2CppObject* value);
    // protected System.Boolean get_CanRaiseEvents()
    // Offset: 0x10E2EA4
    bool get_CanRaiseEvents();
    // System.Boolean get_CanRaiseEventsInternal()
    // Offset: 0x10E2EAC
    bool get_CanRaiseEventsInternal();
    // static private System.Void .cctor()
    // Offset: 0x10E2EB8
    static void _cctor();
  }; // System.ComponentModel.Component
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Component::get_CanRaiseEvents
// Il2CppName: get_CanRaiseEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::get_CanRaiseEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "get_CanRaiseEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::get_CanRaiseEventsInternal
// Il2CppName: get_CanRaiseEventsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::get_CanRaiseEventsInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "get_CanRaiseEventsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::Component::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
