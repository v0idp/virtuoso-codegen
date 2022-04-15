// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PrefabSpawner
  class PrefabSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PrefabSpawner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PrefabSpawner*, "VROSC", "PrefabSpawner");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PrefabSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class PrefabSpawner : public ::VROSC::SignalNode {
    public:
    public:
    // private VROSC.SignalNode _prefab
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::SignalNode* prefab;
    // Field size check
    static_assert(sizeof(::VROSC::SignalNode*) == 0x8);
    // private UnityEngine.Transform _spawnLocation
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* spawnLocation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.SignalNode> _instances
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::VROSC::SignalNode*>* instances;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::SignalNode*>*) == 0x8);
    // private VROSC.SignalNode _currentlySignalingInstance
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::SignalNode* currentlySignalingInstance;
    // Field size check
    static_assert(sizeof(::VROSC::SignalNode*) == 0x8);
    public:
    // Get instance field reference: private VROSC.SignalNode _prefab
    [[deprecated("Use field access instead!")]] ::VROSC::SignalNode*& dyn__prefab();
    // Get instance field reference: private UnityEngine.Transform _spawnLocation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__spawnLocation();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.SignalNode> _instances
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::SignalNode*>*& dyn__instances();
    // Get instance field reference: private VROSC.SignalNode _currentlySignalingInstance
    [[deprecated("Use field access instead!")]] ::VROSC::SignalNode*& dyn__currentlySignalingInstance();
    // public System.Void Clear()
    // Offset: 0xAE44D4
    void Clear();
    // public System.Void .ctor()
    // Offset: 0xAE45D0
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PrefabSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabSpawner*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0xAE4170
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0xAE43B4
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
    // protected override System.Void NodeEnd(VROSC.Signal signal)
    // Offset: 0xAE445C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeEnd(VROSC.Signal signal)
    void NodeEnd(::VROSC::Signal* signal);
  }; // VROSC.PrefabSpawner
  #pragma pack(pop)
  static check_size<sizeof(PrefabSpawner), 88 + sizeof(::VROSC::SignalNode*)> __VROSC_PrefabSpawnerSizeCheck;
  static_assert(sizeof(PrefabSpawner) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PrefabSpawner::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PrefabSpawner::*)()>(&VROSC::PrefabSpawner::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PrefabSpawner*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PrefabSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::PrefabSpawner::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PrefabSpawner::*)(::VROSC::Signal*)>(&VROSC::PrefabSpawner::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PrefabSpawner*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::PrefabSpawner::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PrefabSpawner::*)(::VROSC::Signal*)>(&VROSC::PrefabSpawner::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PrefabSpawner*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::PrefabSpawner::NodeEnd
// Il2CppName: NodeEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PrefabSpawner::*)(::VROSC::Signal*)>(&VROSC::PrefabSpawner::NodeEnd)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PrefabSpawner*), "NodeEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
