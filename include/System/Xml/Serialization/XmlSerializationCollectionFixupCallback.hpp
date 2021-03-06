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
  // Forward declaring type: XmlSerializationCollectionFixupCallback
  class XmlSerializationCollectionFixupCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*, "System.Xml.Serialization", "XmlSerializationCollectionFixupCallback");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializationCollectionFixupCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializationCollectionFixupCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF43DC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSerializationCollectionFixupCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSerializationCollectionFixupCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSerializationCollectionFixupCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object collection, System.Object collectionItems)
    // Offset: 0xF43DD8
    void Invoke(::Il2CppObject* collection, ::Il2CppObject* collectionItems);
    // public System.IAsyncResult BeginInvoke(System.Object collection, System.Object collectionItems, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF44168
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* collection, ::Il2CppObject* collectionItems, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xF44198
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Xml.Serialization.XmlSerializationCollectionFixupCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationCollectionFixupCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationCollectionFixupCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializationCollectionFixupCallback::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Serialization::XmlSerializationCollectionFixupCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* collection = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* collectionItems = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationCollectionFixupCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collection, collectionItems});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationCollectionFixupCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Xml::Serialization::XmlSerializationCollectionFixupCallback::*)(::Il2CppObject*, ::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::Serialization::XmlSerializationCollectionFixupCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* collection = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* collectionItems = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationCollectionFixupCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collection, collectionItems, callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationCollectionFixupCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializationCollectionFixupCallback::*)(::System::IAsyncResult*)>(&System::Xml::Serialization::XmlSerializationCollectionFixupCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationCollectionFixupCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
