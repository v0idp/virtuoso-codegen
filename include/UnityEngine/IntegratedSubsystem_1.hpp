// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.IntegratedSubsystem
#include "UnityEngine/IntegratedSubsystem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystem`1<TSubsystemDescriptor>
  template<typename TSubsystemDescriptor>
  class IntegratedSubsystem_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::IntegratedSubsystem_1, "UnityEngine", "IntegratedSubsystem`1");
// Type namespace: UnityEngine
namespace UnityEngine {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.IntegratedSubsystem`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 5C9F28
  template<typename TSubsystemDescriptor>
  class IntegratedSubsystem_1 : public ::UnityEngine::IntegratedSubsystem {
    public:
    // public TSubsystemDescriptor get_subsystemDescriptor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TSubsystemDescriptor get_subsystemDescriptor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::IntegratedSubsystem_1::get_subsystemDescriptor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_subsystemDescriptor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TSubsystemDescriptor, false>(this, ___internal__method);
    }
    // public TSubsystemDescriptor get_SubsystemDescriptor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TSubsystemDescriptor get_SubsystemDescriptor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::IntegratedSubsystem_1::get_SubsystemDescriptor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_SubsystemDescriptor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TSubsystemDescriptor, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.IntegratedSubsystem
    // Base method: System.Void IntegratedSubsystem::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntegratedSubsystem_1<TSubsystemDescriptor>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::IntegratedSubsystem_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntegratedSubsystem_1<TSubsystemDescriptor>*, creationType>()));
    }
  }; // UnityEngine.IntegratedSubsystem`1
  // Could not write size check! Type: UnityEngine.IntegratedSubsystem`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
