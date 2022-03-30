// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ZipFileWriter
#include "VROSC/ZipFileWriter.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ZipFileWriter::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter::$$c__DisplayClass3_0*, "VROSC", "ZipFileWriter/<>c__DisplayClass3_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ZipFileWriter/VROSC.<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ZipFileWriter::$$c__DisplayClass3_0 : public ::Il2CppObject {
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
    // public System.String originPath
    // Size: 0x8
    // Offset: 0x10
    ::StringW originPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String destination
    // Size: 0x8
    // Offset: 0x18
    ::StringW destination;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public VROSC.ZipFileWriter <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::ZipFileWriter* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::ZipFileWriter*) == 0x8);
    // public System.Action successCallback
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* successCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> failureCallback
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::VROSC::Error>* failureCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    public:
    // Get instance field reference: public System.String originPath
    ::StringW& dyn_originPath();
    // Get instance field reference: public System.String destination
    ::StringW& dyn_destination();
    // Get instance field reference: public VROSC.ZipFileWriter <>4__this
    ::VROSC::ZipFileWriter*& dyn_$$4__this();
    // Get instance field reference: public System.Action successCallback
    ::System::Action*& dyn_successCallback();
    // Get instance field reference: public System.Action`1<VROSC.Error> failureCallback
    ::System::Action_1<::VROSC::Error>*& dyn_failureCallback();
    // System.Void <ExtractZipToFolder>b__0()
    // Offset: 0x14182EC
    void $ExtractZipToFolder$b__0();
    // public System.Void .ctor()
    // Offset: 0x14182E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZipFileWriter::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ZipFileWriter::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZipFileWriter::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // VROSC.ZipFileWriter/VROSC.<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(ZipFileWriter::$$c__DisplayClass3_0), 48 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_ZipFileWriter_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(ZipFileWriter::$$c__DisplayClass3_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ZipFileWriter::$$c__DisplayClass3_0::$ExtractZipToFolder$b__0
// Il2CppName: <ExtractZipToFolder>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ZipFileWriter::$$c__DisplayClass3_0::*)()>(&VROSC::ZipFileWriter::$$c__DisplayClass3_0::$ExtractZipToFolder$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ZipFileWriter::$$c__DisplayClass3_0*), "<ExtractZipToFolder>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ZipFileWriter::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
