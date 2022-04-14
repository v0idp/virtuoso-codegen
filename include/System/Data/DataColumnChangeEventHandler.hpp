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
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataColumnChangeEventArgs
  class DataColumnChangeEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataColumnChangeEventHandler
  class DataColumnChangeEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataColumnChangeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataColumnChangeEventHandler*, "System.Data", "DataColumnChangeEventHandler");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataColumnChangeEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class DataColumnChangeEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF944A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataColumnChangeEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataColumnChangeEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataColumnChangeEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.Data.DataColumnChangeEventArgs e)
    // Offset: 0xF944B0
    void Invoke(::Il2CppObject* sender, ::System::Data::DataColumnChangeEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.Data.DataColumnChangeEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF94840
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::Data::DataColumnChangeEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xF94870
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Data.DataColumnChangeEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataColumnChangeEventHandler::*)(::Il2CppObject*, ::System::Data::DataColumnChangeEventArgs*)>(&System::Data::DataColumnChangeEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumnChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataColumnChangeEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Data::DataColumnChangeEventHandler::*)(::Il2CppObject*, ::System::Data::DataColumnChangeEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Data::DataColumnChangeEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumnChangeEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataColumnChangeEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataColumnChangeEventHandler::*)(::System::IAsyncResult*)>(&System::Data::DataColumnChangeEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataColumnChangeEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};