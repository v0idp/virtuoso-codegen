// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ExposedReference`1<T>
  template<typename T>
  struct ExposedReference_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ExposedReference_1, "UnityEngine", "ExposedReference`1");
// Type namespace: UnityEngine
namespace UnityEngine {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ExposedReference`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 56510C
  template<typename T>
  struct ExposedReference_1/*, public ::System::ValueType*/ {
    public:
    public:
    // [SerializeField] Offset: 0x56A248
    // public UnityEngine.PropertyName exposedName
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::PropertyName exposedName;
    // Field size check
    static_assert(sizeof(::UnityEngine::PropertyName) == 0x4);
    // [SerializeField] Offset: 0x56A258
    // public UnityEngine.Object defaultValue
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Object* defaultValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    public:
    // Creating value type constructor for type: ExposedReference_1
    constexpr ExposedReference_1(::UnityEngine::PropertyName exposedName_ = {}, ::UnityEngine::Object* defaultValue_ = {}) noexcept : exposedName{exposedName_}, defaultValue{defaultValue_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public UnityEngine.PropertyName exposedName
    ::UnityEngine::PropertyName& dyn_exposedName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ExposedReference_1::dyn_exposedName");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "exposedName"))->offset;
      return *reinterpret_cast<::UnityEngine::PropertyName*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public UnityEngine.Object defaultValue
    ::UnityEngine::Object*& dyn_defaultValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ExposedReference_1::dyn_defaultValue");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "defaultValue"))->offset;
      return *reinterpret_cast<::UnityEngine::Object**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T Resolve(UnityEngine.IExposedPropertyTable resolver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Resolve(::UnityEngine::IExposedPropertyTable* resolver) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ExposedReference_1::Resolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Resolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resolver)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, resolver);
    }
  }; // UnityEngine.ExposedReference`1
  // Could not write size check! Type: UnityEngine.ExposedReference`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
