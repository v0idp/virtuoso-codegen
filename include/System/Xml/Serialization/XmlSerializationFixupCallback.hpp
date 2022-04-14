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
  // Forward declaring type: XmlSerializationFixupCallback
  class XmlSerializationFixupCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationFixupCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationFixupCallback*, "System.Xml.Serialization", "XmlSerializationFixupCallback");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializationFixupCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializationFixupCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF441A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSerializationFixupCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSerializationFixupCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSerializationFixupCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object fixup)
    // Offset: 0xF441B4
    void Invoke(::Il2CppObject* fixup);
    // public System.IAsyncResult BeginInvoke(System.Object fixup, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF44528
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* fixup, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xF4454C
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Xml.Serialization.XmlSerializationFixupCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationFixupCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationFixupCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializationFixupCallback::*)(::Il2CppObject*)>(&System::Xml::Serialization::XmlSerializationFixupCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* fixup = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationFixupCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixup});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationFixupCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Xml::Serialization::XmlSerializationFixupCallback::*)(::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::Serialization::XmlSerializationFixupCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* fixup = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationFixupCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixup, callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationFixupCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializationFixupCallback::*)(::System::IAsyncResult*)>(&System::Xml::Serialization::XmlSerializationFixupCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationFixupCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
