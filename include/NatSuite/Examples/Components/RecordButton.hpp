// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NatSuite::Examples::Components
namespace NatSuite::Examples::Components {
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: NatSuite.Examples.Components
namespace NatSuite::Examples::Components {
  // Forward declaring type: RecordButton
  class RecordButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Examples::Components::RecordButton);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::Components::RecordButton*, "NatSuite.Examples.Components", "RecordButton");
// Type namespace: NatSuite.Examples.Components
namespace NatSuite::Examples::Components {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Examples.Components.RecordButton
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 66BD34
  class RecordButton : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerDownHandler, public ::UnityEngine::EventSystems::IPointerUpHandler*/ {
    public:
    // Nested type: ::NatSuite::Examples::Components::RecordButton::$Countdown$d__10
    class $Countdown$d__10;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.UI.Image button
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Image* button;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // public UnityEngine.UI.Image countdown
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Image* countdown;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // public UnityEngine.Events.UnityEvent onTouchDown
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Events::UnityEvent* onTouchDown;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent onTouchUp
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Events::UnityEvent* onTouchUp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private System.Boolean pressed
    // Size: 0x1
    // Offset: 0x38
    bool pressed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerDownHandler
    operator ::UnityEngine::EventSystems::IPointerDownHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerUpHandler
    operator ::UnityEngine::EventSystems::IPointerUpHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single MaxRecordingTime
    static constexpr const float MaxRecordingTime = 10;
    // Get static field: static private System.Single MaxRecordingTime
    static float _get_MaxRecordingTime();
    // Set static field: static private System.Single MaxRecordingTime
    static void _set_MaxRecordingTime(float value);
    // Get instance field reference: public UnityEngine.UI.Image button
    ::UnityEngine::UI::Image*& dyn_button();
    // Get instance field reference: public UnityEngine.UI.Image countdown
    ::UnityEngine::UI::Image*& dyn_countdown();
    // Get instance field reference: public UnityEngine.Events.UnityEvent onTouchDown
    ::UnityEngine::Events::UnityEvent*& dyn_onTouchDown();
    // Get instance field reference: public UnityEngine.Events.UnityEvent onTouchUp
    ::UnityEngine::Events::UnityEvent*& dyn_onTouchUp();
    // Get instance field reference: private System.Boolean pressed
    bool& dyn_pressed();
    // private System.Void Start()
    // Offset: 0x998804
    void Start();
    // private System.Void Reset()
    // Offset: 0x998808
    void Reset();
    // private System.Void UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x9988E4
    void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x99897C
    void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Collections.IEnumerator Countdown()
    // Offset: 0x998910
    ::System::Collections::IEnumerator* Countdown();
    // public System.Void .ctor()
    // Offset: 0x998984
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Examples::Components::RecordButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordButton*, creationType>()));
    }
  }; // NatSuite.Examples.Components.RecordButton
  #pragma pack(pop)
  static check_size<sizeof(RecordButton), 56 + sizeof(bool)> __NatSuite_Examples_Components_RecordButtonSizeCheck;
  static_assert(sizeof(RecordButton) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Examples::Components::RecordButton::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Examples::Components::RecordButton::*)()>(&NatSuite::Examples::Components::RecordButton::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Examples::Components::RecordButton*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Examples::Components::RecordButton::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Examples::Components::RecordButton::*)()>(&NatSuite::Examples::Components::RecordButton::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Examples::Components::RecordButton*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Examples::Components::RecordButton::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown
// Il2CppName: UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Examples::Components::RecordButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&NatSuite::Examples::Components::RecordButton::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Examples::Components::RecordButton*), "UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: NatSuite::Examples::Components::RecordButton::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp
// Il2CppName: UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Examples::Components::RecordButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&NatSuite::Examples::Components::RecordButton::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Examples::Components::RecordButton*), "UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: NatSuite::Examples::Components::RecordButton::Countdown
// Il2CppName: Countdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (NatSuite::Examples::Components::RecordButton::*)()>(&NatSuite::Examples::Components::RecordButton::Countdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Examples::Components::RecordButton*), "Countdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Examples::Components::RecordButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
