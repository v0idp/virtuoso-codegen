// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTweenModuleUnityVersion
#include "DG/Tweening/DOTweenModuleUnityVersion.hpp"
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
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0*, "DG.Tweening", "DOTweenModuleUnityVersion/<>c__DisplayClass9_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModuleUnityVersion/DG.Tweening.<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenModuleUnityVersion::$$c__DisplayClass9_0 : public ::Il2CppObject {
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
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_target();
    // Get instance field reference: public System.Int32 propertyID
    [[deprecated("Use field access instead!")]] int& dyn_propertyID();
    // public System.Void .ctor()
    // Offset: 0x17E26AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenModuleUnityVersion::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenModuleUnityVersion::$$c__DisplayClass9_0*, creationType>()));
    }
    // UnityEngine.Vector2 <DOTiling>b__0()
    // Offset: 0x17E427C
    ::UnityEngine::Vector2 $DOTiling$b__0();
    // System.Void <DOTiling>b__1(UnityEngine.Vector2 x)
    // Offset: 0x17E42A0
    void $DOTiling$b__1(::UnityEngine::Vector2 x);
  }; // DG.Tweening.DOTweenModuleUnityVersion/DG.Tweening.<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(DOTweenModuleUnityVersion::$$c__DisplayClass9_0), 24 + sizeof(int)> __DG_Tweening_DOTweenModuleUnityVersion_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(DOTweenModuleUnityVersion::$$c__DisplayClass9_0) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0::$DOTiling$b__0
// Il2CppName: <DOTiling>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0::*)()>(&DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0::$DOTiling$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0*), "<DOTiling>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0::$DOTiling$b__1
// Il2CppName: <DOTiling>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0::*)(::UnityEngine::Vector2)>(&DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0::$DOTiling$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUnityVersion::$$c__DisplayClass9_0*), "<DOTiling>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
