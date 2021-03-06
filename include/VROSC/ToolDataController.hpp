// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.BaseDataController
#include "VROSC/BaseDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TransformDataController
  class TransformDataController;
  // Forward declaring type: WidgetSettings
  class WidgetSettings;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ToolDataController
  class ToolDataController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ToolDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToolDataController*, "VROSC", "ToolDataController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ToolDataController
  // [TokenAttribute] Offset: FFFFFFFF
  class ToolDataController : public ::VROSC::BaseDataController {
    public:
    // public System.Boolean get_IsOpen()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsOpen();
    // public System.Void set_IsOpen(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_IsOpen(bool value);
    // public System.Boolean get_HasBeenOpened()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_HasBeenOpened();
    // public System.Void set_HasBeenOpened(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_HasBeenOpened(bool value);
    // public VROSC.TransformDataController get_TransformData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::VROSC::TransformDataController* get_TransformData();
    // public System.Void ApplyDefaults(VROSC.WidgetSettings widgetDefaultSettings)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ApplyDefaults(::VROSC::WidgetSettings* widgetDefaultSettings);
    // protected System.Void .ctor()
    // Offset: 0xA224E4
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Void BaseDataController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToolDataController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ToolDataController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToolDataController*, creationType>()));
    }
  }; // VROSC.ToolDataController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ToolDataController::get_IsOpen
// Il2CppName: get_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::ToolDataController::*)()>(&VROSC::ToolDataController::get_IsOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolDataController*), "get_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ToolDataController::set_IsOpen
// Il2CppName: set_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolDataController::*)(bool)>(&VROSC::ToolDataController::set_IsOpen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolDataController*), "set_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::ToolDataController::get_HasBeenOpened
// Il2CppName: get_HasBeenOpened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::ToolDataController::*)()>(&VROSC::ToolDataController::get_HasBeenOpened)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolDataController*), "get_HasBeenOpened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ToolDataController::set_HasBeenOpened
// Il2CppName: set_HasBeenOpened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolDataController::*)(bool)>(&VROSC::ToolDataController::set_HasBeenOpened)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolDataController*), "set_HasBeenOpened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::ToolDataController::get_TransformData
// Il2CppName: get_TransformData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformDataController* (VROSC::ToolDataController::*)()>(&VROSC::ToolDataController::get_TransformData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolDataController*), "get_TransformData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ToolDataController::ApplyDefaults
// Il2CppName: ApplyDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToolDataController::*)(::VROSC::WidgetSettings*)>(&VROSC::ToolDataController::ApplyDefaults)> {
  static const MethodInfo* get() {
    static auto* widgetDefaultSettings = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToolDataController*), "ApplyDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{widgetDefaultSettings});
  }
};
// Writing MetadataGetter for method: VROSC::ToolDataController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
