// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Future_QuerySnapshot
#include "Firebase/Firestore/Future_QuerySnapshot.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: QuerySnapshotProxy
  class QuerySnapshotProxy;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Future_QuerySnapshot::$GetTask$c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_QuerySnapshot::$GetTask$c__AnonStorey0*, "Firebase.Firestore", "Future_QuerySnapshot/<GetTask>c__AnonStorey0");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Future_QuerySnapshot/Firebase.Firestore.<GetTask>c__AnonStorey0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Future_QuerySnapshot::$GetTask$c__AnonStorey0 : public ::Il2CppObject {
    public:
    public:
    // Firebase.Firestore.Future_QuerySnapshot fu
    // Size: 0x8
    // Offset: 0x10
    ::Firebase::Firestore::Future_QuerySnapshot* fu;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::Future_QuerySnapshot*) == 0x8);
    // System.Threading.Tasks.TaskCompletionSource`1<Firebase.Firestore.QuerySnapshotProxy> tcs
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>* tcs;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>*) == 0x8);
    public:
    // Get instance field reference: Firebase.Firestore.Future_QuerySnapshot fu
    [[deprecated("Use field access instead!")]] ::Firebase::Firestore::Future_QuerySnapshot*& dyn_fu();
    // Get instance field reference: System.Threading.Tasks.TaskCompletionSource`1<Firebase.Firestore.QuerySnapshotProxy> tcs
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>*& dyn_tcs();
    // public System.Void .ctor()
    // Offset: 0xD61098
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Future_QuerySnapshot::$GetTask$c__AnonStorey0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Future_QuerySnapshot::$GetTask$c__AnonStorey0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Future_QuerySnapshot::$GetTask$c__AnonStorey0*, creationType>()));
    }
    // System.Void <>m__0()
    // Offset: 0xD68FA4
    void $$m__0();
  }; // Firebase.Firestore.Future_QuerySnapshot/Firebase.Firestore.<GetTask>c__AnonStorey0
  #pragma pack(pop)
  static check_size<sizeof(Future_QuerySnapshot::$GetTask$c__AnonStorey0), 24 + sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>*)> __Firebase_Firestore_Future_QuerySnapshot_$GetTask$c__AnonStorey0SizeCheck;
  static_assert(sizeof(Future_QuerySnapshot::$GetTask$c__AnonStorey0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Future_QuerySnapshot::$GetTask$c__AnonStorey0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Future_QuerySnapshot::$GetTask$c__AnonStorey0::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::Future_QuerySnapshot::$GetTask$c__AnonStorey0::*)()>(&Firebase::Firestore::Future_QuerySnapshot::$GetTask$c__AnonStorey0::$$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_QuerySnapshot::$GetTask$c__AnonStorey0*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
