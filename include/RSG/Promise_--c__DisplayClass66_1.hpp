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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass66_1);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass66_1*, "RSG", "Promise/<>c__DisplayClass66_1");
// Type namespace: RSG
namespace RSG {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass66_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass66_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: index and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public RSG.Promise/RSG.<>c__DisplayClass66_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::RSG::Promise::$$c__DisplayClass66_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::RSG::Promise::$$c__DisplayClass66_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public RSG.Promise/RSG.<>c__DisplayClass66_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::RSG::Promise::$$c__DisplayClass66_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x8CF5A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass66_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass66_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass66_1*, creationType>()));
    }
    // System.Void <Race>b__1(System.Single v)
    // Offset: 0x8CF600
    void $Race$b__1(float v);
  }; // RSG.Promise/RSG.<>c__DisplayClass66_1
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass66_1), 24 + sizeof(::RSG::Promise::$$c__DisplayClass66_0*)> __RSG_Promise_$$c__DisplayClass66_1SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass66_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass66_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass66_1::$Race$b__1
// Il2CppName: <Race>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass66_1::*)(float)>(&RSG::Promise::$$c__DisplayClass66_1::$Race$b__1)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass66_1*), "<Race>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
