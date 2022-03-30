// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.ShortcutExtensions
#include "DG/Tweening/ShortcutExtensions.hpp"
// Including type: DG.Tweening.Color2
#include "DG/Tweening/Color2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0*, "DG.Tweening", "ShortcutExtensions/<>c__DisplayClass15_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass15_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ShortcutExtensions::$$c__DisplayClass15_0 : public ::Il2CppObject {
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
    // public DG.Tweening.Color2 startValue
    // Size: 0x20
    // Offset: 0x10
    ::DG::Tweening::Color2 startValue;
    // Field size check
    static_assert(sizeof(::DG::Tweening::Color2) == 0x20);
    // public UnityEngine.LineRenderer target
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::LineRenderer* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    public:
    // Get instance field reference: public DG.Tweening.Color2 startValue
    ::DG::Tweening::Color2& dyn_startValue();
    // Get instance field reference: public UnityEngine.LineRenderer target
    ::UnityEngine::LineRenderer*& dyn_target();
    // DG.Tweening.Color2 <DOColor>b__0()
    // Offset: 0x126C20C
    ::DG::Tweening::Color2 $DOColor$b__0();
    // System.Void <DOColor>b__1(DG.Tweening.Color2 x)
    // Offset: 0x126C218
    void $DOColor$b__1(::DG::Tweening::Color2 x);
    // public System.Void .ctor()
    // Offset: 0x126C204
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShortcutExtensions::$$c__DisplayClass15_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShortcutExtensions::$$c__DisplayClass15_0*, creationType>()));
    }
  }; // DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass15_0
  #pragma pack(pop)
  static check_size<sizeof(ShortcutExtensions::$$c__DisplayClass15_0), 48 + sizeof(::UnityEngine::LineRenderer*)> __DG_Tweening_ShortcutExtensions_$$c__DisplayClass15_0SizeCheck;
  static_assert(sizeof(ShortcutExtensions::$$c__DisplayClass15_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0::$DOColor$b__0
// Il2CppName: <DOColor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Color2 (DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0::*)()>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0::$DOColor$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0*), "<DOColor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0::$DOColor$b__1
// Il2CppName: <DOColor>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0::*)(::DG::Tweening::Color2)>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0::$DOColor$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0*), "<DOColor>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass15_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
