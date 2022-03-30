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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADMethodRef
  class CADMethodRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMethodRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMethodRef*, "System.Runtime.Remoting.Messaging", "CADMethodRef");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMethodRef
  // [TokenAttribute] Offset: FFFFFFFF
  class CADMethodRef : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean ctor
    // Size: 0x1
    // Offset: 0x10
    bool ctor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ctor and: typeName
    char __padding0[0x7] = {};
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String methodName
    // Size: 0x8
    // Offset: 0x20
    ::StringW methodName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] param_names
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> param_names;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String[] generic_arg_names
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> generic_arg_names;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: private System.Boolean ctor
    bool& dyn_ctor();
    // Get instance field reference: private System.String typeName
    ::StringW& dyn_typeName();
    // Get instance field reference: private System.String methodName
    ::StringW& dyn_methodName();
    // Get instance field reference: private System.String[] param_names
    ::ArrayW<::StringW>& dyn_param_names();
    // Get instance field reference: private System.String[] generic_arg_names
    ::ArrayW<::StringW>& dyn_generic_arg_names();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage msg)
    // Offset: 0xCCE724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADMethodRef* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::CADMethodRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADMethodRef*, creationType>(msg)));
    }
    // private System.Type[] GetTypes(System.String[] typeArray)
    // Offset: 0xCD0E80
    ::ArrayW<::System::Type*> GetTypes(::ArrayW<::StringW> typeArray);
    // public System.Reflection.MethodBase Resolve()
    // Offset: 0xCCEC20
    ::System::Reflection::MethodBase* Resolve();
  }; // System.Runtime.Remoting.Messaging.CADMethodRef
  #pragma pack(pop)
  static check_size<sizeof(CADMethodRef), 48 + sizeof(::ArrayW<::StringW>)> __System_Runtime_Remoting_Messaging_CADMethodRefSizeCheck;
  static_assert(sizeof(CADMethodRef) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodRef::GetTypes
// Il2CppName: GetTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::Runtime::Remoting::Messaging::CADMethodRef::*)(::ArrayW<::StringW>)>(&System::Runtime::Remoting::Messaging::CADMethodRef::GetTypes)> {
  static const MethodInfo* get() {
    static auto* typeArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodRef*), "GetTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeArray});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodRef::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::CADMethodRef::*)()>(&System::Runtime::Remoting::Messaging::CADMethodRef::Resolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodRef*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
