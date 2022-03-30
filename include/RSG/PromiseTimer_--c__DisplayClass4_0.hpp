// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RSG.PromiseTimer
#include "RSG/PromiseTimer.hpp"
// Including type: RSG.TimeData
#include "RSG/TimeData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::PromiseTimer::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::PromiseTimer::$$c__DisplayClass4_0*, "RSG", "PromiseTimer/<>c__DisplayClass4_0");
// Type namespace: RSG
namespace RSG {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RSG.PromiseTimer/RSG.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PromiseTimer::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Func`2<RSG.TimeData,System.Boolean> predicate
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_2<::RSG::TimeData, bool>* predicate;
    // Field size check
    static_assert(sizeof(::System::Func_2<::RSG::TimeData, bool>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_2<::RSG::TimeData, bool>*
    constexpr operator ::System::Func_2<::RSG::TimeData, bool>*() const noexcept {
      return predicate;
    }
    // Get instance field reference: public System.Func`2<RSG.TimeData,System.Boolean> predicate
    ::System::Func_2<::RSG::TimeData, bool>*& dyn_predicate();
    // System.Boolean <WaitWhile>b__0(RSG.TimeData t)
    // Offset: 0x1344880
    bool $WaitWhile$b__0(::RSG::TimeData t);
    // public System.Void .ctor()
    // Offset: 0x1344878
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromiseTimer::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::PromiseTimer::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromiseTimer::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // RSG.PromiseTimer/RSG.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(PromiseTimer::$$c__DisplayClass4_0), 16 + sizeof(::System::Func_2<::RSG::TimeData, bool>*)> __RSG_PromiseTimer_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(PromiseTimer::$$c__DisplayClass4_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::PromiseTimer::$$c__DisplayClass4_0::$WaitWhile$b__0
// Il2CppName: <WaitWhile>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RSG::PromiseTimer::$$c__DisplayClass4_0::*)(::RSG::TimeData)>(&RSG::PromiseTimer::$$c__DisplayClass4_0::$WaitWhile$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("RSG", "TimeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::PromiseTimer::$$c__DisplayClass4_0*), "<WaitWhile>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: RSG::PromiseTimer::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
