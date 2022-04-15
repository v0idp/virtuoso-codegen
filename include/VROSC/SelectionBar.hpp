// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UIScrollableContainer
#include "VROSC/UIScrollableContainer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SelectionBar
  class SelectionBar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SelectionBar);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SelectionBar*, "VROSC", "SelectionBar");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SelectionBar
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectionBar : public ::VROSC::UIScrollableContainer {
    public:
    // Writing base type padding for base size: 0x69 to desired offset: 0x70
    char ___base_padding[0x7] = {};
    public:
    // [HeaderAttribute] Offset: 0x788F44
    // private System.String[] _values
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::StringW> values;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: private System.String[] _values
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__values();
    // private System.Void Awake()
    // Offset: 0x1981998
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x19819B4
    // Implemented from: VROSC.UIScrollableContainer
    // Base method: System.Void UIScrollableContainer::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectionBar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SelectionBar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectionBar*, creationType>()));
    }
  }; // VROSC.SelectionBar
  #pragma pack(pop)
  static check_size<sizeof(SelectionBar), 112 + sizeof(::ArrayW<::StringW>)> __VROSC_SelectionBarSizeCheck;
  static_assert(sizeof(SelectionBar) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SelectionBar::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SelectionBar::*)()>(&VROSC::SelectionBar::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SelectionBar*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SelectionBar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
