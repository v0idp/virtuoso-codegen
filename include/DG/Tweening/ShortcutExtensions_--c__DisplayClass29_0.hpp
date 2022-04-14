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
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0*, "DG.Tweening", "ShortcutExtensions/<>c__DisplayClass29_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass29_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ShortcutExtensions::$$c__DisplayClass29_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Material target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Material* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Int32 propertyID
    // Size: 0x4
    // Offset: 0x18
    int propertyID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Material target
    [[deprecated]] ::UnityEngine::Material*& dyn_target();
    // Get instance field reference: public System.Int32 propertyID
    [[deprecated]] int& dyn_propertyID();
    // UnityEngine.Vector4 <DOVector>b__0()
    // Offset: 0x1864A00
    ::UnityEngine::Vector4 $DOVector$b__0();
    // System.Void <DOVector>b__1(UnityEngine.Vector4 x)
    // Offset: 0x1864A24
    void $DOVector$b__1(::UnityEngine::Vector4 x);
    // public System.Void .ctor()
    // Offset: 0x18649F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShortcutExtensions::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShortcutExtensions::$$c__DisplayClass29_0*, creationType>()));
    }
  }; // DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(ShortcutExtensions::$$c__DisplayClass29_0), 24 + sizeof(int)> __DG_Tweening_ShortcutExtensions_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(ShortcutExtensions::$$c__DisplayClass29_0) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0::$DOVector$b__0
// Il2CppName: <DOVector>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0::*)()>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0::$DOVector$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0*), "<DOVector>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0::$DOVector$b__1
// Il2CppName: <DOVector>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0::*)(::UnityEngine::Vector4)>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0::$DOVector$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0*), "<DOVector>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass29_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
