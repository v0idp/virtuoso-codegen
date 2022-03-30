// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ONSPProfiler
  class ONSPProfiler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ONSPProfiler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPProfiler*, "", "ONSPProfiler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ONSPProfiler
  // [TokenAttribute] Offset: FFFFFFFF
  class ONSPProfiler : public ::UnityEngine::MonoBehaviour {
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
    // public System.Boolean profilerEnabled
    // Size: 0x1
    // Offset: 0x18
    bool profilerEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: profilerEnabled and: port
    char __padding0[0x3] = {};
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x1C
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 DEFAULT_PORT
    static constexpr const int DEFAULT_PORT = 2121;
    // Get static field: static private System.Int32 DEFAULT_PORT
    static int _get_DEFAULT_PORT();
    // Set static field: static private System.Int32 DEFAULT_PORT
    static void _set_DEFAULT_PORT(int value);
    // static field const value: static public System.String strONSPS
    static constexpr const char* strONSPS = "AudioPluginOculusSpatializer";
    // Get static field: static public System.String strONSPS
    static ::StringW _get_strONSPS();
    // Set static field: static public System.String strONSPS
    static void _set_strONSPS(::StringW value);
    // Get instance field reference: public System.Boolean profilerEnabled
    bool& dyn_profilerEnabled();
    // Get instance field reference: public System.Int32 port
    int& dyn_port();
    // private System.Void Start()
    // Offset: 0x11BB204
    void Start();
    // private System.Void Update()
    // Offset: 0x11BB210
    void Update();
    // static private System.Int32 ONSP_SetProfilerEnabled(System.Boolean enabled)
    // Offset: 0x11BB2C8
    static int ONSP_SetProfilerEnabled(bool enabled);
    // static private System.Int32 ONSP_SetProfilerPort(System.Int32 port)
    // Offset: 0x11BB248
    static int ONSP_SetProfilerPort(int port);
    // public System.Void .ctor()
    // Offset: 0x11BB348
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ONSPProfiler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ONSPProfiler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ONSPProfiler*, creationType>()));
    }
  }; // ONSPProfiler
  #pragma pack(pop)
  static check_size<sizeof(ONSPProfiler), 28 + sizeof(int)> __GlobalNamespace_ONSPProfilerSizeCheck;
  static_assert(sizeof(ONSPProfiler) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ONSPProfiler::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPProfiler::*)()>(&GlobalNamespace::ONSPProfiler::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPProfiler*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPProfiler::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPProfiler::*)()>(&GlobalNamespace::ONSPProfiler::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPProfiler*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPProfiler::ONSP_SetProfilerEnabled
// Il2CppName: ONSP_SetProfilerEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(bool)>(&GlobalNamespace::ONSPProfiler::ONSP_SetProfilerEnabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPProfiler*), "ONSP_SetProfilerEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPProfiler::ONSP_SetProfilerPort
// Il2CppName: ONSP_SetProfilerPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::ONSPProfiler::ONSP_SetProfilerPort)> {
  static const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPProfiler*), "ONSP_SetProfilerPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPProfiler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
