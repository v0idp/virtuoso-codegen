// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoardPlayer/VROSC.PlayBehaviour
#include "VROSC/NoteBoardPlayer_PlayBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: PlayBehaviourNode
  class PlayBehaviourNode;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PlayBehaviourField
  class PlayBehaviourField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PlayBehaviourField);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayBehaviourField*, "VROSC", "PlayBehaviourField");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PlayBehaviourField
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayBehaviourField : public ::Il2CppObject {
    public:
    public:
    // protected VROSC.NoteBoardPlayer/VROSC.PlayBehaviour EnteredValue
    // Size: 0x4
    // Offset: 0x10
    ::VROSC::NoteBoardPlayer::PlayBehaviour EnteredValue;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardPlayer::PlayBehaviour) == 0x4);
    // Padding between fields: EnteredValue and: ConnectedValue
    char __padding0[0x4] = {};
    // protected VROSC.PlayBehaviourNode ConnectedValue
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::PlayBehaviourNode* ConnectedValue;
    // Field size check
    static_assert(sizeof(::VROSC::PlayBehaviourNode*) == 0x8);
    public:
    // Get instance field reference: protected VROSC.NoteBoardPlayer/VROSC.PlayBehaviour EnteredValue
    [[deprecated("Use field access instead!")]] ::VROSC::NoteBoardPlayer::PlayBehaviour& dyn_EnteredValue();
    // Get instance field reference: protected VROSC.PlayBehaviourNode ConnectedValue
    [[deprecated("Use field access instead!")]] ::VROSC::PlayBehaviourNode*& dyn_ConnectedValue();
    // public System.Int32 get_Value()
    // Offset: 0xADFE34
    int get_Value();
    // public System.Void .ctor()
    // Offset: 0xADFEC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayBehaviourField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PlayBehaviourField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayBehaviourField*, creationType>()));
    }
  }; // VROSC.PlayBehaviourField
  #pragma pack(pop)
  static check_size<sizeof(PlayBehaviourField), 24 + sizeof(::VROSC::PlayBehaviourNode*)> __VROSC_PlayBehaviourFieldSizeCheck;
  static_assert(sizeof(PlayBehaviourField) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PlayBehaviourField::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::PlayBehaviourField::*)()>(&VROSC::PlayBehaviourField::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayBehaviourField*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlayBehaviourField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
