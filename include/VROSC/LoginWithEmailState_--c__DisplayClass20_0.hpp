// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoginWithEmailState
#include "VROSC/LoginWithEmailState.hpp"
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
NEED_NO_BOX(::VROSC::LoginWithEmailState::$$c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginWithEmailState::$$c__DisplayClass20_0*, "VROSC", "LoginWithEmailState/<>c__DisplayClass20_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoginWithEmailState/VROSC.<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LoginWithEmailState::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    public:
    // public VROSC.LoginWithEmailState <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::LoginWithEmailState* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::LoginWithEmailState*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x18
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean isEmailVerified
    // Size: 0x1
    // Offset: 0x20
    bool isEmailVerified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEmailVerified and: $$9__3
    char __padding2[0x7] = {};
    // public System.Action <>9__3
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* $$9__3;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__4
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::VROSC::Error>* $$9__4;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    public:
    // Get instance field reference: public VROSC.LoginWithEmailState <>4__this
    [[deprecated]] ::VROSC::LoginWithEmailState*& dyn_$$4__this();
    // Get instance field reference: public System.String userId
    [[deprecated]] ::StringW& dyn_userId();
    // Get instance field reference: public System.Boolean isEmailVerified
    [[deprecated]] bool& dyn_isEmailVerified();
    // Get instance field reference: public System.Action <>9__3
    [[deprecated]] ::System::Action*& dyn_$$9__3();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__4
    [[deprecated]] ::System::Action_1<::VROSC::Error>*& dyn_$$9__4();
    // System.Void <FirebaseLoginUserWithEmailSuccess>b__0()
    // Offset: 0x195D060
    void $FirebaseLoginUserWithEmailSuccess$b__0();
    // System.Void <FirebaseLoginUserWithEmailSuccess>b__1(VROSC.Error error)
    // Offset: 0x195D2B4
    void $FirebaseLoginUserWithEmailSuccess$b__1(::VROSC::Error error);
    // System.Void <FirebaseLoginUserWithEmailSuccess>b__3()
    // Offset: 0x195D5D8
    void $FirebaseLoginUserWithEmailSuccess$b__3();
    // System.Void <FirebaseLoginUserWithEmailSuccess>b__4(VROSC.Error error2)
    // Offset: 0x195D60C
    void $FirebaseLoginUserWithEmailSuccess$b__4(::VROSC::Error error2);
    // public System.Void .ctor()
    // Offset: 0x195D058
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginWithEmailState::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoginWithEmailState::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginWithEmailState::$$c__DisplayClass20_0*, creationType>()));
    }
  }; // VROSC.LoginWithEmailState/VROSC.<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(LoginWithEmailState::$$c__DisplayClass20_0), 48 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_LoginWithEmailState_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(LoginWithEmailState::$$c__DisplayClass20_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoginWithEmailState::$$c__DisplayClass20_0::$FirebaseLoginUserWithEmailSuccess$b__0
// Il2CppName: <FirebaseLoginUserWithEmailSuccess>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginWithEmailState::$$c__DisplayClass20_0::*)()>(&VROSC::LoginWithEmailState::$$c__DisplayClass20_0::$FirebaseLoginUserWithEmailSuccess$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginWithEmailState::$$c__DisplayClass20_0*), "<FirebaseLoginUserWithEmailSuccess>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginWithEmailState::$$c__DisplayClass20_0::$FirebaseLoginUserWithEmailSuccess$b__1
// Il2CppName: <FirebaseLoginUserWithEmailSuccess>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginWithEmailState::$$c__DisplayClass20_0::*)(::VROSC::Error)>(&VROSC::LoginWithEmailState::$$c__DisplayClass20_0::$FirebaseLoginUserWithEmailSuccess$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginWithEmailState::$$c__DisplayClass20_0*), "<FirebaseLoginUserWithEmailSuccess>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::LoginWithEmailState::$$c__DisplayClass20_0::$FirebaseLoginUserWithEmailSuccess$b__3
// Il2CppName: <FirebaseLoginUserWithEmailSuccess>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginWithEmailState::$$c__DisplayClass20_0::*)()>(&VROSC::LoginWithEmailState::$$c__DisplayClass20_0::$FirebaseLoginUserWithEmailSuccess$b__3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginWithEmailState::$$c__DisplayClass20_0*), "<FirebaseLoginUserWithEmailSuccess>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginWithEmailState::$$c__DisplayClass20_0::$FirebaseLoginUserWithEmailSuccess$b__4
// Il2CppName: <FirebaseLoginUserWithEmailSuccess>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginWithEmailState::$$c__DisplayClass20_0::*)(::VROSC::Error)>(&VROSC::LoginWithEmailState::$$c__DisplayClass20_0::$FirebaseLoginUserWithEmailSuccess$b__4)> {
  static const MethodInfo* get() {
    static auto* error2 = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginWithEmailState::$$c__DisplayClass20_0*), "<FirebaseLoginUserWithEmailSuccess>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error2});
  }
};
// Writing MetadataGetter for method: VROSC::LoginWithEmailState::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
