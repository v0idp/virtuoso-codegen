// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRDriverManager
#include "OVR/OpenVR/IVRDriverManager.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRDriverManager
  class CVRDriverManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::CVRDriverManager);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRDriverManager*, "OVR.OpenVR", "CVRDriverManager");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRDriverManager
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRDriverManager : public ::Il2CppObject {
    public:
    public:
    // private OVR.OpenVR.IVRDriverManager FnTable
    // Size: 0x18
    // Offset: 0x10
    ::OVR::OpenVR::IVRDriverManager FnTable;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRDriverManager) == 0x18);
    public:
    // Creating conversion operator: operator ::OVR::OpenVR::IVRDriverManager
    constexpr operator ::OVR::OpenVR::IVRDriverManager() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private OVR.OpenVR.IVRDriverManager FnTable
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRDriverManager& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x9835F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRDriverManager* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRDriverManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRDriverManager*, creationType>(pInterface)));
    }
    // public System.UInt32 GetDriverCount()
    // Offset: 0x98371C
    uint GetDriverCount();
    // public System.UInt32 GetDriverName(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x983738
    uint GetDriverName(uint nDriver, ::System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.UInt64 GetDriverHandle(System.String pchDriverName)
    // Offset: 0x983754
    uint64_t GetDriverHandle(::StringW pchDriverName);
  }; // OVR.OpenVR.CVRDriverManager
  #pragma pack(pop)
  static check_size<sizeof(CVRDriverManager), 16 + sizeof(::OVR::OpenVR::IVRDriverManager)> __OVR_OpenVR_CVRDriverManagerSizeCheck;
  static_assert(sizeof(CVRDriverManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRDriverManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRDriverManager::GetDriverCount
// Il2CppName: GetDriverCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRDriverManager::*)()>(&OVR::OpenVR::CVRDriverManager::GetDriverCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRDriverManager*), "GetDriverCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRDriverManager::GetDriverName
// Il2CppName: GetDriverName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRDriverManager::*)(uint, ::System::Text::StringBuilder*, uint)>(&OVR::OpenVR::CVRDriverManager::GetDriverName)> {
  static const MethodInfo* get() {
    static auto* nDriver = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRDriverManager*), "GetDriverName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDriver, pchValue, unBufferSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRDriverManager::GetDriverHandle
// Il2CppName: GetDriverHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::CVRDriverManager::*)(::StringW)>(&OVR::OpenVR::CVRDriverManager::GetDriverHandle)> {
  static const MethodInfo* get() {
    static auto* pchDriverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRDriverManager*), "GetDriverHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchDriverName});
  }
};
