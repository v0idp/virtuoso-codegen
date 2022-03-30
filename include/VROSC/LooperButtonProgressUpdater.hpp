// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
  // Forward declaring type: LoopPlayer
  class LoopPlayer;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LooperButtonProgressUpdater
  class LooperButtonProgressUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LooperButtonProgressUpdater);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LooperButtonProgressUpdater*, "VROSC", "LooperButtonProgressUpdater");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LooperButtonProgressUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class LooperButtonProgressUpdater : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.AdjustableMesh _adjustableMesh
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::AdjustableMesh* adjustableMesh;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [RangeAttribute] Offset: 0x67268C
    // private System.Single _beatLength
    // Size: 0x4
    // Offset: 0x30
    float beatLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x6726CC
    // [RangeAttribute] Offset: 0x6726CC
    // private System.Single _previewValue
    // Size: 0x4
    // Offset: 0x34
    float previewValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x672730
    // private System.Single _flashValue
    // Size: 0x4
    // Offset: 0x38
    float flashValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: flashValue and: loopPlayer
    char __padding4[0x4] = {};
    // private VROSC.LoopPlayer _loopPlayer
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::LoopPlayer* loopPlayer;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayer*) == 0x8);
    // private System.Boolean _playing
    // Size: 0x1
    // Offset: 0x48
    bool playing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playing and: progress
    char __padding6[0x3] = {};
    // private System.Single _progress
    // Size: 0x4
    // Offset: 0x4C
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _loops
    // Size: 0x4
    // Offset: 0x50
    int loops;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.AdjustableMesh _adjustableMesh
    ::VROSC::AdjustableMesh*& dyn__adjustableMesh();
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _beatLength
    float& dyn__beatLength();
    // Get instance field reference: private System.Single _previewValue
    float& dyn__previewValue();
    // Get instance field reference: private System.Single _flashValue
    float& dyn__flashValue();
    // Get instance field reference: private VROSC.LoopPlayer _loopPlayer
    ::VROSC::LoopPlayer*& dyn__loopPlayer();
    // Get instance field reference: private System.Boolean _playing
    bool& dyn__playing();
    // Get instance field reference: private System.Single _progress
    float& dyn__progress();
    // Get instance field reference: private System.Int32 _loops
    int& dyn__loops();
    // protected System.Void Awake()
    // Offset: 0x8A7EB8
    void Awake();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x8A40FC
    void SetColor(::UnityEngine::Color color);
    // public System.Void SetValue(System.Single value, System.Single flashValue)
    // Offset: 0x8A41E0
    void SetValue(float value, float flashValue);
    // public System.Void .ctor()
    // Offset: 0x8A7EEC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LooperButtonProgressUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LooperButtonProgressUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LooperButtonProgressUpdater*, creationType>()));
    }
  }; // VROSC.LooperButtonProgressUpdater
  #pragma pack(pop)
  static check_size<sizeof(LooperButtonProgressUpdater), 80 + sizeof(int)> __VROSC_LooperButtonProgressUpdaterSizeCheck;
  static_assert(sizeof(LooperButtonProgressUpdater) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LooperButtonProgressUpdater::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperButtonProgressUpdater::*)()>(&VROSC::LooperButtonProgressUpdater::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperButtonProgressUpdater*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LooperButtonProgressUpdater::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperButtonProgressUpdater::*)(::UnityEngine::Color)>(&VROSC::LooperButtonProgressUpdater::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperButtonProgressUpdater*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::LooperButtonProgressUpdater::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LooperButtonProgressUpdater::*)(float, float)>(&VROSC::LooperButtonProgressUpdater::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flashValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LooperButtonProgressUpdater*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, flashValue});
  }
};
// Writing MetadataGetter for method: VROSC::LooperButtonProgressUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
