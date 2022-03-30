// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: MonoPInvokeCallbackAttribute
  class MonoPInvokeCallbackAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::MonoPInvokeCallbackAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::MonoPInvokeCallbackAttribute*, "Firebase.Firestore", "MonoPInvokeCallbackAttribute");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.MonoPInvokeCallbackAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 5C75A8
  class MonoPInvokeCallbackAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor(System.Type t)
    // Offset: 0xC3E79C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoPInvokeCallbackAttribute* New_ctor(::System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::MonoPInvokeCallbackAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoPInvokeCallbackAttribute*, creationType>(t)));
    }
  }; // Firebase.Firestore.MonoPInvokeCallbackAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::MonoPInvokeCallbackAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!