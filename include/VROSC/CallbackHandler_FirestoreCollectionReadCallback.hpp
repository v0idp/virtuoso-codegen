// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.CallbackHandler
#include "VROSC/CallbackHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
NEED_NO_BOX(::VROSC::CallbackHandler::FirestoreCollectionReadCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler::FirestoreCollectionReadCallback*, "VROSC", "CallbackHandler/FirestoreCollectionReadCallback");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CallbackHandler/VROSC.FirestoreCollectionReadCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class CallbackHandler::FirestoreCollectionReadCallback : public ::Il2CppObject {
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
    // public System.Action`1<System.Collections.Generic.IEnumerable`1<Firebase.Firestore.DocumentSnapshot>> Action
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>* Action;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<Firebase.Firestore.DocumentSnapshot> Data
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>* Data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*) == 0x8);
    public:
    // Get instance field reference: public System.Action`1<System.Collections.Generic.IEnumerable`1<Firebase.Firestore.DocumentSnapshot>> Action
    ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*& dyn_Action();
    // Get instance field reference: public System.Collections.Generic.IEnumerable`1<Firebase.Firestore.DocumentSnapshot> Data
    ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*& dyn_Data();
    // public System.Void .ctor()
    // Offset: 0x135CE58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackHandler::FirestoreCollectionReadCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CallbackHandler::FirestoreCollectionReadCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackHandler::FirestoreCollectionReadCallback*, creationType>()));
    }
  }; // VROSC.CallbackHandler/VROSC.FirestoreCollectionReadCallback
  #pragma pack(pop)
  static check_size<sizeof(CallbackHandler::FirestoreCollectionReadCallback), 24 + sizeof(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*)> __VROSC_CallbackHandler_FirestoreCollectionReadCallbackSizeCheck;
  static_assert(sizeof(CallbackHandler::FirestoreCollectionReadCallback) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CallbackHandler::FirestoreCollectionReadCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
