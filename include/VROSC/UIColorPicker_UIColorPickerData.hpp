// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UIColorPicker
#include "VROSC/UIColorPicker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIColorPicker::UIColorPickerData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPicker::UIColorPickerData*, "VROSC", "UIColorPicker/UIColorPickerData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIColorPicker/VROSC.UIColorPickerData
  // [TokenAttribute] Offset: FFFFFFFF
  class UIColorPicker::UIColorPickerData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _displayName
    // Size: 0x8
    // Offset: 0x10
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return displayName;
    }
    // Get instance field reference: private System.String _displayName
    ::StringW& dyn__displayName();
    // public System.String get_DisplayName()
    // Offset: 0x140DFDC
    ::StringW get_DisplayName();
    // public System.Void SetDisplayName(System.String displayName)
    // Offset: 0x140DFE4
    void SetDisplayName(::StringW displayName);
    // public System.Void .ctor()
    // Offset: 0x140DFEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIColorPicker::UIColorPickerData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIColorPicker::UIColorPickerData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIColorPicker::UIColorPickerData*, creationType>()));
    }
  }; // VROSC.UIColorPicker/VROSC.UIColorPickerData
  #pragma pack(pop)
  static check_size<sizeof(UIColorPicker::UIColorPickerData), 16 + sizeof(::StringW)> __VROSC_UIColorPicker_UIColorPickerDataSizeCheck;
  static_assert(sizeof(UIColorPicker::UIColorPickerData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIColorPicker::UIColorPickerData::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::UIColorPicker::UIColorPickerData::*)()>(&VROSC::UIColorPicker::UIColorPickerData::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker::UIColorPickerData*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::UIColorPickerData::SetDisplayName
// Il2CppName: SetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::UIColorPickerData::*)(::StringW)>(&VROSC::UIColorPicker::UIColorPickerData::SetDisplayName)> {
  static const MethodInfo* get() {
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker::UIColorPickerData*), "SetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{displayName});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::UIColorPickerData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!