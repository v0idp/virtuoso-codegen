// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionsManager
#include "VROSC/SessionsManager.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsManager::$$c__DisplayClass66_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager::$$c__DisplayClass66_0*, "VROSC", "SessionsManager/<>c__DisplayClass66_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsManager/VROSC.<>c__DisplayClass66_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsManager::$$c__DisplayClass66_0 : public ::Il2CppObject {
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
    // public VROSC.SessionsManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::SessionsManager* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsManager*) == 0x8);
    // public System.String sessionId
    // Size: 0x8
    // Offset: 0x18
    ::StringW sessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action onSuccess
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action <>9__3
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* $$9__3;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__4
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::VROSC::Error>* $$9__4;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action <>9__2
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public VROSC.SessionsManager <>4__this
    ::VROSC::SessionsManager*& dyn_$$4__this();
    // Get instance field reference: public System.String sessionId
    ::StringW& dyn_sessionId();
    // Get instance field reference: public System.Action onSuccess
    ::System::Action*& dyn_onSuccess();
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.Action <>9__3
    ::System::Action*& dyn_$$9__3();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__4
    ::System::Action_1<::VROSC::Error>*& dyn_$$9__4();
    // Get instance field reference: public System.Action <>9__2
    ::System::Action*& dyn_$$9__2();
    // System.Void <RemoveSessionUpVote>b__0()
    // Offset: 0x134BAF8
    void $RemoveSessionUpVote$b__0();
    // System.Void <RemoveSessionUpVote>b__2()
    // Offset: 0x134BCB8
    void $RemoveSessionUpVote$b__2();
    // System.Void <RemoveSessionUpVote>b__3()
    // Offset: 0x134BDDC
    void $RemoveSessionUpVote$b__3();
    // System.Void <RemoveSessionUpVote>b__4(VROSC.Error error)
    // Offset: 0x134BE68
    void $RemoveSessionUpVote$b__4(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x134BAF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsManager::$$c__DisplayClass66_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsManager::$$c__DisplayClass66_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsManager::$$c__DisplayClass66_0*, creationType>()));
    }
  }; // VROSC.SessionsManager/VROSC.<>c__DisplayClass66_0
  #pragma pack(pop)
  static check_size<sizeof(SessionsManager::$$c__DisplayClass66_0), 64 + sizeof(::System::Action*)> __VROSC_SessionsManager_$$c__DisplayClass66_0SizeCheck;
  static_assert(sizeof(SessionsManager::$$c__DisplayClass66_0) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass66_0::$RemoveSessionUpVote$b__0
// Il2CppName: <RemoveSessionUpVote>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass66_0::*)()>(&VROSC::SessionsManager::$$c__DisplayClass66_0::$RemoveSessionUpVote$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass66_0*), "<RemoveSessionUpVote>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass66_0::$RemoveSessionUpVote$b__2
// Il2CppName: <RemoveSessionUpVote>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass66_0::*)()>(&VROSC::SessionsManager::$$c__DisplayClass66_0::$RemoveSessionUpVote$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass66_0*), "<RemoveSessionUpVote>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass66_0::$RemoveSessionUpVote$b__3
// Il2CppName: <RemoveSessionUpVote>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass66_0::*)()>(&VROSC::SessionsManager::$$c__DisplayClass66_0::$RemoveSessionUpVote$b__3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass66_0*), "<RemoveSessionUpVote>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass66_0::$RemoveSessionUpVote$b__4
// Il2CppName: <RemoveSessionUpVote>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass66_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass66_0::$RemoveSessionUpVote$b__4)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass66_0*), "<RemoveSessionUpVote>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass66_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
