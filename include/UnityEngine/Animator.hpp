// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RuntimeAnimatorController
  class RuntimeAnimatorController;
  // Forward declaring type: Avatar
  class Avatar;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animator*, "UnityEngine", "Animator");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animator
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5A5E58
  // [NativeHeaderAttribute] Offset: 5A5E58
  // [UsedByNativeCodeAttribute] Offset: 5A5E58
  // [NativeHeaderAttribute] Offset: 5A5E58
  class Animator : public ::UnityEngine::Behaviour {
    public:
    // public System.Boolean get_isHuman()
    // Offset: 0x12CFA04
    bool get_isHuman();
    // public System.Boolean get_hasRootMotion()
    // Offset: 0x12CFA44
    bool get_hasRootMotion();
    // public UnityEngine.RuntimeAnimatorController get_runtimeAnimatorController()
    // Offset: 0x12CFC84
    ::UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController();
    // public System.Boolean get_hasBoundPlayables()
    // Offset: 0x12CFCC4
    bool get_hasBoundPlayables();
    // public UnityEngine.Avatar get_avatar()
    // Offset: 0x12CFD04
    ::UnityEngine::Avatar* get_avatar();
    // public System.Void SetFloat(System.String name, System.Single value)
    // Offset: 0x12CFA84
    void SetFloat(::StringW name, float value);
    // public System.Void SetTrigger(System.String name)
    // Offset: 0x12CFB44
    void SetTrigger(::StringW name);
    // public System.Void ResetTrigger(System.String name)
    // Offset: 0x12CFBE4
    void ResetTrigger(::StringW name);
    // private System.Void SetFloatString(System.String name, System.Single value)
    // Offset: 0x12CFAE4
    void SetFloatString(::StringW name, float value);
    // private System.Void SetTriggerString(System.String name)
    // Offset: 0x12CFB94
    void SetTriggerString(::StringW name);
    // private System.Void ResetTriggerString(System.String name)
    // Offset: 0x12CFC34
    void ResetTriggerString(::StringW name);
    // public System.Void .ctor()
    // Offset: 0x12CFD44
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Animator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Animator*, creationType>()));
    }
  }; // UnityEngine.Animator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animator::get_isHuman
// Il2CppName: get_isHuman
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animator::*)()>(&UnityEngine::Animator::get_isHuman)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "get_isHuman", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::get_hasRootMotion
// Il2CppName: get_hasRootMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animator::*)()>(&UnityEngine::Animator::get_hasRootMotion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "get_hasRootMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::get_runtimeAnimatorController
// Il2CppName: get_runtimeAnimatorController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RuntimeAnimatorController* (UnityEngine::Animator::*)()>(&UnityEngine::Animator::get_runtimeAnimatorController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "get_runtimeAnimatorController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::get_hasBoundPlayables
// Il2CppName: get_hasBoundPlayables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animator::*)()>(&UnityEngine::Animator::get_hasBoundPlayables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "get_hasBoundPlayables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::get_avatar
// Il2CppName: get_avatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Avatar* (UnityEngine::Animator::*)()>(&UnityEngine::Animator::get_avatar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "get_avatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW, float)>(&UnityEngine::Animator::SetFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetTrigger
// Il2CppName: SetTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::SetTrigger)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::ResetTrigger
// Il2CppName: ResetTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::ResetTrigger)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "ResetTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetFloatString
// Il2CppName: SetFloatString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW, float)>(&UnityEngine::Animator::SetFloatString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetFloatString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetTriggerString
// Il2CppName: SetTriggerString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::SetTriggerString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetTriggerString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::ResetTriggerString
// Il2CppName: ResetTriggerString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::ResetTriggerString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "ResetTriggerString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
