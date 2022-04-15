// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.FirebaseFirestore
#include "Firebase/Firestore/FirebaseFirestore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5*, "Firebase.Firestore", "FirebaseFirestore/<SnapshotsInSyncHandler>c__AnonStorey5");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FirebaseFirestore/Firebase.Firestore.<SnapshotsInSyncHandler>c__AnonStorey5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5 : public ::Il2CppObject {
    public:
    public:
    // System.Action callback
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* callback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action*
    constexpr operator ::System::Action*() const noexcept {
      return callback;
    }
    // Get instance field reference: System.Action callback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_callback();
    // public System.Void .ctor()
    // Offset: 0xD5A944
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5*, creationType>()));
    }
    // System.Object <>m__0()
    // Offset: 0xD66DD0
    ::Il2CppObject* $$m__0();
  }; // Firebase.Firestore.FirebaseFirestore/Firebase.Firestore.<SnapshotsInSyncHandler>c__AnonStorey5
  #pragma pack(pop)
  static check_size<sizeof(FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5), 16 + sizeof(::System::Action*)> __Firebase_Firestore_FirebaseFirestore_$SnapshotsInSyncHandler$c__AnonStorey5SizeCheck;
  static_assert(sizeof(FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Firebase::Firestore::FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5::*)()>(&Firebase::Firestore::FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5::$$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirebaseFirestore::$SnapshotsInSyncHandler$c__AnonStorey5*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
