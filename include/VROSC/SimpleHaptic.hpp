// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: HandType
  struct HandType;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SimpleHaptic
  class SimpleHaptic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SimpleHaptic);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SimpleHaptic*, "VROSC", "SimpleHaptic");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SimpleHaptic
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleHaptic : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean _useHapticFeedBack
    // Size: 0x1
    // Offset: 0x10
    bool useHapticFeedBack;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useHapticFeedBack and: amplitude
    char __padding0[0x3] = {};
    // private System.Single _amplitude
    // Size: 0x4
    // Offset: 0x14
    float amplitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _frequency
    // Size: 0x4
    // Offset: 0x18
    float frequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Boolean _useHapticFeedBack
    [[deprecated]] bool& dyn__useHapticFeedBack();
    // Get instance field reference: private System.Single _amplitude
    [[deprecated]] float& dyn__amplitude();
    // Get instance field reference: private System.Single _frequency
    [[deprecated]] float& dyn__frequency();
    // public System.Void Play(VROSC.HandType Hand, System.Single amplitudeMultiplier, System.Single frequencyMultiplier)
    // Offset: 0x1928984
    void Play(::VROSC::HandType Hand, float amplitudeMultiplier, float frequencyMultiplier);
    // public System.Void .ctor()
    // Offset: 0x1928A40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleHaptic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SimpleHaptic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleHaptic*, creationType>()));
    }
  }; // VROSC.SimpleHaptic
  #pragma pack(pop)
  static check_size<sizeof(SimpleHaptic), 24 + sizeof(float)> __VROSC_SimpleHapticSizeCheck;
  static_assert(sizeof(SimpleHaptic) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SimpleHaptic::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SimpleHaptic::*)(::VROSC::HandType, float, float)>(&VROSC::SimpleHaptic::Play)> {
  static const MethodInfo* get() {
    static auto* Hand = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    static auto* amplitudeMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* frequencyMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SimpleHaptic*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Hand, amplitudeMultiplier, frequencyMultiplier});
  }
};
// Writing MetadataGetter for method: VROSC::SimpleHaptic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
