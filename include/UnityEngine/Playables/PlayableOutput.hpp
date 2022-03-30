// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableOutput, "UnityEngine.Playables", "PlayableOutput");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.PlayableOutput
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 5691F8
  struct PlayableOutput/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>, public ::UnityEngine::Playables::IPlayableOutput*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableOutputHandle) == 0xC);
    public:
    // Creating value type constructor for type: PlayableOutput
    constexpr PlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>
    operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayableOutput
    operator ::UnityEngine::Playables::IPlayableOutput() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayableOutput*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableOutputHandle
    constexpr operator ::UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Playables.PlayableOutput m_NullPlayableOutput
    static ::UnityEngine::Playables::PlayableOutput _get_m_NullPlayableOutput();
    // Set static field: static private readonly UnityEngine.Playables.PlayableOutput m_NullPlayableOutput
    static void _set_m_NullPlayableOutput(::UnityEngine::Playables::PlayableOutput value);
    // Get instance field reference: private UnityEngine.Playables.PlayableOutputHandle m_Handle
    ::UnityEngine::Playables::PlayableOutputHandle& dyn_m_Handle();
    // static public UnityEngine.Playables.PlayableOutput get_Null()
    // Offset: 0x9CDBF0
    static ::UnityEngine::Playables::PlayableOutput get_Null();
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x9CFAD8
    // ABORTED: conflicts with another method.  PlayableOutput(::UnityEngine::Playables::PlayableOutputHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x9CFC00
    static void _cctor();
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0x9CFAE0
    ::UnityEngine::Playables::PlayableOutputHandle GetHandle();
    // public System.Boolean IsPlayableOutputOfType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool IsPlayableOutputOfType() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::Playables::IPlayableOutput> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Playables::PlayableOutput::IsPlayableOutputOfType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "IsPlayableOutputOfType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method);
    }
    // public System.Boolean Equals(UnityEngine.Playables.PlayableOutput other)
    // Offset: 0x9CFAEC
    bool Equals(::UnityEngine::Playables::PlayableOutput other);
  }; // UnityEngine.Playables.PlayableOutput
  #pragma pack(pop)
  static check_size<sizeof(PlayableOutput), 0 + sizeof(::UnityEngine::Playables::PlayableOutputHandle)> __UnityEngine_Playables_PlayableOutputSizeCheck;
  static_assert(sizeof(PlayableOutput) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutput::get_Null
// Il2CppName: get_Null
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (*)()>(&UnityEngine::Playables::PlayableOutput::get_Null)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutput), "get_Null", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutput::PlayableOutput
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutput::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Playables::PlayableOutput::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutput), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutput::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (UnityEngine::Playables::PlayableOutput::*)()>(&UnityEngine::Playables::PlayableOutput::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutput), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutput::IsPlayableOutputOfType
// Il2CppName: IsPlayableOutputOfType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutput::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableOutput::*)(::UnityEngine::Playables::PlayableOutput)>(&UnityEngine::Playables::PlayableOutput::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutput), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
