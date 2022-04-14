// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.NoteBoard
#include "VROSC/NoteBoard.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Skipping declaration: NoteBoardNote because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextMesh
  class TextMesh;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNoteText
  class NoteBoardNoteText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardNoteText);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteText*, "VROSC", "NoteBoardNoteText");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardNoteText
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardNoteText : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.NoteBoardNote _note
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::NoteBoardNote* note;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNote*) == 0x8);
    // private UnityEngine.TextMesh _text
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::TextMesh* text;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextMesh*) == 0x8);
    // private System.Single _size
    // Size: 0x4
    // Offset: 0x28
    float size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _normalized
    // Size: 0x1
    // Offset: 0x2C
    bool normalized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: normalized and: textStartPosition
    char __padding3[0x3] = {};
    // private UnityEngine.Vector3 _textStartPosition
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 textStartPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: textStartPosition and: textTransform
    char __padding4[0x4] = {};
    // private UnityEngine.Transform _textTransform
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* textTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.NoteBoardNote _note
    [[deprecated]] ::VROSC::NoteBoardNote*& dyn__note();
    // Get instance field reference: private UnityEngine.TextMesh _text
    [[deprecated]] ::UnityEngine::TextMesh*& dyn__text();
    // Get instance field reference: private System.Single _size
    [[deprecated]] float& dyn__size();
    // Get instance field reference: private System.Boolean _normalized
    [[deprecated]] bool& dyn__normalized();
    // Get instance field reference: private UnityEngine.Vector3 _textStartPosition
    [[deprecated]] ::UnityEngine::Vector3& dyn__textStartPosition();
    // Get instance field reference: private UnityEngine.Transform _textTransform
    [[deprecated]] ::UnityEngine::Transform*& dyn__textTransform();
    // private System.Void Awake()
    // Offset: 0xC56E98
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0xC56EF4
    void OnEnable();
    // public System.Void Setup(UnityEngine.Vector3 noteScale)
    // Offset: 0xC56F24
    void Setup(::UnityEngine::Vector3 noteScale);
    // public System.Void SetText(System.Boolean active, VROSC.NoteBoard/VROSC.PlayAxis axis, System.Boolean colorize)
    // Offset: 0xC56F8C
    void SetText(bool active, ::VROSC::NoteBoard::PlayAxis axis, bool colorize);
    // public System.Void UpdateText(VROSC.NoteBoard/VROSC.PlayAxis axis, System.Boolean colorize)
    // Offset: 0xC57000
    void UpdateText(::VROSC::NoteBoard::PlayAxis axis, bool colorize);
    // private System.Void Normalize()
    // Offset: 0xC570E8
    void Normalize();
    // private System.String GetTextByAxis(VROSC.NoteBoard/VROSC.PlayAxis axis)
    // Offset: 0xC57184
    ::StringW GetTextByAxis(::VROSC::NoteBoard::PlayAxis axis);
    // private UnityEngine.Color GetTextColor(VROSC.NoteBoard/VROSC.PlayAxis axis)
    // Offset: 0xC572B0
    ::UnityEngine::Color GetTextColor(::VROSC::NoteBoard::PlayAxis axis);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0xC573E4
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0xC5743C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardNoteText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardNoteText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardNoteText*, creationType>()));
    }
  }; // VROSC.NoteBoardNoteText
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardNoteText), 64 + sizeof(::UnityEngine::Transform*)> __VROSC_NoteBoardNoteTextSizeCheck;
  static_assert(sizeof(NoteBoardNoteText) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteText::*)()>(&VROSC::NoteBoardNoteText::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteText::*)()>(&VROSC::NoteBoardNoteText::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteText::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteText::Setup)> {
  static const MethodInfo* get() {
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteScale});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteText::*)(bool, ::VROSC::NoteBoard::PlayAxis, bool)>(&VROSC::NoteBoardNoteText::SetText)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/PlayAxis")->byval_arg;
    static auto* colorize = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active, axis, colorize});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::UpdateText
// Il2CppName: UpdateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteText::*)(::VROSC::NoteBoard::PlayAxis, bool)>(&VROSC::NoteBoardNoteText::UpdateText)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/PlayAxis")->byval_arg;
    static auto* colorize = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "UpdateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, colorize});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteText::*)()>(&VROSC::NoteBoardNoteText::Normalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::GetTextByAxis
// Il2CppName: GetTextByAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::NoteBoardNoteText::*)(::VROSC::NoteBoard::PlayAxis)>(&VROSC::NoteBoardNoteText::GetTextByAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/PlayAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "GetTextByAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::GetTextColor
// Il2CppName: GetTextColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::NoteBoardNoteText::*)(::VROSC::NoteBoard::PlayAxis)>(&VROSC::NoteBoardNoteText::GetTextColor)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/PlayAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "GetTextColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteText::*)()>(&VROSC::NoteBoardNoteText::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteText*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
