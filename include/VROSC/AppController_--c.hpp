// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AppController
#include "VROSC/AppController.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AppController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppController::$$c*, "VROSC", "AppController/<>c");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AppController/VROSC.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AppController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly VROSC.AppController/VROSC.<>c <>9
    static ::VROSC::AppController::$$c* _get_$$9();
    // Set static field: static public readonly VROSC.AppController/VROSC.<>c <>9
    static void _set_$$9(::VROSC::AppController::$$c* value);
    // Get static field: static public System.Func`1<System.Boolean> <>9__25_7
    static ::System::Func_1<bool>* _get_$$9__25_7();
    // Set static field: static public System.Func`1<System.Boolean> <>9__25_7
    static void _set_$$9__25_7(::System::Func_1<bool>* value);
    // Get static field: static public System.Func`1<System.Boolean> <>9__25_8
    static ::System::Func_1<bool>* _get_$$9__25_8();
    // Set static field: static public System.Func`1<System.Boolean> <>9__25_8
    static void _set_$$9__25_8(::System::Func_1<bool>* value);
    // Get static field: static public System.Func`1<System.Boolean> <>9__25_9
    static ::System::Func_1<bool>* _get_$$9__25_9();
    // Set static field: static public System.Func`1<System.Boolean> <>9__25_9
    static void _set_$$9__25_9(::System::Func_1<bool>* value);
    // Get static field: static public System.Func`1<System.Boolean> <>9__25_11
    static ::System::Func_1<bool>* _get_$$9__25_11();
    // Set static field: static public System.Func`1<System.Boolean> <>9__25_11
    static void _set_$$9__25_11(::System::Func_1<bool>* value);
    // Get static field: static public System.Func`1<System.Boolean> <>9__25_12
    static ::System::Func_1<bool>* _get_$$9__25_12();
    // Set static field: static public System.Func`1<System.Boolean> <>9__25_12
    static void _set_$$9__25_12(::System::Func_1<bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x956664
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x9566C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AppController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppController::$$c*, creationType>()));
    }
    // System.Boolean <Awake>b__25_7()
    // Offset: 0x9566CC
    bool $Awake$b__25_7();
    // System.Boolean <Awake>b__25_8()
    // Offset: 0x9566D4
    bool $Awake$b__25_8();
    // System.Boolean <Awake>b__25_9()
    // Offset: 0x95672C
    bool $Awake$b__25_9();
    // System.Boolean <Awake>b__25_11()
    // Offset: 0x956784
    bool $Awake$b__25_11();
    // System.Boolean <Awake>b__25_12()
    // Offset: 0x9567DC
    bool $Awake$b__25_12();
  }; // VROSC.AppController/VROSC.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AppController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::AppController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AppController::$$c::$Awake$b__25_7
// Il2CppName: <Awake>b__25_7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppController::$$c::*)()>(&VROSC::AppController::$$c::$Awake$b__25_7)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppController::$$c*), "<Awake>b__25_7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppController::$$c::$Awake$b__25_8
// Il2CppName: <Awake>b__25_8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppController::$$c::*)()>(&VROSC::AppController::$$c::$Awake$b__25_8)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppController::$$c*), "<Awake>b__25_8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppController::$$c::$Awake$b__25_9
// Il2CppName: <Awake>b__25_9
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppController::$$c::*)()>(&VROSC::AppController::$$c::$Awake$b__25_9)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppController::$$c*), "<Awake>b__25_9", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppController::$$c::$Awake$b__25_11
// Il2CppName: <Awake>b__25_11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppController::$$c::*)()>(&VROSC::AppController::$$c::$Awake$b__25_11)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppController::$$c*), "<Awake>b__25_11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppController::$$c::$Awake$b__25_12
// Il2CppName: <Awake>b__25_12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppController::$$c::*)()>(&VROSC::AppController::$$c::$Awake$b__25_12)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppController::$$c*), "<Awake>b__25_12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
