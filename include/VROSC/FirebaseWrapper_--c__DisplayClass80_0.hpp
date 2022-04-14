// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.FirebaseWrapper
#include "VROSC/FirebaseWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FirebaseWrapper::$$c__DisplayClass80_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FirebaseWrapper::$$c__DisplayClass80_0*, "VROSC", "FirebaseWrapper/<>c__DisplayClass80_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass80_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseWrapper::$$c__DisplayClass80_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<System.String> onSuccess
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::StringW>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // public System.String docId
    // Size: 0x8
    // Offset: 0x18
    ::StringW docId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Action`1<System.String> onSuccess
    [[deprecated]] ::System::Action_1<::StringW>*& dyn_onSuccess();
    // Get instance field reference: public System.String docId
    [[deprecated]] ::StringW& dyn_docId();
    // System.Void <AddSessionDownload>b__0(System.String id)
    // Offset: 0x195432C
    void $AddSessionDownload$b__0(::StringW id);
    // System.Void <AddSessionDownload>b__1()
    // Offset: 0x1954334
    void $AddSessionDownload$b__1();
    // public System.Void .ctor()
    // Offset: 0x1954324
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseWrapper::$$c__DisplayClass80_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FirebaseWrapper::$$c__DisplayClass80_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseWrapper::$$c__DisplayClass80_0*, creationType>()));
    }
  }; // VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass80_0
  #pragma pack(pop)
  static check_size<sizeof(FirebaseWrapper::$$c__DisplayClass80_0), 24 + sizeof(::StringW)> __VROSC_FirebaseWrapper_$$c__DisplayClass80_0SizeCheck;
  static_assert(sizeof(FirebaseWrapper::$$c__DisplayClass80_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass80_0::$AddSessionDownload$b__0
// Il2CppName: <AddSessionDownload>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FirebaseWrapper::$$c__DisplayClass80_0::*)(::StringW)>(&VROSC::FirebaseWrapper::$$c__DisplayClass80_0::$AddSessionDownload$b__0)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FirebaseWrapper::$$c__DisplayClass80_0*), "<AddSessionDownload>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass80_0::$AddSessionDownload$b__1
// Il2CppName: <AddSessionDownload>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FirebaseWrapper::$$c__DisplayClass80_0::*)()>(&VROSC::FirebaseWrapper::$$c__DisplayClass80_0::$AddSessionDownload$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FirebaseWrapper::$$c__DisplayClass80_0*), "<AddSessionDownload>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass80_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
