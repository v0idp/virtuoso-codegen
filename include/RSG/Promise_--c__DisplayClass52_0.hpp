// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RSG.Promise
#include "RSG/Promise.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: RSG
namespace RSG {
  // Forward declaring type: IPromise
  class IPromise;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass52_0*, "RSG", "Promise/<>c__DisplayClass52_0");
// Type namespace: RSG
namespace RSG {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass52_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass52_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`1<RSG.IPromise> onResolved
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_1<::RSG::IPromise*>* onResolved;
    // Field size check
    static_assert(sizeof(::System::Func_1<::RSG::IPromise*>*) == 0x8);
    // public RSG.Promise resultPromise
    // Size: 0x8
    // Offset: 0x18
    ::RSG::Promise* resultPromise;
    // Field size check
    static_assert(sizeof(::RSG::Promise*) == 0x8);
    // public System.Action`1<System.Exception> onRejected
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::System::Exception*>* onRejected;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Exception*>*) == 0x8);
    // public System.Action`1<System.Single> <>9__2
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<float>* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // public System.Action <>9__3
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* $$9__3;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<System.Exception> <>9__4
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::System::Exception*>* $$9__4;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Exception*>*) == 0x8);
    public:
    // Get instance field reference: public System.Func`1<RSG.IPromise> onResolved
    [[deprecated("Use field access instead!")]] ::System::Func_1<::RSG::IPromise*>*& dyn_onResolved();
    // Get instance field reference: public RSG.Promise resultPromise
    [[deprecated("Use field access instead!")]] ::RSG::Promise*& dyn_resultPromise();
    // Get instance field reference: public System.Action`1<System.Exception> onRejected
    [[deprecated("Use field access instead!")]] ::System::Action_1<::System::Exception*>*& dyn_onRejected();
    // Get instance field reference: public System.Action`1<System.Single> <>9__2
    [[deprecated("Use field access instead!")]] ::System::Action_1<float>*& dyn_$$9__2();
    // Get instance field reference: public System.Action <>9__3
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_$$9__3();
    // Get instance field reference: public System.Action`1<System.Exception> <>9__4
    [[deprecated("Use field access instead!")]] ::System::Action_1<::System::Exception*>*& dyn_$$9__4();
    // public System.Void .ctor()
    // Offset: 0x8CE47C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass52_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass52_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass52_0*, creationType>()));
    }
    // System.Void <Then>b__0()
    // Offset: 0x8CE484
    void $Then$b__0();
    // System.Void <Then>b__2(System.Single progress)
    // Offset: 0x8CE718
    void $Then$b__2(float progress);
    // System.Void <Then>b__3()
    // Offset: 0x8CE734
    void $Then$b__3();
    // System.Void <Then>b__4(System.Exception ex)
    // Offset: 0x8CE750
    void $Then$b__4(::System::Exception* ex);
    // System.Void <Then>b__1(System.Exception ex)
    // Offset: 0x8CE76C
    void $Then$b__1(::System::Exception* ex);
  }; // RSG.Promise/RSG.<>c__DisplayClass52_0
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass52_0), 56 + sizeof(::System::Action_1<::System::Exception*>*)> __RSG_Promise_$$c__DisplayClass52_0SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass52_0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass52_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass52_0::$Then$b__0
// Il2CppName: <Then>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass52_0::*)()>(&RSG::Promise::$$c__DisplayClass52_0::$Then$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass52_0*), "<Then>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass52_0::$Then$b__2
// Il2CppName: <Then>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass52_0::*)(float)>(&RSG::Promise::$$c__DisplayClass52_0::$Then$b__2)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass52_0*), "<Then>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass52_0::$Then$b__3
// Il2CppName: <Then>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass52_0::*)()>(&RSG::Promise::$$c__DisplayClass52_0::$Then$b__3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass52_0*), "<Then>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass52_0::$Then$b__4
// Il2CppName: <Then>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass52_0::*)(::System::Exception*)>(&RSG::Promise::$$c__DisplayClass52_0::$Then$b__4)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass52_0*), "<Then>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass52_0::$Then$b__1
// Il2CppName: <Then>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass52_0::*)(::System::Exception*)>(&RSG::Promise::$$c__DisplayClass52_0::$Then$b__1)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass52_0*), "<Then>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
