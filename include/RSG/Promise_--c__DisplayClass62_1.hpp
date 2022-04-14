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
// Forward declaring namespace: RSG
namespace RSG {
  // Forward declaring type: IPromise
  class IPromise;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass62_1);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass62_1*, "RSG", "Promise/<>c__DisplayClass62_1");
// Type namespace: RSG
namespace RSG {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass62_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass62_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 itemSequence
    // Size: 0x4
    // Offset: 0x10
    int itemSequence;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: itemSequence and: fn
    char __padding0[0x4] = {};
    // public System.Func`1<RSG.IPromise> fn
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_1<::RSG::IPromise*>* fn;
    // Field size check
    static_assert(sizeof(::System::Func_1<::RSG::IPromise*>*) == 0x8);
    // public RSG.Promise/RSG.<>c__DisplayClass62_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x20
    ::RSG::Promise::$$c__DisplayClass62_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::RSG::Promise::$$c__DisplayClass62_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 itemSequence
    [[deprecated]] int& dyn_itemSequence();
    // Get instance field reference: public System.Func`1<RSG.IPromise> fn
    [[deprecated]] ::System::Func_1<::RSG::IPromise*>*& dyn_fn();
    // Get instance field reference: public RSG.Promise/RSG.<>c__DisplayClass62_0 CS$<>8__locals1
    [[deprecated]] ::RSG::Promise::$$c__DisplayClass62_0*& dyn_CS$$$8__locals1();
    // RSG.IPromise <Sequence>b__2()
    // Offset: 0x8CF0E4
    ::RSG::IPromise* $Sequence$b__2();
    // System.Void <Sequence>b__3(System.Single v)
    // Offset: 0x8CF16C
    void $Sequence$b__3(float v);
    // public System.Void .ctor()
    // Offset: 0x8CF0C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass62_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass62_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass62_1*, creationType>()));
    }
  }; // RSG.Promise/RSG.<>c__DisplayClass62_1
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass62_1), 32 + sizeof(::RSG::Promise::$$c__DisplayClass62_0*)> __RSG_Promise_$$c__DisplayClass62_1SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass62_1) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass62_1::$Sequence$b__2
// Il2CppName: <Sequence>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (RSG::Promise::$$c__DisplayClass62_1::*)()>(&RSG::Promise::$$c__DisplayClass62_1::$Sequence$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass62_1*), "<Sequence>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass62_1::$Sequence$b__3
// Il2CppName: <Sequence>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass62_1::*)(float)>(&RSG::Promise::$$c__DisplayClass62_1::$Sequence$b__3)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass62_1*), "<Sequence>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass62_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
