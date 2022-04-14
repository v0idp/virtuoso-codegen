// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoadLocalUserDataState
#include "VROSC/LoadLocalUserDataState.hpp"
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
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoadLocalUserDataState::$$c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoadLocalUserDataState::$$c*, "VROSC", "LoadLocalUserDataState/<>c");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoadLocalUserDataState/VROSC.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LoadLocalUserDataState::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly VROSC.LoadLocalUserDataState/VROSC.<>c <>9
    static ::VROSC::LoadLocalUserDataState::$$c* _get_$$9();
    // Set static field: static public readonly VROSC.LoadLocalUserDataState/VROSC.<>c <>9
    static void _set_$$9(::VROSC::LoadLocalUserDataState::$$c* value);
    // Get static field: static public System.Action`1<VROSC.Error> <>9__3_1
    static ::System::Action_1<::VROSC::Error>* _get_$$9__3_1();
    // Set static field: static public System.Action`1<VROSC.Error> <>9__3_1
    static void _set_$$9__3_1(::System::Action_1<::VROSC::Error>* value);
    // static private System.Void .cctor()
    // Offset: 0x195C878
    static void _cctor();
    // System.Void <OnEnter>b__3_1(VROSC.Error error)
    // Offset: 0x195C8E0
    void $OnEnter$b__3_1(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x195C8D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadLocalUserDataState::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoadLocalUserDataState::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadLocalUserDataState::$$c*, creationType>()));
    }
  }; // VROSC.LoadLocalUserDataState/VROSC.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoadLocalUserDataState::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::LoadLocalUserDataState::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoadLocalUserDataState::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoadLocalUserDataState::$$c::$OnEnter$b__3_1
// Il2CppName: <OnEnter>b__3_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoadLocalUserDataState::$$c::*)(::VROSC::Error)>(&VROSC::LoadLocalUserDataState::$$c::$OnEnter$b__3_1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoadLocalUserDataState::$$c*), "<OnEnter>b__3_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::LoadLocalUserDataState::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
