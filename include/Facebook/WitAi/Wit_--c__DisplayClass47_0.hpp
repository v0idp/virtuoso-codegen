// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Wit
#include "Facebook/WitAi/Wit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Wit::$$c__DisplayClass47_0);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Wit::$$c__DisplayClass47_0*, "Facebook.WitAi", "Wit/<>c__DisplayClass47_0");
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Wit/Facebook.WitAi.<>c__DisplayClass47_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Wit::$$c__DisplayClass47_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String s
    // Size: 0x8
    // Offset: 0x10
    ::StringW s;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Facebook.WitAi.Wit <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::Facebook::WitAi::Wit* $$4__this;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Wit*) == 0x8);
    public:
    // Get instance field reference: public System.String s
    [[deprecated]] ::StringW& dyn_s();
    // Get instance field reference: public Facebook.WitAi.Wit <>4__this
    [[deprecated]] ::Facebook::WitAi::Wit*& dyn_$$4__this();
    // System.Void <ActivateImmediately>b__3()
    // Offset: 0x167D9E4
    void $ActivateImmediately$b__3();
    // public System.Void .ctor()
    // Offset: 0x1674030
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Wit::$$c__DisplayClass47_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Wit::$$c__DisplayClass47_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Wit::$$c__DisplayClass47_0*, creationType>()));
    }
  }; // Facebook.WitAi.Wit/Facebook.WitAi.<>c__DisplayClass47_0
  #pragma pack(pop)
  static check_size<sizeof(Wit::$$c__DisplayClass47_0), 24 + sizeof(::Facebook::WitAi::Wit*)> __Facebook_WitAi_Wit_$$c__DisplayClass47_0SizeCheck;
  static_assert(sizeof(Wit::$$c__DisplayClass47_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Wit::$$c__DisplayClass47_0::$ActivateImmediately$b__3
// Il2CppName: <ActivateImmediately>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::$$c__DisplayClass47_0::*)()>(&Facebook::WitAi::Wit::$$c__DisplayClass47_0::$ActivateImmediately$b__3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit::$$c__DisplayClass47_0*), "<ActivateImmediately>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::$$c__DisplayClass47_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
