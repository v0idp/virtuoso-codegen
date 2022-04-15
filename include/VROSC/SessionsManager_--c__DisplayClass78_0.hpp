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
NEED_NO_BOX(::VROSC::SessionsManager::$$c__DisplayClass78_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager::$$c__DisplayClass78_0*, "VROSC", "SessionsManager/<>c__DisplayClass78_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsManager/VROSC.<>c__DisplayClass78_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsManager::$$c__DisplayClass78_0 : public ::Il2CppObject {
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
    public:
    // Get instance field reference: public VROSC.SessionsManager <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::SessionsManager*& dyn_$$4__this();
    // Get instance field reference: public System.String sessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sessionId();
    // public System.Void .ctor()
    // Offset: 0x8D94B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsManager::$$c__DisplayClass78_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsManager::$$c__DisplayClass78_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsManager::$$c__DisplayClass78_0*, creationType>()));
    }
    // System.Void <SaveSessionSuccess>b__0(System.String id)
    // Offset: 0x8D94BC
    void $SaveSessionSuccess$b__0(::StringW id);
    // System.Void <SaveSessionSuccess>b__1(VROSC.Error error)
    // Offset: 0x8D9590
    void $SaveSessionSuccess$b__1(::VROSC::Error error);
    // System.Void <SaveSessionSuccess>b__2(System.String id)
    // Offset: 0x8D9620
    void $SaveSessionSuccess$b__2(::StringW id);
    // System.Void <SaveSessionSuccess>b__3(VROSC.Error error)
    // Offset: 0x8D96F4
    void $SaveSessionSuccess$b__3(::VROSC::Error error);
    // System.Void <SaveSessionSuccess>b__4()
    // Offset: 0x8D9784
    void $SaveSessionSuccess$b__4();
    // System.Void <SaveSessionSuccess>b__5(VROSC.Error error)
    // Offset: 0x8D9858
    void $SaveSessionSuccess$b__5(::VROSC::Error error);
  }; // VROSC.SessionsManager/VROSC.<>c__DisplayClass78_0
  #pragma pack(pop)
  static check_size<sizeof(SessionsManager::$$c__DisplayClass78_0), 24 + sizeof(::StringW)> __VROSC_SessionsManager_$$c__DisplayClass78_0SizeCheck;
  static_assert(sizeof(SessionsManager::$$c__DisplayClass78_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass78_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__0
// Il2CppName: <SaveSessionSuccess>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass78_0::*)(::StringW)>(&VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__0)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass78_0*), "<SaveSessionSuccess>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__1
// Il2CppName: <SaveSessionSuccess>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass78_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass78_0*), "<SaveSessionSuccess>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__2
// Il2CppName: <SaveSessionSuccess>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass78_0::*)(::StringW)>(&VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__2)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass78_0*), "<SaveSessionSuccess>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__3
// Il2CppName: <SaveSessionSuccess>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass78_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__3)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass78_0*), "<SaveSessionSuccess>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__4
// Il2CppName: <SaveSessionSuccess>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass78_0::*)()>(&VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass78_0*), "<SaveSessionSuccess>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__5
// Il2CppName: <SaveSessionSuccess>b__5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass78_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass78_0::$SaveSessionSuccess$b__5)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass78_0*), "<SaveSessionSuccess>b__5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
