// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.CloudStateManager
#include "VROSC/CloudStateManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CloudStateManager::$$c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager::$$c__DisplayClass18_0*, "VROSC", "CloudStateManager/<>c__DisplayClass18_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CloudStateManager/VROSC.<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CloudStateManager::$$c__DisplayClass18_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String sessionName
    // Size: 0x8
    // Offset: 0x10
    ::StringW sessionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return sessionName;
    }
    // Get instance field reference: public System.String sessionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sessionName();
    // public System.Void .ctor()
    // Offset: 0x95A83C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudStateManager::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CloudStateManager::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudStateManager::$$c__DisplayClass18_0*, creationType>()));
    }
    // System.Void <CoDownloadSession>b__0()
    // Offset: 0x95A844
    void $CoDownloadSession$b__0();
    // System.Void <CoDownloadSession>b__1(System.Single p)
    // Offset: 0x95A8F4
    void $CoDownloadSession$b__1(float p);
    // System.Void <CoDownloadSession>b__2(VROSC.Error e)
    // Offset: 0x95A984
    void $CoDownloadSession$b__2(::VROSC::Error e);
  }; // VROSC.CloudStateManager/VROSC.<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(CloudStateManager::$$c__DisplayClass18_0), 16 + sizeof(::StringW)> __VROSC_CloudStateManager_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(CloudStateManager::$$c__DisplayClass18_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CloudStateManager::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::CloudStateManager::$$c__DisplayClass18_0::$CoDownloadSession$b__0
// Il2CppName: <CoDownloadSession>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudStateManager::$$c__DisplayClass18_0::*)()>(&VROSC::CloudStateManager::$$c__DisplayClass18_0::$CoDownloadSession$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudStateManager::$$c__DisplayClass18_0*), "<CoDownloadSession>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CloudStateManager::$$c__DisplayClass18_0::$CoDownloadSession$b__1
// Il2CppName: <CoDownloadSession>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudStateManager::$$c__DisplayClass18_0::*)(float)>(&VROSC::CloudStateManager::$$c__DisplayClass18_0::$CoDownloadSession$b__1)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudStateManager::$$c__DisplayClass18_0*), "<CoDownloadSession>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: VROSC::CloudStateManager::$$c__DisplayClass18_0::$CoDownloadSession$b__2
// Il2CppName: <CoDownloadSession>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudStateManager::$$c__DisplayClass18_0::*)(::VROSC::Error)>(&VROSC::CloudStateManager::$$c__DisplayClass18_0::$CoDownloadSession$b__2)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudStateManager::$$c__DisplayClass18_0*), "<CoDownloadSession>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
