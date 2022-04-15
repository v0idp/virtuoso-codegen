// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionsManager
#include "VROSC/SessionsManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SessionsDataController
  class SessionsDataController;
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsManager::$$c__DisplayClass59_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager::$$c__DisplayClass59_0*, "VROSC", "SessionsManager/<>c__DisplayClass59_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsManager/VROSC.<>c__DisplayClass59_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsManager::$$c__DisplayClass59_0 : public ::Il2CppObject {
    public:
    public:
    // public VROSC.SessionsManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::SessionsManager* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsManager*) == 0x8);
    // public VROSC.SessionsDataController sessionsDataController
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SessionsDataController* sessionsDataController;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsDataController*) == 0x8);
    // public System.String sessionId
    // Size: 0x8
    // Offset: 0x20
    ::StringW sessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public VROSC.SessionsManager <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::SessionsManager*& dyn_$$4__this();
    // Get instance field reference: public VROSC.SessionsDataController sessionsDataController
    [[deprecated("Use field access instead!")]] ::VROSC::SessionsDataController*& dyn_sessionsDataController();
    // Get instance field reference: public System.String sessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sessionId();
    // public System.Void .ctor()
    // Offset: 0x8D6220
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsManager::$$c__DisplayClass59_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsManager::$$c__DisplayClass59_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsManager::$$c__DisplayClass59_0*, creationType>()));
    }
    // System.Void <DeleteSession>b__1(VROSC.Error error)
    // Offset: 0x8D6228
    void $DeleteSession$b__1(::VROSC::Error error);
  }; // VROSC.SessionsManager/VROSC.<>c__DisplayClass59_0
  #pragma pack(pop)
  static check_size<sizeof(SessionsManager::$$c__DisplayClass59_0), 32 + sizeof(::StringW)> __VROSC_SessionsManager_$$c__DisplayClass59_0SizeCheck;
  static_assert(sizeof(SessionsManager::$$c__DisplayClass59_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass59_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass59_0::$DeleteSession$b__1
// Il2CppName: <DeleteSession>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass59_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass59_0::$DeleteSession$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass59_0*), "<DeleteSession>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
