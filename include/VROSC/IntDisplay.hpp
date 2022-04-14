// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.TextDisplay
#include "VROSC/TextDisplay.hpp"
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
  // Forward declaring type: IntDisplay
  class IntDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IntDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntDisplay*, "VROSC", "IntDisplay");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.IntDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class IntDisplay : public ::VROSC::TextDisplay {
    public:
    public:
    // private VROSC.IntNode _intNode
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::IntNode* intNode;
    // Field size check
    static_assert(sizeof(::VROSC::IntNode*) == 0x8);
    public:
    // Get instance field reference: private VROSC.IntNode _intNode
    [[deprecated]] ::VROSC::IntNode*& dyn__intNode();
    // private System.Void UpdateDisplayInt(System.Int32 value)
    // Offset: 0x1948B6C
    void UpdateDisplayInt(int value);
    // public System.Void .ctor()
    // Offset: 0x1948BA8
    // Implemented from: VROSC.TextDisplay
    // Base method: System.Void TextDisplay::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IntDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntDisplay*, creationType>()));
    }
    // protected override System.Void InitDisplay()
    // Offset: 0x1948A60
    // Implemented from: VROSC.TextDisplay
    // Base method: System.Void TextDisplay::InitDisplay()
    void InitDisplay();
  }; // VROSC.IntDisplay
  #pragma pack(pop)
  static check_size<sizeof(IntDisplay), 32 + sizeof(::VROSC::IntNode*)> __VROSC_IntDisplaySizeCheck;
  static_assert(sizeof(IntDisplay) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IntDisplay::UpdateDisplayInt
// Il2CppName: UpdateDisplayInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntDisplay::*)(int)>(&VROSC::IntDisplay::UpdateDisplayInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntDisplay*), "UpdateDisplayInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::IntDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::IntDisplay::InitDisplay
// Il2CppName: InitDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntDisplay::*)()>(&VROSC::IntDisplay::InitDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntDisplay*), "InitDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
