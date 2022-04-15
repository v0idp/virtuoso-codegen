// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.ShortcutExtensions
#include "DG/Tweening/ShortcutExtensions.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0*, "DG.Tweening", "ShortcutExtensions/<>c__DisplayClass72_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass72_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ShortcutExtensions::$$c__DisplayClass72_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Quaternion to
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Quaternion to;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Quaternion to
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_to();
    // Get instance field reference: public UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // public System.Void .ctor()
    // Offset: 0x1865BE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShortcutExtensions::$$c__DisplayClass72_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShortcutExtensions::$$c__DisplayClass72_0*, creationType>()));
    }
    // UnityEngine.Quaternion <DOBlendableRotateBy>b__0()
    // Offset: 0x1865BEC
    ::UnityEngine::Quaternion $DOBlendableRotateBy$b__0();
    // System.Void <DOBlendableRotateBy>b__1(UnityEngine.Quaternion x)
    // Offset: 0x1865BF8
    void $DOBlendableRotateBy$b__1(::UnityEngine::Quaternion x);
  }; // DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass72_0
  #pragma pack(pop)
  static check_size<sizeof(ShortcutExtensions::$$c__DisplayClass72_0), 32 + sizeof(::UnityEngine::Transform*)> __DG_Tweening_ShortcutExtensions_$$c__DisplayClass72_0SizeCheck;
  static_assert(sizeof(ShortcutExtensions::$$c__DisplayClass72_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0::$DOBlendableRotateBy$b__0
// Il2CppName: <DOBlendableRotateBy>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0::*)()>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0::$DOBlendableRotateBy$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0*), "<DOBlendableRotateBy>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0::$DOBlendableRotateBy$b__1
// Il2CppName: <DOBlendableRotateBy>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0::*)(::UnityEngine::Quaternion)>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0::$DOBlendableRotateBy$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass72_0*), "<DOBlendableRotateBy>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
