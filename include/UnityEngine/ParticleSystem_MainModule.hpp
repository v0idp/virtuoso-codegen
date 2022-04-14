// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystemSimulationSpace
  struct ParticleSystemSimulationSpace;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::MainModule, "UnityEngine", "ParticleSystem/MainModule");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.MainModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::MainModule/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Creating value type constructor for type: MainModule
    constexpr MainModule(::UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::ParticleSystem*
    constexpr operator ::UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field reference: UnityEngine.ParticleSystem m_ParticleSystem
    [[deprecated]] ::UnityEngine::ParticleSystem*& dyn_m_ParticleSystem();
    // public System.Single get_duration()
    // Offset: 0x19008BC
    float get_duration();
    // public System.Boolean get_loop()
    // Offset: 0x190093C
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x19009BC
    void set_loop(bool value);
    // public System.Void set_startColor(UnityEngine.ParticleSystem/UnityEngine.MinMaxGradient value)
    // Offset: 0x1900A5C
    void set_startColor(::UnityEngine::ParticleSystem::MinMaxGradient value);
    // public System.Void set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace value)
    // Offset: 0x1900AFC
    void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value);
    // public System.Void set_simulationSpeed(System.Single value)
    // Offset: 0x1900B9C
    void set_simulationSpeed(float value);
    // public System.Void set_playOnAwake(System.Boolean value)
    // Offset: 0x1900C3C
    void set_playOnAwake(bool value);
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0x1900638
    // ABORTED: conflicts with another method.  MainModule(::UnityEngine::ParticleSystem* particleSystem);
    // static private System.Single get_duration_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self)
    // Offset: 0x19008FC
    static float get_duration_Injected(ByRef<::UnityEngine::ParticleSystem::MainModule> _unity_self);
    // static private System.Boolean get_loop_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self)
    // Offset: 0x190097C
    static bool get_loop_Injected(ByRef<::UnityEngine::ParticleSystem::MainModule> _unity_self);
    // static private System.Void set_loop_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, System.Boolean value)
    // Offset: 0x1900A0C
    static void set_loop_Injected(ByRef<::UnityEngine::ParticleSystem::MainModule> _unity_self, bool value);
    // static private System.Void set_startColor_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, ref UnityEngine.ParticleSystem/UnityEngine.MinMaxGradient value)
    // Offset: 0x1900AAC
    static void set_startColor_Injected(ByRef<::UnityEngine::ParticleSystem::MainModule> _unity_self, ByRef<::UnityEngine::ParticleSystem::MinMaxGradient> value);
    // static private System.Void set_simulationSpace_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, UnityEngine.ParticleSystemSimulationSpace value)
    // Offset: 0x1900B4C
    static void set_simulationSpace_Injected(ByRef<::UnityEngine::ParticleSystem::MainModule> _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value);
    // static private System.Void set_simulationSpeed_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, System.Single value)
    // Offset: 0x1900BEC
    static void set_simulationSpeed_Injected(ByRef<::UnityEngine::ParticleSystem::MainModule> _unity_self, float value);
    // static private System.Void set_playOnAwake_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, System.Boolean value)
    // Offset: 0x1900C8C
    static void set_playOnAwake_Injected(ByRef<::UnityEngine::ParticleSystem::MainModule> _unity_self, bool value);
  }; // UnityEngine.ParticleSystem/UnityEngine.MainModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::MainModule), 0 + sizeof(::UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_MainModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::MainModule) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_loop
// Il2CppName: get_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_loop
// Il2CppName: set_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(bool)>(&UnityEngine::ParticleSystem::MainModule::set_loop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startColor
// Il2CppName: set_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(::UnityEngine::ParticleSystem::MinMaxGradient)>(&UnityEngine::ParticleSystem::MainModule::set_startColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_simulationSpace
// Il2CppName: set_simulationSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(::UnityEngine::ParticleSystemSimulationSpace)>(&UnityEngine::ParticleSystem::MainModule::set_simulationSpace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystemSimulationSpace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_simulationSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_simulationSpeed
// Il2CppName: set_simulationSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(float)>(&UnityEngine::ParticleSystem::MainModule::set_simulationSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_simulationSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_playOnAwake
// Il2CppName: set_playOnAwake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(bool)>(&UnityEngine::ParticleSystem::MainModule::set_playOnAwake)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_playOnAwake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::MainModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_duration_Injected
// Il2CppName: get_duration_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::UnityEngine::ParticleSystem::MainModule>)>(&UnityEngine::ParticleSystem::MainModule::get_duration_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_duration_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_loop_Injected
// Il2CppName: get_loop_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::ParticleSystem::MainModule>)>(&UnityEngine::ParticleSystem::MainModule::get_loop_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_loop_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_loop_Injected
// Il2CppName: set_loop_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::MainModule>, bool)>(&UnityEngine::ParticleSystem::MainModule::set_loop_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_loop_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startColor_Injected
// Il2CppName: set_startColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::MainModule>, ByRef<::UnityEngine::ParticleSystem::MinMaxGradient>)>(&UnityEngine::ParticleSystem::MainModule::set_startColor_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_simulationSpace_Injected
// Il2CppName: set_simulationSpace_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::MainModule>, ::UnityEngine::ParticleSystemSimulationSpace)>(&UnityEngine::ParticleSystem::MainModule::set_simulationSpace_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystemSimulationSpace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_simulationSpace_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_simulationSpeed_Injected
// Il2CppName: set_simulationSpeed_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::MainModule>, float)>(&UnityEngine::ParticleSystem::MainModule::set_simulationSpeed_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_simulationSpeed_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_playOnAwake_Injected
// Il2CppName: set_playOnAwake_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::MainModule>, bool)>(&UnityEngine::ParticleSystem::MainModule::set_playOnAwake_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_playOnAwake_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
