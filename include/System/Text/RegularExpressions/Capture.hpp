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
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Capture
  class Capture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::Capture);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Capture*, "System.Text.RegularExpressions", "Capture");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.Capture
  // [TokenAttribute] Offset: FFFFFFFF
  class Capture : public ::Il2CppObject {
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
    // System.String _text
    // Size: 0x8
    // Offset: 0x10
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _length
    // Size: 0x4
    // Offset: 0x1C
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.String _text
    ::StringW& dyn__text();
    // Get instance field reference: System.Int32 _index
    int& dyn__index();
    // Get instance field reference: System.Int32 _length
    int& dyn__length();
    // public System.Int32 get_Index()
    // Offset: 0xE6E8EC
    int get_Index();
    // public System.Int32 get_Length()
    // Offset: 0xE6E8F4
    int get_Length();
    // public System.String get_Value()
    // Offset: 0xE6E8FC
    ::StringW get_Value();
    // System.Void .ctor(System.String text, System.Int32 i, System.Int32 l)
    // Offset: 0xE6E8AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Capture* New_ctor(::StringW text, int i, int l) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::Capture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Capture*, creationType>(text, i, l)));
    }
    // System.String GetOriginalString()
    // Offset: 0xE6E924
    ::StringW GetOriginalString();
    // System.String GetLeftSubstring()
    // Offset: 0xE6E92C
    ::StringW GetLeftSubstring();
    // System.String GetRightSubstring()
    // Offset: 0xE6E954
    ::StringW GetRightSubstring();
    // System.Void .ctor()
    // Offset: 0xE6E984
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Capture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::Capture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Capture*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0xE6E920
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Text.RegularExpressions.Capture
  #pragma pack(pop)
  static check_size<sizeof(Capture), 28 + sizeof(int)> __System_Text_RegularExpressions_CaptureSizeCheck;
  static_assert(sizeof(Capture) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::get_Index
// Il2CppName: get_Index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::get_Index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "get_Index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::GetOriginalString
// Il2CppName: GetOriginalString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::GetOriginalString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "GetOriginalString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::GetLeftSubstring
// Il2CppName: GetLeftSubstring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::GetLeftSubstring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "GetLeftSubstring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::GetRightSubstring
// Il2CppName: GetRightSubstring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::GetRightSubstring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "GetRightSubstring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};