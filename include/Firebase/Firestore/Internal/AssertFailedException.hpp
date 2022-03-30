// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Firebase.Firestore.Internal
namespace Firebase::Firestore::Internal {
  // Forward declaring type: AssertFailedException
  class AssertFailedException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Internal::AssertFailedException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Internal::AssertFailedException*, "Firebase.Firestore.Internal", "AssertFailedException");
// Type namespace: Firebase.Firestore.Internal
namespace Firebase::Firestore::Internal {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Internal.AssertFailedException
  // [TokenAttribute] Offset: FFFFFFFF
  class AssertFailedException : public ::System::Exception {
    public:
    // public System.Void .ctor(System.String message)
    // Offset: 0xC26008
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssertFailedException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Internal::AssertFailedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssertFailedException*, creationType>(message)));
    }
  }; // Firebase.Firestore.Internal.AssertFailedException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Internal::AssertFailedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
