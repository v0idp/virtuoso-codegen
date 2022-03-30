// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Android.AndroidAssetPackStatus
#include "UnityEngine/Android/AndroidAssetPackStatus.hpp"
// Including type: UnityEngine.Android.AndroidAssetPackError
#include "UnityEngine/Android/AndroidAssetPackError.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Forward declaring type: AndroidAssetPackState
  class AndroidAssetPackState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPackState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackState*, "UnityEngine.Android", "AndroidAssetPackState");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.AndroidAssetPackState
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidAssetPackState : public ::Il2CppObject {
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
    // [DebuggerBrowsableAttribute] Offset: 0x59FD0C
    // private readonly System.String <name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x59FD48
    // private readonly UnityEngine.Android.AndroidAssetPackStatus <status>k__BackingField
    // Size: 0x14
    // Offset: 0x18
    ::UnityEngine::Android::AndroidAssetPackStatus status;
    // Field size check
    static_assert(sizeof(::UnityEngine::Android::AndroidAssetPackStatus) == 0x14);
    // [DebuggerBrowsableAttribute] Offset: 0x59FD84
    // private readonly UnityEngine.Android.AndroidAssetPackError <error>k__BackingField
    // Size: 0x14
    // Offset: 0x1C
    ::UnityEngine::Android::AndroidAssetPackError error;
    // Field size check
    static_assert(sizeof(::UnityEngine::Android::AndroidAssetPackError) == 0x14);
    public:
    // Get instance field reference: private readonly System.String <name>k__BackingField
    ::StringW& dyn_$name$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Android.AndroidAssetPackStatus <status>k__BackingField
    ::UnityEngine::Android::AndroidAssetPackStatus& dyn_$status$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Android.AndroidAssetPackError <error>k__BackingField
    ::UnityEngine::Android::AndroidAssetPackError& dyn_$error$k__BackingField();
    // System.Void .ctor(System.String name, UnityEngine.Android.AndroidAssetPackStatus status, UnityEngine.Android.AndroidAssetPackError error)
    // Offset: 0x126DEBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidAssetPackState* New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, ::UnityEngine::Android::AndroidAssetPackError error) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Android::AndroidAssetPackState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidAssetPackState*, creationType>(name, status, error)));
    }
  }; // UnityEngine.Android.AndroidAssetPackState
  #pragma pack(pop)
  static check_size<sizeof(AndroidAssetPackState), 28 + sizeof(::UnityEngine::Android::AndroidAssetPackError)> __UnityEngine_Android_AndroidAssetPackStateSizeCheck;
  static_assert(sizeof(AndroidAssetPackState) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Android::AndroidAssetPackState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
