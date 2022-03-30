// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.CommunitySessionsDataController
#include "VROSC/CommunitySessionsDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Session
  class Session;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CommunitySessionsDataController::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController::$$c__DisplayClass10_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass10_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CommunitySessionsDataController/VROSC.<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CommunitySessionsDataController::$$c__DisplayClass10_0 : public ::Il2CppObject {
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
    // public VROSC.Session session
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::Session* session;
    // Field size check
    static_assert(sizeof(::VROSC::Session*) == 0x8);
    // public System.Action`1<System.String> onSuccess
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::StringW>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: public VROSC.Session session
    ::VROSC::Session*& dyn_session();
    // Get instance field reference: public System.Action`1<System.String> onSuccess
    ::System::Action_1<::StringW>*& dyn_onSuccess();
    // System.Void <AddSessionDownload>b__0(System.String id)
    // Offset: 0x135F83C
    void $AddSessionDownload$b__0(::StringW id);
    // public System.Void .ctor()
    // Offset: 0x135F834
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommunitySessionsDataController::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CommunitySessionsDataController::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommunitySessionsDataController::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // VROSC.CommunitySessionsDataController/VROSC.<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(CommunitySessionsDataController::$$c__DisplayClass10_0), 24 + sizeof(::System::Action_1<::StringW>*)> __VROSC_CommunitySessionsDataController_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(CommunitySessionsDataController::$$c__DisplayClass10_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CommunitySessionsDataController::$$c__DisplayClass10_0::$AddSessionDownload$b__0
// Il2CppName: <AddSessionDownload>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CommunitySessionsDataController::$$c__DisplayClass10_0::*)(::StringW)>(&VROSC::CommunitySessionsDataController::$$c__DisplayClass10_0::$AddSessionDownload$b__0)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CommunitySessionsDataController::$$c__DisplayClass10_0*), "<AddSessionDownload>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VROSC::CommunitySessionsDataController::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
