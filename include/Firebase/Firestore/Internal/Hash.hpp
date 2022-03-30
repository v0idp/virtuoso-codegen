// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Firebase.Firestore.Internal
namespace Firebase::Firestore::Internal {
  // Forward declaring type: Hash
  class Hash;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Internal::Hash);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Internal::Hash*, "Firebase.Firestore.Internal", "Hash");
// Type namespace: Firebase.Firestore.Internal
namespace Firebase::Firestore::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Internal.Hash
  // [TokenAttribute] Offset: FFFFFFFF
  class Hash : public ::Il2CppObject {
    public:
    // static System.Int32 LongHash(System.Int64 l)
    // Offset: 0xC3E38C
    static int LongHash(int64_t l);
    // static System.Int32 DoubleBitwiseHash(System.Double d)
    // Offset: 0xC3DCF4
    static int DoubleBitwiseHash(double d);
  }; // Firebase.Firestore.Internal.Hash
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Internal::Hash::LongHash
// Il2CppName: LongHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int64_t)>(&Firebase::Firestore::Internal::Hash::LongHash)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Internal::Hash*), "LongHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Internal::Hash::DoubleBitwiseHash
// Il2CppName: DoubleBitwiseHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(double)>(&Firebase::Firestore::Internal::Hash::DoubleBitwiseHash)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Internal::Hash*), "DoubleBitwiseHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
