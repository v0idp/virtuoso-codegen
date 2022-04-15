// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SaveLoadManager
#include "VROSC/SaveLoadManager.hpp"
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
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SaveLoadManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager::$$c*, "VROSC", "SaveLoadManager/<>c");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveLoadManager/VROSC.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SaveLoadManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly VROSC.SaveLoadManager/VROSC.<>c <>9
    static ::VROSC::SaveLoadManager::$$c* _get_$$9();
    // Set static field: static public readonly VROSC.SaveLoadManager/VROSC.<>c <>9
    static void _set_$$9(::VROSC::SaveLoadManager::$$c* value);
    // Get static field: static public System.Action <>9__23_0
    static ::System::Action* _get_$$9__23_0();
    // Set static field: static public System.Action <>9__23_0
    static void _set_$$9__23_0(::System::Action* value);
    // Get static field: static public System.Action`1<VROSC.Error> <>9__23_1
    static ::System::Action_1<::VROSC::Error>* _get_$$9__23_1();
    // Set static field: static public System.Action`1<VROSC.Error> <>9__23_1
    static void _set_$$9__23_1(::System::Action_1<::VROSC::Error>* value);
    // static private System.Void .cctor()
    // Offset: 0x8D06D0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x8D0730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveLoadManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SaveLoadManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveLoadManager::$$c*, creationType>()));
    }
    // System.Void <LoadDefaultSession>b__23_0()
    // Offset: 0x8D0738
    void $LoadDefaultSession$b__23_0();
    // System.Void <LoadDefaultSession>b__23_1(VROSC.Error error)
    // Offset: 0x8D07C8
    void $LoadDefaultSession$b__23_1(::VROSC::Error error);
  }; // VROSC.SaveLoadManager/VROSC.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::SaveLoadManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c::$LoadDefaultSession$b__23_0
// Il2CppName: <LoadDefaultSession>b__23_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c::*)()>(&VROSC::SaveLoadManager::$$c::$LoadDefaultSession$b__23_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c*), "<LoadDefaultSession>b__23_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c::$LoadDefaultSession$b__23_1
// Il2CppName: <LoadDefaultSession>b__23_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c::*)(::VROSC::Error)>(&VROSC::SaveLoadManager::$$c::$LoadDefaultSession$b__23_1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c*), "<LoadDefaultSession>b__23_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
