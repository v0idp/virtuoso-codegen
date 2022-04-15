// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarComponent
#include "GlobalNamespace/OvrAvatarComponent_.hpp"
// Including type: ovrAvatarHandComponent
#include "GlobalNamespace/ovrAvatarHandComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarHand
  class OvrAvatarHand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarHand*, "", "OvrAvatarHand");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarHand
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarHand : public ::GlobalNamespace::OvrAvatarComponent_ {
    public:
    public:
    // public System.Boolean isLeftHand
    // Size: 0x1
    // Offset: 0x70
    bool isLeftHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLeftHand and: component
    char __padding0[0x7] = {};
    // private ovrAvatarHandComponent component
    // Size: 0x50
    // Offset: 0x78
    ::GlobalNamespace::ovrAvatarHandComponent component;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarHandComponent) == 0x50);
    public:
    // Get instance field reference: public System.Boolean isLeftHand
    [[deprecated("Use field access instead!")]] bool& dyn_isLeftHand();
    // Get instance field reference: private ovrAvatarHandComponent component
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ovrAvatarHandComponent& dyn_component();
    // private System.Void Update()
    // Offset: 0xF8B784
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF8B8E8
    // Implemented from: OvrAvatarComponent
    // Base method: System.Void OvrAvatarComponent_::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarHand*, creationType>()));
    }
  }; // OvrAvatarHand
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarHand), 120 + sizeof(::GlobalNamespace::ovrAvatarHandComponent)> __GlobalNamespace_OvrAvatarHandSizeCheck;
  static_assert(sizeof(OvrAvatarHand) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarHand::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarHand::*)()>(&GlobalNamespace::OvrAvatarHand::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarHand*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
