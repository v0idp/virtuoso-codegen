// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.WidgetHub
#include "VROSC/WidgetHub.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: WidgetController
  class WidgetController;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentHub
  class InstrumentHub;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InstrumentHub);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentHub*, "VROSC", "InstrumentHub");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InstrumentHub
  // [TokenAttribute] Offset: FFFFFFFF
  class InstrumentHub : public ::VROSC::WidgetHub {
    public:
    public:
    // private System.Single _spawnDistanceFromBoard
    // Size: 0x4
    // Offset: 0x28
    float spawnDistanceFromBoard;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _spawnDistanceFromController
    // Size: 0x4
    // Offset: 0x2C
    float spawnDistanceFromController;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x78B2D8
    // private System.Single _instrumentSizeMultiplier
    // Size: 0x4
    // Offset: 0x30
    float instrumentSizeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _gripSpawnHeightOffset
    // Size: 0x4
    // Offset: 0x34
    float gripSpawnHeightOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _spawnDistanceFromBoard
    [[deprecated("Use field access instead!")]] float& dyn__spawnDistanceFromBoard();
    // Get instance field reference: private System.Single _spawnDistanceFromController
    [[deprecated("Use field access instead!")]] float& dyn__spawnDistanceFromController();
    // Get instance field reference: private System.Single _instrumentSizeMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__instrumentSizeMultiplier();
    // Get instance field reference: private System.Single _gripSpawnHeightOffset
    [[deprecated("Use field access instead!")]] float& dyn__gripSpawnHeightOffset();
    // public System.Single get_InstrumentSizeMultiplier()
    // Offset: 0x1947A3C
    float get_InstrumentSizeMultiplier();
    // public System.Void Setup()
    // Offset: 0x1947A44
    void Setup();
    // public System.String GetInstrumentName(VROSC.WidgetSettings/VROSC.Identifier instrumentId)
    // Offset: 0x1948698
    ::StringW GetInstrumentName(::VROSC::WidgetSettings::Identifier instrumentId);
    // public System.Void .ctor()
    // Offset: 0x194875C
    // Implemented from: VROSC.WidgetHub
    // Base method: System.Void WidgetHub::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentHub* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InstrumentHub::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentHub*, creationType>()));
    }
    // protected override System.Void PlaceWidget(VROSC.WidgetController target, VROSC.InputDevice device, UnityEngine.Vector3 pressPos, System.Boolean gripping, System.Boolean userHasOpenedBefore)
    // Offset: 0x1947F60
    // Implemented from: VROSC.WidgetHub
    // Base method: System.Void WidgetHub::PlaceWidget(VROSC.WidgetController target, VROSC.InputDevice device, UnityEngine.Vector3 pressPos, System.Boolean gripping, System.Boolean userHasOpenedBefore)
    void PlaceWidget(::VROSC::WidgetController* target, ::VROSC::InputDevice* device, ::UnityEngine::Vector3 pressPos, bool gripping, bool userHasOpenedBefore);
  }; // VROSC.InstrumentHub
  #pragma pack(pop)
  static check_size<sizeof(InstrumentHub), 52 + sizeof(float)> __VROSC_InstrumentHubSizeCheck;
  static_assert(sizeof(InstrumentHub) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InstrumentHub::get_InstrumentSizeMultiplier
// Il2CppName: get_InstrumentSizeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InstrumentHub::*)()>(&VROSC::InstrumentHub::get_InstrumentSizeMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentHub*), "get_InstrumentSizeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentHub::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentHub::*)()>(&VROSC::InstrumentHub::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentHub*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentHub::GetInstrumentName
// Il2CppName: GetInstrumentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::InstrumentHub::*)(::VROSC::WidgetSettings::Identifier)>(&VROSC::InstrumentHub::GetInstrumentName)> {
  static const MethodInfo* get() {
    static auto* instrumentId = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetSettings/Identifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentHub*), "GetInstrumentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrumentId});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentHub::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::InstrumentHub::PlaceWidget
// Il2CppName: PlaceWidget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentHub::*)(::VROSC::WidgetController*, ::VROSC::InputDevice*, ::UnityEngine::Vector3, bool, bool)>(&VROSC::InstrumentHub::PlaceWidget)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetController")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* pressPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* gripping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* userHasOpenedBefore = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentHub*), "PlaceWidget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, device, pressPos, gripping, userHasOpenedBefore});
  }
};
