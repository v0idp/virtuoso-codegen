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
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsManager::$$c__DisplayClass59_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager::$$c__DisplayClass59_1*, "VROSC", "SessionsManager/<>c__DisplayClass59_1");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsManager/VROSC.<>c__DisplayClass59_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsManager::$$c__DisplayClass59_1 : public ::Il2CppObject {
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
    // public System.Boolean isOgg
    // Size: 0x1
    // Offset: 0x10
    bool isOgg;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOgg and: CS$$$8__locals1
    char __padding0[0x7] = {};
    // public VROSC.SessionsManager/VROSC.<>c__DisplayClass59_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SessionsManager::$$c__DisplayClass59_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsManager::$$c__DisplayClass59_0*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean isOgg
    bool& dyn_isOgg();
    // Get instance field reference: public VROSC.SessionsManager/VROSC.<>c__DisplayClass59_0 CS$<>8__locals1
    ::VROSC::SessionsManager::$$c__DisplayClass59_0*& dyn_CS$$$8__locals1();
    // System.Void <DeleteSession>b__0()
    // Offset: 0x134B320
    void $DeleteSession$b__0();
    // public System.Void .ctor()
    // Offset: 0x134B318
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsManager::$$c__DisplayClass59_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsManager::$$c__DisplayClass59_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsManager::$$c__DisplayClass59_1*, creationType>()));
    }
  }; // VROSC.SessionsManager/VROSC.<>c__DisplayClass59_1
  #pragma pack(pop)
  static check_size<sizeof(SessionsManager::$$c__DisplayClass59_1), 24 + sizeof(::VROSC::SessionsManager::$$c__DisplayClass59_0*)> __VROSC_SessionsManager_$$c__DisplayClass59_1SizeCheck;
  static_assert(sizeof(SessionsManager::$$c__DisplayClass59_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass59_1::$DeleteSession$b__0
// Il2CppName: <DeleteSession>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass59_1::*)()>(&VROSC::SessionsManager::$$c__DisplayClass59_1::$DeleteSession$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass59_1*), "<DeleteSession>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass59_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!