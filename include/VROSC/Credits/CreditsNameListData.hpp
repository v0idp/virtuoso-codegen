// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declaring namespace: VROSC::Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsNameData
  class CreditsNameData;
}
// Completed forward declares
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsNameListData
  class CreditsNameListData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Credits::CreditsNameListData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsNameListData*, "VROSC.Credits", "CreditsNameListData");
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Credits.CreditsNameListData
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsNameListData : public ::Il2CppObject {
    public:
    public:
    // private System.String _header
    // Size: 0x8
    // Offset: 0x10
    ::StringW header;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.Credits.CreditsNameData> _names
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>* names;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*) == 0x8);
    // private System.String _footer
    // Size: 0x8
    // Offset: 0x20
    ::StringW footer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _header
    [[deprecated("Use field access instead!")]] ::StringW& dyn__header();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.Credits.CreditsNameData> _names
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*& dyn__names();
    // Get instance field reference: private System.String _footer
    [[deprecated("Use field access instead!")]] ::StringW& dyn__footer();
    // public System.String get_Header()
    // Offset: 0x8DFB90
    ::StringW get_Header();
    // public System.String get_Footer()
    // Offset: 0x8DFB98
    ::StringW get_Footer();
    // public System.Collections.Generic.List`1<VROSC.Credits.CreditsNameData> get_Names()
    // Offset: 0x8DFBA0
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>* get_Names();
    // public System.Void .ctor()
    // Offset: 0x8DFBA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsNameListData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Credits::CreditsNameListData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsNameListData*, creationType>()));
    }
  }; // VROSC.Credits.CreditsNameListData
  #pragma pack(pop)
  static check_size<sizeof(CreditsNameListData), 32 + sizeof(::StringW)> __VROSC_Credits_CreditsNameListDataSizeCheck;
  static_assert(sizeof(CreditsNameListData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Credits::CreditsNameListData::get_Header
// Il2CppName: get_Header
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::Credits::CreditsNameListData::*)()>(&VROSC::Credits::CreditsNameListData::get_Header)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsNameListData*), "get_Header", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsNameListData::get_Footer
// Il2CppName: get_Footer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::Credits::CreditsNameListData::*)()>(&VROSC::Credits::CreditsNameListData::get_Footer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsNameListData*), "get_Footer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsNameListData::get_Names
// Il2CppName: get_Names
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>* (VROSC::Credits::CreditsNameListData::*)()>(&VROSC::Credits::CreditsNameListData::get_Names)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsNameListData*), "get_Names", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsNameListData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
