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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: BandVisualizerTester
  class BandVisualizerTester;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BandVisualizerTester);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BandVisualizerTester*, "VROSC", "BandVisualizerTester");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BandVisualizerTester
  // [TokenAttribute] Offset: FFFFFFFF
  class BandVisualizerTester : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 _numberOfBands
    // Size: 0x4
    // Offset: 0x18
    int numberOfBands;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _currentPlayingOnly
    // Size: 0x1
    // Offset: 0x1C
    bool currentPlayingOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: currentPlayingOnly and: bandTransforms
    char __padding1[0x3] = {};
    // private UnityEngine.Transform[] _bandTransforms
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Transform*> bandTransforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _numberOfBands
    int& dyn__numberOfBands();
    // Get instance field reference: private System.Boolean _currentPlayingOnly
    bool& dyn__currentPlayingOnly();
    // Get instance field reference: private UnityEngine.Transform[] _bandTransforms
    ::ArrayW<::UnityEngine::Transform*>& dyn__bandTransforms();
    // protected System.Void Awake()
    // Offset: 0x1374C70
    void Awake();
    // protected System.Void Update()
    // Offset: 0x1374E48
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1374F8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BandVisualizerTester* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BandVisualizerTester::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BandVisualizerTester*, creationType>()));
    }
  }; // VROSC.BandVisualizerTester
  #pragma pack(pop)
  static check_size<sizeof(BandVisualizerTester), 32 + sizeof(::ArrayW<::UnityEngine::Transform*>)> __VROSC_BandVisualizerTesterSizeCheck;
  static_assert(sizeof(BandVisualizerTester) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BandVisualizerTester::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BandVisualizerTester::*)()>(&VROSC::BandVisualizerTester::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BandVisualizerTester*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BandVisualizerTester::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BandVisualizerTester::*)()>(&VROSC::BandVisualizerTester::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BandVisualizerTester*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BandVisualizerTester::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
