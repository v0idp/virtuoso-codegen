// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Credits.CreditsObject
#include "VROSC/Credits/CreditsObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsLine
  class CreditsLine;
  // Forward declaring type: CreditsHeader
  class CreditsHeader;
  // Forward declaring type: CreditsData
  class CreditsData;
  // Forward declaring type: CreditsSectionData
  class CreditsSectionData;
  // Forward declaring type: CreditsNameListData
  class CreditsNameListData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsSection
  class CreditsSection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Credits::CreditsSection);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsSection*, "VROSC.Credits", "CreditsSection");
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Credits.CreditsSection
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsSection : public ::VROSC::Credits::CreditsObject {
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
    // private VROSC.Credits.CreditsLine _linePrefab
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::Credits::CreditsLine* linePrefab;
    // Field size check
    static_assert(sizeof(::VROSC::Credits::CreditsLine*) == 0x8);
    // private VROSC.Credits.CreditsHeader _headerPrefab
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::Credits::CreditsHeader* headerPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::Credits::CreditsHeader*) == 0x8);
    // private VROSC.Credits.CreditsData _creditsData
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::Credits::CreditsData* creditsData;
    // Field size check
    static_assert(sizeof(::VROSC::Credits::CreditsData*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.Credits.CreditsObject> _objects
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>* objects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>*) == 0x8);
    public:
    // Get instance field reference: private VROSC.Credits.CreditsLine _linePrefab
    ::VROSC::Credits::CreditsLine*& dyn__linePrefab();
    // Get instance field reference: private VROSC.Credits.CreditsHeader _headerPrefab
    ::VROSC::Credits::CreditsHeader*& dyn__headerPrefab();
    // Get instance field reference: private VROSC.Credits.CreditsData _creditsData
    ::VROSC::Credits::CreditsData*& dyn__creditsData();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.Credits.CreditsObject> _objects
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>*& dyn__objects();
    // public System.Collections.Generic.List`1<VROSC.Credits.CreditsObject> get_Objects()
    // Offset: 0x1306ED4
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>* get_Objects();
    // public System.Void Setup(VROSC.Credits.CreditsData creditsData, VROSC.Credits.CreditsSectionData sectionData)
    // Offset: 0x1306EDC
    void Setup(::VROSC::Credits::CreditsData* creditsData, ::VROSC::Credits::CreditsSectionData* sectionData);
    // private System.Void CreateNameList(VROSC.Credits.CreditsNameListData creditsNameList)
    // Offset: 0x1307290
    void CreateNameList(::VROSC::Credits::CreditsNameListData* creditsNameList);
    // private System.Void CreateObject(VROSC.Credits.CreditsObject prefab)
    // Offset: 0x13070D4
    void CreateObject(::VROSC::Credits::CreditsObject* prefab);
    // private System.Void CreateHeaderStyle(System.String headerText)
    // Offset: 0x13071AC
    void CreateHeaderStyle(::StringW headerText);
    // private System.Void PlaceAndAddObjectToList(VROSC.Credits.CreditsObject creditsObject)
    // Offset: 0x1307468
    void PlaceAndAddObjectToList(::VROSC::Credits::CreditsObject* creditsObject);
    // public System.Void .ctor()
    // Offset: 0x1307528
    // Implemented from: VROSC.Credits.CreditsObject
    // Base method: System.Void CreditsObject::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsSection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Credits::CreditsSection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsSection*, creationType>()));
    }
  }; // VROSC.Credits.CreditsSection
  #pragma pack(pop)
  static check_size<sizeof(CreditsSection), 56 + sizeof(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>*)> __VROSC_Credits_CreditsSectionSizeCheck;
  static_assert(sizeof(CreditsSection) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Credits::CreditsSection::get_Objects
// Il2CppName: get_Objects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::Credits::CreditsObject*>* (VROSC::Credits::CreditsSection::*)()>(&VROSC::Credits::CreditsSection::get_Objects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSection*), "get_Objects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSection::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsSection::*)(::VROSC::Credits::CreditsData*, ::VROSC::Credits::CreditsSectionData*)>(&VROSC::Credits::CreditsSection::Setup)> {
  static const MethodInfo* get() {
    static auto* creditsData = &::il2cpp_utils::GetClassFromName("VROSC.Credits", "CreditsData")->byval_arg;
    static auto* sectionData = &::il2cpp_utils::GetClassFromName("VROSC.Credits", "CreditsSectionData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSection*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{creditsData, sectionData});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSection::CreateNameList
// Il2CppName: CreateNameList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsSection::*)(::VROSC::Credits::CreditsNameListData*)>(&VROSC::Credits::CreditsSection::CreateNameList)> {
  static const MethodInfo* get() {
    static auto* creditsNameList = &::il2cpp_utils::GetClassFromName("VROSC.Credits", "CreditsNameListData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSection*), "CreateNameList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{creditsNameList});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSection::CreateObject
// Il2CppName: CreateObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsSection::*)(::VROSC::Credits::CreditsObject*)>(&VROSC::Credits::CreditsSection::CreateObject)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("VROSC.Credits", "CreditsObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSection*), "CreateObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSection::CreateHeaderStyle
// Il2CppName: CreateHeaderStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsSection::*)(::StringW)>(&VROSC::Credits::CreditsSection::CreateHeaderStyle)> {
  static const MethodInfo* get() {
    static auto* headerText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSection*), "CreateHeaderStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headerText});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSection::PlaceAndAddObjectToList
// Il2CppName: PlaceAndAddObjectToList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsSection::*)(::VROSC::Credits::CreditsObject*)>(&VROSC::Credits::CreditsSection::PlaceAndAddObjectToList)> {
  static const MethodInfo* get() {
    static auto* creditsObject = &::il2cpp_utils::GetClassFromName("VROSC.Credits", "CreditsObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSection*), "PlaceAndAddObjectToList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{creditsObject});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
