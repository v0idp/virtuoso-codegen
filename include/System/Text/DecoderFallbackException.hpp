// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackException
  class DecoderFallbackException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::DecoderFallbackException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallbackException*, "System.Text", "DecoderFallbackException");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.DecoderFallbackException
  // [TokenAttribute] Offset: FFFFFFFF
  class DecoderFallbackException : public ::System::ArgumentException {
    public:
    public:
    // private System.Byte[] bytesUnknown
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<uint8_t> bytesUnknown;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x98
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept = delete;
    // Get instance field reference: private System.Byte[] bytesUnknown
    [[deprecated]] ::ArrayW<uint8_t>& dyn_bytesUnknown();
    // Get instance field reference: private System.Int32 index
    [[deprecated]] int& dyn_index();
    // public System.Void .ctor(System.String message, System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0x12939B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderFallbackException* New_ctor(::StringW message, ::ArrayW<uint8_t> bytesUnknown, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::DecoderFallbackException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderFallbackException*, creationType>(message, bytesUnknown, index)));
    }
    // public System.Void .ctor()
    // Offset: 0x1294230
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderFallbackException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::DecoderFallbackException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderFallbackException*, creationType>()));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12942A0
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderFallbackException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::DecoderFallbackException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderFallbackException*, creationType>(info, context)));
    }
  }; // System.Text.DecoderFallbackException
  #pragma pack(pop)
  static check_size<sizeof(DecoderFallbackException), 152 + sizeof(int)> __System_Text_DecoderFallbackExceptionSizeCheck;
  static_assert(sizeof(DecoderFallbackException) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::DecoderFallbackException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderFallbackException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderFallbackException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
