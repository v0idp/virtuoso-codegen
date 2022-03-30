// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Platform.IClockService
#include "Firebase/Platform/IClockService.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Firebase.Platform.Default
namespace Firebase::Platform::Default {
  // Forward declaring type: SystemClock
  class SystemClock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Platform::Default::SystemClock);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::Default::SystemClock*, "Firebase.Platform.Default", "SystemClock");
// Type namespace: Firebase.Platform.Default
namespace Firebase::Platform::Default {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Platform.Default.SystemClock
  // [TokenAttribute] Offset: FFFFFFFF
  class SystemClock : public ::Il2CppObject/*, public ::Firebase::Platform::IClockService*/ {
    public:
    // Creating interface conversion operator: operator ::Firebase::Platform::IClockService
    operator ::Firebase::Platform::IClockService() noexcept {
      return *reinterpret_cast<::Firebase::Platform::IClockService*>(this);
    }
    // Get static field: static public readonly Firebase.Platform.IClockService Instance
    static ::Firebase::Platform::IClockService* _get_Instance();
    // Set static field: static public readonly Firebase.Platform.IClockService Instance
    static void _set_Instance(::Firebase::Platform::IClockService* value);
    // static private System.Void .cctor()
    // Offset: 0x12CB81C
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x12CB814
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemClock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Platform::Default::SystemClock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemClock*, creationType>()));
    }
  }; // Firebase.Platform.Default.SystemClock
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Platform::Default::SystemClock::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Platform::Default::SystemClock::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::Default::SystemClock*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::Default::SystemClock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
