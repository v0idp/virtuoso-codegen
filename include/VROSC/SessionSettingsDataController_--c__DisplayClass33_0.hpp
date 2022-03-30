// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionSettingsDataController
#include "VROSC/SessionSettingsDataController.hpp"
// Including type: VROSC.Scale
#include "VROSC/Scale.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionSettingsDataController::$$c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionSettingsDataController::$$c__DisplayClass33_0*, "VROSC", "SessionSettingsDataController/<>c__DisplayClass33_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionSettingsDataController/VROSC.<>c__DisplayClass33_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionSettingsDataController::$$c__DisplayClass33_0 : public ::Il2CppObject {
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
    // public VROSC.Scale scale
    // Size: 0x14
    // Offset: 0x10
    ::VROSC::Scale scale;
    // Field size check
    static_assert(sizeof(::VROSC::Scale) == 0x14);
    public:
    // Creating conversion operator: operator ::VROSC::Scale
    constexpr operator ::VROSC::Scale() const noexcept {
      return scale;
    }
    // Get instance field reference: public VROSC.Scale scale
    ::VROSC::Scale& dyn_scale();
    // System.Boolean <FilterSelectedScale>b__0(VROSC.Scale value)
    // Offset: 0x134A1A0
    bool $FilterSelectedScale$b__0(::VROSC::Scale value);
    // public System.Void .ctor()
    // Offset: 0x134A198
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionSettingsDataController::$$c__DisplayClass33_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionSettingsDataController::$$c__DisplayClass33_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionSettingsDataController::$$c__DisplayClass33_0*, creationType>()));
    }
  }; // VROSC.SessionSettingsDataController/VROSC.<>c__DisplayClass33_0
  #pragma pack(pop)
  static check_size<sizeof(SessionSettingsDataController::$$c__DisplayClass33_0), 16 + sizeof(::VROSC::Scale)> __VROSC_SessionSettingsDataController_$$c__DisplayClass33_0SizeCheck;
  static_assert(sizeof(SessionSettingsDataController::$$c__DisplayClass33_0) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionSettingsDataController::$$c__DisplayClass33_0::$FilterSelectedScale$b__0
// Il2CppName: <FilterSelectedScale>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SessionSettingsDataController::$$c__DisplayClass33_0::*)(::VROSC::Scale)>(&VROSC::SessionSettingsDataController::$$c__DisplayClass33_0::$FilterSelectedScale$b__0)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionSettingsDataController::$$c__DisplayClass33_0*), "<FilterSelectedScale>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SessionSettingsDataController::$$c__DisplayClass33_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!