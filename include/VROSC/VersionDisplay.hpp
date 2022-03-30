// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: VersionDisplay
  class VersionDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::VersionDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VersionDisplay*, "VROSC", "VersionDisplay");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.VersionDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class VersionDisplay : public ::UnityEngine::MonoBehaviour {
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
    // private TMPro.TMP_Text _tmpText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TMP_Text* tmpText;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Text*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String AndroidBundleNumberFileName
    static constexpr const char* AndroidBundleNumberFileName = "AndroidBundleNumber.txt";
    // Get static field: static private System.String AndroidBundleNumberFileName
    static ::StringW _get_AndroidBundleNumberFileName();
    // Set static field: static private System.String AndroidBundleNumberFileName
    static void _set_AndroidBundleNumberFileName(::StringW value);
    // Get instance field reference: private TMPro.TMP_Text _tmpText
    ::TMPro::TMP_Text*& dyn__tmpText();
    // static public System.String get_AndroidBundleNumberFilePath()
    // Offset: 0x13ADFA4
    static ::StringW get_AndroidBundleNumberFilePath();
    // protected System.Void Awake()
    // Offset: 0x13AE02C
    void Awake();
    // private System.String GetAndroidBundleNumberFromFile()
    // Offset: 0x13AE144
    ::StringW GetAndroidBundleNumberFromFile();
    // public System.Void .ctor()
    // Offset: 0x13AE3A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::VersionDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionDisplay*, creationType>()));
    }
  }; // VROSC.VersionDisplay
  #pragma pack(pop)
  static check_size<sizeof(VersionDisplay), 24 + sizeof(::TMPro::TMP_Text*)> __VROSC_VersionDisplaySizeCheck;
  static_assert(sizeof(VersionDisplay) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::VersionDisplay::get_AndroidBundleNumberFilePath
// Il2CppName: get_AndroidBundleNumberFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&VROSC::VersionDisplay::get_AndroidBundleNumberFilePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VersionDisplay*), "get_AndroidBundleNumberFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VersionDisplay::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VersionDisplay::*)()>(&VROSC::VersionDisplay::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VersionDisplay*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VersionDisplay::GetAndroidBundleNumberFromFile
// Il2CppName: GetAndroidBundleNumberFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::VersionDisplay::*)()>(&VROSC::VersionDisplay::GetAndroidBundleNumberFromFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VersionDisplay*), "GetAndroidBundleNumberFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VersionDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!