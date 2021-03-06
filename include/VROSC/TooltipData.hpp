// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.HighlightControllerComponents/VROSC.Component
#include "VROSC/HighlightControllerComponents_Component.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: IconData
  class IconData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TooltipData
  class TooltipData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TooltipData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TooltipData*, "VROSC", "TooltipData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TooltipData
  // [TokenAttribute] Offset: FFFFFFFF
  class TooltipData : public ::Il2CppObject {
    public:
    public:
    // private System.String _text
    // Size: 0x8
    // Offset: 0x10
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private VROSC.HighlightControllerComponents/VROSC.Component _component
    // Size: 0x4
    // Offset: 0x18
    ::VROSC::HighlightControllerComponents::Component component;
    // Field size check
    static_assert(sizeof(::VROSC::HighlightControllerComponents::Component) == 0x4);
    // Padding between fields: component and: iconData
    char __padding1[0x4] = {};
    // private VROSC.UI.IconData _iconData
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UI::IconData* iconData;
    // Field size check
    static_assert(sizeof(::VROSC::UI::IconData*) == 0x8);
    public:
    // Get instance field reference: private System.String _text
    [[deprecated("Use field access instead!")]] ::StringW& dyn__text();
    // Get instance field reference: private VROSC.HighlightControllerComponents/VROSC.Component _component
    [[deprecated("Use field access instead!")]] ::VROSC::HighlightControllerComponents::Component& dyn__component();
    // Get instance field reference: private VROSC.UI.IconData _iconData
    [[deprecated("Use field access instead!")]] ::VROSC::UI::IconData*& dyn__iconData();
    // public System.String get_Text()
    // Offset: 0xA28DC8
    ::StringW get_Text();
    // public VROSC.HighlightControllerComponents/VROSC.Component get_Component()
    // Offset: 0xA28DD0
    ::VROSC::HighlightControllerComponents::Component get_Component();
    // public VROSC.UI.IconData get_IconData()
    // Offset: 0xA28DD8
    ::VROSC::UI::IconData* get_IconData();
    // public System.Void .ctor(VROSC.HighlightControllerComponents/VROSC.Component component, System.String text)
    // Offset: 0xA21FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TooltipData* New_ctor(::VROSC::HighlightControllerComponents::Component component, ::StringW text) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TooltipData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TooltipData*, creationType>(component, text)));
    }
    // public System.Void .ctor(VROSC.HighlightControllerComponents/VROSC.Component component, System.String text, VROSC.UI.IconData iconData)
    // Offset: 0xA28DE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TooltipData* New_ctor(::VROSC::HighlightControllerComponents::Component component, ::StringW text, ::VROSC::UI::IconData* iconData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TooltipData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TooltipData*, creationType>(component, text, iconData)));
    }
  }; // VROSC.TooltipData
  #pragma pack(pop)
  static check_size<sizeof(TooltipData), 32 + sizeof(::VROSC::UI::IconData*)> __VROSC_TooltipDataSizeCheck;
  static_assert(sizeof(TooltipData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TooltipData::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::TooltipData::*)()>(&VROSC::TooltipData::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TooltipData*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TooltipData::get_Component
// Il2CppName: get_Component
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HighlightControllerComponents::Component (VROSC::TooltipData::*)()>(&VROSC::TooltipData::get_Component)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TooltipData*), "get_Component", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TooltipData::get_IconData
// Il2CppName: get_IconData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::IconData* (VROSC::TooltipData::*)()>(&VROSC::TooltipData::get_IconData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TooltipData*), "get_IconData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TooltipData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::TooltipData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
