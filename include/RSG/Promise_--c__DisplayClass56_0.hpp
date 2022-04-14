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
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: RSG
namespace RSG {
  // Forward declaring type: IPromise
  class IPromise;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass56_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass56_0*, "RSG", "Promise/<>c__DisplayClass56_0");
// Type namespace: RSG
namespace RSG {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass56_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass56_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`1<System.Collections.Generic.IEnumerable`1<RSG.IPromise>> chain
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* chain;
    // Field size check
    static_assert(sizeof(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*
    constexpr operator ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*() const noexcept {
      return chain;
    }
    // Get instance field reference: public System.Func`1<System.Collections.Generic.IEnumerable`1<RSG.IPromise>> chain
    [[deprecated]] ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*& dyn_chain();
    // RSG.IPromise <ThenAll>b__0()
    // Offset: 0x8CE8C4
    ::RSG::IPromise* $ThenAll$b__0();
    // public System.Void .ctor()
    // Offset: 0x8CE8BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass56_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass56_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass56_0*, creationType>()));
    }
  }; // RSG.Promise/RSG.<>c__DisplayClass56_0
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass56_0), 16 + sizeof(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*)> __RSG_Promise_$$c__DisplayClass56_0SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass56_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass56_0::$ThenAll$b__0
// Il2CppName: <ThenAll>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (RSG::Promise::$$c__DisplayClass56_0::*)()>(&RSG::Promise::$$c__DisplayClass56_0::$ThenAll$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass56_0*), "<ThenAll>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass56_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
