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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: DynamicProxy`1<T>
  template<typename T>
  class DynamicProxy_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::DynamicProxy_1, "Newtonsoft.Json.Utilities", "DynamicProxy`1");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Utilities.DynamicProxy`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 672A00
  // [NullableAttribute] Offset: 672A00
  template<typename T>
  class DynamicProxy_1 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.IEnumerable`1<System.String> GetDynamicMemberNames(T instance)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames(T instance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DynamicProxy_1::GetDynamicMemberNames");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal__method, instance);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicProxy_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DynamicProxy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicProxy_1<T>*, creationType>()));
    }
  }; // Newtonsoft.Json.Utilities.DynamicProxy`1
  // Could not write size check! Type: Newtonsoft.Json.Utilities.DynamicProxy`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"