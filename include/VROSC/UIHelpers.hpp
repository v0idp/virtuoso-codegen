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
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UISliderHelper
  class UISliderHelper;
  // Forward declaring type: UISpinnerHelper
  class UISpinnerHelper;
  // Forward declaring type: UIColorPickerHelper
  class UIColorPickerHelper;
  // Forward declaring type: UIHelperInfoIcon
  class UIHelperInfoIcon;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIHelpers
  class UIHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIHelpers);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIHelpers*, "VROSC", "UIHelpers");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class UIHelpers : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean _useHelpers
    // Size: 0x1
    // Offset: 0x18
    bool useHelpers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useHelpers and: sliderHelper
    char __padding0[0x7] = {};
    // private VROSC.UISliderHelper _sliderHelper
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UISliderHelper* sliderHelper;
    // Field size check
    static_assert(sizeof(::VROSC::UISliderHelper*) == 0x8);
    // private VROSC.UISpinnerHelper _spinnerHelper
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UISpinnerHelper* spinnerHelper;
    // Field size check
    static_assert(sizeof(::VROSC::UISpinnerHelper*) == 0x8);
    // private VROSC.UIColorPickerHelper _colorPickerHelper
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::UIColorPickerHelper* colorPickerHelper;
    // Field size check
    static_assert(sizeof(::VROSC::UIColorPickerHelper*) == 0x8);
    // private VROSC.UIHelperInfoIcon _infoIcon
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIHelperInfoIcon* infoIcon;
    // Field size check
    static_assert(sizeof(::VROSC::UIHelperInfoIcon*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _useHelpers
    [[deprecated("Use field access instead!")]] bool& dyn__useHelpers();
    // Get instance field reference: private VROSC.UISliderHelper _sliderHelper
    [[deprecated("Use field access instead!")]] ::VROSC::UISliderHelper*& dyn__sliderHelper();
    // Get instance field reference: private VROSC.UISpinnerHelper _spinnerHelper
    [[deprecated("Use field access instead!")]] ::VROSC::UISpinnerHelper*& dyn__spinnerHelper();
    // Get instance field reference: private VROSC.UIColorPickerHelper _colorPickerHelper
    [[deprecated("Use field access instead!")]] ::VROSC::UIColorPickerHelper*& dyn__colorPickerHelper();
    // Get instance field reference: private VROSC.UIHelperInfoIcon _infoIcon
    [[deprecated("Use field access instead!")]] ::VROSC::UIHelperInfoIcon*& dyn__infoIcon();
    // public System.Boolean get_UseHelpers()
    // Offset: 0x190FB84
    bool get_UseHelpers();
    // public VROSC.UISliderHelper get_UISliderHelper()
    // Offset: 0x190FB8C
    ::VROSC::UISliderHelper* get_UISliderHelper();
    // public VROSC.UISpinnerHelper get_SpinnerHelper()
    // Offset: 0x190FB94
    ::VROSC::UISpinnerHelper* get_SpinnerHelper();
    // public VROSC.UIColorPickerHelper get_ColorPickerHelper()
    // Offset: 0x190FB9C
    ::VROSC::UIColorPickerHelper* get_ColorPickerHelper();
    // public VROSC.UIHelperInfoIcon get_InfoIcon()
    // Offset: 0x190FBA4
    ::VROSC::UIHelperInfoIcon* get_InfoIcon();
    // public System.Void .ctor()
    // Offset: 0x190FBAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIHelpers*, creationType>()));
    }
  }; // VROSC.UIHelpers
  #pragma pack(pop)
  static check_size<sizeof(UIHelpers), 56 + sizeof(::VROSC::UIHelperInfoIcon*)> __VROSC_UIHelpersSizeCheck;
  static_assert(sizeof(UIHelpers) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIHelpers::get_UseHelpers
// Il2CppName: get_UseHelpers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIHelpers::*)()>(&VROSC::UIHelpers::get_UseHelpers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelpers*), "get_UseHelpers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelpers::get_UISliderHelper
// Il2CppName: get_UISliderHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UISliderHelper* (VROSC::UIHelpers::*)()>(&VROSC::UIHelpers::get_UISliderHelper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelpers*), "get_UISliderHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelpers::get_SpinnerHelper
// Il2CppName: get_SpinnerHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UISpinnerHelper* (VROSC::UIHelpers::*)()>(&VROSC::UIHelpers::get_SpinnerHelper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelpers*), "get_SpinnerHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelpers::get_ColorPickerHelper
// Il2CppName: get_ColorPickerHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIColorPickerHelper* (VROSC::UIHelpers::*)()>(&VROSC::UIHelpers::get_ColorPickerHelper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelpers*), "get_ColorPickerHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelpers::get_InfoIcon
// Il2CppName: get_InfoIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIHelperInfoIcon* (VROSC::UIHelpers::*)()>(&VROSC::UIHelpers::get_InfoIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelpers*), "get_InfoIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelpers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
