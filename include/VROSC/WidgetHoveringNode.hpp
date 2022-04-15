// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: WidgetHoveringController
  class WidgetHoveringController;
  // Forward declaring type: Interactable
  class Interactable;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: WidgetHoveringNode
  class WidgetHoveringNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::WidgetHoveringNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetHoveringNode*, "VROSC", "WidgetHoveringNode");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.WidgetHoveringNode
  // [TokenAttribute] Offset: FFFFFFFF
  class WidgetHoveringNode : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.WidgetHoveringController _parent
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::WidgetHoveringController* parent;
    // Field size check
    static_assert(sizeof(::VROSC::WidgetHoveringController*) == 0x8);
    // private VROSC.Interactable _reactTo
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::Interactable* reactTo;
    // Field size check
    static_assert(sizeof(::VROSC::Interactable*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.WidgetHoveringController _parent
    [[deprecated("Use field access instead!")]] ::VROSC::WidgetHoveringController*& dyn__parent();
    // Get instance field reference: private VROSC.Interactable _reactTo
    [[deprecated("Use field access instead!")]] ::VROSC::Interactable*& dyn__reactTo();
    // public System.Void .ctor()
    // Offset: 0x952504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WidgetHoveringNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::WidgetHoveringNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WidgetHoveringNode*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x952234
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x952348
    void OnDestroy();
    // public System.Void Setup(VROSC.WidgetHoveringController parent)
    // Offset: 0x95245C
    void Setup(::VROSC::WidgetHoveringController* parent);
    // public System.Void SetHovering(System.Boolean hovering)
    // Offset: 0x952464
    void SetHovering(bool hovering);
  }; // VROSC.WidgetHoveringNode
  #pragma pack(pop)
  static check_size<sizeof(WidgetHoveringNode), 32 + sizeof(::VROSC::Interactable*)> __VROSC_WidgetHoveringNodeSizeCheck;
  static_assert(sizeof(WidgetHoveringNode) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::WidgetHoveringNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::WidgetHoveringNode::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WidgetHoveringNode::*)()>(&VROSC::WidgetHoveringNode::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::WidgetHoveringNode*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::WidgetHoveringNode::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WidgetHoveringNode::*)()>(&VROSC::WidgetHoveringNode::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::WidgetHoveringNode*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::WidgetHoveringNode::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WidgetHoveringNode::*)(::VROSC::WidgetHoveringController*)>(&VROSC::WidgetHoveringNode::Setup)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetHoveringController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::WidgetHoveringNode*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: VROSC::WidgetHoveringNode::SetHovering
// Il2CppName: SetHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::WidgetHoveringNode::*)(bool)>(&VROSC::WidgetHoveringNode::SetHovering)> {
  static const MethodInfo* get() {
    static auto* hovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::WidgetHoveringNode*), "SetHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovering});
  }
};
