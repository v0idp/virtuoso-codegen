// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UI.UIColorGetter
#include "VROSC/UI/UIColorGetter.hpp"
// Including type: TMPro.FontStyles
#include "TMPro/FontStyles.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: UITextSetting
  class UITextSetting;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UITextSetting);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UITextSetting*, "VROSC.UI", "UITextSetting");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.UITextSetting
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 66B0AC
  class UITextSetting : public ::VROSC::UI::UIColorGetter {
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
    // private TMPro.TMP_FontAsset _font
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TMP_FontAsset* font;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_FontAsset*) == 0x8);
    // private TMPro.FontStyles _style
    // Size: 0x14
    // Offset: 0x30
    ::TMPro::FontStyles style;
    // Field size check
    static_assert(sizeof(::TMPro::FontStyles) == 0x14);
    // private System.Boolean _autoSize
    // Size: 0x1
    // Offset: 0x34
    bool autoSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoSize and: size
    char __padding2[0x3] = {};
    // private System.Single _size
    // Size: 0x4
    // Offset: 0x38
    float size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: size and: minMaxSize
    char __padding3[0x4] = {};
    // private VROSC.MinMaxFloat _minMaxSize
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::MinMaxFloat* minMaxSize;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // public System.Action OnTextChange
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* OnTextChange;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TMP_FontAsset _font
    ::TMPro::TMP_FontAsset*& dyn__font();
    // Get instance field reference: private TMPro.FontStyles _style
    ::TMPro::FontStyles& dyn__style();
    // Get instance field reference: private System.Boolean _autoSize
    bool& dyn__autoSize();
    // Get instance field reference: private System.Single _size
    float& dyn__size();
    // Get instance field reference: private VROSC.MinMaxFloat _minMaxSize
    ::VROSC::MinMaxFloat*& dyn__minMaxSize();
    // Get instance field reference: public System.Action OnTextChange
    ::System::Action*& dyn_OnTextChange();
    // public TMPro.TMP_FontAsset get_Font()
    // Offset: 0x13A5664
    ::TMPro::TMP_FontAsset* get_Font();
    // public TMPro.FontStyles get_Style()
    // Offset: 0x13A566C
    ::TMPro::FontStyles get_Style();
    // public System.Boolean get_AutoSize()
    // Offset: 0x13A5674
    bool get_AutoSize();
    // public System.Single get_Size()
    // Offset: 0x13A567C
    float get_Size();
    // public VROSC.MinMaxFloat get_MinMaxSize()
    // Offset: 0x13A5684
    ::VROSC::MinMaxFloat* get_MinMaxSize();
    // public System.Void .ctor()
    // Offset: 0x13A568C
    // Implemented from: VROSC.UI.UIColorGetter
    // Base method: System.Void UIColorGetter::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UITextSetting* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UITextSetting::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UITextSetting*, creationType>()));
    }
  }; // VROSC.UI.UITextSetting
  #pragma pack(pop)
  static check_size<sizeof(UITextSetting), 72 + sizeof(::System::Action*)> __VROSC_UI_UITextSettingSizeCheck;
  static_assert(sizeof(UITextSetting) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UITextSetting::get_Font
// Il2CppName: get_Font
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset* (VROSC::UI::UITextSetting::*)()>(&VROSC::UI::UITextSetting::get_Font)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextSetting*), "get_Font", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextSetting::get_Style
// Il2CppName: get_Style
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::FontStyles (VROSC::UI::UITextSetting::*)()>(&VROSC::UI::UITextSetting::get_Style)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextSetting*), "get_Style", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextSetting::get_AutoSize
// Il2CppName: get_AutoSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UI::UITextSetting::*)()>(&VROSC::UI::UITextSetting::get_AutoSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextSetting*), "get_AutoSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextSetting::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UI::UITextSetting::*)()>(&VROSC::UI::UITextSetting::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextSetting*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextSetting::get_MinMaxSize
// Il2CppName: get_MinMaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxFloat* (VROSC::UI::UITextSetting::*)()>(&VROSC::UI::UITextSetting::get_MinMaxSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextSetting*), "get_MinMaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextSetting::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
