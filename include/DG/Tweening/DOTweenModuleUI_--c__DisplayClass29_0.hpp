// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTweenModuleUI
#include "DG/Tweening/DOTweenModuleUI.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Sequence
  class Sequence;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass29_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModuleUI/DG.Tweening.<>c__DisplayClass29_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenModuleUI::$$c__DisplayClass29_0 : public ::Il2CppObject {
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
    // public UnityEngine.RectTransform target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::RectTransform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // public System.Single startPosY
    // Size: 0x4
    // Offset: 0x18
    float startPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean offsetYSet
    // Size: 0x1
    // Offset: 0x1C
    bool offsetYSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: offsetYSet and: offsetY
    char __padding2[0x3] = {};
    // public System.Single offsetY
    // Size: 0x4
    // Offset: 0x20
    float offsetY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: offsetY and: s
    char __padding3[0x4] = {};
    // public DG.Tweening.Sequence s
    // Size: 0x8
    // Offset: 0x28
    ::DG::Tweening::Sequence* s;
    // Field size check
    static_assert(sizeof(::DG::Tweening::Sequence*) == 0x8);
    // public UnityEngine.Vector2 endValue
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Vector2 endValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.RectTransform target
    ::UnityEngine::RectTransform*& dyn_target();
    // Get instance field reference: public System.Single startPosY
    float& dyn_startPosY();
    // Get instance field reference: public System.Boolean offsetYSet
    bool& dyn_offsetYSet();
    // Get instance field reference: public System.Single offsetY
    float& dyn_offsetY();
    // Get instance field reference: public DG.Tweening.Sequence s
    ::DG::Tweening::Sequence*& dyn_s();
    // Get instance field reference: public UnityEngine.Vector2 endValue
    ::UnityEngine::Vector2& dyn_endValue();
    // UnityEngine.Vector2 <DOJumpAnchorPos>b__0()
    // Offset: 0x1265248
    ::UnityEngine::Vector2 $DOJumpAnchorPos$b__0();
    // System.Void <DOJumpAnchorPos>b__1(UnityEngine.Vector2 x)
    // Offset: 0x1265264
    void $DOJumpAnchorPos$b__1(::UnityEngine::Vector2 x);
    // System.Void <DOJumpAnchorPos>b__2()
    // Offset: 0x1265280
    void $DOJumpAnchorPos$b__2();
    // UnityEngine.Vector2 <DOJumpAnchorPos>b__3()
    // Offset: 0x12652B4
    ::UnityEngine::Vector2 $DOJumpAnchorPos$b__3();
    // System.Void <DOJumpAnchorPos>b__4(UnityEngine.Vector2 x)
    // Offset: 0x12652D0
    void $DOJumpAnchorPos$b__4(::UnityEngine::Vector2 x);
    // System.Void <DOJumpAnchorPos>b__5()
    // Offset: 0x12652EC
    void $DOJumpAnchorPos$b__5();
    // public System.Void .ctor()
    // Offset: 0x1265240
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenModuleUI::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenModuleUI::$$c__DisplayClass29_0*, creationType>()));
    }
  }; // DG.Tweening.DOTweenModuleUI/DG.Tweening.<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(DOTweenModuleUI::$$c__DisplayClass29_0), 48 + sizeof(::UnityEngine::Vector2)> __DG_Tweening_DOTweenModuleUI_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(DOTweenModuleUI::$$c__DisplayClass29_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__0
// Il2CppName: <DOJumpAnchorPos>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::*)()>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0*), "<DOJumpAnchorPos>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__1
// Il2CppName: <DOJumpAnchorPos>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::*)(::UnityEngine::Vector2)>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0*), "<DOJumpAnchorPos>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__2
// Il2CppName: <DOJumpAnchorPos>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::*)()>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0*), "<DOJumpAnchorPos>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__3
// Il2CppName: <DOJumpAnchorPos>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::*)()>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0*), "<DOJumpAnchorPos>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__4
// Il2CppName: <DOJumpAnchorPos>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::*)(::UnityEngine::Vector2)>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__4)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0*), "<DOJumpAnchorPos>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__5
// Il2CppName: <DOJumpAnchorPos>b__5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::*)()>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::$DOJumpAnchorPos$b__5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0*), "<DOJumpAnchorPos>b__5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass29_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
