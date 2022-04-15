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
NEED_NO_BOX(::VROSC::SessionsManager::$$c__DisplayClass69_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager::$$c__DisplayClass69_0*, "VROSC", "SessionsManager/<>c__DisplayClass69_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsManager/VROSC.<>c__DisplayClass69_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsManager::$$c__DisplayClass69_0 : public ::Il2CppObject {
    public:
    public:
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
    // public System.Action`1<System.String> <>9__2
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::StringW>* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__3
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::VROSC::Error>* $$9__3;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    public:
    // Get instance field reference: public VROSC.SessionsManager <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::SessionsManager*& dyn_$$4__this();
    // Get instance field reference: public System.String sessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sessionId();
    // Get instance field reference: public System.Action onSuccess
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onSuccess();
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.Action`1<System.String> <>9__2
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn_$$9__2();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__3
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_$$9__3();
    // public System.Void .ctor()
    // Offset: 0x8D8870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsManager::$$c__DisplayClass69_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsManager::$$c__DisplayClass69_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsManager::$$c__DisplayClass69_0*, creationType>()));
    }
    // System.Void <AddSessionDownload>b__0()
    // Offset: 0x8D8878
    void $AddSessionDownload$b__0();
    // System.Void <AddSessionDownload>b__2(System.String downloadId)
    // Offset: 0x8D8B18
    void $AddSessionDownload$b__2(::StringW downloadId);
    // System.Void <AddSessionDownload>b__3(VROSC.Error error)
    // Offset: 0x8D8BD4
    void $AddSessionDownload$b__3(::VROSC::Error error);
    // System.Void <AddSessionDownload>b__1(VROSC.Error error)
    // Offset: 0x8D8C8C
    void $AddSessionDownload$b__1(::VROSC::Error error);
  }; // VROSC.SessionsManager/VROSC.<>c__DisplayClass69_0
  #pragma pack(pop)
  static check_size<sizeof(SessionsManager::$$c__DisplayClass69_0), 56 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_SessionsManager_$$c__DisplayClass69_0SizeCheck;
  static_assert(sizeof(SessionsManager::$$c__DisplayClass69_0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass69_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass69_0::$AddSessionDownload$b__0
// Il2CppName: <AddSessionDownload>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass69_0::*)()>(&VROSC::SessionsManager::$$c__DisplayClass69_0::$AddSessionDownload$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass69_0*), "<AddSessionDownload>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass69_0::$AddSessionDownload$b__2
// Il2CppName: <AddSessionDownload>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass69_0::*)(::StringW)>(&VROSC::SessionsManager::$$c__DisplayClass69_0::$AddSessionDownload$b__2)> {
  static const MethodInfo* get() {
    static auto* downloadId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass69_0*), "<AddSessionDownload>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{downloadId});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass69_0::$AddSessionDownload$b__3
// Il2CppName: <AddSessionDownload>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass69_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass69_0::$AddSessionDownload$b__3)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass69_0*), "<AddSessionDownload>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass69_0::$AddSessionDownload$b__1
// Il2CppName: <AddSessionDownload>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass69_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass69_0::$AddSessionDownload$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass69_0*), "<AddSessionDownload>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
