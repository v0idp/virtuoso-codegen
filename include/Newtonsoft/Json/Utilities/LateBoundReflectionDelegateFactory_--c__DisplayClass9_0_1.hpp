// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
#include "Newtonsoft/Json/Utilities/LateBoundReflectionDelegateFactory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass9_0_1, "Newtonsoft.Json.Utilities", "LateBoundReflectionDelegateFactory/<>c__DisplayClass9_0`1");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/Newtonsoft.Json.Utilities.<>c__DisplayClass9_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class LateBoundReflectionDelegateFactory::$$c__DisplayClass9_0_1 : public ::Il2CppObject {
    public:
    public:
    // [NullableAttribute] Offset: 0x6759C0
    // public System.Reflection.PropertyInfo propertyInfo
    // Size: 0x8
    // Offset: 0x0
    ::System::Reflection::PropertyInfo* propertyInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::PropertyInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::PropertyInfo*
    constexpr operator ::System::Reflection::PropertyInfo*() const noexcept {
      return propertyInfo;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Reflection.PropertyInfo propertyInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::PropertyInfo*& dyn_propertyInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass9_0_1::dyn_propertyInfo");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "propertyInfo"))->offset;
      return *reinterpret_cast<::System::Reflection::PropertyInfo**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LateBoundReflectionDelegateFactory::$$c__DisplayClass9_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass9_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LateBoundReflectionDelegateFactory::$$c__DisplayClass9_0_1<T>*, creationType>()));
    }
    // System.Void <CreateSet>b__0(T o, System.Object v)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $CreateSet$b__0(T o, ::Il2CppObject* v) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass9_0_1::<CreateSet>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<CreateSet>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(o), ::il2cpp_utils::ExtractType(v)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, o, v);
    }
  }; // Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/Newtonsoft.Json.Utilities.<>c__DisplayClass9_0`1
  // Could not write size check! Type: Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/Newtonsoft.Json.Utilities.<>c__DisplayClass9_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
