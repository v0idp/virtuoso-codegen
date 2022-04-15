// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISubsystemDescriptor
#include "UnityEngine/ISubsystemDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystem
  class ISubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SubsystemDescriptor
  class SubsystemDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemDescriptor*, "UnityEngine", "SubsystemDescriptor");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SubsystemDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class SubsystemDescriptor : public ::Il2CppObject/*, public ::UnityEngine::ISubsystemDescriptor*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x6E03F0
    // private System.String <id>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISubsystemDescriptor
    operator ::UnityEngine::ISubsystemDescriptor() noexcept {
      return *reinterpret_cast<::UnityEngine::ISubsystemDescriptor*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return id;
    }
    // Get instance field reference: private System.String <id>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$id$k__BackingField();
    // public System.String get_id()
    // Offset: 0x1903C44
    ::StringW get_id();
    // protected System.Void .ctor()
    // Offset: 0x1903C58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubsystemDescriptor*, creationType>()));
    }
    // private UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor.Create()
    // Offset: 0x1903C4C
    ::UnityEngine::ISubsystem* UnityEngine_ISubsystemDescriptor_Create();
    // UnityEngine.ISubsystem CreateImpl()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::ISubsystem* CreateImpl();
  }; // UnityEngine.SubsystemDescriptor
  #pragma pack(pop)
  static check_size<sizeof(SubsystemDescriptor), 16 + sizeof(::StringW)> __UnityEngine_SubsystemDescriptorSizeCheck;
  static_assert(sizeof(SubsystemDescriptor) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SubsystemDescriptor::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::SubsystemDescriptor::*)()>(&UnityEngine::SubsystemDescriptor::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemDescriptor*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::SubsystemDescriptor::UnityEngine_ISubsystemDescriptor_Create
// Il2CppName: UnityEngine.ISubsystemDescriptor.Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem* (UnityEngine::SubsystemDescriptor::*)()>(&UnityEngine::SubsystemDescriptor::UnityEngine_ISubsystemDescriptor_Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemDescriptor*), "UnityEngine.ISubsystemDescriptor.Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemDescriptor::CreateImpl
// Il2CppName: CreateImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem* (UnityEngine::SubsystemDescriptor::*)()>(&UnityEngine::SubsystemDescriptor::CreateImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemDescriptor*), "CreateImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
