// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.ComponentModel.CollectionChangeAction
#include "System/ComponentModel/CollectionChangeAction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CollectionChangeEventArgs
  class CollectionChangeEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::CollectionChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CollectionChangeEventArgs*, "System.ComponentModel", "CollectionChangeEventArgs");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.CollectionChangeEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class CollectionChangeEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.ComponentModel.CollectionChangeAction action
    // Size: 0x4
    // Offset: 0x10
    ::System::ComponentModel::CollectionChangeAction action;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::CollectionChangeAction) == 0x4);
    // Padding between fields: action and: element
    char __padding0[0x4] = {};
    // private System.Object element
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* element;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.ComponentModel.CollectionChangeAction action
    [[deprecated]] ::System::ComponentModel::CollectionChangeAction& dyn_action();
    // Get instance field reference: private System.Object element
    [[deprecated]] ::Il2CppObject*& dyn_element();
    // public System.ComponentModel.CollectionChangeAction get_Action()
    // Offset: 0x10E2264
    ::System::ComponentModel::CollectionChangeAction get_Action();
    // public System.Object get_Element()
    // Offset: 0x10E226C
    ::Il2CppObject* get_Element();
    // public System.Void .ctor(System.ComponentModel.CollectionChangeAction action, System.Object element)
    // Offset: 0x10E21E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionChangeEventArgs* New_ctor(::System::ComponentModel::CollectionChangeAction action, ::Il2CppObject* element) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::CollectionChangeEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionChangeEventArgs*, creationType>(action, element)));
    }
  }; // System.ComponentModel.CollectionChangeEventArgs
  #pragma pack(pop)
  static check_size<sizeof(CollectionChangeEventArgs), 24 + sizeof(::Il2CppObject*)> __System_ComponentModel_CollectionChangeEventArgsSizeCheck;
  static_assert(sizeof(CollectionChangeEventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::CollectionChangeEventArgs::get_Action
// Il2CppName: get_Action
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CollectionChangeAction (System::ComponentModel::CollectionChangeEventArgs::*)()>(&System::ComponentModel::CollectionChangeEventArgs::get_Action)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CollectionChangeEventArgs*), "get_Action", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CollectionChangeEventArgs::get_Element
// Il2CppName: get_Element
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::CollectionChangeEventArgs::*)()>(&System::ComponentModel::CollectionChangeEventArgs::get_Element)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CollectionChangeEventArgs*), "get_Element", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CollectionChangeEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!