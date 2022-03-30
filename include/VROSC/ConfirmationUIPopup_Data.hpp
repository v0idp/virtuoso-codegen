// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ConfirmationUIPopup
#include "VROSC/ConfirmationUIPopup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ConfirmationUIPopup::Data);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ConfirmationUIPopup::Data*, "VROSC", "ConfirmationUIPopup/Data");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ConfirmationUIPopup/VROSC.Data
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfirmationUIPopup::Data : public ::Il2CppObject {
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
    // public System.String HeaderText
    // Size: 0x8
    // Offset: 0x10
    ::StringW HeaderText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String BodyText
    // Size: 0x8
    // Offset: 0x18
    ::StringW BodyText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String HeaderText
    ::StringW& dyn_HeaderText();
    // Get instance field reference: public System.String BodyText
    ::StringW& dyn_BodyText();
    // public System.Void .ctor()
    // Offset: 0x1360EB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfirmationUIPopup::Data* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ConfirmationUIPopup::Data::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfirmationUIPopup::Data*, creationType>()));
    }
  }; // VROSC.ConfirmationUIPopup/VROSC.Data
  #pragma pack(pop)
  static check_size<sizeof(ConfirmationUIPopup::Data), 24 + sizeof(::StringW)> __VROSC_ConfirmationUIPopup_DataSizeCheck;
  static_assert(sizeof(ConfirmationUIPopup::Data) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::Data::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
