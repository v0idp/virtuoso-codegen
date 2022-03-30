// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoard
#include "VROSC/NoteBoard.hpp"
// Including type: VROSC.Scale
#include "VROSC/Scale.hpp"
// Including type: VROSC.Note
#include "VROSC/Note.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ScaleNode
  class ScaleNode;
  // Forward declaring type: NoteField
  class NoteField;
  // Forward declaring type: IntField
  class IntField;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoard::NoteAxis);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoard::NoteAxis*, "VROSC", "NoteBoard/NoteAxis");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoard/VROSC.NoteAxis
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoard::NoteAxis : public ::Il2CppObject {
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
    // private VROSC.Scale <Scale>k__BackingField
    // Size: 0x14
    // Offset: 0x10
    ::VROSC::Scale Scale;
    // Field size check
    static_assert(sizeof(::VROSC::Scale) == 0x14);
    // private VROSC.Note <StartNote>k__BackingField
    // Size: 0x14
    // Offset: 0x14
    ::VROSC::Note StartNote;
    // Field size check
    static_assert(sizeof(::VROSC::Note) == 0x14);
    // private VROSC.NoteBoard/VROSC.Axis <Axis>k__BackingField
    // Size: 0x14
    // Offset: 0x18
    ::VROSC::NoteBoard::Axis Axis;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoard::Axis) == 0x14);
    // public System.Boolean OverrideBoard
    // Size: 0x1
    // Offset: 0x1C
    bool OverrideBoard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: OverrideBoard and: OverrideScale
    char __padding3[0x3] = {};
    // public VROSC.ScaleNode OverrideScale
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::ScaleNode* OverrideScale;
    // Field size check
    static_assert(sizeof(::VROSC::ScaleNode*) == 0x8);
    // public VROSC.NoteField OverrideStartNote
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::NoteField* OverrideStartNote;
    // Field size check
    static_assert(sizeof(::VROSC::NoteField*) == 0x8);
    // public VROSC.IntField StartOctave
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::IntField* StartOctave;
    // Field size check
    static_assert(sizeof(::VROSC::IntField*) == 0x8);
    // public VROSC.IntField NumberOfNotes
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::IntField* NumberOfNotes;
    // Field size check
    static_assert(sizeof(::VROSC::IntField*) == 0x8);
    // public VROSC.IntField IntervalBetweenNotes
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::IntField* IntervalBetweenNotes;
    // Field size check
    static_assert(sizeof(::VROSC::IntField*) == 0x8);
    // private VROSC.Scale _lastScale
    // Size: 0x14
    // Offset: 0x48
    ::VROSC::Scale lastScale;
    // Field size check
    static_assert(sizeof(::VROSC::Scale) == 0x14);
    // private VROSC.Note _lastStartNote
    // Size: 0x14
    // Offset: 0x4C
    ::VROSC::Note lastStartNote;
    // Field size check
    static_assert(sizeof(::VROSC::Note) == 0x14);
    // private System.Int32 _lastStartOctave
    // Size: 0x4
    // Offset: 0x50
    int lastStartOctave;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _lastNumberOfNotes
    // Size: 0x4
    // Offset: 0x54
    int lastNumberOfNotes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _lastIntervalBetweenNotes
    // Size: 0x4
    // Offset: 0x58
    int lastIntervalBetweenNotes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private VROSC.Scale <Scale>k__BackingField
    ::VROSC::Scale& dyn_$Scale$k__BackingField();
    // Get instance field reference: private VROSC.Note <StartNote>k__BackingField
    ::VROSC::Note& dyn_$StartNote$k__BackingField();
    // Get instance field reference: private VROSC.NoteBoard/VROSC.Axis <Axis>k__BackingField
    ::VROSC::NoteBoard::Axis& dyn_$Axis$k__BackingField();
    // Get instance field reference: public System.Boolean OverrideBoard
    bool& dyn_OverrideBoard();
    // Get instance field reference: public VROSC.ScaleNode OverrideScale
    ::VROSC::ScaleNode*& dyn_OverrideScale();
    // Get instance field reference: public VROSC.NoteField OverrideStartNote
    ::VROSC::NoteField*& dyn_OverrideStartNote();
    // Get instance field reference: public VROSC.IntField StartOctave
    ::VROSC::IntField*& dyn_StartOctave();
    // Get instance field reference: public VROSC.IntField NumberOfNotes
    ::VROSC::IntField*& dyn_NumberOfNotes();
    // Get instance field reference: public VROSC.IntField IntervalBetweenNotes
    ::VROSC::IntField*& dyn_IntervalBetweenNotes();
    // Get instance field reference: private VROSC.Scale _lastScale
    ::VROSC::Scale& dyn__lastScale();
    // Get instance field reference: private VROSC.Note _lastStartNote
    ::VROSC::Note& dyn__lastStartNote();
    // Get instance field reference: private System.Int32 _lastStartOctave
    int& dyn__lastStartOctave();
    // Get instance field reference: private System.Int32 _lastNumberOfNotes
    int& dyn__lastNumberOfNotes();
    // Get instance field reference: private System.Int32 _lastIntervalBetweenNotes
    int& dyn__lastIntervalBetweenNotes();
    // public VROSC.Scale get_Scale()
    // Offset: 0x133DC88
    ::VROSC::Scale get_Scale();
    // private System.Void set_Scale(VROSC.Scale value)
    // Offset: 0x133DC90
    void set_Scale(::VROSC::Scale value);
    // public VROSC.Note get_StartNote()
    // Offset: 0x133DC98
    ::VROSC::Note get_StartNote();
    // private System.Void set_StartNote(VROSC.Note value)
    // Offset: 0x133DCA0
    void set_StartNote(::VROSC::Note value);
    // public VROSC.NoteBoard/VROSC.Axis get_Axis()
    // Offset: 0x133DCA8
    ::VROSC::NoteBoard::Axis get_Axis();
    // private System.Void set_Axis(VROSC.NoteBoard/VROSC.Axis value)
    // Offset: 0x133DCB0
    void set_Axis(::VROSC::NoteBoard::Axis value);
    // public System.Void Init(VROSC.NoteBoard/VROSC.Axis axis)
    // Offset: 0x133DC80
    void Init(::VROSC::NoteBoard::Axis axis);
    // public System.Boolean UpdateAndReturnIsDirty(VROSC.Scale noteBoardScale, VROSC.Note noteBoardStartNote)
    // Offset: 0x133DCB8
    bool UpdateAndReturnIsDirty(::VROSC::Scale noteBoardScale, ::VROSC::Note noteBoardStartNote);
    // public System.Void .ctor()
    // Offset: 0x133DE6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoard::NoteAxis* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoard::NoteAxis::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoard::NoteAxis*, creationType>()));
    }
  }; // VROSC.NoteBoard/VROSC.NoteAxis
  #pragma pack(pop)
  static check_size<sizeof(NoteBoard::NoteAxis), 88 + sizeof(int)> __VROSC_NoteBoard_NoteAxisSizeCheck;
  static_assert(sizeof(NoteBoard::NoteAxis) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::get_Scale
// Il2CppName: get_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Scale (VROSC::NoteBoard::NoteAxis::*)()>(&VROSC::NoteBoard::NoteAxis::get_Scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard::NoteAxis*), "get_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::set_Scale
// Il2CppName: set_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::NoteAxis::*)(::VROSC::Scale)>(&VROSC::NoteBoard::NoteAxis::set_Scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard::NoteAxis*), "set_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::get_StartNote
// Il2CppName: get_StartNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Note (VROSC::NoteBoard::NoteAxis::*)()>(&VROSC::NoteBoard::NoteAxis::get_StartNote)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard::NoteAxis*), "get_StartNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::set_StartNote
// Il2CppName: set_StartNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::NoteAxis::*)(::VROSC::Note)>(&VROSC::NoteBoard::NoteAxis::set_StartNote)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard::NoteAxis*), "set_StartNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::get_Axis
// Il2CppName: get_Axis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteBoard::Axis (VROSC::NoteBoard::NoteAxis::*)()>(&VROSC::NoteBoard::NoteAxis::get_Axis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard::NoteAxis*), "get_Axis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::set_Axis
// Il2CppName: set_Axis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::NoteAxis::*)(::VROSC::NoteBoard::Axis)>(&VROSC::NoteBoard::NoteAxis::set_Axis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard::NoteAxis*), "set_Axis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::NoteAxis::*)(::VROSC::NoteBoard::Axis)>(&VROSC::NoteBoard::NoteAxis::Init)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard::NoteAxis*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::UpdateAndReturnIsDirty
// Il2CppName: UpdateAndReturnIsDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::NoteBoard::NoteAxis::*)(::VROSC::Scale, ::VROSC::Note)>(&VROSC::NoteBoard::NoteAxis::UpdateAndReturnIsDirty)> {
  static const MethodInfo* get() {
    static auto* noteBoardScale = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    static auto* noteBoardStartNote = &::il2cpp_utils::GetClassFromName("VROSC", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard::NoteAxis*), "UpdateAndReturnIsDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteBoardScale, noteBoardStartNote});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxis::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
