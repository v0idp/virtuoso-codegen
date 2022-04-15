// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR
namespace OVR {
  // Forward declaring type: SoundFXRef
  class SoundFXRef;
}
// Completed forward declares
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: TestScript
  class TestScript;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::TestScript);
DEFINE_IL2CPP_ARG_TYPE(::OVR::TestScript*, "OVR", "TestScript");
// Type namespace: OVR
namespace OVR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVR.TestScript
  // [TokenAttribute] Offset: FFFFFFFF
  class TestScript : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InspectorNoteAttribute] Offset: 0x6EE068
    // public OVR.SoundFXRef testSound1
    // Size: 0x8
    // Offset: 0x18
    ::OVR::SoundFXRef* testSound1;
    // Field size check
    static_assert(sizeof(::OVR::SoundFXRef*) == 0x8);
    // public OVR.SoundFXRef testSound2
    // Size: 0x8
    // Offset: 0x20
    ::OVR::SoundFXRef* testSound2;
    // Field size check
    static_assert(sizeof(::OVR::SoundFXRef*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVR.SoundFXRef testSound1
    [[deprecated("Use field access instead!")]] ::OVR::SoundFXRef*& dyn_testSound1();
    // Get instance field reference: public OVR.SoundFXRef testSound2
    [[deprecated("Use field access instead!")]] ::OVR::SoundFXRef*& dyn_testSound2();
    // public System.Void .ctor()
    // Offset: 0x18A5AE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestScript* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::TestScript::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestScript*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x18A5A44
    void Start();
    // private System.Void Update()
    // Offset: 0x18A5A48
    void Update();
  }; // OVR.TestScript
  #pragma pack(pop)
  static check_size<sizeof(TestScript), 32 + sizeof(::OVR::SoundFXRef*)> __OVR_TestScriptSizeCheck;
  static_assert(sizeof(TestScript) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::TestScript::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::TestScript::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::TestScript::*)()>(&OVR::TestScript::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::TestScript*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::TestScript::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::TestScript::*)()>(&OVR::TestScript::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::TestScript*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
