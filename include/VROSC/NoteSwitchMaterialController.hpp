// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoardNoteVisualController
#include "VROSC/NoteBoardNoteVisualController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteSwitchMaterialController
  class NoteSwitchMaterialController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteSwitchMaterialController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteSwitchMaterialController*, "VROSC", "NoteSwitchMaterialController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteSwitchMaterialController
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteSwitchMaterialController : public ::VROSC::NoteBoardNoteVisualController {
    public:
    public:
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Material _restingOctaveMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* restingOctaveMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _restingOddMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* restingOddMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _restingEvenMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* restingEvenMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _playingMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* playingMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _restingMaterial
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Material* restingMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.Material _restingOctaveMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn__restingOctaveMaterial();
    // Get instance field reference: private UnityEngine.Material _restingOddMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn__restingOddMaterial();
    // Get instance field reference: private UnityEngine.Material _restingEvenMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn__restingEvenMaterial();
    // Get instance field reference: private UnityEngine.Material _playingMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn__playingMaterial();
    // Get instance field reference: private UnityEngine.Material _restingMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn__restingMaterial();
    // public System.Void .ctor()
    // Offset: 0xC5AE9C
    // Implemented from: VROSC.NoteBoardNoteVisualController
    // Base method: System.Void NoteBoardNoteVisualController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteSwitchMaterialController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteSwitchMaterialController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteSwitchMaterialController*, creationType>()));
    }
    // public override System.Void Setup(VROSC.NoteBoardNote noteField, System.Boolean octave, System.Boolean isOdd)
    // Offset: 0xC5AE30
    // Implemented from: VROSC.NoteBoardNoteVisualController
    // Base method: System.Void NoteBoardNoteVisualController::Setup(VROSC.NoteBoardNote noteField, System.Boolean octave, System.Boolean isOdd)
    void Setup(::VROSC::NoteBoardNote* noteField, bool octave, bool isOdd);
    // public override System.Void SetPlaying(System.Boolean isPlaying)
    // Offset: 0xC5AE68
    // Implemented from: VROSC.NoteBoardNoteVisualController
    // Base method: System.Void NoteBoardNoteVisualController::SetPlaying(System.Boolean isPlaying)
    void SetPlaying(bool isPlaying);
  }; // VROSC.NoteSwitchMaterialController
  #pragma pack(pop)
  static check_size<sizeof(NoteSwitchMaterialController), 72 + sizeof(::UnityEngine::Material*)> __VROSC_NoteSwitchMaterialControllerSizeCheck;
  static_assert(sizeof(NoteSwitchMaterialController) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteSwitchMaterialController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteSwitchMaterialController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteSwitchMaterialController::*)(::VROSC::NoteBoardNote*, bool, bool)>(&VROSC::NoteSwitchMaterialController::Setup)> {
  static const MethodInfo* get() {
    static auto* noteField = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote")->byval_arg;
    static auto* octave = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isOdd = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteSwitchMaterialController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteField, octave, isOdd});
  }
};
// Writing MetadataGetter for method: VROSC::NoteSwitchMaterialController::SetPlaying
// Il2CppName: SetPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteSwitchMaterialController::*)(bool)>(&VROSC::NoteSwitchMaterialController::SetPlaying)> {
  static const MethodInfo* get() {
    static auto* isPlaying = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteSwitchMaterialController*), "SetPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isPlaying});
  }
};
