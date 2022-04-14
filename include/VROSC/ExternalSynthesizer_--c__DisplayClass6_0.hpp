// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ExternalSynthesizer
#include "VROSC/ExternalSynthesizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: UdpClient
  class UdpClient;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ExternalSynthesizer::$$c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ExternalSynthesizer::$$c__DisplayClass6_0*, "VROSC", "ExternalSynthesizer/<>c__DisplayClass6_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ExternalSynthesizer/VROSC.<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ExternalSynthesizer::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.Sockets.UdpClient udpClient
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Sockets::UdpClient* udpClient;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::UdpClient*) == 0x8);
    // public System.Net.IPEndPoint ipEndPoint
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::IPEndPoint* ipEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public VROSC.ExternalSynthesizer <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::ExternalSynthesizer* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::ExternalSynthesizer*) == 0x8);
    public:
    // Get instance field reference: public System.Net.Sockets.UdpClient udpClient
    [[deprecated]] ::System::Net::Sockets::UdpClient*& dyn_udpClient();
    // Get instance field reference: public System.Net.IPEndPoint ipEndPoint
    [[deprecated]] ::System::Net::IPEndPoint*& dyn_ipEndPoint();
    // Get instance field reference: public VROSC.ExternalSynthesizer <>4__this
    [[deprecated]] ::VROSC::ExternalSynthesizer*& dyn_$$4__this();
    // System.Void <Setup>b__0()
    // Offset: 0x95F8F8
    void $Setup$b__0();
    // public System.Void .ctor()
    // Offset: 0x95F8F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalSynthesizer::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ExternalSynthesizer::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalSynthesizer::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // VROSC.ExternalSynthesizer/VROSC.<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(ExternalSynthesizer::$$c__DisplayClass6_0), 32 + sizeof(::VROSC::ExternalSynthesizer*)> __VROSC_ExternalSynthesizer_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(ExternalSynthesizer::$$c__DisplayClass6_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ExternalSynthesizer::$$c__DisplayClass6_0::$Setup$b__0
// Il2CppName: <Setup>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ExternalSynthesizer::$$c__DisplayClass6_0::*)()>(&VROSC::ExternalSynthesizer::$$c__DisplayClass6_0::$Setup$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ExternalSynthesizer::$$c__DisplayClass6_0*), "<Setup>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ExternalSynthesizer::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
