// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoard/VROSC.Axis
#include "VROSC/NoteBoard.hpp"
// Including type: VROSC.Scale
#include "VROSC/Scale.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Note
  struct Note;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteFieldParameters
  class NoteFieldParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteFieldParameters);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldParameters*, "VROSC", "NoteFieldParameters");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteFieldParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteFieldParameters : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::NoteFieldParameters::Axis
    class Axis;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.NoteFieldParameters/VROSC.Axis <X>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::NoteFieldParameters::Axis* X;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldParameters::Axis*) == 0x8);
    // private VROSC.NoteFieldParameters/VROSC.Axis <Y>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::NoteFieldParameters::Axis* Y;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldParameters::Axis*) == 0x8);
    // private VROSC.NoteFieldParameters/VROSC.Axis <Z>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::NoteFieldParameters::Axis* Z;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldParameters::Axis*) == 0x8);
    // private System.Int32 <NumberOfFields>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int NumberOfFields;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: NumberOfFields and: PrimaryNoteList
    char __padding3[0x4] = {};
    // private System.Collections.Generic.List`1<System.Int32> <PrimaryNoteList>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<int>* PrimaryNoteList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private VROSC.NoteBoard/VROSC.Axis <PrimaryAxis>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    ::VROSC::NoteBoard::Axis PrimaryAxis;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoard::Axis) == 0x4);
    // private VROSC.Scale <PrimaryScale>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    ::VROSC::Scale PrimaryScale;
    // Field size check
    static_assert(sizeof(::VROSC::Scale) == 0x4);
    // private System.Int32 <SecondaryAxisSteps>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int SecondaryAxisSteps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <TertiaryAxisSteps>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    int TertiaryAxisSteps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private VROSC.NoteFieldParameters/VROSC.Axis <X>k__BackingField
    ::VROSC::NoteFieldParameters::Axis*& dyn_$X$k__BackingField();
    // Get instance field reference: private VROSC.NoteFieldParameters/VROSC.Axis <Y>k__BackingField
    ::VROSC::NoteFieldParameters::Axis*& dyn_$Y$k__BackingField();
    // Get instance field reference: private VROSC.NoteFieldParameters/VROSC.Axis <Z>k__BackingField
    ::VROSC::NoteFieldParameters::Axis*& dyn_$Z$k__BackingField();
    // Get instance field reference: private System.Int32 <NumberOfFields>k__BackingField
    int& dyn_$NumberOfFields$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> <PrimaryNoteList>k__BackingField
    ::System::Collections::Generic::List_1<int>*& dyn_$PrimaryNoteList$k__BackingField();
    // Get instance field reference: private VROSC.NoteBoard/VROSC.Axis <PrimaryAxis>k__BackingField
    ::VROSC::NoteBoard::Axis& dyn_$PrimaryAxis$k__BackingField();
    // Get instance field reference: private VROSC.Scale <PrimaryScale>k__BackingField
    ::VROSC::Scale& dyn_$PrimaryScale$k__BackingField();
    // Get instance field reference: private System.Int32 <SecondaryAxisSteps>k__BackingField
    int& dyn_$SecondaryAxisSteps$k__BackingField();
    // Get instance field reference: private System.Int32 <TertiaryAxisSteps>k__BackingField
    int& dyn_$TertiaryAxisSteps$k__BackingField();
    // public VROSC.NoteFieldParameters/VROSC.Axis get_X()
    // Offset: 0xA15554
    ::VROSC::NoteFieldParameters::Axis* get_X();
    // private System.Void set_X(VROSC.NoteFieldParameters/VROSC.Axis value)
    // Offset: 0xA1554C
    void set_X(::VROSC::NoteFieldParameters::Axis* value);
    // public VROSC.NoteFieldParameters/VROSC.Axis get_Y()
    // Offset: 0xA15564
    ::VROSC::NoteFieldParameters::Axis* get_Y();
    // private System.Void set_Y(VROSC.NoteFieldParameters/VROSC.Axis value)
    // Offset: 0xA1555C
    void set_Y(::VROSC::NoteFieldParameters::Axis* value);
    // public VROSC.NoteFieldParameters/VROSC.Axis get_Z()
    // Offset: 0xA15574
    ::VROSC::NoteFieldParameters::Axis* get_Z();
    // private System.Void set_Z(VROSC.NoteFieldParameters/VROSC.Axis value)
    // Offset: 0xA1556C
    void set_Z(::VROSC::NoteFieldParameters::Axis* value);
    // public System.Int32 get_NumberOfFields()
    // Offset: 0xA15584
    int get_NumberOfFields();
    // private System.Void set_NumberOfFields(System.Int32 value)
    // Offset: 0xA1557C
    void set_NumberOfFields(int value);
    // public System.Collections.Generic.List`1<System.Int32> get_PrimaryNoteList()
    // Offset: 0xA15594
    ::System::Collections::Generic::List_1<int>* get_PrimaryNoteList();
    // private System.Void set_PrimaryNoteList(System.Collections.Generic.List`1<System.Int32> value)
    // Offset: 0xA1558C
    void set_PrimaryNoteList(::System::Collections::Generic::List_1<int>* value);
    // public VROSC.NoteBoard/VROSC.Axis get_PrimaryAxis()
    // Offset: 0xA155A4
    ::VROSC::NoteBoard::Axis get_PrimaryAxis();
    // private System.Void set_PrimaryAxis(VROSC.NoteBoard/VROSC.Axis value)
    // Offset: 0xA1559C
    void set_PrimaryAxis(::VROSC::NoteBoard::Axis value);
    // public VROSC.Scale get_PrimaryScale()
    // Offset: 0xA155B4
    ::VROSC::Scale get_PrimaryScale();
    // private System.Void set_PrimaryScale(VROSC.Scale value)
    // Offset: 0xA155AC
    void set_PrimaryScale(::VROSC::Scale value);
    // public System.Int32 get_SecondaryAxisSteps()
    // Offset: 0xA155C4
    int get_SecondaryAxisSteps();
    // private System.Void set_SecondaryAxisSteps(System.Int32 value)
    // Offset: 0xA155BC
    void set_SecondaryAxisSteps(int value);
    // public System.Int32 get_TertiaryAxisSteps()
    // Offset: 0xA155D4
    int get_TertiaryAxisSteps();
    // private System.Void set_TertiaryAxisSteps(System.Int32 value)
    // Offset: 0xA155CC
    void set_TertiaryAxisSteps(int value);
    // public System.Void .ctor(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0xA155DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteFieldParameters* New_ctor(int x, int y, int z) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteFieldParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteFieldParameters*, creationType>(x, y, z)));
    }
    // public System.Void .ctor(VROSC.NoteBoard/VROSC.NoteAxis[] noteAxes)
    // Offset: 0xA10AAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteFieldParameters* New_ctor(::ArrayW<::VROSC::NoteBoard::NoteAxis*> noteAxes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteFieldParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteFieldParameters*, creationType>(noteAxes)));
    }
    // public System.Void SetFieldCount(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0xA156A8
    void SetFieldCount(int x, int y, int z);
    // public System.Void SetValidNotes(System.Collections.Generic.List`1<System.Int32> validNotesX, System.Collections.Generic.List`1<System.Int32> validNotesY, System.Collections.Generic.List`1<System.Int32> validNotesZ)
    // Offset: 0xA15720
    void SetValidNotes(::System::Collections::Generic::List_1<int>* validNotesX, ::System::Collections::Generic::List_1<int>* validNotesY, ::System::Collections::Generic::List_1<int>* validNotesZ);
    // public System.Void SetPriorityOfAxes(VROSC.NoteBoard/VROSC.Axis primaryAxis, VROSC.Scale primaryScale, System.Int32 secondaryAxisSteps, System.Int32 tertiaryAxisSteps)
    // Offset: 0xA15784
    void SetPriorityOfAxes(::VROSC::NoteBoard::Axis primaryAxis, ::VROSC::Scale primaryScale, int secondaryAxisSteps, int tertiaryAxisSteps);
    // public System.Void SetValidNotes(VROSC.NoteBoard/VROSC.NoteAxis[] noteAxes)
    // Offset: 0xA10C2C
    void SetValidNotes(::ArrayW<::VROSC::NoteBoard::NoteAxis*> noteAxes);
    // public System.Void SetPriorityOfAxes(VROSC.NoteBoard/VROSC.NoteAxis[] noteAxes, VROSC.NoteBoard/VROSC.Axis primaryAxis)
    // Offset: 0xA10CDC
    void SetPriorityOfAxes(::ArrayW<::VROSC::NoteBoard::NoteAxis*> noteAxes, ::VROSC::NoteBoard::Axis primaryAxis);
    // static private System.Boolean IsOnScale(System.Int32 midiNote, VROSC.Scale scale)
    // Offset: 0xA157D0
    static bool IsOnScale(int midiNote, ::VROSC::Scale scale);
    // static private System.Int32 GetMidiNoteNumber(VROSC.Note note, System.Int32 octave)
    // Offset: 0xA15808
    static int GetMidiNoteNumber(::VROSC::Note note, int octave);
    // public System.Int32 GetTransposedNote(System.Int32 primaryAxisCurrentValue, System.Int32 secondaryAxisCurrentValue, System.Int32 tertiaryAxisCurrentValue)
    // Offset: 0xA1521C
    int GetTransposedNote(int primaryAxisCurrentValue, int secondaryAxisCurrentValue, int tertiaryAxisCurrentValue);
    // private System.Int32 TransposeNoteByScaleSteps(System.Int32 note, System.Int32 steps, VROSC.Scale scale)
    // Offset: 0xA15840
    int TransposeNoteByScaleSteps(int note, int steps, ::VROSC::Scale scale);
  }; // VROSC.NoteFieldParameters
  #pragma pack(pop)
  static check_size<sizeof(NoteFieldParameters), 68 + sizeof(int)> __VROSC_NoteFieldParametersSizeCheck;
  static_assert(sizeof(NoteFieldParameters) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_X
// Il2CppName: get_X
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldParameters::Axis* (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_X)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_X", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_X
// Il2CppName: set_X
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::VROSC::NoteFieldParameters::Axis*)>(&VROSC::NoteFieldParameters::set_X)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldParameters/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_X", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_Y
// Il2CppName: get_Y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldParameters::Axis* (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_Y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_Y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_Y
// Il2CppName: set_Y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::VROSC::NoteFieldParameters::Axis*)>(&VROSC::NoteFieldParameters::set_Y)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldParameters/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_Y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_Z
// Il2CppName: get_Z
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldParameters::Axis* (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_Z)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_Z", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_Z
// Il2CppName: set_Z
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::VROSC::NoteFieldParameters::Axis*)>(&VROSC::NoteFieldParameters::set_Z)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldParameters/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_Z", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_NumberOfFields
// Il2CppName: get_NumberOfFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_NumberOfFields)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_NumberOfFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_NumberOfFields
// Il2CppName: set_NumberOfFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(int)>(&VROSC::NoteFieldParameters::set_NumberOfFields)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_NumberOfFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_PrimaryNoteList
// Il2CppName: get_PrimaryNoteList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int>* (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_PrimaryNoteList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_PrimaryNoteList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_PrimaryNoteList
// Il2CppName: set_PrimaryNoteList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::System::Collections::Generic::List_1<int>*)>(&VROSC::NoteFieldParameters::set_PrimaryNoteList)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_PrimaryNoteList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_PrimaryAxis
// Il2CppName: get_PrimaryAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteBoard::Axis (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_PrimaryAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_PrimaryAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_PrimaryAxis
// Il2CppName: set_PrimaryAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::VROSC::NoteBoard::Axis)>(&VROSC::NoteFieldParameters::set_PrimaryAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_PrimaryAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_PrimaryScale
// Il2CppName: get_PrimaryScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Scale (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_PrimaryScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_PrimaryScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_PrimaryScale
// Il2CppName: set_PrimaryScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::VROSC::Scale)>(&VROSC::NoteFieldParameters::set_PrimaryScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_PrimaryScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_SecondaryAxisSteps
// Il2CppName: get_SecondaryAxisSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_SecondaryAxisSteps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_SecondaryAxisSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_SecondaryAxisSteps
// Il2CppName: set_SecondaryAxisSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(int)>(&VROSC::NoteFieldParameters::set_SecondaryAxisSteps)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_SecondaryAxisSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::get_TertiaryAxisSteps
// Il2CppName: get_TertiaryAxisSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NoteFieldParameters::*)()>(&VROSC::NoteFieldParameters::get_TertiaryAxisSteps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "get_TertiaryAxisSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::set_TertiaryAxisSteps
// Il2CppName: set_TertiaryAxisSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(int)>(&VROSC::NoteFieldParameters::set_TertiaryAxisSteps)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "set_TertiaryAxisSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::SetFieldCount
// Il2CppName: SetFieldCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(int, int, int)>(&VROSC::NoteFieldParameters::SetFieldCount)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "SetFieldCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::SetValidNotes
// Il2CppName: SetValidNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::System::Collections::Generic::List_1<int>*, ::System::Collections::Generic::List_1<int>*, ::System::Collections::Generic::List_1<int>*)>(&VROSC::NoteFieldParameters::SetValidNotes)> {
  static const MethodInfo* get() {
    static auto* validNotesX = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* validNotesY = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* validNotesZ = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "SetValidNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{validNotesX, validNotesY, validNotesZ});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::SetPriorityOfAxes
// Il2CppName: SetPriorityOfAxes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::VROSC::NoteBoard::Axis, ::VROSC::Scale, int, int)>(&VROSC::NoteFieldParameters::SetPriorityOfAxes)> {
  static const MethodInfo* get() {
    static auto* primaryAxis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/Axis")->byval_arg;
    static auto* primaryScale = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    static auto* secondaryAxisSteps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tertiaryAxisSteps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "SetPriorityOfAxes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{primaryAxis, primaryScale, secondaryAxisSteps, tertiaryAxisSteps});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::SetValidNotes
// Il2CppName: SetValidNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::ArrayW<::VROSC::NoteBoard::NoteAxis*>)>(&VROSC::NoteFieldParameters::SetValidNotes)> {
  static const MethodInfo* get() {
    static auto* noteAxes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/NoteAxis"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "SetValidNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteAxes});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::SetPriorityOfAxes
// Il2CppName: SetPriorityOfAxes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldParameters::*)(::ArrayW<::VROSC::NoteBoard::NoteAxis*>, ::VROSC::NoteBoard::Axis)>(&VROSC::NoteFieldParameters::SetPriorityOfAxes)> {
  static const MethodInfo* get() {
    static auto* noteAxes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/NoteAxis"), 1)->byval_arg;
    static auto* primaryAxis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "SetPriorityOfAxes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteAxes, primaryAxis});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::IsOnScale
// Il2CppName: IsOnScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ::VROSC::Scale)>(&VROSC::NoteFieldParameters::IsOnScale)> {
  static const MethodInfo* get() {
    static auto* midiNote = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "IsOnScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{midiNote, scale});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::GetMidiNoteNumber
// Il2CppName: GetMidiNoteNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::VROSC::Note, int)>(&VROSC::NoteFieldParameters::GetMidiNoteNumber)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("VROSC", "Note")->byval_arg;
    static auto* octave = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "GetMidiNoteNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, octave});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::GetTransposedNote
// Il2CppName: GetTransposedNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NoteFieldParameters::*)(int, int, int)>(&VROSC::NoteFieldParameters::GetTransposedNote)> {
  static const MethodInfo* get() {
    static auto* primaryAxisCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* secondaryAxisCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tertiaryAxisCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "GetTransposedNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{primaryAxisCurrentValue, secondaryAxisCurrentValue, tertiaryAxisCurrentValue});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldParameters::TransposeNoteByScaleSteps
// Il2CppName: TransposeNoteByScaleSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NoteFieldParameters::*)(int, int, ::VROSC::Scale)>(&VROSC::NoteFieldParameters::TransposeNoteByScaleSteps)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* steps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldParameters*), "TransposeNoteByScaleSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, steps, scale});
  }
};
