// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Dropdown::$$c__DisplayClass62_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown::$$c__DisplayClass62_0*, "UnityEngine.UI", "Dropdown/<>c__DisplayClass62_0");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Dropdown/UnityEngine.UI.<>c__DisplayClass62_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Dropdown::$$c__DisplayClass62_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.UI.Dropdown/UnityEngine.UI.DropdownItem item
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UI::Dropdown::DropdownItem* item;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Dropdown::DropdownItem*) == 0x8);
    // public UnityEngine.UI.Dropdown <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Dropdown* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Dropdown*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.UI.Dropdown/UnityEngine.UI.DropdownItem item
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Dropdown::DropdownItem*& dyn_item();
    // Get instance field reference: public UnityEngine.UI.Dropdown <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Dropdown*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x16D7DCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::$$c__DisplayClass62_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::$$c__DisplayClass62_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::$$c__DisplayClass62_0*, creationType>()));
    }
    // System.Void <Show>b__0(System.Boolean x)
    // Offset: 0x16D7DD4
    void $Show$b__0(bool x);
  }; // UnityEngine.UI.Dropdown/UnityEngine.UI.<>c__DisplayClass62_0
  #pragma pack(pop)
  static check_size<sizeof(Dropdown::$$c__DisplayClass62_0), 24 + sizeof(::UnityEngine::UI::Dropdown*)> __UnityEngine_UI_Dropdown_$$c__DisplayClass62_0SizeCheck;
  static_assert(sizeof(Dropdown::$$c__DisplayClass62_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$$c__DisplayClass62_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$$c__DisplayClass62_0::$Show$b__0
// Il2CppName: <Show>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::$$c__DisplayClass62_0::*)(bool)>(&UnityEngine::UI::Dropdown::$$c__DisplayClass62_0::$Show$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$$c__DisplayClass62_0*), "<Show>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
