// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: RSG
namespace RSG {
  // Forward declaring type: IPromise
  class IPromise;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: RSG
namespace RSG {
  // Forward declaring type: IPromise`1<PromisedT>
  template<typename PromisedT>
  class IPromise_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::IPromise_1, "RSG", "IPromise`1");
// Type namespace: RSG
namespace RSG {
  // WARNING Size may be invalid!
  // Autogenerated type: RSG.IPromise`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename PromisedT>
  class IPromise_1 {
    public:
    // public System.Int32 get_Id()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Id() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::get_Id");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public RSG.IPromise`1<PromisedT> WithName(System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise_1<PromisedT>* WithName(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::WithName");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<PromisedT>*, false>(this, ___internal__method, name);
    }
    // public System.Void Done(System.Action`1<PromisedT> onResolved, System.Action`1<System.Exception> onRejected)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Done(::System::Action_1<PromisedT>* onResolved, ::System::Action_1<::System::Exception*>* onRejected) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Done");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, onResolved, onRejected);
    }
    // public System.Void Done(System.Action`1<PromisedT> onResolved)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Done(::System::Action_1<PromisedT>* onResolved) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Done");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, onResolved);
    }
    // public System.Void Done()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Done() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Done");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public RSG.IPromise Catch(System.Action`1<System.Exception> onRejected)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* Catch(::System::Action_1<::System::Exception*>* onRejected) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Catch");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, onRejected);
    }
    // public RSG.IPromise`1<PromisedT> Catch(System.Func`2<System.Exception,PromisedT> onRejected)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise_1<PromisedT>* Catch(::System::Func_2<::System::Exception*, PromisedT>* onRejected) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Catch");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<PromisedT>*, false>(this, ___internal__method, onRejected);
    }
    // public RSG.IPromise`1<ConvertedT> Then(System.Func`2<PromisedT,RSG.IPromise`1<ConvertedT>> onResolved)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ConvertedT>
    ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_2<PromisedT, ::RSG::IPromise_1<ConvertedT>*>* onResolved) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___generic__method, onResolved);
    }
    // public RSG.IPromise Then(System.Func`2<PromisedT,RSG.IPromise> onResolved)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* Then(::System::Func_2<PromisedT, ::RSG::IPromise*>* onResolved) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, onResolved);
    }
    // public RSG.IPromise Then(System.Action`1<PromisedT> onResolved)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* Then(::System::Action_1<PromisedT>* onResolved) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, onResolved);
    }
    // public RSG.IPromise`1<ConvertedT> Then(System.Func`2<PromisedT,RSG.IPromise`1<ConvertedT>> onResolved, System.Func`2<System.Exception,RSG.IPromise`1<ConvertedT>> onRejected)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ConvertedT>
    ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_2<PromisedT, ::RSG::IPromise_1<ConvertedT>*>* onResolved, ::System::Func_2<::System::Exception*, ::RSG::IPromise_1<ConvertedT>*>* onRejected) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___generic__method, onResolved, onRejected);
    }
    // public RSG.IPromise Then(System.Func`2<PromisedT,RSG.IPromise> onResolved, System.Action`1<System.Exception> onRejected)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* Then(::System::Func_2<PromisedT, ::RSG::IPromise*>* onResolved, ::System::Action_1<::System::Exception*>* onRejected) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, onResolved, onRejected);
    }
    // public RSG.IPromise Then(System.Action`1<PromisedT> onResolved, System.Action`1<System.Exception> onRejected)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* Then(::System::Action_1<PromisedT>* onResolved, ::System::Action_1<::System::Exception*>* onRejected) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, onResolved, onRejected);
    }
    // public RSG.IPromise`1<ConvertedT> Then(System.Func`2<PromisedT,RSG.IPromise`1<ConvertedT>> onResolved, System.Func`2<System.Exception,RSG.IPromise`1<ConvertedT>> onRejected, System.Action`1<System.Single> onProgress)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ConvertedT>
    ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_2<PromisedT, ::RSG::IPromise_1<ConvertedT>*>* onResolved, ::System::Func_2<::System::Exception*, ::RSG::IPromise_1<ConvertedT>*>* onRejected, ::System::Action_1<float>* onProgress) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___generic__method, onResolved, onRejected, onProgress);
    }
    // public RSG.IPromise Then(System.Func`2<PromisedT,RSG.IPromise> onResolved, System.Action`1<System.Exception> onRejected, System.Action`1<System.Single> onProgress)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* Then(::System::Func_2<PromisedT, ::RSG::IPromise*>* onResolved, ::System::Action_1<::System::Exception*>* onRejected, ::System::Action_1<float>* onProgress) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, onResolved, onRejected, onProgress);
    }
    // public RSG.IPromise Then(System.Action`1<PromisedT> onResolved, System.Action`1<System.Exception> onRejected, System.Action`1<System.Single> onProgress)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* Then(::System::Action_1<PromisedT>* onResolved, ::System::Action_1<::System::Exception*>* onRejected, ::System::Action_1<float>* onProgress) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, onResolved, onRejected, onProgress);
    }
    // public RSG.IPromise`1<ConvertedT> Then(System.Func`2<PromisedT,ConvertedT> transform)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ConvertedT>
    ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_2<PromisedT, ConvertedT>* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Then");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___generic__method, transform);
    }
    // public RSG.IPromise`1<System.Collections.Generic.IEnumerable`1<ConvertedT>> ThenAll(System.Func`2<PromisedT,System.Collections.Generic.IEnumerable`1<RSG.IPromise`1<ConvertedT>>> chain)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ConvertedT>
    ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* ThenAll(::System::Func_2<PromisedT, ::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>* chain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::ThenAll");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>*, false>(this, ___generic__method, chain);
    }
    // public RSG.IPromise ThenAll(System.Func`2<PromisedT,System.Collections.Generic.IEnumerable`1<RSG.IPromise>> chain)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* ThenAll(::System::Func_2<PromisedT, ::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* chain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::ThenAll");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, chain);
    }
    // public RSG.IPromise`1<ConvertedT> ThenRace(System.Func`2<PromisedT,System.Collections.Generic.IEnumerable`1<RSG.IPromise`1<ConvertedT>>> chain)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ConvertedT>
    ::RSG::IPromise_1<ConvertedT>* ThenRace(::System::Func_2<PromisedT, ::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>* chain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::ThenRace");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___generic__method, chain);
    }
    // public RSG.IPromise ThenRace(System.Func`2<PromisedT,System.Collections.Generic.IEnumerable`1<RSG.IPromise>> chain)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* ThenRace(::System::Func_2<PromisedT, ::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* chain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::ThenRace");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, chain);
    }
    // public RSG.IPromise`1<PromisedT> Finally(System.Action onComplete)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise_1<PromisedT>* Finally(::System::Action* onComplete) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Finally");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<PromisedT>*, false>(this, ___internal__method, onComplete);
    }
    // public RSG.IPromise ContinueWith(System.Func`1<RSG.IPromise> onResolved)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise* ContinueWith(::System::Func_1<::RSG::IPromise*>* onResolved) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::ContinueWith");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal__method, onResolved);
    }
    // public RSG.IPromise`1<ConvertedT> ContinueWith(System.Func`1<RSG.IPromise`1<ConvertedT>> onComplete)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ConvertedT>
    ::RSG::IPromise_1<ConvertedT>* ContinueWith(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>* onComplete) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::ContinueWith");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___generic__method, onComplete);
    }
    // public RSG.IPromise`1<PromisedT> Progress(System.Action`1<System.Single> onProgress)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RSG::IPromise_1<PromisedT>* Progress(::System::Action_1<float>* onProgress) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::IPromise_1::Progress");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::RSG::IPromise_1<PromisedT>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::RSG::IPromise_1<PromisedT>*, false>(this, ___internal__method, onProgress);
    }
  }; // RSG.IPromise`1
  // Could not write size check! Type: RSG.IPromise`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
