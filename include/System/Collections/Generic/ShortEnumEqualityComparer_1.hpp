// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.EnumEqualityComparer`1
#include "System/Collections/Generic/EnumEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: ShortEnumEqualityComparer`1<T>
  template<typename T>
  class ShortEnumEqualityComparer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ShortEnumEqualityComparer_1, "System.Collections.Generic", "ShortEnumEqualityComparer`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.ShortEnumEqualityComparer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ShortEnumEqualityComparer_1 : public ::System::Collections::Generic::EnumEqualityComparer_1<T> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.EnumEqualityComparer`1
    // Base method: System.Void EnumEqualityComparer_1::.ctor()
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShortEnumEqualityComparer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ShortEnumEqualityComparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShortEnumEqualityComparer_1<T>*, creationType>()));
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo information, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.EnumEqualityComparer`1
    // Base method: System.Void EnumEqualityComparer_1::.ctor(System.Runtime.Serialization.SerializationInfo information, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShortEnumEqualityComparer_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* information, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ShortEnumEqualityComparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShortEnumEqualityComparer_1<T>*, creationType>(information, context)));
    }
    // public override System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.EnumEqualityComparer`1
    // Base method: System.Int32 EnumEqualityComparer_1::GetHashCode(T obj)
    int GetHashCode(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ShortEnumEqualityComparer_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, obj);
    }
  }; // System.Collections.Generic.ShortEnumEqualityComparer`1
  // Could not write size check! Type: System.Collections.Generic.ShortEnumEqualityComparer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
