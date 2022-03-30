// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Proyecto26
namespace Proyecto26 {
  // Forward declaring type: RequestException
  class RequestException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Proyecto26::RequestException);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::RequestException*, "Proyecto26", "RequestException");
// Type namespace: Proyecto26
namespace Proyecto26 {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: Proyecto26.RequestException
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestException : public ::System::Exception {
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
    // private System.Boolean _isHttpError
    // Size: 0x1
    // Offset: 0x88
    bool isHttpError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isNetworkError
    // Size: 0x1
    // Offset: 0x89
    bool isNetworkError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isNetworkError and: statusCode
    char __padding1[0x6] = {};
    // private System.Int64 _statusCode
    // Size: 0x8
    // Offset: 0x90
    int64_t statusCode;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String _serverMessage
    // Size: 0x8
    // Offset: 0x98
    ::StringW serverMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _response
    // Size: 0x8
    // Offset: 0xA0
    ::StringW response;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Boolean _isHttpError
    bool& dyn__isHttpError();
    // Get instance field reference: private System.Boolean _isNetworkError
    bool& dyn__isNetworkError();
    // Get instance field reference: private System.Int64 _statusCode
    int64_t& dyn__statusCode();
    // Get instance field reference: private System.String _serverMessage
    ::StringW& dyn__serverMessage();
    // Get instance field reference: private System.String _response
    ::StringW& dyn__response();
    // public System.Boolean get_IsHttpError()
    // Offset: 0x999B08
    bool get_IsHttpError();
    // private System.Void set_IsHttpError(System.Boolean value)
    // Offset: 0x999B10
    void set_IsHttpError(bool value);
    // public System.Boolean get_IsNetworkError()
    // Offset: 0x999B1C
    bool get_IsNetworkError();
    // private System.Void set_IsNetworkError(System.Boolean value)
    // Offset: 0x999B24
    void set_IsNetworkError(bool value);
    // public System.Int64 get_StatusCode()
    // Offset: 0x999B30
    int64_t get_StatusCode();
    // private System.Void set_StatusCode(System.Int64 value)
    // Offset: 0x999B38
    void set_StatusCode(int64_t value);
    // public System.String get_ServerMessage()
    // Offset: 0x999B40
    ::StringW get_ServerMessage();
    // public System.Void set_ServerMessage(System.String value)
    // Offset: 0x999B48
    void set_ServerMessage(::StringW value);
    // public System.String get_Response()
    // Offset: 0x999B50
    ::StringW get_Response();
    // public System.Void set_Response(System.String value)
    // Offset: 0x999B58
    void set_Response(::StringW value);
    // public System.Void .ctor(System.String format, params System.Object[] args)
    // Offset: 0x999C38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestException* New_ctor(::StringW format, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::RequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestException*, creationType>(format, args)));
    }
    // public System.Void .ctor(System.String message, System.Boolean isHttpError, System.Boolean isNetworkError, System.Int64 statusCode, System.String response)
    // Offset: 0x999CC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestException* New_ctor(::StringW message, bool isHttpError, bool isNetworkError, int64_t statusCode, ::StringW response) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::RequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestException*, creationType>(message, isHttpError, isNetworkError, statusCode, response)));
    }
    // public System.Void .ctor()
    // Offset: 0x999B60
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::RequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x999BC4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::RequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestException*, creationType>(message)));
    }
  }; // Proyecto26.RequestException
  #pragma pack(pop)
  static check_size<sizeof(RequestException), 160 + sizeof(::StringW)> __Proyecto26_RequestExceptionSizeCheck;
  static_assert(sizeof(RequestException) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Proyecto26::RequestException::get_IsHttpError
// Il2CppName: get_IsHttpError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Proyecto26::RequestException::*)()>(&Proyecto26::RequestException::get_IsHttpError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "get_IsHttpError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::set_IsHttpError
// Il2CppName: set_IsHttpError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::RequestException::*)(bool)>(&Proyecto26::RequestException::set_IsHttpError)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "set_IsHttpError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::get_IsNetworkError
// Il2CppName: get_IsNetworkError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Proyecto26::RequestException::*)()>(&Proyecto26::RequestException::get_IsNetworkError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "get_IsNetworkError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::set_IsNetworkError
// Il2CppName: set_IsNetworkError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::RequestException::*)(bool)>(&Proyecto26::RequestException::set_IsNetworkError)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "set_IsNetworkError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Proyecto26::RequestException::*)()>(&Proyecto26::RequestException::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::RequestException::*)(int64_t)>(&Proyecto26::RequestException::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::get_ServerMessage
// Il2CppName: get_ServerMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Proyecto26::RequestException::*)()>(&Proyecto26::RequestException::get_ServerMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "get_ServerMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::set_ServerMessage
// Il2CppName: set_ServerMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::RequestException::*)(::StringW)>(&Proyecto26::RequestException::set_ServerMessage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "set_ServerMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::get_Response
// Il2CppName: get_Response
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Proyecto26::RequestException::*)()>(&Proyecto26::RequestException::get_Response)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "get_Response", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::set_Response
// Il2CppName: set_Response
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::RequestException::*)(::StringW)>(&Proyecto26::RequestException::set_Response)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::RequestException*), "set_Response", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Proyecto26::RequestException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Proyecto26::RequestException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Proyecto26::RequestException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Proyecto26::RequestException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!