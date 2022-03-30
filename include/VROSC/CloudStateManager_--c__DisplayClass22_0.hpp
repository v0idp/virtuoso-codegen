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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CloudStateManager::$$c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager::$$c__DisplayClass22_0*, "VROSC", "CloudStateManager/<>c__DisplayClass22_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CloudStateManager/VROSC.<>c__DisplayClass22_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CloudStateManager::$$c__DisplayClass22_0 : public ::Il2CppObject {
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
    // public System.Boolean hasPreview
    // Size: 0x1
    // Offset: 0x10
    bool hasPreview;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPreview and: $$4__this
    char __padding0[0x7] = {};
    // public VROSC.CloudStateManager <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::CloudStateManager* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::CloudStateManager*) == 0x8);
    // public System.String sessionName
    // Size: 0x8
    // Offset: 0x20
    ::StringW sessionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean isCommunity
    // Size: 0x1
    // Offset: 0x28
    bool isCommunity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean hasPreview
    bool& dyn_hasPreview();
    // Get instance field reference: public VROSC.CloudStateManager <>4__this
    ::VROSC::CloudStateManager*& dyn_$$4__this();
    // Get instance field reference: public System.String sessionName
    ::StringW& dyn_sessionName();
    // Get instance field reference: public System.Boolean isCommunity
    bool& dyn_isCommunity();
    // System.Void <CoUploadSession>b__0(System.String s)
    // Offset: 0x135EA98
    void $CoUploadSession$b__0(::StringW s);
    // public System.Void .ctor()
    // Offset: 0x135EA90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudStateManager::$$c__DisplayClass22_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CloudStateManager::$$c__DisplayClass22_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudStateManager::$$c__DisplayClass22_0*, creationType>()));
    }
  }; // VROSC.CloudStateManager/VROSC.<>c__DisplayClass22_0
  #pragma pack(pop)
  static check_size<sizeof(CloudStateManager::$$c__DisplayClass22_0), 40 + sizeof(bool)> __VROSC_CloudStateManager_$$c__DisplayClass22_0SizeCheck;
  static_assert(sizeof(CloudStateManager::$$c__DisplayClass22_0) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CloudStateManager::$$c__DisplayClass22_0::$CoUploadSession$b__0
// Il2CppName: <CoUploadSession>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudStateManager::$$c__DisplayClass22_0::*)(::StringW)>(&VROSC::CloudStateManager::$$c__DisplayClass22_0::$CoUploadSession$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudStateManager::$$c__DisplayClass22_0*), "<CoUploadSession>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: VROSC::CloudStateManager::$$c__DisplayClass22_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
