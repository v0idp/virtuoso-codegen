// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayableOutput
  struct ScriptPlayableOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::ScriptPlayableOutput, "UnityEngine.Playables", "ScriptPlayableOutput");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.ScriptPlayableOutput
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 663490
  struct ScriptPlayableOutput/*, public ::System::ValueType, public ::UnityEngine::Playables::IPlayableOutput*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableOutputHandle) == 0xC);
    public:
    // Creating value type constructor for type: ScriptPlayableOutput
    constexpr ScriptPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayableOutput
    operator ::UnityEngine::Playables::IPlayableOutput() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayableOutput*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableOutputHandle
    constexpr operator ::UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableOutputHandle m_Handle
    [[deprecated]] ::UnityEngine::Playables::PlayableOutputHandle& dyn_m_Handle();
    // static public UnityEngine.Playables.ScriptPlayableOutput get_Null()
    // Offset: 0xBD28D8
    static ::UnityEngine::Playables::ScriptPlayableOutput get_Null();
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0xBD295C
    // ABORTED: conflicts with another method.  ScriptPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle handle);
    // static public UnityEngine.Playables.ScriptPlayableOutput Create(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0xBD2858
    static ::UnityEngine::Playables::ScriptPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name);
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xBD2A18
    ::UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Playables.ScriptPlayableOutput
  #pragma pack(pop)
  static check_size<sizeof(ScriptPlayableOutput), 0 + sizeof(::UnityEngine::Playables::PlayableOutputHandle)> __UnityEngine_Playables_ScriptPlayableOutputSizeCheck;
  static_assert(sizeof(ScriptPlayableOutput) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::ScriptPlayableOutput::get_Null
// Il2CppName: get_Null
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayableOutput (*)()>(&UnityEngine::Playables::ScriptPlayableOutput::get_Null)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::ScriptPlayableOutput), "get_Null", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::ScriptPlayableOutput::ScriptPlayableOutput
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Playables::ScriptPlayableOutput::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW)>(&UnityEngine::Playables::ScriptPlayableOutput::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::ScriptPlayableOutput), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::ScriptPlayableOutput::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (UnityEngine::Playables::ScriptPlayableOutput::*)()>(&UnityEngine::Playables::ScriptPlayableOutput::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::ScriptPlayableOutput), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
