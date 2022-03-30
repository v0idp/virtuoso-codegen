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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CommunitySessionsDataController::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController::$$c__DisplayClass5_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass5_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CommunitySessionsDataController/VROSC.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CommunitySessionsDataController::$$c__DisplayClass5_0 : public ::Il2CppObject {
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
    // public VROSC.CommunitySessionsDataController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::CommunitySessionsDataController* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::CommunitySessionsDataController*) == 0x8);
    // public System.String sessionId
    // Size: 0x8
    // Offset: 0x18
    ::StringW sessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action onSuccess
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public VROSC.CommunitySessionsDataController <>4__this
    ::VROSC::CommunitySessionsDataController*& dyn_$$4__this();
    // Get instance field reference: public System.String sessionId
    ::StringW& dyn_sessionId();
    // Get instance field reference: public System.Action onSuccess
    ::System::Action*& dyn_onSuccess();
    // System.Void <RemoveSession>b__0()
    // Offset: 0x1360C64
    void $RemoveSession$b__0();
    // public System.Void .ctor()
    // Offset: 0x1360C5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommunitySessionsDataController::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CommunitySessionsDataController::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommunitySessionsDataController::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // VROSC.CommunitySessionsDataController/VROSC.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(CommunitySessionsDataController::$$c__DisplayClass5_0), 32 + sizeof(::System::Action*)> __VROSC_CommunitySessionsDataController_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(CommunitySessionsDataController::$$c__DisplayClass5_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CommunitySessionsDataController::$$c__DisplayClass5_0::$RemoveSession$b__0
// Il2CppName: <RemoveSession>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CommunitySessionsDataController::$$c__DisplayClass5_0::*)()>(&VROSC::CommunitySessionsDataController::$$c__DisplayClass5_0::$RemoveSession$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CommunitySessionsDataController::$$c__DisplayClass5_0*), "<RemoveSession>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CommunitySessionsDataController::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
