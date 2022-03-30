// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.GroupArranger
#include "VROSC/GroupArranger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationGroup
  class LoopStationGroup;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::GroupArranger::$$c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GroupArranger::$$c*, "VROSC", "GroupArranger/<>c");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.GroupArranger/VROSC.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GroupArranger::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly VROSC.GroupArranger/VROSC.<>c <>9
    static ::VROSC::GroupArranger::$$c* _get_$$9();
    // Set static field: static public readonly VROSC.GroupArranger/VROSC.<>c <>9
    static void _set_$$9(::VROSC::GroupArranger::$$c* value);
    // Get static field: static public System.Func`2<VROSC.LoopStationGroup,System.Int32> <>9__9_0
    static ::System::Func_2<::VROSC::LoopStationGroup*, int>* _get_$$9__9_0();
    // Set static field: static public System.Func`2<VROSC.LoopStationGroup,System.Int32> <>9__9_0
    static void _set_$$9__9_0(::System::Func_2<::VROSC::LoopStationGroup*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x13CFC78
    static void _cctor();
    // System.Int32 <ArrangeGroups>b__9_0(VROSC.LoopStationGroup i)
    // Offset: 0x13CFCE0
    int $ArrangeGroups$b__9_0(::VROSC::LoopStationGroup* i);
    // public System.Void .ctor()
    // Offset: 0x13CFCD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupArranger::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::GroupArranger::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupArranger::$$c*, creationType>()));
    }
  }; // VROSC.GroupArranger/VROSC.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::GroupArranger::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::GroupArranger::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GroupArranger::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GroupArranger::$$c::$ArrangeGroups$b__9_0
// Il2CppName: <ArrangeGroups>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::GroupArranger::$$c::*)(::VROSC::LoopStationGroup*)>(&VROSC::GroupArranger::$$c::$ArrangeGroups$b__9_0)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GroupArranger::$$c*), "<ArrangeGroups>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: VROSC::GroupArranger::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
