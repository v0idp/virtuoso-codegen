// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Platform.ILoggingService
#include "Firebase/Platform/ILoggingService.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Firebase.Platform
namespace Firebase::Platform {
  // Forward declaring type: DebugLogger
  class DebugLogger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Platform::DebugLogger);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::DebugLogger*, "Firebase.Platform", "DebugLogger");
// Type namespace: Firebase.Platform
namespace Firebase::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Platform.DebugLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugLogger : public ::Il2CppObject/*, public ::Firebase::Platform::ILoggingService*/ {
    public:
    // Creating interface conversion operator: operator ::Firebase::Platform::ILoggingService
    operator ::Firebase::Platform::ILoggingService() noexcept {
      return *reinterpret_cast<::Firebase::Platform::ILoggingService*>(this);
    }
    // Get static field: static private Firebase.Platform.DebugLogger _instance
    static ::Firebase::Platform::DebugLogger* _get__instance();
    // Set static field: static private Firebase.Platform.DebugLogger _instance
    static void _set__instance(::Firebase::Platform::DebugLogger* value);
    // static public Firebase.Platform.DebugLogger get_Instance()
    // Offset: 0x12C80E4
    static ::Firebase::Platform::DebugLogger* get_Instance();
    // static private System.Void .cctor()
    // Offset: 0x12C8148
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x12C80DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Platform::DebugLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugLogger*, creationType>()));
    }
  }; // Firebase.Platform.DebugLogger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Platform::DebugLogger::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Platform::DebugLogger* (*)()>(&Firebase::Platform::DebugLogger::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::DebugLogger*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::DebugLogger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Platform::DebugLogger::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::DebugLogger*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::DebugLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!