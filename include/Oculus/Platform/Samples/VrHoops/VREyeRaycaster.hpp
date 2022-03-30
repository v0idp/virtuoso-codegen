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
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: VREyeRaycaster
  class VREyeRaycaster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::VREyeRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::VREyeRaycaster*, "Oculus.Platform.Samples.VrHoops", "VREyeRaycaster");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.VREyeRaycaster
  // [TokenAttribute] Offset: FFFFFFFF
  class VREyeRaycaster : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.EventSystems.EventSystem m_eventSystem
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::EventSystems::EventSystem* m_eventSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::EventSystem*) == 0x8);
    // private UnityEngine.UI.Button m_currentButton
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* m_currentButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.EventSystems.EventSystem m_eventSystem
    ::UnityEngine::EventSystems::EventSystem*& dyn_m_eventSystem();
    // Get instance field reference: private UnityEngine.UI.Button m_currentButton
    ::UnityEngine::UI::Button*& dyn_m_currentButton();
    // private System.Void Update()
    // Offset: 0x1151778
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1151980
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VREyeRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::VREyeRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VREyeRaycaster*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.VREyeRaycaster
  #pragma pack(pop)
  static check_size<sizeof(VREyeRaycaster), 32 + sizeof(::UnityEngine::UI::Button*)> __Oculus_Platform_Samples_VrHoops_VREyeRaycasterSizeCheck;
  static_assert(sizeof(VREyeRaycaster) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::VREyeRaycaster::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::VREyeRaycaster::*)()>(&Oculus::Platform::Samples::VrHoops::VREyeRaycaster::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::VREyeRaycaster*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::VREyeRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
