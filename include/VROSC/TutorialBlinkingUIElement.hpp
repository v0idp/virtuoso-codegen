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
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIInteractableColoring
  class UIInteractableColoring;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialVisualBlinking
  class TutorialVisualBlinking;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialBlinkingUIElement
  class TutorialBlinkingUIElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TutorialBlinkingUIElement);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialBlinkingUIElement*, "VROSC", "TutorialBlinkingUIElement");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TutorialBlinkingUIElement
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialBlinkingUIElement : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.UI.UIInteractableColoring _target
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UI::UIInteractableColoring* target;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIInteractableColoring*) == 0x8);
    // private System.Boolean _isSetup
    // Size: 0x1
    // Offset: 0x20
    bool isSetup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSetup and: Blinking
    char __padding1[0x7] = {};
    // private readonly VROSC.TutorialVisualBlinking <Blinking>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::TutorialVisualBlinking* Blinking;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialVisualBlinking*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UI.UIInteractableColoring _target
    [[deprecated("Use field access instead!")]] ::VROSC::UI::UIInteractableColoring*& dyn__target();
    // Get instance field reference: private System.Boolean _isSetup
    [[deprecated("Use field access instead!")]] bool& dyn__isSetup();
    // Get instance field reference: private readonly VROSC.TutorialVisualBlinking <Blinking>k__BackingField
    [[deprecated("Use field access instead!")]] ::VROSC::TutorialVisualBlinking*& dyn_$Blinking$k__BackingField();
    // public VROSC.TutorialVisualBlinking get_Blinking()
    // Offset: 0xA2E7B4
    ::VROSC::TutorialVisualBlinking* get_Blinking();
    // public System.Void .ctor()
    // Offset: 0xA2EA8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialBlinkingUIElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TutorialBlinkingUIElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialBlinkingUIElement*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0xA2E7BC
    void Start();
    // public System.Void Setup()
    // Offset: 0xA2E7CC
    void Setup();
    // private UnityEngine.Color GetNormalColor()
    // Offset: 0xA2E8B4
    ::UnityEngine::Color GetNormalColor();
    // private UnityEngine.Color GetCurrentColor()
    // Offset: 0xA2E8D0
    ::UnityEngine::Color GetCurrentColor();
    // private System.Void OnEnable()
    // Offset: 0xA2E8F0
    void OnEnable();
    // private System.Void Update()
    // Offset: 0xA2E910
    void Update();
    // private System.Void TestOn()
    // Offset: 0xA2E980
    void TestOn();
    // private System.Void TestOff()
    // Offset: 0xA2E9E0
    void TestOff();
  }; // VROSC.TutorialBlinkingUIElement
  #pragma pack(pop)
  static check_size<sizeof(TutorialBlinkingUIElement), 40 + sizeof(::VROSC::TutorialVisualBlinking*)> __VROSC_TutorialBlinkingUIElementSizeCheck;
  static_assert(sizeof(TutorialBlinkingUIElement) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::get_Blinking
// Il2CppName: get_Blinking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TutorialVisualBlinking* (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::get_Blinking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "get_Blinking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::GetNormalColor
// Il2CppName: GetNormalColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::GetNormalColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "GetNormalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::GetCurrentColor
// Il2CppName: GetCurrentColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::GetCurrentColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "GetCurrentColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::TestOn
// Il2CppName: TestOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::TestOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "TestOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialBlinkingUIElement::TestOff
// Il2CppName: TestOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialBlinkingUIElement::*)()>(&VROSC::TutorialBlinkingUIElement::TestOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialBlinkingUIElement*), "TestOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
