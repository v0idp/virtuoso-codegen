// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.WidgetController
#include "VROSC/WidgetController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ToolDataController
  class ToolDataController;
  // Forward declaring type: ToolSettings
  class ToolSettings;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
  // Forward declaring type: TransformMover
  class TransformMover;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ToolController
  class ToolController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ToolController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToolController*, "VROSC", "ToolController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ToolController
  // [TokenAttribute] Offset: FFFFFFFF
  class ToolController : public ::VROSC::WidgetController {
    public:
    public:
    // protected VROSC.ToolDataController _dataController
    // Size: 0x8
    // Offset: 0x68
    ::VROSC::ToolDataController* dataController;
    // Field size check
    static_assert(sizeof(::VROSC::ToolDataController*) == 0x8);
    public:
    // Get instance field reference: protected VROSC.ToolDataController _dataController
    [[deprecated]] ::VROSC::ToolDataController*& dyn__dataController();
    // public VROSC.ToolSettings get_ToolSettings()
    // Offset: 0xA287D8
    ::VROSC::ToolSettings* get_ToolSettings();
    // public System.Void Setup()
    // Offset: 0xA28854
    void Setup();
    // protected System.Void SynthesizerSourceChanged(System.Boolean useMidi)
    // Offset: 0xA28DBC
    void SynthesizerSourceChanged(bool useMidi);
    // public System.Void .ctor()
    // Offset: 0xA222A4
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToolController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ToolController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToolController*, creationType>()));
    }
    // protected System.Void OnDestroy()
    // Offset: 0xA28938
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::OnDestroy()
    void OnDestroy();
    // protected override System.Void UserDataLoaded(VROSC.UserDataControllers user)
    // Offset: 0xA22054
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::UserDataLoaded(VROSC.UserDataControllers user)
    void UserDataLoaded(::VROSC::UserDataControllers* user);
    // public override System.Void Toggle()
    // Offset: 0xA28B14
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::Toggle()
    void Toggle();
    // public override System.Void TransformChanged(VROSC.TransformMover mover)
    // Offset: 0xA28B84
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::TransformChanged(VROSC.TransformMover mover)
    void TransformChanged(::VROSC::TransformMover* mover);
  }; // VROSC.ToolController
  #pragma pack(pop)
  static check_size<sizeof(ToolController), 104 + sizeof(::VROSC::ToolDataController*)> __VROSC_ToolControllerSizeCheck;
  static_assert(sizeof(ToolController) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ToolController::get_ToolSettings
// Il2CppName: get_ToolSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::ToolSettings* (VROSC::ToolController::*)()>(&VROSC::ToolController::get_ToolSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolController*), "get_ToolSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ToolController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolController::*)()>(&VROSC::ToolController::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ToolController::SynthesizerSourceChanged
// Il2CppName: SynthesizerSourceChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolController::*)(bool)>(&VROSC::ToolController::SynthesizerSourceChanged)> {
  static const MethodInfo* get() {
    static auto* useMidi = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolController*), "SynthesizerSourceChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useMidi});
  }
};
// Writing MetadataGetter for method: VROSC::ToolController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ToolController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolController::*)()>(&VROSC::ToolController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ToolController::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolController::*)(::VROSC::UserDataControllers*)>(&VROSC::ToolController::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolController*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
// Writing MetadataGetter for method: VROSC::ToolController::Toggle
// Il2CppName: Toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolController::*)()>(&VROSC::ToolController::Toggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolController*), "Toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ToolController::TransformChanged
// Il2CppName: TransformChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolController::*)(::VROSC::TransformMover*)>(&VROSC::ToolController::TransformChanged)> {
  static const MethodInfo* get() {
    static auto* mover = &::il2cpp_utils::GetClassFromName("VROSC", "TransformMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolController*), "TransformChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mover});
  }
};
