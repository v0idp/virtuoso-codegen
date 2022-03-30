// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Forward declaring type: OnBeforeFocusEvent
  class OnBeforeFocusEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeautifyEffect::OnBeforeFocusEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::OnBeforeFocusEvent*, "BeautifyEffect", "OnBeforeFocusEvent");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.OnBeforeFocusEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class OnBeforeFocusEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x91D1F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnBeforeFocusEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeautifyEffect::OnBeforeFocusEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnBeforeFocusEvent*, creationType>(object, method)));
    }
    // public System.Single Invoke(System.Single currentFocusDistance)
    // Offset: 0x91D200
    float Invoke(float currentFocusDistance);
    // public System.IAsyncResult BeginInvoke(System.Single currentFocusDistance, System.AsyncCallback callback, System.Object object)
    // Offset: 0x91D43C
    ::System::IAsyncResult* BeginInvoke(float currentFocusDistance, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Single EndInvoke(System.IAsyncResult result)
    // Offset: 0x91D4C4
    float EndInvoke(::System::IAsyncResult* result);
  }; // BeautifyEffect.OnBeforeFocusEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeautifyEffect::OnBeforeFocusEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeautifyEffect::OnBeforeFocusEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeautifyEffect::OnBeforeFocusEvent::*)(float)>(&BeautifyEffect::OnBeforeFocusEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* currentFocusDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::OnBeforeFocusEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFocusDistance});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::OnBeforeFocusEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (BeautifyEffect::OnBeforeFocusEvent::*)(float, ::System::AsyncCallback*, ::Il2CppObject*)>(&BeautifyEffect::OnBeforeFocusEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* currentFocusDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::OnBeforeFocusEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFocusDistance, callback, object});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::OnBeforeFocusEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeautifyEffect::OnBeforeFocusEvent::*)(::System::IAsyncResult*)>(&BeautifyEffect::OnBeforeFocusEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::OnBeforeFocusEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};