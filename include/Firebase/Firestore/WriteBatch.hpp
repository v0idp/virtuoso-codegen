// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: WriteBatchProxy
  class WriteBatchProxy;
  // Forward declaring type: DocumentReference
  class DocumentReference;
  // Forward declaring type: FieldValueProxy
  class FieldValueProxy;
  // Forward declaring type: SetOptions
  class SetOptions;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: WriteBatch
  class WriteBatch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::WriteBatch);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::WriteBatch*, "Firebase.Firestore", "WriteBatch");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.WriteBatch
  // [TokenAttribute] Offset: FFFFFFFF
  class WriteBatch : public ::Il2CppObject {
    public:
    public:
    // private readonly Firebase.Firestore.WriteBatchProxy _proxy
    // Size: 0x8
    // Offset: 0x10
    ::Firebase::Firestore::WriteBatchProxy* proxy;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::WriteBatchProxy*) == 0x8);
    public:
    // Creating conversion operator: operator ::Firebase::Firestore::WriteBatchProxy*
    constexpr operator ::Firebase::Firestore::WriteBatchProxy*() const noexcept {
      return proxy;
    }
    // Get instance field reference: private readonly Firebase.Firestore.WriteBatchProxy _proxy
    [[deprecated("Use field access instead!")]] ::Firebase::Firestore::WriteBatchProxy*& dyn__proxy();
    // System.Void .ctor(Firebase.Firestore.WriteBatchProxy proxy)
    // Offset: 0xD5ACC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteBatch* New_ctor(::Firebase::Firestore::WriteBatchProxy* proxy) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::WriteBatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteBatch*, creationType>(proxy)));
    }
    // public Firebase.Firestore.WriteBatch Delete(Firebase.Firestore.DocumentReference documentReference)
    // Offset: 0xD660C8
    ::Firebase::Firestore::WriteBatch* Delete(::Firebase::Firestore::DocumentReference* documentReference);
    // public Firebase.Firestore.WriteBatch Update(Firebase.Firestore.DocumentReference documentReference, System.Collections.Generic.IDictionary`2<System.String,System.Object> updates)
    // Offset: 0xD66160
    ::Firebase::Firestore::WriteBatch* Update(::Firebase::Firestore::DocumentReference* documentReference, ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>* updates);
    // private Firebase.Firestore.FieldValueProxy ConvertToFieldValue(System.Collections.Generic.IDictionary`2<System.String,System.Object> updates)
    // Offset: 0xD66234
    ::Firebase::Firestore::FieldValueProxy* ConvertToFieldValue(::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>* updates);
    // public Firebase.Firestore.WriteBatch Set(Firebase.Firestore.DocumentReference documentReference, System.Object documentData, Firebase.Firestore.SetOptions options)
    // Offset: 0xD66304
    ::Firebase::Firestore::WriteBatch* Set(::Firebase::Firestore::DocumentReference* documentReference, ::Il2CppObject* documentData, ::Firebase::Firestore::SetOptions* options);
    // public System.Threading.Tasks.Task CommitAsync()
    // Offset: 0xD66500
    ::System::Threading::Tasks::Task* CommitAsync();
  }; // Firebase.Firestore.WriteBatch
  #pragma pack(pop)
  static check_size<sizeof(WriteBatch), 16 + sizeof(::Firebase::Firestore::WriteBatchProxy*)> __Firebase_Firestore_WriteBatchSizeCheck;
  static_assert(sizeof(WriteBatch) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::WriteBatch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::WriteBatch::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::WriteBatch* (Firebase::Firestore::WriteBatch::*)(::Firebase::Firestore::DocumentReference*)>(&Firebase::Firestore::WriteBatch::Delete)> {
  static const MethodInfo* get() {
    static auto* documentReference = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DocumentReference")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::WriteBatch*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{documentReference});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::WriteBatch::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::WriteBatch* (Firebase::Firestore::WriteBatch::*)(::Firebase::Firestore::DocumentReference*, ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*)>(&Firebase::Firestore::WriteBatch::Update)> {
  static const MethodInfo* get() {
    static auto* documentReference = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DocumentReference")->byval_arg;
    static auto* updates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::WriteBatch*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{documentReference, updates});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::WriteBatch::ConvertToFieldValue
// Il2CppName: ConvertToFieldValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (Firebase::Firestore::WriteBatch::*)(::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*)>(&Firebase::Firestore::WriteBatch::ConvertToFieldValue)> {
  static const MethodInfo* get() {
    static auto* updates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::WriteBatch*), "ConvertToFieldValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updates});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::WriteBatch::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::WriteBatch* (Firebase::Firestore::WriteBatch::*)(::Firebase::Firestore::DocumentReference*, ::Il2CppObject*, ::Firebase::Firestore::SetOptions*)>(&Firebase::Firestore::WriteBatch::Set)> {
  static const MethodInfo* get() {
    static auto* documentReference = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DocumentReference")->byval_arg;
    static auto* documentData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SetOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::WriteBatch*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{documentReference, documentData, options});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::WriteBatch::CommitAsync
// Il2CppName: CommitAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Firebase::Firestore::WriteBatch::*)()>(&Firebase::Firestore::WriteBatch::CommitAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::WriteBatch*), "CommitAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
