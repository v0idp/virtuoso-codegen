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
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializationReadCallback
  class XmlSerializationReadCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReadCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReadCallback*, "System.Xml.Serialization", "XmlSerializationReadCallback");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializationReadCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializationReadCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF44560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSerializationReadCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSerializationReadCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSerializationReadCallback*, creationType>(object, method)));
    }
    // public System.Object Invoke()
    // Offset: 0xF44570
    ::Il2CppObject* Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xF44784
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0xF447B0
    ::Il2CppObject* EndInvoke(::System::IAsyncResult* result);
  }; // System.Xml.Serialization.XmlSerializationReadCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReadCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReadCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Serialization::XmlSerializationReadCallback::*)()>(&System::Xml::Serialization::XmlSerializationReadCallback::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationReadCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReadCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Xml::Serialization::XmlSerializationReadCallback::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::Serialization::XmlSerializationReadCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationReadCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReadCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Serialization::XmlSerializationReadCallback::*)(::System::IAsyncResult*)>(&System::Xml::Serialization::XmlSerializationReadCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationReadCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};