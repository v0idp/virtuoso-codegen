// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ScaleUI
#include "VROSC/ScaleUI.hpp"
// Including type: VROSC.Note
#include "VROSC/Note.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ScaleUI::$$c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleUI::$$c*, "VROSC", "ScaleUI/<>c");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ScaleUI/VROSC.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ScaleUI::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly VROSC.ScaleUI/VROSC.<>c <>9
    static ::VROSC::ScaleUI::$$c* _get_$$9();
    // Set static field: static public readonly VROSC.ScaleUI/VROSC.<>c <>9
    static void _set_$$9(::VROSC::ScaleUI::$$c* value);
    // Get static field: static public System.Func`2<VROSC.Note,System.String> <>9__5_0
    static ::System::Func_2<::VROSC::Note, ::StringW>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<VROSC.Note,System.String> <>9__5_0
    static void _set_$$9__5_0(::System::Func_2<::VROSC::Note, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x8D4540
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x8D45A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleUI::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ScaleUI::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleUI::$$c*, creationType>()));
    }
    // System.String <Awake>b__5_0(VROSC.Note x)
    // Offset: 0x8D45A8
    ::StringW $Awake$b__5_0(::VROSC::Note x);
  }; // VROSC.ScaleUI/VROSC.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ScaleUI::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::ScaleUI::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleUI::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleUI::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ScaleUI::$$c::$Awake$b__5_0
// Il2CppName: <Awake>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::ScaleUI::$$c::*)(::VROSC::Note)>(&VROSC::ScaleUI::$$c::$Awake$b__5_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("VROSC", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleUI::$$c*), "<Awake>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
