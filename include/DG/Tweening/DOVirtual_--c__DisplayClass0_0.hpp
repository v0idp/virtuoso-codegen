// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOVirtual
#include "DG/Tweening/DOVirtual.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: TweenCallback`1<T>
  template<typename T>
  class TweenCallback_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOVirtual::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOVirtual::$$c__DisplayClass0_0*, "DG.Tweening", "DOVirtual/<>c__DisplayClass0_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOVirtual/DG.Tweening.<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOVirtual::$$c__DisplayClass0_0 : public ::Il2CppObject {
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
    // public System.Single val
    // Size: 0x4
    // Offset: 0x10
    float val;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: val and: onVirtualUpdate
    char __padding0[0x4] = {};
    // public DG.Tweening.TweenCallback`1<System.Single> onVirtualUpdate
    // Size: 0x8
    // Offset: 0x18
    ::DG::Tweening::TweenCallback_1<float>* onVirtualUpdate;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback_1<float>*) == 0x8);
    public:
    // Get instance field reference: public System.Single val
    float& dyn_val();
    // Get instance field reference: public DG.Tweening.TweenCallback`1<System.Single> onVirtualUpdate
    ::DG::Tweening::TweenCallback_1<float>*& dyn_onVirtualUpdate();
    // System.Single <Float>b__0()
    // Offset: 0x126B09C
    float $Float$b__0();
    // System.Void <Float>b__1(System.Single x)
    // Offset: 0x126B0A4
    void $Float$b__1(float x);
    // System.Void <Float>b__2()
    // Offset: 0x126B0AC
    void $Float$b__2();
    // public System.Void .ctor()
    // Offset: 0x126B094
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOVirtual::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOVirtual::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOVirtual::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // DG.Tweening.DOVirtual/DG.Tweening.<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(DOVirtual::$$c__DisplayClass0_0), 24 + sizeof(::DG::Tweening::TweenCallback_1<float>*)> __DG_Tweening_DOVirtual_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(DOVirtual::$$c__DisplayClass0_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOVirtual::$$c__DisplayClass0_0::$Float$b__0
// Il2CppName: <Float>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::DOVirtual::$$c__DisplayClass0_0::*)()>(&DG::Tweening::DOVirtual::$$c__DisplayClass0_0::$Float$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOVirtual::$$c__DisplayClass0_0*), "<Float>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOVirtual::$$c__DisplayClass0_0::$Float$b__1
// Il2CppName: <Float>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOVirtual::$$c__DisplayClass0_0::*)(float)>(&DG::Tweening::DOVirtual::$$c__DisplayClass0_0::$Float$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOVirtual::$$c__DisplayClass0_0*), "<Float>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOVirtual::$$c__DisplayClass0_0::$Float$b__2
// Il2CppName: <Float>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOVirtual::$$c__DisplayClass0_0::*)()>(&DG::Tweening::DOVirtual::$$c__DisplayClass0_0::$Float$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOVirtual::$$c__DisplayClass0_0*), "<Float>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOVirtual::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
