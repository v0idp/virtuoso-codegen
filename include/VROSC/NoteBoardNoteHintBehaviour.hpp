// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNoteHintBehaviour
  class NoteBoardNoteHintBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardNoteHintBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteHintBehaviour*, "VROSC", "NoteBoardNoteHintBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardNoteHintBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardNoteHintBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
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
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _materialBlock
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MaterialPropertyBlock* materialBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // [RangeAttribute] Offset: 0x673828
    // public System.Single Playing
    // Size: 0x4
    // Offset: 0x20
    float Playing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [ColorUsageAttribute] Offset: 0x673840
    // public UnityEngine.Color UnPlayedColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color UnPlayedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x673858
    // public UnityEngine.Color PlayedColor
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Color PlayedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.Renderer _renderer
    ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _materialBlock
    ::UnityEngine::MaterialPropertyBlock*& dyn__materialBlock();
    // Get instance field reference: public System.Single Playing
    float& dyn_Playing();
    // Get instance field reference: public UnityEngine.Color UnPlayedColor
    ::UnityEngine::Color& dyn_UnPlayedColor();
    // Get instance field reference: public UnityEngine.Color PlayedColor
    ::UnityEngine::Color& dyn_PlayedColor();
    // public System.Void Setup(UnityEngine.Renderer renderer)
    // Offset: 0xA132C4
    void Setup(::UnityEngine::Renderer* renderer);
    // private System.Void SetColor(UnityEngine.Color color)
    // Offset: 0xA1333C
    void SetColor(::UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0xA1342C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardNoteHintBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardNoteHintBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardNoteHintBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0xA132F4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.NoteBoardNoteHintBehaviour
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardNoteHintBehaviour), 52 + sizeof(::UnityEngine::Color)> __VROSC_NoteBoardNoteHintBehaviourSizeCheck;
  static_assert(sizeof(NoteBoardNoteHintBehaviour) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardNoteHintBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteHintBehaviour::*)(::UnityEngine::Renderer*)>(&VROSC::NoteBoardNoteHintBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteHintBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteHintBehaviour::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteHintBehaviour::*)(::UnityEngine::Color)>(&VROSC::NoteBoardNoteHintBehaviour::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteHintBehaviour*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteHintBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteBoardNoteHintBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteHintBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::NoteBoardNoteHintBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteHintBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
