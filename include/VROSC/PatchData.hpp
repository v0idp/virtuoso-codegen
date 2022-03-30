// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PatchData
  class PatchData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PatchData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PatchData*, "VROSC", "PatchData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PatchData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 6697BC
  class PatchData : public ::UnityEngine::ScriptableObject {
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
    // private System.String _displayName
    // Size: 0x8
    // Offset: 0x18
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _helmChannel
    // Size: 0x4
    // Offset: 0x20
    int helmChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _displayName
    ::StringW& dyn__displayName();
    // Get instance field reference: private System.Int32 _helmChannel
    int& dyn__helmChannel();
    // public System.String get_DisplayName()
    // Offset: 0x8F8CFC
    ::StringW get_DisplayName();
    // public System.Int32 get_HelmChannel()
    // Offset: 0x8F8D04
    int get_HelmChannel();
    // public System.Void .ctor()
    // Offset: 0x8F8D0C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatchData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PatchData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatchData*, creationType>()));
    }
  }; // VROSC.PatchData
  #pragma pack(pop)
  static check_size<sizeof(PatchData), 32 + sizeof(int)> __VROSC_PatchDataSizeCheck;
  static_assert(sizeof(PatchData) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PatchData::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::PatchData::*)()>(&VROSC::PatchData::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PatchData*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PatchData::get_HelmChannel
// Il2CppName: get_HelmChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::PatchData::*)()>(&VROSC::PatchData::get_HelmChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PatchData*), "get_HelmChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PatchData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
