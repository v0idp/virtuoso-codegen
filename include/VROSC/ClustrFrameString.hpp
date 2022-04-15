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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ClustrFrameString
  class ClustrFrameString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ClustrFrameString);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrFrameString*, "VROSC", "ClustrFrameString");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ClustrFrameString
  // [TokenAttribute] Offset: FFFFFFFF
  class ClustrFrameString : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Color _restingColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color restingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private System.Int32 <Note>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int Note;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Note and: propBlock
    char __padding2[0x4] = {};
    // private UnityEngine.MaterialPropertyBlock _propBlock
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::MaterialPropertyBlock* propBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _restingColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__restingColor();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private System.Int32 <Note>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Note$k__BackingField();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _propBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__propBlock();
    // public System.Int32 get_Note()
    // Offset: 0x947794
    int get_Note();
    // private System.Void set_Note(System.Int32 value)
    // Offset: 0x94778C
    void set_Note(int value);
    // public System.Void .ctor()
    // Offset: 0x9479C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClustrFrameString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ClustrFrameString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClustrFrameString*, creationType>()));
    }
    // private System.Void CreateBlock()
    // Offset: 0x94779C
    void CreateBlock();
    // public System.Void SetVisible(System.Int32 note)
    // Offset: 0x947800
    void SetVisible(int note);
    // public System.Void Hide()
    // Offset: 0x94782C
    void Hide();
    // public System.Void SetPlayingColor(UnityEngine.Vector3 power, System.Single velocity, System.Single highlight)
    // Offset: 0x947854
    void SetPlayingColor(::UnityEngine::Vector3 power, float velocity, float highlight);
  }; // VROSC.ClustrFrameString
  #pragma pack(pop)
  static check_size<sizeof(ClustrFrameString), 56 + sizeof(::UnityEngine::MaterialPropertyBlock*)> __VROSC_ClustrFrameStringSizeCheck;
  static_assert(sizeof(ClustrFrameString) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ClustrFrameString::get_Note
// Il2CppName: get_Note
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::ClustrFrameString::*)()>(&VROSC::ClustrFrameString::get_Note)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameString*), "get_Note", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameString::set_Note
// Il2CppName: set_Note
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameString::*)(int)>(&VROSC::ClustrFrameString::set_Note)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameString*), "set_Note", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ClustrFrameString::CreateBlock
// Il2CppName: CreateBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameString::*)()>(&VROSC::ClustrFrameString::CreateBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameString*), "CreateBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameString::SetVisible
// Il2CppName: SetVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameString::*)(int)>(&VROSC::ClustrFrameString::SetVisible)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameString*), "SetVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameString::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameString::*)()>(&VROSC::ClustrFrameString::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameString*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ClustrFrameString::SetPlayingColor
// Il2CppName: SetPlayingColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ClustrFrameString::*)(::UnityEngine::Vector3, float, float)>(&VROSC::ClustrFrameString::SetPlayingColor)> {
  static const MethodInfo* get() {
    static auto* power = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highlight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ClustrFrameString*), "SetPlayingColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{power, velocity, highlight});
  }
};
