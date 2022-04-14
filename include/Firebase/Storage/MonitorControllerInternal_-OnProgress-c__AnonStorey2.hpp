// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Storage.MonitorControllerInternal
#include "Firebase/Storage/MonitorControllerInternal.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Storage::MonitorControllerInternal::$OnProgress$c__AnonStorey2);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::MonitorControllerInternal::$OnProgress$c__AnonStorey2*, "Firebase.Storage", "MonitorControllerInternal/<OnProgress>c__AnonStorey2");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.MonitorControllerInternal/Firebase.Storage.<OnProgress>c__AnonStorey2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MonitorControllerInternal::$OnProgress$c__AnonStorey2 : public ::Il2CppObject {
    public:
    public:
    // System.IntPtr controllerPtr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr controllerPtr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return controllerPtr;
    }
    // Get instance field reference: System.IntPtr controllerPtr
    [[deprecated]] ::System::IntPtr& dyn_controllerPtr();
    // System.Void <>m__0()
    // Offset: 0x183A4A0
    void $$m__0();
    // public System.Void .ctor()
    // Offset: 0x183663C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonitorControllerInternal::$OnProgress$c__AnonStorey2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::MonitorControllerInternal::$OnProgress$c__AnonStorey2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonitorControllerInternal::$OnProgress$c__AnonStorey2*, creationType>()));
    }
  }; // Firebase.Storage.MonitorControllerInternal/Firebase.Storage.<OnProgress>c__AnonStorey2
  #pragma pack(pop)
  static check_size<sizeof(MonitorControllerInternal::$OnProgress$c__AnonStorey2), 16 + sizeof(::System::IntPtr)> __Firebase_Storage_MonitorControllerInternal_$OnProgress$c__AnonStorey2SizeCheck;
  static_assert(sizeof(MonitorControllerInternal::$OnProgress$c__AnonStorey2) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Storage::MonitorControllerInternal::$OnProgress$c__AnonStorey2::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::MonitorControllerInternal::$OnProgress$c__AnonStorey2::*)()>(&Firebase::Storage::MonitorControllerInternal::$OnProgress$c__AnonStorey2::$$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::MonitorControllerInternal::$OnProgress$c__AnonStorey2*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::MonitorControllerInternal::$OnProgress$c__AnonStorey2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
