// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UserDataControllers
#include "VROSC/UserDataControllers.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
NEED_NO_BOX(::VROSC::UserDataControllers::$$c__DisplayClass64_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers::$$c__DisplayClass64_0*, "VROSC", "UserDataControllers/<>c__DisplayClass64_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UserDataControllers/VROSC.<>c__DisplayClass64_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserDataControllers::$$c__DisplayClass64_0 : public ::Il2CppObject {
    public:
    public:
    // public VROSC.UserDataControllers <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::UserDataControllers* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::UserDataControllers*) == 0x8);
    // public System.Action onSuccess
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action <>9__2
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__3
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::VROSC::Error>* $$9__3;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action <>9__4
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* $$9__4;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__5
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::VROSC::Error>* $$9__5;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    public:
    // Get instance field reference: public VROSC.UserDataControllers <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::UserDataControllers*& dyn_$$4__this();
    // Get instance field reference: public System.Action onSuccess
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onSuccess();
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.Action <>9__2
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_$$9__2();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__3
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_$$9__3();
    // Get instance field reference: public System.Action <>9__4
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_$$9__4();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__5
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_$$9__5();
    // public System.Void .ctor()
    // Offset: 0xE82478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserDataControllers::$$c__DisplayClass64_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UserDataControllers::$$c__DisplayClass64_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserDataControllers::$$c__DisplayClass64_0*, creationType>()));
    }
    // System.Void <LoadLocalData>b__0()
    // Offset: 0xE82480
    void $LoadLocalData$b__0();
    // System.Void <LoadLocalData>b__2()
    // Offset: 0xE825D4
    void $LoadLocalData$b__2();
    // System.Void <LoadLocalData>b__3(VROSC.Error error)
    // Offset: 0xE82604
    void $LoadLocalData$b__3(::VROSC::Error error);
    // System.Void <LoadLocalData>b__1(VROSC.Error error)
    // Offset: 0xE826AC
    void $LoadLocalData$b__1(::VROSC::Error error);
    // System.Void <LoadLocalData>b__4()
    // Offset: 0xE8280C
    void $LoadLocalData$b__4();
    // System.Void <LoadLocalData>b__5(VROSC.Error error2)
    // Offset: 0xE8283C
    void $LoadLocalData$b__5(::VROSC::Error error2);
  }; // VROSC.UserDataControllers/VROSC.<>c__DisplayClass64_0
  #pragma pack(pop)
  static check_size<sizeof(UserDataControllers::$$c__DisplayClass64_0), 64 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_UserDataControllers_$$c__DisplayClass64_0SizeCheck;
  static_assert(sizeof(UserDataControllers::$$c__DisplayClass64_0) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass64_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__0
// Il2CppName: <LoadLocalData>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass64_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass64_0*), "<LoadLocalData>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__2
// Il2CppName: <LoadLocalData>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass64_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass64_0*), "<LoadLocalData>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__3
// Il2CppName: <LoadLocalData>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass64_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__3)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass64_0*), "<LoadLocalData>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__1
// Il2CppName: <LoadLocalData>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass64_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass64_0*), "<LoadLocalData>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__4
// Il2CppName: <LoadLocalData>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass64_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass64_0*), "<LoadLocalData>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__5
// Il2CppName: <LoadLocalData>b__5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass64_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass64_0::$LoadLocalData$b__5)> {
  static const MethodInfo* get() {
    static auto* error2 = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass64_0*), "<LoadLocalData>b__5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error2});
  }
};
