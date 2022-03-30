// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.Win32Exception
#include "System/ComponentModel/Win32Exception.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketException
  class SocketException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::SocketException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketException*, "System.Net.Sockets", "SocketException");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketException
  // [TokenAttribute] Offset: FFFFFFFF
  class SocketException : public ::System::ComponentModel::Win32Exception {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Net.EndPoint m_EndPoint
    // Size: 0x8
    // Offset: 0x90
    ::System::Net::EndPoint* m_EndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::EndPoint*) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private System.Net.EndPoint m_EndPoint
    ::System::Net::EndPoint*& dyn_m_EndPoint();
    // public System.Net.Sockets.SocketError get_SocketErrorCode()
    // Offset: 0x950AA0
    ::System::Net::Sockets::SocketError get_SocketErrorCode();
    // System.Void .ctor(System.Net.Sockets.SocketError socketError)
    // Offset: 0x949F10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor(::System::Net::Sockets::SocketError socketError) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>(socketError)));
    }
    // static private System.Int32 WSAGetLastError_internal()
    // Offset: 0x950D24
    static int WSAGetLastError_internal();
    // public override System.String get_Message()
    // Offset: 0x950E30
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
    // public System.Void .ctor()
    // Offset: 0x948F80
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor()
    // Base method: System.Void ExternalException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>()));
    }
    // System.Void .ctor(System.Int32 error, System.String message)
    // Offset: 0x950D28
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Int32 error, System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor(int error, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>(error, message)));
    }
    // public System.Void .ctor(System.Int32 errorCode)
    // Offset: 0x945230
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Int32 errorCode)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor(int errorCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>(errorCode)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x950DA4
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>(serializationInfo, streamingContext)));
    }
  }; // System.Net.Sockets.SocketException
  #pragma pack(pop)
  static check_size<sizeof(SocketException), 144 + sizeof(::System::Net::EndPoint*)> __System_Net_Sockets_SocketExceptionSizeCheck;
  static_assert(sizeof(SocketException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::SocketException::get_SocketErrorCode
// Il2CppName: get_SocketErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketError (System::Net::Sockets::SocketException::*)()>(&System::Net::Sockets::SocketException::get_SocketErrorCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketException*), "get_SocketErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SocketException::WSAGetLastError_internal
// Il2CppName: WSAGetLastError_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Net::Sockets::SocketException::WSAGetLastError_internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketException*), "WSAGetLastError_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Sockets::SocketException::*)()>(&System::Net::Sockets::SocketException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SocketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SocketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SocketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!