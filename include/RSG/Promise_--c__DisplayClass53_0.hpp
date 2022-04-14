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
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass53_0*, "RSG", "Promise/<>c__DisplayClass53_0");
// Type namespace: RSG
namespace RSG {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass53_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass53_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action onResolved
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* onResolved;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
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
    public:
    // Get instance field reference: public System.Action onResolved
    [[deprecated]] ::System::Action*& dyn_onResolved();
    // Get instance field reference: public RSG.Promise resultPromise
    [[deprecated]] ::RSG::Promise*& dyn_resultPromise();
    // Get instance field reference: public System.Action`1<System.Exception> onRejected
    [[deprecated]] ::System::Action_1<::System::Exception*>*& dyn_onRejected();
    // System.Void <Then>b__0()
    // Offset: 0x8CE7EC
    void $Then$b__0();
    // System.Void <Then>b__1(System.Exception ex)
    // Offset: 0x8CE828
    void $Then$b__1(::System::Exception* ex);
    // public System.Void .ctor()
    // Offset: 0x8CE7E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass53_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass53_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass53_0*, creationType>()));
    }
  }; // RSG.Promise/RSG.<>c__DisplayClass53_0
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass53_0), 32 + sizeof(::System::Action_1<::System::Exception*>*)> __RSG_Promise_$$c__DisplayClass53_0SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass53_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass53_0::$Then$b__0
// Il2CppName: <Then>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass53_0::*)()>(&RSG::Promise::$$c__DisplayClass53_0::$Then$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass53_0*), "<Then>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass53_0::$Then$b__1
// Il2CppName: <Then>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass53_0::*)(::System::Exception*)>(&RSG::Promise::$$c__DisplayClass53_0::$Then$b__1)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass53_0*), "<Then>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass53_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
