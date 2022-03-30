// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.TextDisplay
#include "VROSC/TextDisplay.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: IntNode
  class IntNode;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: EnumDisplay
  class EnumDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::EnumDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnumDisplay*, "VROSC", "EnumDisplay");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.EnumDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumDisplay : public ::VROSC::TextDisplay {
    public:
    // Nested type: ::VROSC::EnumDisplay::DisplayEnum
    struct DisplayEnum;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.EnumDisplay/VROSC.DisplayEnum
    // [TokenAttribute] Offset: FFFFFFFF
    struct DisplayEnum/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: DisplayEnum
      constexpr DisplayEnum(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.EnumDisplay/VROSC.DisplayEnum PlayBehaviour
      static constexpr const int PlayBehaviour = 0;
      // Get static field: static public VROSC.EnumDisplay/VROSC.DisplayEnum PlayBehaviour
      static ::VROSC::EnumDisplay::DisplayEnum _get_PlayBehaviour();
      // Set static field: static public VROSC.EnumDisplay/VROSC.DisplayEnum PlayBehaviour
      static void _set_PlayBehaviour(::VROSC::EnumDisplay::DisplayEnum value);
      // static field const value: static public VROSC.EnumDisplay/VROSC.DisplayEnum Note
      static constexpr const int Note = 1;
      // Get static field: static public VROSC.EnumDisplay/VROSC.DisplayEnum Note
      static ::VROSC::EnumDisplay::DisplayEnum _get_Note();
      // Set static field: static public VROSC.EnumDisplay/VROSC.DisplayEnum Note
      static void _set_Note(::VROSC::EnumDisplay::DisplayEnum value);
      // static field const value: static public VROSC.EnumDisplay/VROSC.DisplayEnum Quantize
      static constexpr const int Quantize = 2;
      // Get static field: static public VROSC.EnumDisplay/VROSC.DisplayEnum Quantize
      static ::VROSC::EnumDisplay::DisplayEnum _get_Quantize();
      // Set static field: static public VROSC.EnumDisplay/VROSC.DisplayEnum Quantize
      static void _set_Quantize(::VROSC::EnumDisplay::DisplayEnum value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.EnumDisplay/VROSC.DisplayEnum
    #pragma pack(pop)
    static check_size<sizeof(EnumDisplay::DisplayEnum), 16 + sizeof(int)> __VROSC_EnumDisplay_DisplayEnumSizeCheck;
    static_assert(sizeof(EnumDisplay::DisplayEnum) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.IntNode _intNode
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::IntNode* intNode;
    // Field size check
    static_assert(sizeof(::VROSC::IntNode*) == 0x8);
    // private VROSC.EnumDisplay/VROSC.DisplayEnum _displayEnum
    // Size: 0x14
    // Offset: 0x28
    ::VROSC::EnumDisplay::DisplayEnum displayEnum;
    // Field size check
    static_assert(sizeof(::VROSC::EnumDisplay::DisplayEnum) == 0x14);
    public:
    // Get instance field reference: private VROSC.IntNode _intNode
    ::VROSC::IntNode*& dyn__intNode();
    // Get instance field reference: private VROSC.EnumDisplay/VROSC.DisplayEnum _displayEnum
    ::VROSC::EnumDisplay::DisplayEnum& dyn__displayEnum();
    // private System.Void UpdateDisplayEnum(System.Int32 value)
    // Offset: 0x131346C
    void UpdateDisplayEnum(int value);
    // protected System.Void OnDestroy()
    // Offset: 0x1313588
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x131365C
    // Implemented from: VROSC.TextDisplay
    // Base method: System.Void TextDisplay::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::EnumDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumDisplay*, creationType>()));
    }
    // protected override System.Void InitDisplay()
    // Offset: 0x131337C
    // Implemented from: VROSC.TextDisplay
    // Base method: System.Void TextDisplay::InitDisplay()
    void InitDisplay();
  }; // VROSC.EnumDisplay
  #pragma pack(pop)
  static check_size<sizeof(EnumDisplay), 40 + sizeof(::VROSC::EnumDisplay::DisplayEnum)> __VROSC_EnumDisplaySizeCheck;
  static_assert(sizeof(EnumDisplay) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnumDisplay::DisplayEnum, "VROSC", "EnumDisplay/DisplayEnum");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::EnumDisplay::UpdateDisplayEnum
// Il2CppName: UpdateDisplayEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnumDisplay::*)(int)>(&VROSC::EnumDisplay::UpdateDisplayEnum)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnumDisplay*), "UpdateDisplayEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::EnumDisplay::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnumDisplay::*)()>(&VROSC::EnumDisplay::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnumDisplay*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EnumDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::EnumDisplay::InitDisplay
// Il2CppName: InitDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnumDisplay::*)()>(&VROSC::EnumDisplay::InitDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnumDisplay*), "InitDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};