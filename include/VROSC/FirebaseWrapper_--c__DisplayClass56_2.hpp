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
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: DocumentSnapshot
  class DocumentSnapshot;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FirebaseWrapper::$$c__DisplayClass56_2);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FirebaseWrapper::$$c__DisplayClass56_2*, "VROSC", "FirebaseWrapper/<>c__DisplayClass56_2");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass56_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseWrapper::$$c__DisplayClass56_2 : public ::Il2CppObject {
    public:
    public:
    // public Firebase.Firestore.DocumentSnapshot favoriteDocument
    // Size: 0x8
    // Offset: 0x10
    ::Firebase::Firestore::DocumentSnapshot* favoriteDocument;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::DocumentSnapshot*) == 0x8);
    // public VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass56_1 CS$<>8__locals2
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::FirebaseWrapper::$$c__DisplayClass56_1* CS$$$8__locals2;
    // Field size check
    static_assert(sizeof(::VROSC::FirebaseWrapper::$$c__DisplayClass56_1*) == 0x8);
    public:
    // Get instance field reference: public Firebase.Firestore.DocumentSnapshot favoriteDocument
    [[deprecated]] ::Firebase::Firestore::DocumentSnapshot*& dyn_favoriteDocument();
    // Get instance field reference: public VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass56_1 CS$<>8__locals2
    [[deprecated]] ::VROSC::FirebaseWrapper::$$c__DisplayClass56_1*& dyn_CS$$$8__locals2();
    // System.Void <GetUserFavorites>b__1(System.Collections.Generic.Dictionary`2<System.String,System.Object> sessionDocDict)
    // Offset: 0x1953E14
    void $GetUserFavorites$b__1(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* sessionDocDict);
    // public System.Void .ctor()
    // Offset: 0x1953E04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseWrapper::$$c__DisplayClass56_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FirebaseWrapper::$$c__DisplayClass56_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseWrapper::$$c__DisplayClass56_2*, creationType>()));
    }
  }; // VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass56_2
  #pragma pack(pop)
  static check_size<sizeof(FirebaseWrapper::$$c__DisplayClass56_2), 24 + sizeof(::VROSC::FirebaseWrapper::$$c__DisplayClass56_1*)> __VROSC_FirebaseWrapper_$$c__DisplayClass56_2SizeCheck;
  static_assert(sizeof(FirebaseWrapper::$$c__DisplayClass56_2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass56_2::$GetUserFavorites$b__1
// Il2CppName: <GetUserFavorites>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FirebaseWrapper::$$c__DisplayClass56_2::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*)>(&VROSC::FirebaseWrapper::$$c__DisplayClass56_2::$GetUserFavorites$b__1)> {
  static const MethodInfo* get() {
    static auto* sessionDocDict = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FirebaseWrapper::$$c__DisplayClass56_2*), "<GetUserFavorites>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionDocDict});
  }
};
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass56_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
