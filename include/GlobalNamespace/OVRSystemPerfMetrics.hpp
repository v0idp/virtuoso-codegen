// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSystemPerfMetrics
  class OVRSystemPerfMetrics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSystemPerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSystemPerfMetrics*, "", "OVRSystemPerfMetrics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRSystemPerfMetrics
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSystemPerfMetrics : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics
    class PerfMetrics;
    // Nested type: ::GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer
    class OVRSystemPerfMetricsTcpServer;
    // static field const value: static public System.Int32 TcpListeningPort
    static constexpr const int TcpListeningPort = 32419;
    // Get static field: static public System.Int32 TcpListeningPort
    static int _get_TcpListeningPort();
    // Set static field: static public System.Int32 TcpListeningPort
    static void _set_TcpListeningPort(int value);
    // static field const value: static public System.Int32 PayloadTypeMetrics
    static constexpr const int PayloadTypeMetrics = 100;
    // Get static field: static public System.Int32 PayloadTypeMetrics
    static int _get_PayloadTypeMetrics();
    // Set static field: static public System.Int32 PayloadTypeMetrics
    static void _set_PayloadTypeMetrics(int value);
    // static field const value: static public System.Int32 MaxBufferLength
    static constexpr const int MaxBufferLength = 65536;
    // Get static field: static public System.Int32 MaxBufferLength
    static int _get_MaxBufferLength();
    // Set static field: static public System.Int32 MaxBufferLength
    static void _set_MaxBufferLength(int value);
    // static field const value: static public System.Int32 MaxMessageLength
    static constexpr const int MaxMessageLength = 65532;
    // Get static field: static public System.Int32 MaxMessageLength
    static int _get_MaxMessageLength();
    // Set static field: static public System.Int32 MaxMessageLength
    static void _set_MaxMessageLength(int value);
    // public System.Void .ctor()
    // Offset: 0x801160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSystemPerfMetrics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSystemPerfMetrics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSystemPerfMetrics*, creationType>()));
    }
  }; // OVRSystemPerfMetrics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
