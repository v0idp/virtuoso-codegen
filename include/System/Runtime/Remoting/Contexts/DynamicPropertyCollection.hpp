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
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IDynamicProperty
  class IDynamicProperty;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: DynamicPropertyCollection
  class DynamicPropertyCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicPropertyCollection : public ::Il2CppObject {
    public:
    // Nested type: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::DynamicPropertyReg
    class DynamicPropertyReg;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.ArrayList _properties
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* properties;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::ArrayList*
    constexpr operator ::System::Collections::ArrayList*() const noexcept {
      return properties;
    }
    // Get instance field reference: private System.Collections.ArrayList _properties
    ::System::Collections::ArrayList*& dyn__properties();
    // public System.Boolean get_HasProperties()
    // Offset: 0xCB45CC
    bool get_HasProperties();
    // public System.Boolean RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty prop)
    // Offset: 0xCB4600
    bool RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop);
    // public System.Boolean UnregisterDynamicProperty(System.String name)
    // Offset: 0xCB4A64
    bool UnregisterDynamicProperty(::StringW name);
    // public System.Void NotifyMessage(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0xCB4BD0
    void NotifyMessage(bool start, ::System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async);
    // private System.Int32 FindProperty(System.String name)
    // Offset: 0xCB48F4
    int FindProperty(::StringW name);
    // public System.Void .ctor()
    // Offset: 0xCB51D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicPropertyCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicPropertyCollection*, creationType>()));
    }
  }; // System.Runtime.Remoting.Contexts.DynamicPropertyCollection
  #pragma pack(pop)
  static check_size<sizeof(DynamicPropertyCollection), 16 + sizeof(::System::Collections::ArrayList*)> __System_Runtime_Remoting_Contexts_DynamicPropertyCollectionSizeCheck;
  static_assert(sizeof(DynamicPropertyCollection) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties
// Il2CppName: get_HasProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)()>(&System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::DynamicPropertyCollection*), "get_HasProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty
// Il2CppName: RegisterDynamicProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*)>(&System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty)> {
  static const MethodInfo* get() {
    static auto* prop = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Contexts", "IDynamicProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::DynamicPropertyCollection*), "RegisterDynamicProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prop});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty
// Il2CppName: UnregisterDynamicProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::StringW)>(&System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::DynamicPropertyCollection*), "UnregisterDynamicProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage
// Il2CppName: NotifyMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* client_site = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* async = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::DynamicPropertyCollection*), "NotifyMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, msg, client_site, async});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty
// Il2CppName: FindProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::StringW)>(&System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::DynamicPropertyCollection*), "FindProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::DynamicPropertyCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
