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
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: RSG
namespace RSG {
  // Forward declaring type: IPromise`1<PromisedT>
  template<typename PromisedT>
  class IPromise_1;
  // Forward declaring type: Promise`1<PromisedT>
  template<typename PromisedT>
  class Promise_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise::$$c__DisplayClass51_0_1, "RSG", "Promise/<>c__DisplayClass51_0`1");
// Type namespace: RSG
namespace RSG {
  // WARNING Size may be invalid!
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass51_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename ConvertedT>
  class Promise::$$c__DisplayClass51_0_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`1<RSG.IPromise`1<ConvertedT>> onResolved
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<::RSG::IPromise_1<ConvertedT>*>* onResolved;
    // Field size check
    static_assert(sizeof(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*) == 0x8);
    // public RSG.Promise`1<ConvertedT> resultPromise
    // Size: 0x8
    // Offset: 0x0
    ::RSG::Promise_1<ConvertedT>* resultPromise;
    // Field size check
    static_assert(sizeof(::RSG::Promise_1<ConvertedT>*) == 0x8);
    // public System.Func`2<System.Exception,RSG.IPromise`1<ConvertedT>> onRejected
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<::System::Exception*, ::RSG::IPromise_1<ConvertedT>*>* onRejected;
    // Field size check
    static_assert(sizeof(::System::Func_2<::System::Exception*, ::RSG::IPromise_1<ConvertedT>*>*) == 0x8);
    // public System.Action`1<System.Single> <>9__2
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<float>* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // public System.Action`1<ConvertedT> <>9__3
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<ConvertedT>* $$9__3;
    // Field size check
    static_assert(sizeof(::System::Action_1<ConvertedT>*) == 0x8);
    // public System.Action`1<System.Exception> <>9__4
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<::System::Exception*>* $$9__4;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Exception*>*) == 0x8);
    // public System.Action`1<ConvertedT> <>9__5
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<ConvertedT>* $$9__5;
    // Field size check
    static_assert(sizeof(::System::Action_1<ConvertedT>*) == 0x8);
    // public System.Action`1<System.Exception> <>9__6
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<::System::Exception*>* $$9__6;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Exception*>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Func`1<RSG.IPromise`1<ConvertedT>> onResolved
    [[deprecated]] ::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*& dyn_onResolved() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::dyn_onResolved");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "onResolved"))->offset;
      return *reinterpret_cast<::System::Func_1<::RSG::IPromise_1<ConvertedT>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public RSG.Promise`1<ConvertedT> resultPromise
    [[deprecated]] ::RSG::Promise_1<ConvertedT>*& dyn_resultPromise() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::dyn_resultPromise");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "resultPromise"))->offset;
      return *reinterpret_cast<::RSG::Promise_1<ConvertedT>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<System.Exception,RSG.IPromise`1<ConvertedT>> onRejected
    [[deprecated]] ::System::Func_2<::System::Exception*, ::RSG::IPromise_1<ConvertedT>*>*& dyn_onRejected() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::dyn_onRejected");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "onRejected"))->offset;
      return *reinterpret_cast<::System::Func_2<::System::Exception*, ::RSG::IPromise_1<ConvertedT>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<System.Single> <>9__2
    [[deprecated]] ::System::Action_1<float>*& dyn_$$9__2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::dyn_$$9__2");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>9__2"))->offset;
      return *reinterpret_cast<::System::Action_1<float>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<ConvertedT> <>9__3
    [[deprecated]] ::System::Action_1<ConvertedT>*& dyn_$$9__3() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::dyn_$$9__3");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>9__3"))->offset;
      return *reinterpret_cast<::System::Action_1<ConvertedT>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<System.Exception> <>9__4
    [[deprecated]] ::System::Action_1<::System::Exception*>*& dyn_$$9__4() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::dyn_$$9__4");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>9__4"))->offset;
      return *reinterpret_cast<::System::Action_1<::System::Exception*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<ConvertedT> <>9__5
    [[deprecated]] ::System::Action_1<ConvertedT>*& dyn_$$9__5() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::dyn_$$9__5");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>9__5"))->offset;
      return *reinterpret_cast<::System::Action_1<ConvertedT>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<System.Exception> <>9__6
    [[deprecated]] ::System::Action_1<::System::Exception*>*& dyn_$$9__6() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::dyn_$$9__6");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>9__6"))->offset;
      return *reinterpret_cast<::System::Action_1<::System::Exception*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void <Then>b__0()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Then$b__0() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::<Then>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Then>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // System.Void <Then>b__2(System.Single progress)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Then$b__2(float progress) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::<Then>b__2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Then>b__2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(progress)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, progress);
    }
    // System.Void <Then>b__3(ConvertedT chainedValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Then$b__3(ConvertedT chainedValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::<Then>b__3");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Then>b__3", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(chainedValue)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, chainedValue);
    }
    // System.Void <Then>b__4(System.Exception ex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Then$b__4(::System::Exception* ex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::<Then>b__4");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Then>b__4", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ex)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, ex);
    }
    // System.Void <Then>b__1(System.Exception ex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Then$b__1(::System::Exception* ex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::<Then>b__1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Then>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ex)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, ex);
    }
    // System.Void <Then>b__5(ConvertedT chainedValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Then$b__5(ConvertedT chainedValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::<Then>b__5");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Then>b__5", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(chainedValue)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, chainedValue);
    }
    // System.Void <Then>b__6(System.Exception callbackEx)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Then$b__6(::System::Exception* callbackEx) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::<Then>b__6");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Then>b__6", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callbackEx)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, callbackEx);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass51_0_1<ConvertedT>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass51_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass51_0_1<ConvertedT>*, creationType>()));
    }
  }; // RSG.Promise/RSG.<>c__DisplayClass51_0`1
  // Could not write size check! Type: RSG.Promise/RSG.<>c__DisplayClass51_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
