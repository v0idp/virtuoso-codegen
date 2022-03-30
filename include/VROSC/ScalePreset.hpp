// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Scale
#include "VROSC/Scale.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
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
  // Forward declaring type: ScalePreset
  class ScalePreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ScalePreset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScalePreset*, "VROSC", "ScalePreset");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ScalePreset
  // [TokenAttribute] Offset: FFFFFFFF
  class ScalePreset : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::ScalePreset::NotePriority
    class NotePriority;
    // Nested type: ::VROSC::ScalePreset::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [BitMaskAttribute] Offset: 0x66F484
    // public VROSC.Scale Scale
    // Size: 0x14
    // Offset: 0x18
    ::VROSC::Scale Scale;
    // Field size check
    static_assert(sizeof(::VROSC::Scale) == 0x14);
    // public System.Collections.Generic.List`1<VROSC.ScalePreset/VROSC.NotePriority> NotePriorities
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::VROSC::ScalePreset::NotePriority*>* NotePriorities;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::ScalePreset::NotePriority*>*) == 0x8);
    public:
    // Get instance field reference: public System.String Name
    ::StringW& dyn_Name();
    // Get instance field reference: public VROSC.Scale Scale
    ::VROSC::Scale& dyn_Scale();
    // Get instance field reference: public System.Collections.Generic.List`1<VROSC.ScalePreset/VROSC.NotePriority> NotePriorities
    ::System::Collections::Generic::List_1<::VROSC::ScalePreset::NotePriority*>*& dyn_NotePriorities();
    // public System.Void UpdateNotePriorityList()
    // Offset: 0x13DF96C
    void UpdateNotePriorityList();
    // public System.Void .ctor()
    // Offset: 0x13DFC38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScalePreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ScalePreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScalePreset*, creationType>()));
    }
  }; // VROSC.ScalePreset
  #pragma pack(pop)
  static check_size<sizeof(ScalePreset), 32 + sizeof(::System::Collections::Generic::List_1<::VROSC::ScalePreset::NotePriority*>*)> __VROSC_ScalePresetSizeCheck;
  static_assert(sizeof(ScalePreset) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ScalePreset::UpdateNotePriorityList
// Il2CppName: UpdateNotePriorityList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScalePreset::*)()>(&VROSC::ScalePreset::UpdateNotePriorityList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScalePreset*), "UpdateNotePriorityList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScalePreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!