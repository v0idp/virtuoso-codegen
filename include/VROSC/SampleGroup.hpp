// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SampleData
  class SampleData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SampleGroup
  class SampleGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SampleGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SampleGroup*, "VROSC", "SampleGroup");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SampleGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 66991C
  class SampleGroup : public ::UnityEngine::ScriptableObject {
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
    // private System.Int32 _id
    // Size: 0x4
    // Offset: 0x18
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: displayName
    char __padding0[0x4] = {};
    // private System.String _displayName
    // Size: 0x8
    // Offset: 0x20
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _defaultMidiNote
    // Size: 0x4
    // Offset: 0x28
    int defaultMidiNote;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: defaultMidiNote and: samples
    char __padding2[0x4] = {};
    // private System.Collections.Generic.List`1<VROSC.SampleData> _samples
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::VROSC::SampleData*>* samples;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::SampleData*>*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _id
    int& dyn__id();
    // Get instance field reference: private System.String _displayName
    ::StringW& dyn__displayName();
    // Get instance field reference: private System.Int32 _defaultMidiNote
    int& dyn__defaultMidiNote();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.SampleData> _samples
    ::System::Collections::Generic::List_1<::VROSC::SampleData*>*& dyn__samples();
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // public System.Int32 get_Id()
    // Offset: 0xB0A974
    int get_Id();
    // public System.String get_DisplayName()
    // Offset: 0xB0A97C
    ::StringW get_DisplayName();
    // public System.Int32 get_DefaultMidiNote()
    // Offset: 0xB0A984
    int get_DefaultMidiNote();
    // public UnityEngine.Color get_Color()
    // Offset: 0xB0A98C
    ::UnityEngine::Color get_Color();
    // public System.Collections.Generic.List`1<VROSC.SampleData> get_Samples()
    // Offset: 0xB0A998
    ::System::Collections::Generic::List_1<::VROSC::SampleData*>* get_Samples();
    // public System.Void .ctor()
    // Offset: 0xB0A9A0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SampleGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SampleGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SampleGroup*, creationType>()));
    }
  }; // VROSC.SampleGroup
  #pragma pack(pop)
  static check_size<sizeof(SampleGroup), 56 + sizeof(::UnityEngine::Color)> __VROSC_SampleGroupSizeCheck;
  static_assert(sizeof(SampleGroup) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SampleGroup::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SampleGroup::*)()>(&VROSC::SampleGroup::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SampleGroup*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SampleGroup::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::SampleGroup::*)()>(&VROSC::SampleGroup::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SampleGroup*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SampleGroup::get_DefaultMidiNote
// Il2CppName: get_DefaultMidiNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SampleGroup::*)()>(&VROSC::SampleGroup::get_DefaultMidiNote)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SampleGroup*), "get_DefaultMidiNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SampleGroup::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::SampleGroup::*)()>(&VROSC::SampleGroup::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SampleGroup*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SampleGroup::get_Samples
// Il2CppName: get_Samples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::SampleData*>* (VROSC::SampleGroup::*)()>(&VROSC::SampleGroup::get_Samples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SampleGroup*), "get_Samples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SampleGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!