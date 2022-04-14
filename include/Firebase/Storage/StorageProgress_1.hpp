// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IProgress`1
#include "System/IProgress_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Storage
namespace Firebase::Storage {
  // Skipping declaration: <Report>c__AnonStorey0 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Forward declaring type: StorageProgress`1<T>
  template<typename T>
  class StorageProgress_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Storage::StorageProgress_1, "Firebase.Storage", "StorageProgress`1");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // WARNING Size may be invalid!
  // Autogenerated type: Firebase.Storage.StorageProgress`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class StorageProgress_1 : public ::Il2CppObject/*, public ::System::IProgress_1<T>*/ {
    public:
    // Nested type: ::Firebase::Storage::StorageProgress_1::$Report$c__AnonStorey0<T>
    class $Report$c__AnonStorey0;
    // WARNING Size may be invalid!
    // Autogenerated type: Firebase.Storage.StorageProgress`1/Firebase.Storage.<Report>c__AnonStorey0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $Report$c__AnonStorey0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = StorageProgress_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<Report>c__AnonStorey0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // T value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T value;
      // Firebase.Storage.StorageProgress`1<T> $this
      // Size: 0x8
      // Offset: 0x0
      ::Firebase::Storage::StorageProgress_1<T>* $this;
      // Field size check
      static_assert(sizeof(::Firebase::Storage::StorageProgress_1<T>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: T value
      [[deprecated]] T& dyn_value() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageProgress_1::$Report$c__AnonStorey0::dyn_value");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: Firebase.Storage.StorageProgress`1<T> $this
      [[deprecated]] ::Firebase::Storage::StorageProgress_1<T>*& dyn_$this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageProgress_1::$Report$c__AnonStorey0::dyn_$this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "$this"))->offset;
        return *reinterpret_cast<::Firebase::Storage::StorageProgress_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // System.Void <>m__0()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void $$m__0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageProgress_1::$Report$c__AnonStorey0::<>m__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename StorageProgress_1<T>::$Report$c__AnonStorey0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageProgress_1::$Report$c__AnonStorey0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename StorageProgress_1<T>::$Report$c__AnonStorey0*, creationType>()));
      }
    }; // Firebase.Storage.StorageProgress`1/Firebase.Storage.<Report>c__AnonStorey0
    // Could not write size check! Type: Firebase.Storage.StorageProgress`1/Firebase.Storage.<Report>c__AnonStorey0 is generic, or has no fields that are valid for size checks!
    public:
    // private readonly System.Action`1<T> reportCallback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* reportCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IProgress_1<T>
    operator ::System::IProgress_1<T>() noexcept {
      return *reinterpret_cast<::System::IProgress_1<T>*>(this);
    }
    // Creating conversion operator: operator ::System::Action_1<T>*
    constexpr operator ::System::Action_1<T>*() const noexcept {
      return reportCallback;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`1<T> reportCallback
    [[deprecated]] ::System::Action_1<T>*& dyn_reportCallback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageProgress_1::dyn_reportCallback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "reportCallback"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Action`1<T> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StorageProgress_1<T>* New_ctor(::System::Action_1<T>* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageProgress_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StorageProgress_1<T>*, creationType>(callback)));
    }
    // public System.Void Report(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Report(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageProgress_1::Report");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Firebase::Storage::StorageProgress_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
  }; // Firebase.Storage.StorageProgress`1
  // Could not write size check! Type: Firebase.Storage.StorageProgress`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"