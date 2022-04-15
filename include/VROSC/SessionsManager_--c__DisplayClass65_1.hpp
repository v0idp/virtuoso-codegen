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
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsManager::$$c__DisplayClass65_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager::$$c__DisplayClass65_1*, "VROSC", "SessionsManager/<>c__DisplayClass65_1");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsManager/VROSC.<>c__DisplayClass65_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsManager::$$c__DisplayClass65_1 : public ::Il2CppObject {
    public:
    public:
    // public System.String userUpVoteId
    // Size: 0x8
    // Offset: 0x10
    ::StringW userUpVoteId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public VROSC.SessionsManager/VROSC.<>c__DisplayClass65_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SessionsManager::$$c__DisplayClass65_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsManager::$$c__DisplayClass65_0*) == 0x8);
    public:
    // Get instance field reference: public System.String userUpVoteId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userUpVoteId();
    // Get instance field reference: public VROSC.SessionsManager/VROSC.<>c__DisplayClass65_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::VROSC::SessionsManager::$$c__DisplayClass65_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x8D6A74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsManager::$$c__DisplayClass65_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsManager::$$c__DisplayClass65_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsManager::$$c__DisplayClass65_1*, creationType>()));
    }
    // System.Void <AddSessionUpVote>b__7(VROSC.Error error)
    // Offset: 0x8D6D64
    void $AddSessionUpVote$b__7(::VROSC::Error error);
  }; // VROSC.SessionsManager/VROSC.<>c__DisplayClass65_1
  #pragma pack(pop)
  static check_size<sizeof(SessionsManager::$$c__DisplayClass65_1), 24 + sizeof(::VROSC::SessionsManager::$$c__DisplayClass65_0*)> __VROSC_SessionsManager_$$c__DisplayClass65_1SizeCheck;
  static_assert(sizeof(SessionsManager::$$c__DisplayClass65_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass65_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass65_1::$AddSessionUpVote$b__7
// Il2CppName: <AddSessionUpVote>b__7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass65_1::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass65_1::$AddSessionUpVote$b__7)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass65_1*), "<AddSessionUpVote>b__7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
