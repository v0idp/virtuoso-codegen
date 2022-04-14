// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIScrollableItem
  class UIScrollableItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIScrollableItem);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIScrollableItem*, "VROSC", "UIScrollableItem");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x2B
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIScrollableItem
  // [TokenAttribute] Offset: FFFFFFFF
  class UIScrollableItem : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x18
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <Index>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <IsActive>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool IsActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsHovering>k__BackingField
    // Size: 0x1
    // Offset: 0x29
    bool IsHovering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDisabled>k__BackingField
    // Size: 0x1
    // Offset: 0x2A
    bool IsDisabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _length
    [[deprecated]] float& dyn__length();
    // Get instance field reference: private System.Int32 <Index>k__BackingField
    [[deprecated]] int& dyn_$Index$k__BackingField();
    // Get instance field reference: private System.String <Value>k__BackingField
    [[deprecated]] ::StringW& dyn_$Value$k__BackingField();
    // Get instance field reference: private System.Boolean <IsActive>k__BackingField
    [[deprecated]] bool& dyn_$IsActive$k__BackingField();
    // Get instance field reference: private System.Boolean <IsHovering>k__BackingField
    [[deprecated]] bool& dyn_$IsHovering$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDisabled>k__BackingField
    [[deprecated]] bool& dyn_$IsDisabled$k__BackingField();
    // public System.Int32 get_Index()
    // Offset: 0x1915440
    int get_Index();
    // private System.Void set_Index(System.Int32 value)
    // Offset: 0x1915448
    void set_Index(int value);
    // public System.String get_Value()
    // Offset: 0x1915450
    ::StringW get_Value();
    // private System.Void set_Value(System.String value)
    // Offset: 0x1915458
    void set_Value(::StringW value);
    // public System.Single get_Length()
    // Offset: 0x1915460
    float get_Length();
    // public System.Boolean get_IsActive()
    // Offset: 0x1915468
    bool get_IsActive();
    // private System.Void set_IsActive(System.Boolean value)
    // Offset: 0x1915470
    void set_IsActive(bool value);
    // public System.Boolean get_IsHovering()
    // Offset: 0x191547C
    bool get_IsHovering();
    // private System.Void set_IsHovering(System.Boolean value)
    // Offset: 0x1915484
    void set_IsHovering(bool value);
    // public System.Boolean get_IsDisabled()
    // Offset: 0x1915490
    bool get_IsDisabled();
    // private System.Void set_IsDisabled(System.Boolean value)
    // Offset: 0x1915498
    void set_IsDisabled(bool value);
    // public System.Void Setup(System.Int32 index, System.String value)
    // Offset: 0x19154A4
    void Setup(int index, ::StringW value);
    // public System.Void SetHovering(System.Boolean hovering)
    // Offset: 0x19154B0
    void SetHovering(bool hovering);
    // public System.Void SetActive(System.Boolean active)
    // Offset: 0x19154C4
    void SetActive(bool active);
    // public System.Void SetDisabled(System.Boolean disabled)
    // Offset: 0x19154D8
    void SetDisabled(bool disabled);
    // protected System.Void UpdateColors()
    // Offset: 0x19154EC
    void UpdateColors();
    // public System.Void SetIndex(System.Int32 index)
    // Offset: 0x1914514
    void SetIndex(int index);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x19154F0
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x1915538
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIScrollableItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIScrollableItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIScrollableItem*, creationType>()));
    }
  }; // VROSC.UIScrollableItem
  #pragma pack(pop)
  static check_size<sizeof(UIScrollableItem), 42 + sizeof(bool)> __VROSC_UIScrollableItemSizeCheck;
  static_assert(sizeof(UIScrollableItem) == 0x2B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIScrollableItem::get_Index
// Il2CppName: get_Index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UIScrollableItem::*)()>(&VROSC::UIScrollableItem::get_Index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "get_Index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::set_Index
// Il2CppName: set_Index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(int)>(&VROSC::UIScrollableItem::set_Index)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "set_Index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::UIScrollableItem::*)()>(&VROSC::UIScrollableItem::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(::StringW)>(&VROSC::UIScrollableItem::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UIScrollableItem::*)()>(&VROSC::UIScrollableItem::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::get_IsActive
// Il2CppName: get_IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIScrollableItem::*)()>(&VROSC::UIScrollableItem::get_IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "get_IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::set_IsActive
// Il2CppName: set_IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(bool)>(&VROSC::UIScrollableItem::set_IsActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "set_IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::get_IsHovering
// Il2CppName: get_IsHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIScrollableItem::*)()>(&VROSC::UIScrollableItem::get_IsHovering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "get_IsHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::set_IsHovering
// Il2CppName: set_IsHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(bool)>(&VROSC::UIScrollableItem::set_IsHovering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "set_IsHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::get_IsDisabled
// Il2CppName: get_IsDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIScrollableItem::*)()>(&VROSC::UIScrollableItem::get_IsDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "get_IsDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::set_IsDisabled
// Il2CppName: set_IsDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(bool)>(&VROSC::UIScrollableItem::set_IsDisabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "set_IsDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(int, ::StringW)>(&VROSC::UIScrollableItem::Setup)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::SetHovering
// Il2CppName: SetHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(bool)>(&VROSC::UIScrollableItem::SetHovering)> {
  static const MethodInfo* get() {
    static auto* hovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "SetHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovering});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(bool)>(&VROSC::UIScrollableItem::SetActive)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::SetDisabled
// Il2CppName: SetDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(bool)>(&VROSC::UIScrollableItem::SetDisabled)> {
  static const MethodInfo* get() {
    static auto* disabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "SetDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabled});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::UpdateColors
// Il2CppName: UpdateColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)()>(&VROSC::UIScrollableItem::UpdateColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "UpdateColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::SetIndex
// Il2CppName: SetIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)(int)>(&VROSC::UIScrollableItem::SetIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "SetIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableItem::*)()>(&VROSC::UIScrollableItem::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableItem*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
