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
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Proyecto26
namespace Proyecto26 {
  // Forward declaring type: ResponseHelper
  class ResponseHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Proyecto26::ResponseHelper);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::ResponseHelper*, "Proyecto26", "ResponseHelper");
// Type namespace: Proyecto26
namespace Proyecto26 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Proyecto26.ResponseHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ResponseHelper : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Networking.UnityWebRequest <Request>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Networking::UnityWebRequest* Request;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Networking::UnityWebRequest*
    constexpr operator ::UnityEngine::Networking::UnityWebRequest*() const noexcept {
      return Request;
    }
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest <Request>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_$Request$k__BackingField();
    // public UnityEngine.Networking.UnityWebRequest get_Request()
    // Offset: 0xB34A98
    ::UnityEngine::Networking::UnityWebRequest* get_Request();
    // private System.Void set_Request(UnityEngine.Networking.UnityWebRequest value)
    // Offset: 0xB34AA0
    void set_Request(::UnityEngine::Networking::UnityWebRequest* value);
    // public System.Int64 get_StatusCode()
    // Offset: 0xB34AD4
    int64_t get_StatusCode();
    // public System.Byte[] get_Data()
    // Offset: 0xB34AF0
    ::ArrayW<uint8_t> get_Data();
    // public System.String get_Text()
    // Offset: 0xB34BA8
    ::StringW get_Text();
    // public System.String get_Error()
    // Offset: 0xB34C70
    ::StringW get_Error();
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> get_Headers()
    // Offset: 0xB34C8C
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Headers();
    // public System.Void .ctor(UnityEngine.Networking.UnityWebRequest request)
    // Offset: 0xB34AA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResponseHelper* New_ctor(::UnityEngine::Networking::UnityWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::ResponseHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResponseHelper*, creationType>(request)));
    }
    // public System.String GetHeader(System.String name)
    // Offset: 0xB34CA8
    ::StringW GetHeader(::StringW name);
    // public override System.String ToString()
    // Offset: 0xB34CC4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Proyecto26.ResponseHelper
  #pragma pack(pop)
  static check_size<sizeof(ResponseHelper), 16 + sizeof(::UnityEngine::Networking::UnityWebRequest*)> __Proyecto26_ResponseHelperSizeCheck;
  static_assert(sizeof(ResponseHelper) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::get_Request
// Il2CppName: get_Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (Proyecto26::ResponseHelper::*)()>(&Proyecto26::ResponseHelper::get_Request)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "get_Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::set_Request
// Il2CppName: set_Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::ResponseHelper::*)(::UnityEngine::Networking::UnityWebRequest*)>(&Proyecto26::ResponseHelper::set_Request)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "set_Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Proyecto26::ResponseHelper::*)()>(&Proyecto26::ResponseHelper::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Proyecto26::ResponseHelper::*)()>(&Proyecto26::ResponseHelper::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Proyecto26::ResponseHelper::*)()>(&Proyecto26::ResponseHelper::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Proyecto26::ResponseHelper::*)()>(&Proyecto26::ResponseHelper::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (Proyecto26::ResponseHelper::*)()>(&Proyecto26::ResponseHelper::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::GetHeader
// Il2CppName: GetHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Proyecto26::ResponseHelper::*)(::StringW)>(&Proyecto26::ResponseHelper::GetHeader)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "GetHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Proyecto26::ResponseHelper::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Proyecto26::ResponseHelper::*)()>(&Proyecto26::ResponseHelper::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::ResponseHelper*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
