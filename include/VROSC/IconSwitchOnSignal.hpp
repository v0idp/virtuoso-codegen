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
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: IconSwitchOnSignal
  class IconSwitchOnSignal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IconSwitchOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IconSwitchOnSignal*, "VROSC", "IconSwitchOnSignal");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.IconSwitchOnSignal
  // [TokenAttribute] Offset: FFFFFFFF
  class IconSwitchOnSignal : public ::VROSC::SignalNode {
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
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // [HeaderAttribute] Offset: 0x672564
    // private UnityEngine.Mesh _normalMesh
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Mesh* normalMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Mesh _activeMesh
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Mesh* activeMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private System.Boolean _isHovering
    // Size: 0x1
    // Offset: 0x58
    bool isHovering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: private UnityEngine.Mesh _normalMesh
    ::UnityEngine::Mesh*& dyn__normalMesh();
    // Get instance field reference: private UnityEngine.Mesh _activeMesh
    ::UnityEngine::Mesh*& dyn__activeMesh();
    // Get instance field reference: private System.Boolean _isHovering
    bool& dyn__isHovering();
    // public System.Void SetActive(System.Boolean shouldBeActive)
    // Offset: 0x8A0178
    void SetActive(bool shouldBeActive);
    // public System.Void .ctor()
    // Offset: 0x8A01D8
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IconSwitchOnSignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IconSwitchOnSignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IconSwitchOnSignal*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x8A014C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeEnd(VROSC.Signal signal)
    // Offset: 0x8A01AC
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeEnd(VROSC.Signal signal)
    void NodeEnd(::VROSC::Signal* signal);
  }; // VROSC.IconSwitchOnSignal
  #pragma pack(pop)
  static check_size<sizeof(IconSwitchOnSignal), 88 + sizeof(bool)> __VROSC_IconSwitchOnSignalSizeCheck;
  static_assert(sizeof(IconSwitchOnSignal) == 0x59);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IconSwitchOnSignal::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconSwitchOnSignal::*)(bool)>(&VROSC::IconSwitchOnSignal::SetActive)> {
  static const MethodInfo* get() {
    static auto* shouldBeActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconSwitchOnSignal*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldBeActive});
  }
};
// Writing MetadataGetter for method: VROSC::IconSwitchOnSignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::IconSwitchOnSignal::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconSwitchOnSignal::*)(::VROSC::Signal*)>(&VROSC::IconSwitchOnSignal::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconSwitchOnSignal*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::IconSwitchOnSignal::NodeEnd
// Il2CppName: NodeEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IconSwitchOnSignal::*)(::VROSC::Signal*)>(&VROSC::IconSwitchOnSignal::NodeEnd)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IconSwitchOnSignal*), "NodeEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
