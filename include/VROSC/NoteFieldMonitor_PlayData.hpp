// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteFieldMonitor
#include "VROSC/NoteFieldMonitor.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteFieldMonitor::PlayData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldMonitor::PlayData*, "VROSC", "NoteFieldMonitor/PlayData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteFieldMonitor/VROSC.PlayData
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteFieldMonitor::PlayData : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Int32 <Note>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int Note;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Boolean <Playing>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool Playing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Playing and: Color
    char __padding1[0x3] = {};
    // private UnityEngine.Color <Color>k__BackingField
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color Color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private readonly System.Int32 <Note>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Note$k__BackingField();
    // Get instance field reference: private readonly System.Boolean <Playing>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Playing$k__BackingField();
    // Get instance field reference: private UnityEngine.Color <Color>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_$Color$k__BackingField();
    // public System.Int32 get_Note()
    // Offset: 0x1966BC4
    int get_Note();
    // public System.Boolean get_Playing()
    // Offset: 0x1966BCC
    bool get_Playing();
    // public UnityEngine.Color get_Color()
    // Offset: 0x1966BE0
    ::UnityEngine::Color get_Color();
    // private System.Void set_Color(UnityEngine.Color value)
    // Offset: 0x1966BD4
    void set_Color(::UnityEngine::Color value);
    // public System.Void .ctor(System.Int32 note, System.Boolean playing, UnityEngine.Color color)
    // Offset: 0x1966BEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteFieldMonitor::PlayData* New_ctor(int note, bool playing, ::UnityEngine::Color color) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteFieldMonitor::PlayData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteFieldMonitor::PlayData*, creationType>(note, playing, color)));
    }
    // public System.Void AddColor(UnityEngine.Color color)
    // Offset: 0x1966C54
    void AddColor(::UnityEngine::Color color);
  }; // VROSC.NoteFieldMonitor/VROSC.PlayData
  #pragma pack(pop)
  static check_size<sizeof(NoteFieldMonitor::PlayData), 24 + sizeof(::UnityEngine::Color)> __VROSC_NoteFieldMonitor_PlayDataSizeCheck;
  static_assert(sizeof(NoteFieldMonitor::PlayData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteFieldMonitor::PlayData::get_Note
// Il2CppName: get_Note
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NoteFieldMonitor::PlayData::*)()>(&VROSC::NoteFieldMonitor::PlayData::get_Note)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldMonitor::PlayData*), "get_Note", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldMonitor::PlayData::get_Playing
// Il2CppName: get_Playing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::NoteFieldMonitor::PlayData::*)()>(&VROSC::NoteFieldMonitor::PlayData::get_Playing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldMonitor::PlayData*), "get_Playing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldMonitor::PlayData::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::NoteFieldMonitor::PlayData::*)()>(&VROSC::NoteFieldMonitor::PlayData::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldMonitor::PlayData*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldMonitor::PlayData::set_Color
// Il2CppName: set_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldMonitor::PlayData::*)(::UnityEngine::Color)>(&VROSC::NoteFieldMonitor::PlayData::set_Color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldMonitor::PlayData*), "set_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteFieldMonitor::PlayData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteFieldMonitor::PlayData::AddColor
// Il2CppName: AddColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteFieldMonitor::PlayData::*)(::UnityEngine::Color)>(&VROSC::NoteFieldMonitor::PlayData::AddColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteFieldMonitor::PlayData*), "AddColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
