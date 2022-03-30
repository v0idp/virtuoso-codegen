// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: OVRLipSync
#include "GlobalNamespace/OVRLipSync.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRLipSyncSequence
  class OVRLipSyncSequence;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRLipSyncSequence);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSyncSequence*, "", "OVRLipSyncSequence");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRLipSyncSequence
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRLipSyncSequence : public ::UnityEngine::ScriptableObject {
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
    // public System.Collections.Generic.List`1<OVRLipSync/Frame> entries
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRLipSync::Frame*>* entries;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRLipSync::Frame*>*) == 0x8);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<OVRLipSync/Frame> entries
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRLipSync::Frame*>*& dyn_entries();
    // Get instance field reference: public System.Single length
    float& dyn_length();
    // public OVRLipSync/Frame GetFrameAtTime(System.Single time)
    // Offset: 0x12AC1FC
    ::GlobalNamespace::OVRLipSync::Frame* GetFrameAtTime(float time);
    // public System.Void .ctor()
    // Offset: 0x12AE2A4
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRLipSyncSequence* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRLipSyncSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRLipSyncSequence*, creationType>()));
    }
  }; // OVRLipSyncSequence
  #pragma pack(pop)
  static check_size<sizeof(OVRLipSyncSequence), 32 + sizeof(float)> __GlobalNamespace_OVRLipSyncSequenceSizeCheck;
  static_assert(sizeof(OVRLipSyncSequence) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncSequence::GetFrameAtTime
// Il2CppName: GetFrameAtTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRLipSync::Frame* (GlobalNamespace::OVRLipSyncSequence::*)(float)>(&GlobalNamespace::OVRLipSyncSequence::GetFrameAtTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncSequence*), "GetFrameAtTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
