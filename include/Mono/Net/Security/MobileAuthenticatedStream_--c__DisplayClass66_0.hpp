// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0*, "Mono.Net.Security", "MobileAuthenticatedStream/<>c__DisplayClass66_0");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.<>c__DisplayClass66_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MobileAuthenticatedStream::$$c__DisplayClass66_0 : public ::Il2CppObject {
    public:
    public:
    // public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::Mono::Net::Security::MobileAuthenticatedStream* $$4__this;
    // Field size check
    static_assert(sizeof(::Mono::Net::Security::MobileAuthenticatedStream*) == 0x8);
    // public System.Int32 len
    // Size: 0x4
    // Offset: 0x18
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    [[deprecated]] ::Mono::Net::Security::MobileAuthenticatedStream*& dyn_$$4__this();
    // Get instance field reference: public System.Int32 len
    [[deprecated]] int& dyn_len();
    // System.Int32 <InnerRead>b__0()
    // Offset: 0x9F921C
    int $InnerRead$b__0();
    // public System.Void .ctor()
    // Offset: 0x9F9214
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MobileAuthenticatedStream::$$c__DisplayClass66_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MobileAuthenticatedStream::$$c__DisplayClass66_0*, creationType>()));
    }
  }; // Mono.Net.Security.MobileAuthenticatedStream/Mono.Net.Security.<>c__DisplayClass66_0
  #pragma pack(pop)
  static check_size<sizeof(MobileAuthenticatedStream::$$c__DisplayClass66_0), 24 + sizeof(int)> __Mono_Net_Security_MobileAuthenticatedStream_$$c__DisplayClass66_0SizeCheck;
  static_assert(sizeof(MobileAuthenticatedStream::$$c__DisplayClass66_0) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0::$InnerRead$b__0
// Il2CppName: <InnerRead>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0::*)()>(&Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0::$InnerRead$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0*), "<InnerRead>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
