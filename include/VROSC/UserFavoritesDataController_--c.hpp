// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UserFavoritesDataController
#include "VROSC/UserFavoritesDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
NEED_NO_BOX(::VROSC::UserFavoritesDataController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataController::$$c*, "VROSC", "UserFavoritesDataController/<>c");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UserFavoritesDataController/VROSC.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserFavoritesDataController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly VROSC.UserFavoritesDataController/VROSC.<>c <>9
    static ::VROSC::UserFavoritesDataController::$$c* _get_$$9();
    // Set static field: static public readonly VROSC.UserFavoritesDataController/VROSC.<>c <>9
    static void _set_$$9(::VROSC::UserFavoritesDataController::$$c* value);
    // Get static field: static public System.Func`2<System.Object,System.String> <>9__9_2
    static ::System::Func_2<::Il2CppObject*, ::StringW>* _get_$$9__9_2();
    // Set static field: static public System.Func`2<System.Object,System.String> <>9__9_2
    static void _set_$$9__9_2(::System::Func_2<::Il2CppObject*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x1413C64
    static void _cctor();
    // System.String <LoadCloudData>b__9_2(System.Object x)
    // Offset: 0x1413CCC
    ::StringW $LoadCloudData$b__9_2(::Il2CppObject* x);
    // public System.Void .ctor()
    // Offset: 0x1413CC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserFavoritesDataController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UserFavoritesDataController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserFavoritesDataController::$$c*, creationType>()));
    }
  }; // VROSC.UserFavoritesDataController/VROSC.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UserFavoritesDataController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::UserFavoritesDataController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserFavoritesDataController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserFavoritesDataController::$$c::$LoadCloudData$b__9_2
// Il2CppName: <LoadCloudData>b__9_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::UserFavoritesDataController::$$c::*)(::Il2CppObject*)>(&VROSC::UserFavoritesDataController::$$c::$LoadCloudData$b__9_2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserFavoritesDataController::$$c*), "<LoadCloudData>b__9_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: VROSC::UserFavoritesDataController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
