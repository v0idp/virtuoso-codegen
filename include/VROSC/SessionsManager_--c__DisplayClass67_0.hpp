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
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Session
  class Session;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsManager::$$c__DisplayClass67_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager::$$c__DisplayClass67_0*, "VROSC", "SessionsManager/<>c__DisplayClass67_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsManager/VROSC.<>c__DisplayClass67_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsManager::$$c__DisplayClass67_0 : public ::Il2CppObject {
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
    // public System.Action <>9__6
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* $$9__6;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<System.String> <>9__4
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::StringW>* $$9__4;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__5
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::VROSC::Error>* $$9__5;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action`2<System.String,VROSC.Session> <>9__2
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_2<::StringW, ::VROSC::Session*>* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Action_2<::StringW, ::VROSC::Session*>*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__3
    // Size: 0x8
    // Offset: 0x50
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
    // Get instance field reference: public System.Action <>9__6
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_$$9__6();
    // Get instance field reference: public System.Action`1<System.String> <>9__4
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn_$$9__4();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__5
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_$$9__5();
    // Get instance field reference: public System.Action`2<System.String,VROSC.Session> <>9__2
    [[deprecated("Use field access instead!")]] ::System::Action_2<::StringW, ::VROSC::Session*>*& dyn_$$9__2();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__3
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_$$9__3();
    // public System.Void .ctor()
    // Offset: 0x8D76CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsManager::$$c__DisplayClass67_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsManager::$$c__DisplayClass67_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsManager::$$c__DisplayClass67_0*, creationType>()));
    }
    // System.Void <AddSessionFavorite>b__0()
    // Offset: 0x8D76D4
    void $AddSessionFavorite$b__0();
    // System.Void <AddSessionFavorite>b__2(System.String sessionFavoriteId, VROSC.Session favoritedSession)
    // Offset: 0x8D7948
    void $AddSessionFavorite$b__2(::StringW sessionFavoriteId, ::VROSC::Session* favoritedSession);
    // System.Void <AddSessionFavorite>b__4(System.String userFavoriteId)
    // Offset: 0x8D7A9C
    void $AddSessionFavorite$b__4(::StringW userFavoriteId);
    // System.Void <AddSessionFavorite>b__6()
    // Offset: 0x8D7BF0
    void $AddSessionFavorite$b__6();
    // System.Void <AddSessionFavorite>b__5(VROSC.Error error)
    // Offset: 0x8D7CC8
    void $AddSessionFavorite$b__5(::VROSC::Error error);
    // System.Void <AddSessionFavorite>b__3(VROSC.Error error)
    // Offset: 0x8D7D80
    void $AddSessionFavorite$b__3(::VROSC::Error error);
    // System.Void <AddSessionFavorite>b__1(VROSC.Error error)
    // Offset: 0x8D7E38
    void $AddSessionFavorite$b__1(::VROSC::Error error);
  }; // VROSC.SessionsManager/VROSC.<>c__DisplayClass67_0
  #pragma pack(pop)
  static check_size<sizeof(SessionsManager::$$c__DisplayClass67_0), 80 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_SessionsManager_$$c__DisplayClass67_0SizeCheck;
  static_assert(sizeof(SessionsManager::$$c__DisplayClass67_0) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass67_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__0
// Il2CppName: <AddSessionFavorite>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass67_0::*)()>(&VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass67_0*), "<AddSessionFavorite>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__2
// Il2CppName: <AddSessionFavorite>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass67_0::*)(::StringW, ::VROSC::Session*)>(&VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__2)> {
  static const MethodInfo* get() {
    static auto* sessionFavoriteId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* favoritedSession = &::il2cpp_utils::GetClassFromName("VROSC", "Session")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass67_0*), "<AddSessionFavorite>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionFavoriteId, favoritedSession});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__4
// Il2CppName: <AddSessionFavorite>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass67_0::*)(::StringW)>(&VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__4)> {
  static const MethodInfo* get() {
    static auto* userFavoriteId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass67_0*), "<AddSessionFavorite>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userFavoriteId});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__6
// Il2CppName: <AddSessionFavorite>b__6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass67_0::*)()>(&VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass67_0*), "<AddSessionFavorite>b__6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__5
// Il2CppName: <AddSessionFavorite>b__5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass67_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__5)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass67_0*), "<AddSessionFavorite>b__5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__3
// Il2CppName: <AddSessionFavorite>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass67_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__3)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass67_0*), "<AddSessionFavorite>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__1
// Il2CppName: <AddSessionFavorite>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass67_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass67_0::$AddSessionFavorite$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass67_0*), "<AddSessionFavorite>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
