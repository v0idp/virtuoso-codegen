// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TrackedReference
#include "UnityEngine/TrackedReference.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationState
  class AnimationState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimationState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationState*, "UnityEngine", "AnimationState");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimationState
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6BBDC4
  // [NativeHeaderAttribute] Offset: 6BBDC4
  class AnimationState : public ::UnityEngine::TrackedReference {
    public:
    // public System.Void .ctor()
    // Offset: 0x18D1C20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimationState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationState*, creationType>()));
    }
  }; // UnityEngine.AnimationState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimationState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
