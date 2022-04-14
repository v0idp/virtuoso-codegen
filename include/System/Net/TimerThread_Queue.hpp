// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TimerThread::Queue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread::Queue*, "System.Net", "TimerThread/Queue");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/System.Net.Queue
  // [TokenAttribute] Offset: FFFFFFFF
  class TimerThread::Queue : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Int32 m_DurationMilliseconds
    // Size: 0x4
    // Offset: 0x10
    int m_DurationMilliseconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_DurationMilliseconds;
    }
    // Get instance field reference: private readonly System.Int32 m_DurationMilliseconds
    [[deprecated]] int& dyn_m_DurationMilliseconds();
    // System.Void .ctor(System.Int32 durationMilliseconds)
    // Offset: 0xA02390
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::Queue* New_ctor(int durationMilliseconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TimerThread::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::Queue*, creationType>(durationMilliseconds)));
    }
  }; // System.Net.TimerThread/System.Net.Queue
  #pragma pack(pop)
  static check_size<sizeof(TimerThread::Queue), 16 + sizeof(int)> __System_Net_TimerThread_QueueSizeCheck;
  static_assert(sizeof(TimerThread::Queue) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TimerThread::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
