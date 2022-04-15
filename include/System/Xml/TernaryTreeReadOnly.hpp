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
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: TernaryTreeReadOnly
  class TernaryTreeReadOnly;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::TernaryTreeReadOnly);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TernaryTreeReadOnly*, "System.Xml", "TernaryTreeReadOnly");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.TernaryTreeReadOnly
  // [TokenAttribute] Offset: FFFFFFFF
  class TernaryTreeReadOnly : public ::Il2CppObject {
    public:
    public:
    // private System.Byte[] nodeBuffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> nodeBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return nodeBuffer;
    }
    // Get instance field reference: private System.Byte[] nodeBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_nodeBuffer();
    // public System.Void .ctor(System.Byte[] nodeBuffer)
    // Offset: 0xF6FC1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TernaryTreeReadOnly* New_ctor(::ArrayW<uint8_t> nodeBuffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::TernaryTreeReadOnly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TernaryTreeReadOnly*, creationType>(nodeBuffer)));
    }
    // public System.Byte FindCaseInsensitiveString(System.String stringToFind)
    // Offset: 0xF6FC48
    uint8_t FindCaseInsensitiveString(::StringW stringToFind);
  }; // System.Xml.TernaryTreeReadOnly
  #pragma pack(pop)
  static check_size<sizeof(TernaryTreeReadOnly), 16 + sizeof(::ArrayW<uint8_t>)> __System_Xml_TernaryTreeReadOnlySizeCheck;
  static_assert(sizeof(TernaryTreeReadOnly) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::TernaryTreeReadOnly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::TernaryTreeReadOnly::FindCaseInsensitiveString
// Il2CppName: FindCaseInsensitiveString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Xml::TernaryTreeReadOnly::*)(::StringW)>(&System::Xml::TernaryTreeReadOnly::FindCaseInsensitiveString)> {
  static const MethodInfo* get() {
    static auto* stringToFind = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TernaryTreeReadOnly*), "FindCaseInsensitiveString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringToFind});
  }
};
