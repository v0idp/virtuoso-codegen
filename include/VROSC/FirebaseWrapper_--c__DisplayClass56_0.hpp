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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: DocumentSnapshot
  class DocumentSnapshot;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FirebaseWrapper::$$c__DisplayClass56_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FirebaseWrapper::$$c__DisplayClass56_0*, "VROSC", "FirebaseWrapper/<>c__DisplayClass56_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass56_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseWrapper::$$c__DisplayClass56_0 : public ::Il2CppObject {
    public:
    public:
    // public VROSC.FirebaseWrapper <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::FirebaseWrapper* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::FirebaseWrapper*) == 0x8);
    // public System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>> onSuccess
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>*>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>*>*) == 0x8);
    public:
    // Get instance field reference: public VROSC.FirebaseWrapper <>4__this
    [[deprecated("Use field access instead!")]] ::VROSC::FirebaseWrapper*& dyn_$$4__this();
    // Get instance field reference: public System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>> onSuccess
    [[deprecated("Use field access instead!")]] ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>*>*& dyn_onSuccess();
    // public System.Void .ctor()
    // Offset: 0x1953854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseWrapper::$$c__DisplayClass56_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FirebaseWrapper::$$c__DisplayClass56_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseWrapper::$$c__DisplayClass56_0*, creationType>()));
    }
    // System.Void <GetUserFavorites>b__0(System.Collections.Generic.IEnumerable`1<Firebase.Firestore.DocumentSnapshot> favoritesDocuments)
    // Offset: 0x195385C
    void $GetUserFavorites$b__0(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>* favoritesDocuments);
  }; // VROSC.FirebaseWrapper/VROSC.<>c__DisplayClass56_0
  #pragma pack(pop)
  static check_size<sizeof(FirebaseWrapper::$$c__DisplayClass56_0), 24 + sizeof(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>*>*)> __VROSC_FirebaseWrapper_$$c__DisplayClass56_0SizeCheck;
  static_assert(sizeof(FirebaseWrapper::$$c__DisplayClass56_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass56_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::FirebaseWrapper::$$c__DisplayClass56_0::$GetUserFavorites$b__0
// Il2CppName: <GetUserFavorites>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FirebaseWrapper::$$c__DisplayClass56_0::*)(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*)>(&VROSC::FirebaseWrapper::$$c__DisplayClass56_0::$GetUserFavorites$b__0)> {
  static const MethodInfo* get() {
    static auto* favoritesDocuments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DocumentSnapshot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FirebaseWrapper::$$c__DisplayClass56_0*), "<GetUserFavorites>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{favoritesDocuments});
  }
};
