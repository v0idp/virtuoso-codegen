// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionsLibraryUI
#include "VROSC/SessionsLibraryUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsLibraryUI::$$c__DisplayClass64_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsLibraryUI::$$c__DisplayClass64_0*, "VROSC", "SessionsLibraryUI/<>c__DisplayClass64_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsLibraryUI/VROSC.<>c__DisplayClass64_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsLibraryUI::$$c__DisplayClass64_0 : public ::Il2CppObject {
    public:
    public:
    // public VROSC.SessionsLibraryUI <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::SessionsLibraryUI* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsLibraryUI*) == 0x8);
    // public VROSC.SessionsLibraryUI/VROSC.SessionSaveData sessionSaveData
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SessionsLibraryUI::SessionSaveData* sessionSaveData;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsLibraryUI::SessionSaveData*) == 0x8);
    public:
    // Get instance field reference: public VROSC.SessionsLibraryUI <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::SessionsLibraryUI*& dyn_$$4__this();
    // Get instance field reference: public VROSC.SessionsLibraryUI/VROSC.SessionSaveData sessionSaveData
    [[deprecated("Use field access instead!")]] ::VROSC::SessionsLibraryUI::SessionSaveData*& dyn_sessionSaveData();
    // public System.Void .ctor()
    // Offset: 0x8D51AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsLibraryUI::$$c__DisplayClass64_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsLibraryUI::$$c__DisplayClass64_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsLibraryUI::$$c__DisplayClass64_0*, creationType>()));
    }
    // System.Void <SaveSession>b__0()
    // Offset: 0x8D51B4
    void $SaveSession$b__0();
    // System.Void <SaveSession>b__1(VROSC.Error error)
    // Offset: 0x8D51DC
    void $SaveSession$b__1(::VROSC::Error error);
  }; // VROSC.SessionsLibraryUI/VROSC.<>c__DisplayClass64_0
  #pragma pack(pop)
  static check_size<sizeof(SessionsLibraryUI::$$c__DisplayClass64_0), 24 + sizeof(::VROSC::SessionsLibraryUI::SessionSaveData*)> __VROSC_SessionsLibraryUI_$$c__DisplayClass64_0SizeCheck;
  static_assert(sizeof(SessionsLibraryUI::$$c__DisplayClass64_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsLibraryUI::$$c__DisplayClass64_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SessionsLibraryUI::$$c__DisplayClass64_0::$SaveSession$b__0
// Il2CppName: <SaveSession>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryUI::$$c__DisplayClass64_0::*)()>(&VROSC::SessionsLibraryUI::$$c__DisplayClass64_0::$SaveSession$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryUI::$$c__DisplayClass64_0*), "<SaveSession>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsLibraryUI::$$c__DisplayClass64_0::$SaveSession$b__1
// Il2CppName: <SaveSession>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsLibraryUI::$$c__DisplayClass64_0::*)(::VROSC::Error)>(&VROSC::SessionsLibraryUI::$$c__DisplayClass64_0::$SaveSession$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsLibraryUI::$$c__DisplayClass64_0*), "<SaveSession>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
