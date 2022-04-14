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
// Forward declaring namespace: Oculus::Voice::Core::Bindings::Android
namespace Oculus::Voice::Core::Bindings::Android {
  // Forward declaring type: BaseServiceBinding
  class BaseServiceBinding;
  // Forward declaring type: AndroidServiceConnection
  class AndroidServiceConnection;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Core.Bindings.Android
namespace Oculus::Voice::Core::Bindings::Android {
  // Forward declaring type: BaseAndroidConnectionImpl`1<T>
  template<typename T>
  class BaseAndroidConnectionImpl_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1, "Oculus.Voice.Core.Bindings.Android", "BaseAndroidConnectionImpl`1");
// Type namespace: Oculus.Voice.Core.Bindings.Android
namespace Oculus::Voice::Core::Bindings::Android {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BaseAndroidConnectionImpl_1 : public ::Il2CppObject {
    public:
    public:
    // private System.String fragmentClassName
    // Size: 0x8
    // Offset: 0x0
    ::StringW fragmentClassName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected T service
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T service;
    // protected readonly Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection serviceConnection
    // Size: 0x8
    // Offset: 0x0
    ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection* serviceConnection;
    // Field size check
    static_assert(sizeof(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.String fragmentClassName
    [[deprecated]] ::StringW& dyn_fragmentClassName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1::dyn_fragmentClassName");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "fragmentClassName"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected T service
    [[deprecated]] T& dyn_service() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1::dyn_service");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "service"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected readonly Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection serviceConnection
    [[deprecated]] ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*& dyn_serviceConnection() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1::dyn_serviceConnection");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "serviceConnection"))->offset;
      return *reinterpret_cast<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_IsConnected()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsConnected() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1::get_IsConnected");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsConnected", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.String className)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseAndroidConnectionImpl_1<T>* New_ctor(::StringW className) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseAndroidConnectionImpl_1<T>*, creationType>(className)));
    }
    // public System.Void Connect()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Connect() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1::Connect");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Disconnect()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Disconnect() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1::Disconnect");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1
  // Could not write size check! Type: Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
