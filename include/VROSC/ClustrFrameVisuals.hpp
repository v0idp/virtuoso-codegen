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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
  // Forward declaring type: ClustrFrameString
  class ClustrFrameString;
  // Forward declaring type: NoteFieldMonitor
  class NoteFieldMonitor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ClustrFrameVisuals
  class ClustrFrameVisuals;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ClustrFrameVisuals);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrFrameVisuals*, "VROSC", "ClustrFrameVisuals");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ClustrFrameVisuals
  // [TokenAttribute] Offset: FFFFFFFF
  class ClustrFrameVisuals : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.MinMaxFloat _height
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::MinMaxFloat* height;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // private VROSC.MinMaxFloat _width
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::MinMaxFloat* width;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // private VROSC.ClustrFrameString _clustrStringPrefab
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::ClustrFrameString* clustrStringPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::ClustrFrameString*) == 0x8);
    // private VROSC.NoteFieldMonitor _monitor
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::NoteFieldMonitor* monitor;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldMonitor*) == 0x8);
    // private VROSC.ClustrFrameString[] _strings
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::VROSC::ClustrFrameString*> strings;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::ClustrFrameString*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.MinMaxFloat _height
    [[deprecated("Use field access instead!")]] ::VROSC::MinMaxFloat*& dyn__height();
    // Get instance field reference: private VROSC.MinMaxFloat _width
    [[deprecated("Use field access instead!")]] ::VROSC::MinMaxFloat*& dyn__width();
    // Get instance field reference: private VROSC.ClustrFrameString _clustrStringPrefab
    [[deprecated("Use field access instead!")]] ::VROSC::ClustrFrameString*& dyn__clustrStringPrefab();
    // Get instance field reference: private VROSC.NoteFieldMonitor _monitor
    [[deprecated("Use field access instead!")]] ::VROSC::NoteFieldMonitor*& dyn__monitor();
    // Get instance field reference: private VROSC.ClustrFrameString[] _strings
    [[deprecated("Use field access instead!")]] ::ArrayW<::VROSC::ClustrFrameString*>& dyn__strings();
    // public System.Void .ctor()
    // Offset: 0x9482BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClustrFrameVisuals* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ClustrFrameVisuals::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClustrFrameVisuals*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x9479CC
    void Start();
    // private System.Void OnDisable()
    // Offset: 0x947B88
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x947C04
    void Update();
    // private UnityEngine.Vector2 GetAngleByNote(System.Int32 note)
    // Offset: 0x947F44
    ::UnityEngine::Vector2 GetAngleByNote(int note);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x947FB8
    void OnDrawGizmosSelected();
  }; // VROSC.ClustrFrameVisuals
  #pragma pack(pop)
  static check_size<sizeof(ClustrFrameVisuals), 56 + sizeof(::ArrayW<::VROSC::ClustrFrameString*>)> __VROSC_ClustrFrameVisualsSizeCheck;
  static_assert(sizeof(ClustrFrameVisuals) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ClustrFrameVisuals::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ClustrFrameVisuals::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameVisuals::*)()>(&VROSC::ClustrFrameVisuals::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameVisuals*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameVisuals::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameVisuals::*)()>(&VROSC::ClustrFrameVisuals::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameVisuals*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameVisuals::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameVisuals::*)()>(&VROSC::ClustrFrameVisuals::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameVisuals*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameVisuals::GetAngleByNote
// Il2CppName: GetAngleByNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::ClustrFrameVisuals::*)(int)>(&VROSC::ClustrFrameVisuals::GetAngleByNote)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameVisuals*), "GetAngleByNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameVisuals::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameVisuals::*)()>(&VROSC::ClustrFrameVisuals::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameVisuals*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
