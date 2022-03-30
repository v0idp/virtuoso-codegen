// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Assets.OVR.Scripts.Record
#include "Assets/OVR/Scripts/Record.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Assets::OVR::Scripts
namespace Assets::OVR::Scripts {
  // Forward declaring type: FixMethodDelegate
  class FixMethodDelegate;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Forward declaring type: FixRecord
  class FixRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Assets::OVR::Scripts::FixRecord);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::FixRecord*, "Assets.OVR.Scripts", "FixRecord");
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: Assets.OVR.Scripts.FixRecord
  // [TokenAttribute] Offset: FFFFFFFF
  class FixRecord : public ::Assets::OVR::Scripts::Record {
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
    // public Assets.OVR.Scripts.FixMethodDelegate fixMethod
    // Size: 0x8
    // Offset: 0x20
    ::Assets::OVR::Scripts::FixMethodDelegate* fixMethod;
    // Field size check
    static_assert(sizeof(::Assets::OVR::Scripts::FixMethodDelegate*) == 0x8);
    // public UnityEngine.Object targetObject
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Object* targetObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // public System.String[] buttonNames
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> buttonNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Boolean editModeRequired
    // Size: 0x1
    // Offset: 0x38
    bool editModeRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean complete
    // Size: 0x1
    // Offset: 0x39
    bool complete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public Assets.OVR.Scripts.FixMethodDelegate fixMethod
    ::Assets::OVR::Scripts::FixMethodDelegate*& dyn_fixMethod();
    // Get instance field reference: public UnityEngine.Object targetObject
    ::UnityEngine::Object*& dyn_targetObject();
    // Get instance field reference: public System.String[] buttonNames
    ::ArrayW<::StringW>& dyn_buttonNames();
    // Get instance field reference: public System.Boolean editModeRequired
    bool& dyn_editModeRequired();
    // Get instance field reference: public System.Boolean complete
    bool& dyn_complete();
    // public System.Void .ctor(System.String cat, System.String msg, Assets.OVR.Scripts.FixMethodDelegate fix, UnityEngine.Object target, System.Boolean editRequired, System.String[] buttons)
    // Offset: 0x8118B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixRecord* New_ctor(::StringW cat, ::StringW msg, ::Assets::OVR::Scripts::FixMethodDelegate* fix, ::UnityEngine::Object* target, bool editRequired, ::ArrayW<::StringW> buttons) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Assets::OVR::Scripts::FixRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixRecord*, creationType>(cat, msg, fix, target, editRequired, buttons)));
    }
  }; // Assets.OVR.Scripts.FixRecord
  #pragma pack(pop)
  static check_size<sizeof(FixRecord), 57 + sizeof(bool)> __Assets_OVR_Scripts_FixRecordSizeCheck;
  static_assert(sizeof(FixRecord) == 0x3A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Assets::OVR::Scripts::FixRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
