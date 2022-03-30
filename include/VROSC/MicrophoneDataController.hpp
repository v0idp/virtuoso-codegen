// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ToolDataController
#include "VROSC/ToolDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MicrophoneSettings
  class MicrophoneSettings;
  // Forward declaring type: MicrophoneDataModel
  class MicrophoneDataModel;
  // Forward declaring type: WidgetSettings
  class WidgetSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MicrophoneDataController
  class MicrophoneDataController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MicrophoneDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneDataController*, "VROSC", "MicrophoneDataController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MicrophoneDataController
  // [TokenAttribute] Offset: FFFFFFFF
  class MicrophoneDataController : public ::VROSC::ToolDataController {
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
    // private VROSC.MicrophoneSettings _microphoneDefaultSettings
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::MicrophoneSettings* microphoneDefaultSettings;
    // Field size check
    static_assert(sizeof(::VROSC::MicrophoneSettings*) == 0x8);
    public:
    // Creating conversion operator: operator ::VROSC::MicrophoneSettings*
    constexpr operator ::VROSC::MicrophoneSettings*() const noexcept {
      return microphoneDefaultSettings;
    }
    // Get static field: static public System.Action`1<VROSC.MicrophoneDataController> OnDataLoaded
    static ::System::Action_1<::VROSC::MicrophoneDataController*>* _get_OnDataLoaded();
    // Set static field: static public System.Action`1<VROSC.MicrophoneDataController> OnDataLoaded
    static void _set_OnDataLoaded(::System::Action_1<::VROSC::MicrophoneDataController*>* value);
    // Get instance field reference: private VROSC.MicrophoneSettings _microphoneDefaultSettings
    ::VROSC::MicrophoneSettings*& dyn__microphoneDefaultSettings();
    // private VROSC.MicrophoneDataModel get_MicrophoneDataModel()
    // Offset: 0x8B22F8
    ::VROSC::MicrophoneDataModel* get_MicrophoneDataModel();
    // public System.Boolean get_MicrophoneIsAttached()
    // Offset: 0x8B1FCC
    bool get_MicrophoneIsAttached();
    // public System.Void set_MicrophoneIsAttached(System.Boolean value)
    // Offset: 0x8AFE34
    void set_MicrophoneIsAttached(bool value);
    // public UnityEngine.Vector3 get_MicrophonePosition()
    // Offset: 0x8B1FEC
    ::UnityEngine::Vector3 get_MicrophonePosition();
    // public UnityEngine.Quaternion get_MicrophoneRotation()
    // Offset: 0x8B208C
    ::UnityEngine::Quaternion get_MicrophoneRotation();
    // public UnityEngine.Vector3 get_MicrophoneScale()
    // Offset: 0x8B217C
    ::UnityEngine::Vector3 get_MicrophoneScale();
    // public System.Single get_PreampVolume()
    // Offset: 0x8B1F8C
    float get_PreampVolume();
    // public System.Void set_PreampVolume(System.Single value)
    // Offset: 0x8B1598
    void set_PreampVolume(float value);
    // public System.Single get_PreampReverb()
    // Offset: 0x8B1FAC
    float get_PreampReverb();
    // public System.Void set_PreampReverb(System.Single value)
    // Offset: 0x8B1678
    void set_PreampReverb(float value);
    // public System.Single get_MaxVolume()
    // Offset: 0x8B157C
    float get_MaxVolume();
    // public System.Single get_MaxReverb()
    // Offset: 0x8B1640
    float get_MaxReverb();
    // public System.Boolean get_UseProximity()
    // Offset: 0x8B28A4
    bool get_UseProximity();
    // public System.Void set_UseProximity(System.Boolean value)
    // Offset: 0x8B2868
    void set_UseProximity(bool value);
    // public System.Void SetMicrophoneTransformData(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale)
    // Offset: 0x8AFF8C
    void SetMicrophoneTransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale);
    // public override System.Boolean get_IsOpen()
    // Offset: 0x8B24B0
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Boolean ToolDataController::get_IsOpen()
    bool get_IsOpen();
    // public override System.Void set_IsOpen(System.Boolean value)
    // Offset: 0x8B24D8
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::set_IsOpen(System.Boolean value)
    void set_IsOpen(bool value);
    // public override UnityEngine.Vector3 get_Position()
    // Offset: 0x8B251C
    // Implemented from: VROSC.ToolDataController
    // Base method: UnityEngine.Vector3 ToolDataController::get_Position()
    ::UnityEngine::Vector3 get_Position();
    // public override System.Void set_Position(UnityEngine.Vector3 value)
    // Offset: 0x8B2544
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::set_Position(UnityEngine.Vector3 value)
    void set_Position(::UnityEngine::Vector3 value);
    // public override UnityEngine.Quaternion get_Rotation()
    // Offset: 0x8B25AC
    // Implemented from: VROSC.ToolDataController
    // Base method: UnityEngine.Quaternion ToolDataController::get_Rotation()
    ::UnityEngine::Quaternion get_Rotation();
    // public override System.Void set_Rotation(UnityEngine.Quaternion value)
    // Offset: 0x8B25D4
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::set_Rotation(UnityEngine.Quaternion value)
    void set_Rotation(::UnityEngine::Quaternion value);
    // public override UnityEngine.Vector3 get_Scale()
    // Offset: 0x8B2644
    // Implemented from: VROSC.ToolDataController
    // Base method: UnityEngine.Vector3 ToolDataController::get_Scale()
    ::UnityEngine::Vector3 get_Scale();
    // public override System.Void set_Scale(UnityEngine.Vector3 value)
    // Offset: 0x8B266C
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::set_Scale(UnityEngine.Vector3 value)
    void set_Scale(::UnityEngine::Vector3 value);
    // public System.Void .ctor()
    // Offset: 0x8B2374
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::.ctor()
    // Base method: System.Void BaseDataController::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MicrophoneDataController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MicrophoneDataController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MicrophoneDataController*, creationType>()));
    }
    // public override System.Void ApplyDefaults(VROSC.WidgetSettings widgetDefaultSettings)
    // Offset: 0x8B26D4
    // Implemented from: VROSC.ToolDataController
    // Base method: System.Void ToolDataController::ApplyDefaults(VROSC.WidgetSettings widgetDefaultSettings)
    void ApplyDefaults(::VROSC::WidgetSettings* widgetDefaultSettings);
  }; // VROSC.MicrophoneDataController
  #pragma pack(pop)
  static check_size<sizeof(MicrophoneDataController), 40 + sizeof(::VROSC::MicrophoneSettings*)> __VROSC_MicrophoneDataControllerSizeCheck;
  static_assert(sizeof(MicrophoneDataController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_MicrophoneDataModel
// Il2CppName: get_MicrophoneDataModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MicrophoneDataModel* (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_MicrophoneDataModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_MicrophoneDataModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_MicrophoneIsAttached
// Il2CppName: get_MicrophoneIsAttached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_MicrophoneIsAttached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_MicrophoneIsAttached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::set_MicrophoneIsAttached
// Il2CppName: set_MicrophoneIsAttached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(bool)>(&VROSC::MicrophoneDataController::set_MicrophoneIsAttached)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "set_MicrophoneIsAttached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_MicrophonePosition
// Il2CppName: get_MicrophonePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_MicrophonePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_MicrophonePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_MicrophoneRotation
// Il2CppName: get_MicrophoneRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_MicrophoneRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_MicrophoneRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_MicrophoneScale
// Il2CppName: get_MicrophoneScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_MicrophoneScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_MicrophoneScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_PreampVolume
// Il2CppName: get_PreampVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_PreampVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_PreampVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::set_PreampVolume
// Il2CppName: set_PreampVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(float)>(&VROSC::MicrophoneDataController::set_PreampVolume)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "set_PreampVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_PreampReverb
// Il2CppName: get_PreampReverb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_PreampReverb)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_PreampReverb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::set_PreampReverb
// Il2CppName: set_PreampReverb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(float)>(&VROSC::MicrophoneDataController::set_PreampReverb)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "set_PreampReverb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_MaxVolume
// Il2CppName: get_MaxVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_MaxVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_MaxVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_MaxReverb
// Il2CppName: get_MaxReverb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_MaxReverb)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_MaxReverb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_UseProximity
// Il2CppName: get_UseProximity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_UseProximity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_UseProximity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::set_UseProximity
// Il2CppName: set_UseProximity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(bool)>(&VROSC::MicrophoneDataController::set_UseProximity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "set_UseProximity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::SetMicrophoneTransformData
// Il2CppName: SetMicrophoneTransformData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&VROSC::MicrophoneDataController::SetMicrophoneTransformData)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "SetMicrophoneTransformData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation, scale});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_IsOpen
// Il2CppName: get_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_IsOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::set_IsOpen
// Il2CppName: set_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(bool)>(&VROSC::MicrophoneDataController::set_IsOpen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "set_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(::UnityEngine::Vector3)>(&VROSC::MicrophoneDataController::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::set_Rotation
// Il2CppName: set_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(::UnityEngine::Quaternion)>(&VROSC::MicrophoneDataController::set_Rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "set_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::get_Scale
// Il2CppName: get_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::MicrophoneDataController::*)()>(&VROSC::MicrophoneDataController::get_Scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "get_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::set_Scale
// Il2CppName: set_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(::UnityEngine::Vector3)>(&VROSC::MicrophoneDataController::set_Scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "set_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::MicrophoneDataController::ApplyDefaults
// Il2CppName: ApplyDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneDataController::*)(::VROSC::WidgetSettings*)>(&VROSC::MicrophoneDataController::ApplyDefaults)> {
  static const MethodInfo* get() {
    static auto* widgetDefaultSettings = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneDataController*), "ApplyDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{widgetDefaultSettings});
  }
};