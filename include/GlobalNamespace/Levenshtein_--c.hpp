// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Levenshtein
#include "GlobalNamespace/Levenshtein.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
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
NEED_NO_BOX(::GlobalNamespace::Levenshtein::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Levenshtein::$$c*, "", "Levenshtein/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Levenshtein/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Levenshtein::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Levenshtein/<>c <>9
    static ::GlobalNamespace::Levenshtein::$$c* _get_$$9();
    // Set static field: static public readonly Levenshtein/<>c <>9
    static void _set_$$9(::GlobalNamespace::Levenshtein::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Int32> <>9__10_0
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int, int>, int>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Int32> <>9__10_0
    static void _set_$$9__10_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int, int>, int>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Int32> <>9__10_1
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int, int>, int>* _get_$$9__10_1();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Int32> <>9__10_1
    static void _set_$$9__10_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int, int>, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x13D4598
    static void _cctor();
    // System.Int32 <RunAutoComplete>b__10_0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> kp)
    // Offset: 0x13D4600
    int $RunAutoComplete$b__10_0(::System::Collections::Generic::KeyValuePair_2<int, int> kp);
    // System.Int32 <RunAutoComplete>b__10_1(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> kp)
    // Offset: 0x13D4640
    int $RunAutoComplete$b__10_1(::System::Collections::Generic::KeyValuePair_2<int, int> kp);
    // public System.Void .ctor()
    // Offset: 0x13D45F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Levenshtein::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Levenshtein::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Levenshtein::$$c*, creationType>()));
    }
  }; // Levenshtein/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Levenshtein::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::Levenshtein::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Levenshtein::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Levenshtein::$$c::$RunAutoComplete$b__10_0
// Il2CppName: <RunAutoComplete>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Levenshtein::$$c::*)(::System::Collections::Generic::KeyValuePair_2<int, int>)>(&GlobalNamespace::Levenshtein::$$c::$RunAutoComplete$b__10_0)> {
  static const MethodInfo* get() {
    static auto* kp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Levenshtein::$$c*), "<RunAutoComplete>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kp});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Levenshtein::$$c::$RunAutoComplete$b__10_1
// Il2CppName: <RunAutoComplete>b__10_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Levenshtein::$$c::*)(::System::Collections::Generic::KeyValuePair_2<int, int>)>(&GlobalNamespace::Levenshtein::$$c::$RunAutoComplete$b__10_1)> {
  static const MethodInfo* get() {
    static auto* kp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Levenshtein::$$c*), "<RunAutoComplete>b__10_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kp});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Levenshtein::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!