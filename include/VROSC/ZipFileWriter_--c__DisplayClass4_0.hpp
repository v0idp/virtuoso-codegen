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
NEED_NO_BOX(::VROSC::ZipFileWriter::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter::$$c__DisplayClass4_0*, "VROSC", "ZipFileWriter/<>c__DisplayClass4_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ZipFileWriter/VROSC.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ZipFileWriter::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String destinationPath
    // Size: 0x8
    // Offset: 0x10
    ::StringW destinationPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String origin
    // Size: 0x8
    // Offset: 0x18
    ::StringW origin;
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
    // Get instance field reference: public System.String destinationPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_destinationPath();
    // Get instance field reference: public System.String origin
    [[deprecated("Use field access instead!")]] ::StringW& dyn_origin();
    // Get instance field reference: public VROSC.ZipFileWriter <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::ZipFileWriter*& dyn_$$4__this();
    // Get instance field reference: public System.Action successCallback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_successCallback();
    // Get instance field reference: public System.Action`1<VROSC.Error> failureCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Error>*& dyn_failureCallback();
    // public System.Void .ctor()
    // Offset: 0xE8A79C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZipFileWriter::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ZipFileWriter::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZipFileWriter::$$c__DisplayClass4_0*, creationType>()));
    }
    // System.Void <CompressFolderToZip>b__0()
    // Offset: 0xE8A7A4
    void $CompressFolderToZip$b__0();
  }; // VROSC.ZipFileWriter/VROSC.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(ZipFileWriter::$$c__DisplayClass4_0), 48 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_ZipFileWriter_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(ZipFileWriter::$$c__DisplayClass4_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ZipFileWriter::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ZipFileWriter::$$c__DisplayClass4_0::$CompressFolderToZip$b__0
// Il2CppName: <CompressFolderToZip>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ZipFileWriter::$$c__DisplayClass4_0::*)()>(&VROSC::ZipFileWriter::$$c__DisplayClass4_0::$CompressFolderToZip$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ZipFileWriter::$$c__DisplayClass4_0*), "<CompressFolderToZip>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
