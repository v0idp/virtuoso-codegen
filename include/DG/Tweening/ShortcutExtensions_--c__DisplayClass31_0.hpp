// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.ShortcutExtensions
#include "DG/Tweening/ShortcutExtensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TrailRenderer
  class TrailRenderer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0*, "DG.Tweening", "ShortcutExtensions/<>c__DisplayClass31_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass31_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ShortcutExtensions::$$c__DisplayClass31_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.TrailRenderer target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TrailRenderer* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::TrailRenderer*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::TrailRenderer*
    constexpr operator ::UnityEngine::TrailRenderer*() const noexcept {
      return target;
    }
    // Get instance field reference: public UnityEngine.TrailRenderer target
    [[deprecated]] ::UnityEngine::TrailRenderer*& dyn_target();
    // System.Single <DOTime>b__0()
    // Offset: 0x1864B38
    float $DOTime$b__0();
    // System.Void <DOTime>b__1(System.Single x)
    // Offset: 0x1864B54
    void $DOTime$b__1(float x);
    // public System.Void .ctor()
    // Offset: 0x1864B30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShortcutExtensions::$$c__DisplayClass31_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShortcutExtensions::$$c__DisplayClass31_0*, creationType>()));
    }
  }; // DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass31_0
  #pragma pack(pop)
  static check_size<sizeof(ShortcutExtensions::$$c__DisplayClass31_0), 16 + sizeof(::UnityEngine::TrailRenderer*)> __DG_Tweening_ShortcutExtensions_$$c__DisplayClass31_0SizeCheck;
  static_assert(sizeof(ShortcutExtensions::$$c__DisplayClass31_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0::$DOTime$b__0
// Il2CppName: <DOTime>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0::*)()>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0::$DOTime$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0*), "<DOTime>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0::$DOTime$b__1
// Il2CppName: <DOTime>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0::*)(float)>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0::$DOTime$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0*), "<DOTime>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass31_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
