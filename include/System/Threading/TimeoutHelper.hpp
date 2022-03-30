// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: TimeoutHelper
  class TimeoutHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::TimeoutHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::TimeoutHelper*, "System.Threading", "TimeoutHelper");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.TimeoutHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeoutHelper : public ::Il2CppObject {
    public:
    // static public System.UInt32 GetTime()
    // Offset: 0xC9C978
    static uint GetTime();
    // static public System.Int32 UpdateTimeOut(System.UInt32 startTime, System.Int32 originalWaitMillisecondsTimeout)
    // Offset: 0xC9C980
    static int UpdateTimeOut(uint startTime, int originalWaitMillisecondsTimeout);
  }; // System.Threading.TimeoutHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::TimeoutHelper::GetTime
// Il2CppName: GetTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)()>(&System::Threading::TimeoutHelper::GetTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::TimeoutHelper*), "GetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::TimeoutHelper::UpdateTimeOut
// Il2CppName: UpdateTimeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, int)>(&System::Threading::TimeoutHelper::UpdateTimeOut)> {
  static const MethodInfo* get() {
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* originalWaitMillisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::TimeoutHelper*), "UpdateTimeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTime, originalWaitMillisecondsTimeout});
  }
};
