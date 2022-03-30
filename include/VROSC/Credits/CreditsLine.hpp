// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Credits.CreditsObject
#include "VROSC/Credits/CreditsObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: VROSC::Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsNameData
  class CreditsNameData;
}
// Completed forward declares
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsLine
  class CreditsLine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Credits::CreditsLine);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsLine*, "VROSC.Credits", "CreditsLine");
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Credits.CreditsLine
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsLine : public ::VROSC::Credits::CreditsObject {
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
    // private TMPro.TextMeshPro _name
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshPro* name;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private TMPro.TextMeshPro _title
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshPro* title;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private TMPro.TextMeshPro _singleLine
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TextMeshPro* singleLine;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Color _nameColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color nameColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _titleColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color titleColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _singleLineColor
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color singleLineColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _isSingleLine
    // Size: 0x1
    // Offset: 0x68
    bool isSingleLine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private TMPro.TextMeshPro _name
    ::TMPro::TextMeshPro*& dyn__name();
    // Get instance field reference: private TMPro.TextMeshPro _title
    ::TMPro::TextMeshPro*& dyn__title();
    // Get instance field reference: private TMPro.TextMeshPro _singleLine
    ::TMPro::TextMeshPro*& dyn__singleLine();
    // Get instance field reference: private UnityEngine.Color _nameColor
    ::UnityEngine::Color& dyn__nameColor();
    // Get instance field reference: private UnityEngine.Color _titleColor
    ::UnityEngine::Color& dyn__titleColor();
    // Get instance field reference: private UnityEngine.Color _singleLineColor
    ::UnityEngine::Color& dyn__singleLineColor();
    // Get instance field reference: private System.Boolean _isSingleLine
    bool& dyn__isSingleLine();
    // private System.Void Awake()
    // Offset: 0x133B9CC
    void Awake();
    // public System.Void Setup(System.String text)
    // Offset: 0x133BA4C
    void Setup(::StringW text);
    // public System.Void Setup(VROSC.Credits.CreditsNameData data)
    // Offset: 0x133BAEC
    void Setup(::VROSC::Credits::CreditsNameData* data);
    // private System.Void SetupSingleLine(System.String text)
    // Offset: 0x133BA50
    void SetupSingleLine(::StringW text);
    // private System.Void SetupNameTitle(System.String name, System.String title)
    // Offset: 0x133BB40
    void SetupNameTitle(::StringW name, ::StringW title);
    // public System.Void .ctor()
    // Offset: 0x133BCC0
    // Implemented from: VROSC.Credits.CreditsObject
    // Base method: System.Void CreditsObject::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsLine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Credits::CreditsLine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsLine*, creationType>()));
    }
    // protected override System.Void UpdateVisibility(System.Single visible)
    // Offset: 0x133BBF8
    // Implemented from: VROSC.Credits.CreditsObject
    // Base method: System.Void CreditsObject::UpdateVisibility(System.Single visible)
    void UpdateVisibility(float visible);
  }; // VROSC.Credits.CreditsLine
  #pragma pack(pop)
  static check_size<sizeof(CreditsLine), 104 + sizeof(bool)> __VROSC_Credits_CreditsLineSizeCheck;
  static_assert(sizeof(CreditsLine) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Credits::CreditsLine::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsLine::*)()>(&VROSC::Credits::CreditsLine::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsLine*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsLine::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsLine::*)(::StringW)>(&VROSC::Credits::CreditsLine::Setup)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsLine*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsLine::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsLine::*)(::VROSC::Credits::CreditsNameData*)>(&VROSC::Credits::CreditsLine::Setup)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC.Credits", "CreditsNameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsLine*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsLine::SetupSingleLine
// Il2CppName: SetupSingleLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsLine::*)(::StringW)>(&VROSC::Credits::CreditsLine::SetupSingleLine)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsLine*), "SetupSingleLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsLine::SetupNameTitle
// Il2CppName: SetupNameTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsLine::*)(::StringW, ::StringW)>(&VROSC::Credits::CreditsLine::SetupNameTitle)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsLine*), "SetupNameTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, title});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsLine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::Credits::CreditsLine::UpdateVisibility
// Il2CppName: UpdateVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsLine::*)(float)>(&VROSC::Credits::CreditsLine::UpdateVisibility)> {
  static const MethodInfo* get() {
    static auto* visible = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsLine*), "UpdateVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visible});
  }
};