// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.EncoderFallback
#include "System/Text/EncoderFallback.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: CharEntityEncoderFallbackBuffer
  class CharEntityEncoderFallbackBuffer;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: CharEntityEncoderFallback
  class CharEntityEncoderFallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::CharEntityEncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CharEntityEncoderFallback*, "System.Xml", "CharEntityEncoderFallback");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.CharEntityEncoderFallback
  // [TokenAttribute] Offset: FFFFFFFF
  class CharEntityEncoderFallback : public ::System::Text::EncoderFallback {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    public:
    // private System.Xml.CharEntityEncoderFallbackBuffer fallbackBuffer
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::CharEntityEncoderFallbackBuffer* fallbackBuffer;
    // Field size check
    static_assert(sizeof(::System::Xml::CharEntityEncoderFallbackBuffer*) == 0x8);
    // private System.Int32[] textContentMarks
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> textContentMarks;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 endMarkPos
    // Size: 0x4
    // Offset: 0x28
    int endMarkPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 curMarkPos
    // Size: 0x4
    // Offset: 0x2C
    int curMarkPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 startOffset
    // Size: 0x4
    // Offset: 0x30
    int startOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get instance field reference: private System.Xml.CharEntityEncoderFallbackBuffer fallbackBuffer
    [[deprecated]] ::System::Xml::CharEntityEncoderFallbackBuffer*& dyn_fallbackBuffer();
    // Get instance field reference: private System.Int32[] textContentMarks
    [[deprecated]] ::ArrayW<int>& dyn_textContentMarks();
    // Get instance field reference: private System.Int32 endMarkPos
    [[deprecated]] int& dyn_endMarkPos();
    // Get instance field reference: private System.Int32 curMarkPos
    [[deprecated]] int& dyn_curMarkPos();
    // Get instance field reference: private System.Int32 startOffset
    [[deprecated]] int& dyn_startOffset();
    // System.Void set_StartOffset(System.Int32 value)
    // Offset: 0xB64274
    void set_StartOffset(int value);
    // System.Void Reset(System.Int32[] textContentMarks, System.Int32 endMarkPos)
    // Offset: 0xB6427C
    void Reset(::ArrayW<int> textContentMarks, int endMarkPos);
    // System.Boolean CanReplaceAt(System.Int32 index)
    // Offset: 0xB64288
    bool CanReplaceAt(int index);
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0xB6426C
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Int32 EncoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // System.Void .ctor()
    // Offset: 0xB64184
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Void EncoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEntityEncoderFallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::CharEntityEncoderFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEntityEncoderFallback*, creationType>()));
    }
    // public override System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0xB6418C
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Text.EncoderFallbackBuffer EncoderFallback::CreateFallbackBuffer()
    ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
  }; // System.Xml.CharEntityEncoderFallback
  #pragma pack(pop)
  static check_size<sizeof(CharEntityEncoderFallback), 48 + sizeof(int)> __System_Xml_CharEntityEncoderFallbackSizeCheck;
  static_assert(sizeof(CharEntityEncoderFallback) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallback::set_StartOffset
// Il2CppName: set_StartOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::CharEntityEncoderFallback::*)(int)>(&System::Xml::CharEntityEncoderFallback::set_StartOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallback*), "set_StartOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallback::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::CharEntityEncoderFallback::*)(::ArrayW<int>, int)>(&System::Xml::CharEntityEncoderFallback::Reset)> {
  static const MethodInfo* get() {
    static auto* textContentMarks = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* endMarkPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallback*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textContentMarks, endMarkPos});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallback::CanReplaceAt
// Il2CppName: CanReplaceAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::CharEntityEncoderFallback::*)(int)>(&System::Xml::CharEntityEncoderFallback::CanReplaceAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallback*), "CanReplaceAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallback::get_MaxCharCount
// Il2CppName: get_MaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::CharEntityEncoderFallback::*)()>(&System::Xml::CharEntityEncoderFallback::get_MaxCharCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallback*), "get_MaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallback::CreateFallbackBuffer
// Il2CppName: CreateFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallbackBuffer* (System::Xml::CharEntityEncoderFallback::*)()>(&System::Xml::CharEntityEncoderFallback::CreateFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallback*), "CreateFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
